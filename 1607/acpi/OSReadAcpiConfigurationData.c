/*
 * XREFs of OSReadAcpiConfigurationData @ 0x1C00A749C
 * Callers:
 *     ACPIInitializeAMLI @ 0x1C00A7CA0 (ACPIInitializeAMLI.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0004BB0 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C000E748 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_SL @ 0x1C0055E18 (WPP_RECORDER_SF_SL.c)
 *     OSOpenUnicodeHandle @ 0x1C0080BA8 (OSOpenUnicodeHandle.c)
 *     OSGetRegistryValue @ 0x1C008B150 (OSGetRegistryValue.c)
 *     OSCloseHandle @ 0x1C008D078 (OSCloseHandle.c)
 */

__int64 __fastcall OSReadAcpiConfigurationData(_QWORD *a1)
{
  unsigned int v2; // edi
  int v3; // eax
  int v4; // edx
  unsigned int v5; // ebx
  ULONG v6; // esi
  int v7; // edx
  int v8; // ebx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rcx
  wchar_t *v12; // r8
  int v13; // edx
  __int64 v14; // rcx
  BOOLEAN v15; // bl
  HANDLE v16; // rcx
  int v17; // edx
  NTSTATUS v18; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-9h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-1h] BYREF
  HANDLE v22; // [rsp+58h] [rbp+Fh] BYREF
  UNICODE_STRING String2; // [rsp+60h] [rbp+17h] BYREF
  UNICODE_STRING String1; // [rsp+70h] [rbp+27h] BYREF
  char v25; // [rsp+80h] [rbp+37h] BYREF

  v2 = 0;
  *a1 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\Description\\System\\MultiFunctionAdapter");
  v3 = OSOpenUnicodeHandle(&DestinationString, 0LL, &v22);
  v5 = v3;
  if ( v3 < 0 )
  {
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      22,
      16,
      (__int64)&WPP_b2e6fc51b6d13b437f43e726d6037dce_Traceguids,
      v3);
    return v5;
  }
  RtlInitUnicodeString(&String1, L"ACPI BIOS");
  v6 = 0;
  DestinationString.Buffer = (wchar_t *)&v25;
  DestinationString.MaximumLength = 8;
  while ( 1 )
  {
    DestinationString.Length = 0;
    RtlIntegerToUnicodeString(v6, 0xAu, &DestinationString);
    v8 = OSOpenUnicodeHandle(&DestinationString, v22, &Handle);
    if ( v8 < 0 )
      break;
    if ( OSGetRegistryValue(Handle, L"Identifier", a1) < 0 )
    {
      v16 = Handle;
LABEL_9:
      OSCloseHandle(v16);
      goto LABEL_10;
    }
    v11 = *a1;
    v12 = (wchar_t *)(*a1 + 8LL);
    String2.Buffer = v12;
    String2.MaximumLength = *(_WORD *)(v11 + 4);
    v13 = *(_DWORD *)(v11 + 4) >> 1;
    if ( v13 )
    {
      do
      {
        v14 = (unsigned int)(v13 - 1);
        if ( v12[v14] )
          break;
        --v13;
      }
      while ( (_DWORD)v14 );
    }
    String2.Length = 2 * v13;
    v15 = RtlEqualUnicodeString(&String1, &String2, 1u);
    ExFreePoolWithTag((PVOID)*a1, 0);
    v16 = Handle;
    if ( !v15 )
      goto LABEL_9;
    v18 = OSGetRegistryValue(Handle, L"Configuration Data", a1);
    OSCloseHandle(Handle);
    if ( v18 >= 0 )
      goto LABEL_13;
LABEL_10:
    if ( ++v6 >= 0x3E7 )
    {
      LOBYTE(v17) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v17,
        22,
        18,
        (__int64)&WPP_b2e6fc51b6d13b437f43e726d6037dce_Traceguids);
      return 3221225524LL;
    }
  }
  WPP_RECORDER_SF_SL(WPP_GLOBAL_Control->DeviceExtension, v7, v9, v10);
  v2 = v8;
LABEL_13:
  OSCloseHandle(v22);
  return v2;
}
