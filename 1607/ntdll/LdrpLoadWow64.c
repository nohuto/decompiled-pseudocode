/*
 * XREFs of LdrpLoadWow64 @ 0x180075DE0
 * Callers:
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x180010430 (RtlAppendUnicodeStringToString.c)
 *     LdrLoadDll @ 0x180011F20 (LdrLoadDll.c)
 *     RtlAppendUnicodeToString @ 0x180013C80 (RtlAppendUnicodeToString.c)
 *     LdrGetProcedureAddress @ 0x180075EC0 (LdrGetProcedureAddress.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpLoadWow64(PCUNICODE_STRING Source)
{
  NTSTATUS v1; // eax
  unsigned __int32 v2; // ebx
  unsigned int v3; // edi
  PANSI_STRING *i; // rbx
  NTSTATUS ProcedureAddress; // esi
  char v7; // cl
  char v8; // al
  NTSTATUS v9; // [rsp+30h] [rbp-258h]
  NTSTATUS v10; // [rsp+38h] [rbp-250h]
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-248h] BYREF
  char v12; // [rsp+50h] [rbp-238h] BYREF

  *(_DWORD *)&Destination.Length = 34078720;
  Destination.Buffer = (wchar_t *)&v12;
  RtlAppendUnicodeStringToString(&Destination, Source);
  RtlAppendUnicodeToString(&Destination, L"wow64.dll");
  v1 = LdrLoadDll(0LL, 0LL, &Destination, &Wow64Handle);
  v2 = v1;
  if ( v1 < 0 )
  {
    v7 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v9 = v1;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2913,
        (unsigned int)"LdrpLoadWow64",
        0,
        (__int64)"Loading WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
        &Destination,
        v9);
      v7 = LdrpDebugFlags;
    }
    if ( (v7 & 0x10) != 0 )
      __debugbreak();
    return v2;
  }
  else
  {
    v3 = 0;
    for ( i = (PANSI_STRING *)&off_180108FD0; ; i += 2 )
    {
      ProcedureAddress = LdrGetProcedureAddress(Wow64Handle, *i, 0, (PVOID *)i[1]);
      if ( ProcedureAddress < 0 )
        break;
      if ( ++v3 >= 5 )
        return (unsigned int)ProcedureAddress;
    }
    v8 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v10 = ProcedureAddress;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2934,
        (unsigned int)"LdrpLoadWow64",
        0,
        (__int64)"Locating procedure \"%Z\" in WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
        *(&off_180108FD0 + 2 * v3),
        &Destination,
        v10);
      v8 = LdrpDebugFlags;
    }
    if ( (v8 & 0x10) != 0 )
      __debugbreak();
    return (unsigned int)ProcedureAddress;
  }
}
