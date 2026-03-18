/*
 * XREFs of OSReadRegValue @ 0x1C006630C
 * Callers:
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C0044114 (AMLIAddNextNamespaceOverrideObject.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C006598C (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIInitGlobalHeapSize @ 0x1C006625C (ACPIInitGlobalHeapSize.c)
 *     ACPIThermalGetParameter @ 0x1C006D198 (ACPIThermalGetParameter.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C007CBF8 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C007CE08 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     ACPIInitializeAMLI @ 0x1C0085294 (ACPIInitializeAMLI.c)
 *     ACPIInitReadRegistryKeys @ 0x1C0085328 (ACPIInitReadRegistryKeys.c)
 * Callees:
 *     memmove @ 0x1C0024E80 (memmove.c)
 *     OSOpenHandle @ 0x1C006592C (OSOpenHandle.c)
 */

NTSTATUS __fastcall OSReadRegValue(PCSZ SourceString, void *a2, _BYTE *a3, unsigned int *a4)
{
  WCHAR *PoolWithTag; // rdi
  NTSTATUS v9; // ebx
  NTSTATUS v10; // eax
  int v11; // r13d
  ULONG Length; // ebx
  NTSTATUS v13; // eax
  const WCHAR *v14; // r15
  ULONG v15; // esi
  unsigned int v16; // ebx
  __int64 v17; // rcx
  NTSTATUS v18; // eax
  bool v19; // cf
  NTSTATUS result; // eax
  unsigned int v21; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+38h] [rbp-28h] BYREF
  struct _STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+98h] [rbp+38h] BYREF

  KeyHandle = 0LL;
  ResultLength = 0;
  PoolWithTag = 0LL;
  if ( a2 )
  {
    KeyHandle = a2;
  }
  else
  {
    result = OSOpenHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters", 0LL, &KeyHandle);
    if ( result < 0 || !KeyHandle )
      return result;
  }
  RtlInitAnsiString(&DestinationString, SourceString);
  v9 = RtlAnsiStringToUnicodeString(&ValueName, &DestinationString, 1u);
  if ( v9 < 0 )
  {
    if ( !a2 )
      ZwClose(KeyHandle);
    return v9;
  }
  v10 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformationAlign64, 0LL, 0, &ResultLength);
  v9 = v10;
  v11 = -2147483643;
  if ( v10 != -1073741789 && v10 != -2147483643 )
  {
    RtlFreeUnicodeString(&ValueName);
    if ( !a2 )
      ZwClose(KeyHandle);
    if ( v9 >= 0 )
      return -1073741823;
    return v9;
  }
  while ( 1 )
  {
    if ( v9 != -1073741789 && v9 != -2147483643 )
      goto LABEL_10;
    Length = ResultLength;
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x4D706341u);
    if ( !PoolWithTag )
    {
      RtlFreeUnicodeString(&ValueName);
      if ( !a2 )
        ZwClose(KeyHandle);
      return -1073741670;
    }
    v13 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformationAlign64, PoolWithTag, Length, &ResultLength);
    v9 = v13;
    if ( v13 != -2147483643 && v13 != -1073741789 )
      break;
    ExFreePoolWithTag(PoolWithTag, 0);
    PoolWithTag = 0LL;
  }
  if ( v13 < 0 )
  {
    RtlFreeUnicodeString(&ValueName);
    if ( !a2 )
      ZwClose(KeyHandle);
    ExFreePoolWithTag(PoolWithTag, 0);
    return v9;
  }
LABEL_10:
  RtlFreeUnicodeString(&ValueName);
  if ( !a2 )
    ZwClose(KeyHandle);
  if ( *(_DWORD *)PoolWithTag == 1 || *(_DWORD *)PoolWithTag == 7 )
  {
    v14 = PoolWithTag + 4;
    v15 = (ResultLength - 8) >> 1;
    v16 = 0;
    if ( !v15 )
      goto LABEL_55;
    do
    {
      v17 = v15 - 1;
      if ( !v14[v17] )
        break;
      --v15;
    }
    while ( (_DWORD)v17 );
    if ( v15 )
    {
      while ( *v14 )
      {
        RtlInitUnicodeString(&ValueName, v14);
        v18 = RtlUnicodeStringToAnsiString(&DestinationString, &ValueName, 1u);
        if ( v18 < 0 )
        {
          v11 = v18;
          goto LABEL_54;
        }
        v16 += DestinationString.MaximumLength;
        if ( *a4 >= v16 )
        {
          memmove(a3, DestinationString.Buffer, DestinationString.MaximumLength);
          a3 += DestinationString.MaximumLength;
        }
        RtlFreeAnsiString(&DestinationString);
        v15 -= ValueName.Length >> 1;
        v14 += (unsigned __int64)ValueName.Length >> 1;
        if ( *(_DWORD *)PoolWithTag == 7 )
        {
          if ( !v15 )
            break;
          ++v14;
          --v15;
        }
        if ( !v15 )
          break;
      }
      if ( !v16 )
        goto LABEL_55;
    }
    else
    {
LABEL_55:
      v16 = 1;
      if ( *a4 )
        *a3++ = 0;
    }
    if ( *(_DWORD *)PoolWithTag == 7 && *a4 >= ++v16 )
      *a3 = 0;
    ExFreePoolWithTag(PoolWithTag, 0);
    v19 = *a4 < v16;
    *a4 = v16;
    if ( !v19 )
      return 0;
  }
  else
  {
    v21 = *((_DWORD *)PoolWithTag + 1);
    if ( *a4 >= v21 )
    {
      memmove(a3, PoolWithTag + 4, v21);
      *a4 = *((_DWORD *)PoolWithTag + 1);
      ExFreePoolWithTag(PoolWithTag, 0);
      return 0;
    }
    *a4 = v21;
LABEL_54:
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  return v11;
}
