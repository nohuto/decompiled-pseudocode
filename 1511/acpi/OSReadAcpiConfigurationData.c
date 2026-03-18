/*
 * XREFs of OSReadAcpiConfigurationData @ 0x1C0085630
 * Callers:
 *     ACPIInitializeAMLI @ 0x1C0085294 (ACPIInitializeAMLI.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     OSOpenUnicodeHandle @ 0x1C00658BC (OSOpenUnicodeHandle.c)
 *     OSCloseHandle @ 0x1C006665C (OSCloseHandle.c)
 *     OSGetRegistryValue @ 0x1C0068C40 (OSGetRegistryValue.c)
 */

NTSTATUS __fastcall OSReadAcpiConfigurationData(_QWORD *a1)
{
  NTSTATUS v2; // edi
  NTSTATUS result; // eax
  ULONG v4; // esi
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  unsigned __int16 *v7; // r8
  int v8; // edx
  __int64 v9; // rcx
  BOOLEAN v10; // bl
  HANDLE v11; // rcx
  NTSTATUS v12; // ebx
  HANDLE Handle; // [rsp+20h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-48h] BYREF
  HANDLE v15; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING String2; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING String1; // [rsp+50h] [rbp-20h] BYREF
  char v18; // [rsp+60h] [rbp-10h] BYREF

  v2 = 0;
  *a1 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\Description\\System\\MultiFunctionAdapter");
  result = OSOpenUnicodeHandle(&DestinationString, 0LL, &v15);
  if ( result < 0 )
    return result;
  RtlInitUnicodeString(&String1, L"ACPI BIOS");
  v4 = 0;
  DestinationString.Buffer = (unsigned __int16 *)&v18;
  DestinationString.MaximumLength = 8;
  while ( 1 )
  {
    DestinationString.Length = 0;
    RtlIntegerToUnicodeString(v4, 0xAu, &DestinationString);
    v5 = OSOpenUnicodeHandle(&DestinationString, v15, &Handle);
    if ( v5 < 0 )
      break;
    if ( OSGetRegistryValue(Handle, L"Identifier", a1) < 0 )
    {
      v11 = Handle;
LABEL_9:
      OSCloseHandle(v11);
      goto LABEL_10;
    }
    v6 = *a1;
    v7 = (unsigned __int16 *)(*a1 + 8LL);
    String2.Buffer = v7;
    String2.MaximumLength = *(_WORD *)(v6 + 4);
    v8 = *(_DWORD *)(v6 + 4) >> 1;
    if ( v8 )
    {
      do
      {
        v9 = (unsigned int)(v8 - 1);
        if ( v7[v9] )
          break;
        --v8;
      }
      while ( (_DWORD)v9 );
    }
    String2.Length = 2 * v8;
    v10 = RtlEqualUnicodeString(&String1, &String2, 1u);
    ExFreePoolWithTag((PVOID)*a1, 0);
    v11 = Handle;
    if ( !v10 )
      goto LABEL_9;
    v12 = OSGetRegistryValue(Handle, L"Configuration Data", a1);
    OSCloseHandle(Handle);
    if ( v12 >= 0 )
      goto LABEL_13;
LABEL_10:
    if ( ++v4 >= 0x3E7 )
      return -1073741772;
  }
  v2 = v5;
LABEL_13:
  OSCloseHandle(v15);
  return v2;
}
