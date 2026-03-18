/*
 * XREFs of OSReadRegValue @ 0x1C008D4A4
 * Callers:
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C005B8AC (AMLIAddNextNamespaceOverrideObject.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C0080CBC (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIThermalGetParameter @ 0x1C0082830 (ACPIThermalGetParameter.c)
 *     ACPIInitGlobalHeapSize @ 0x1C008D3F4 (ACPIInitGlobalHeapSize.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C009E090 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C009E2CC (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     ACPIInitializeAMLI @ 0x1C00A7CA0 (ACPIInitializeAMLI.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00A7D4C (ACPIInitReadRegistryKeys.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0004BB0 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_LL @ 0x1C000C27C (WPP_RECORDER_SF_LL.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     OSOpenHandle @ 0x1C0080C4C (OSOpenHandle.c)
 */

__int64 __fastcall OSReadRegValue(PCSZ SourceString, void *a2, _BYTE *a3, unsigned int *a4)
{
  WCHAR *PoolWithTag; // rdi
  NTSTATUS v9; // eax
  int v10; // edx
  unsigned int v11; // ebx
  NTSTATUS v12; // eax
  int v13; // edx
  unsigned int v14; // r13d
  ULONG Length; // ebx
  int v16; // edx
  NTSTATUS v17; // eax
  int v18; // edx
  const WCHAR *v19; // r15
  ULONG v20; // esi
  unsigned int v21; // ebx
  __int64 v22; // rcx
  NTSTATUS v23; // eax
  int v24; // edx
  int v25; // edx
  int v26; // eax
  int v27; // edx
  unsigned int v28; // eax
  HANDLE KeyHandle; // [rsp+40h] [rbp-30h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+48h] [rbp-28h] BYREF
  struct _STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+A8h] [rbp+38h] BYREF

  KeyHandle = 0LL;
  ResultLength = 0;
  PoolWithTag = 0LL;
  if ( a2 )
  {
    KeyHandle = a2;
  }
  else
  {
    v26 = OSOpenHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters", 0LL, &KeyHandle);
    v11 = v26;
    if ( v26 < 0 || !KeyHandle )
    {
      LOBYTE(v27) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v27,
        11,
        19,
        (__int64)&WPP_b2e6fc51b6d13b437f43e726d6037dce_Traceguids,
        v26);
      return v11;
    }
  }
  RtlInitAnsiString(&DestinationString, SourceString);
  v9 = RtlAnsiStringToUnicodeString(&ValueName, &DestinationString, 1u);
  v11 = v9;
  if ( v9 < 0 )
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      11,
      20,
      (__int64)&WPP_b2e6fc51b6d13b437f43e726d6037dce_Traceguids,
      v9);
    if ( !a2 )
      ZwClose(KeyHandle);
    return v11;
  }
  v12 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformationAlign64, 0LL, 0, &ResultLength);
  v11 = v12;
  v14 = -2147483643;
  if ( v12 != -1073741789 && v12 != -2147483643 )
  {
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      11,
      21,
      (__int64)&WPP_b2e6fc51b6d13b437f43e726d6037dce_Traceguids,
      v12);
    RtlFreeUnicodeString(&ValueName);
    if ( !a2 )
      ZwClose(KeyHandle);
    if ( (v11 & 0x80000000) == 0 )
      return (unsigned int)-1073741823;
    return v11;
  }
  while ( 1 )
  {
    if ( v11 != -1073741789 && v11 != -2147483643 )
      goto LABEL_10;
    Length = ResultLength;
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x4D706341u);
    if ( !PoolWithTag )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v16,
        22,
        22,
        (__int64)&WPP_b2e6fc51b6d13b437f43e726d6037dce_Traceguids,
        ResultLength);
      RtlFreeUnicodeString(&ValueName);
      if ( !a2 )
        ZwClose(KeyHandle);
      return 3221225626LL;
    }
    v17 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformationAlign64, PoolWithTag, Length, &ResultLength);
    v11 = v17;
    if ( v17 != -2147483643 && v17 != -1073741789 )
      break;
    ExFreePoolWithTag(PoolWithTag, 0);
    PoolWithTag = 0LL;
  }
  if ( v17 < 0 )
  {
    LOBYTE(v18) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v18,
      21,
      23,
      (__int64)&WPP_b2e6fc51b6d13b437f43e726d6037dce_Traceguids,
      v17);
    RtlFreeUnicodeString(&ValueName);
    if ( !a2 )
      ZwClose(KeyHandle);
    ExFreePoolWithTag(PoolWithTag, 0);
    return v11;
  }
LABEL_10:
  RtlFreeUnicodeString(&ValueName);
  if ( !a2 )
    ZwClose(KeyHandle);
  if ( *(_DWORD *)PoolWithTag == 1 || *(_DWORD *)PoolWithTag == 7 )
  {
    v19 = PoolWithTag + 4;
    v20 = (ResultLength - 8) >> 1;
    v21 = 0;
    if ( !v20 )
      goto LABEL_57;
    do
    {
      v22 = v20 - 1;
      if ( !v19[v22] )
        break;
      --v20;
    }
    while ( (_DWORD)v22 );
    if ( v20 )
    {
      while ( *v19 )
      {
        RtlInitUnicodeString(&ValueName, v19);
        v23 = RtlUnicodeStringToAnsiString(&DestinationString, &ValueName, 1u);
        v14 = v23;
        if ( v23 < 0 )
        {
          LOBYTE(v24) = 2;
          WPP_RECORDER_SF_D(
            WPP_GLOBAL_Control->DeviceExtension,
            v24,
            22,
            24,
            (__int64)&WPP_b2e6fc51b6d13b437f43e726d6037dce_Traceguids,
            v23);
          goto LABEL_56;
        }
        v21 += DestinationString.MaximumLength;
        if ( *a4 >= v21 )
        {
          memmove(a3, DestinationString.Buffer, DestinationString.MaximumLength);
          a3 += DestinationString.MaximumLength;
        }
        RtlFreeAnsiString(&DestinationString);
        v20 -= ValueName.Length >> 1;
        v19 += (unsigned __int64)ValueName.Length >> 1;
        if ( *(_DWORD *)PoolWithTag == 7 )
        {
          if ( !v20 )
            break;
          ++v19;
          --v20;
        }
        if ( !v20 )
          break;
      }
      v14 = -2147483643;
      if ( !v21 )
        goto LABEL_57;
    }
    else
    {
LABEL_57:
      v21 = 1;
      if ( *a4 )
        *a3++ = 0;
    }
    if ( *(_DWORD *)PoolWithTag == 7 && *a4 >= ++v21 )
      *a3 = 0;
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( *a4 >= v21 )
    {
      *a4 = v21;
      return 0LL;
    }
    LOBYTE(v25) = 2;
    WPP_RECORDER_SF_LL(
      WPP_GLOBAL_Control->DeviceExtension,
      v25,
      11,
      25,
      (__int64)&WPP_b2e6fc51b6d13b437f43e726d6037dce_Traceguids,
      *a4,
      v21);
    *a4 = v21;
  }
  else
  {
    v28 = *((_DWORD *)PoolWithTag + 1);
    if ( *a4 >= v28 )
    {
      memmove(a3, PoolWithTag + 4, v28);
      *a4 = *((_DWORD *)PoolWithTag + 1);
      ExFreePoolWithTag(PoolWithTag, 0);
      return 0LL;
    }
    *a4 = v28;
LABEL_56:
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  return v14;
}
