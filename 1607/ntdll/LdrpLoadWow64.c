/*
 * XREFs of LdrpLoadWow64 @ 0x180075DF0
 * Callers:
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x180010440 (RtlAppendUnicodeStringToString.c)
 *     LdrLoadDll @ 0x180011F30 (LdrLoadDll.c)
 *     RtlAppendUnicodeToString @ 0x180013C90 (RtlAppendUnicodeToString.c)
 *     LdrGetProcedureAddress @ 0x180075ED0 (LdrGetProcedureAddress.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800D057C (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpLoadWow64(__int16 *a1)
{
  int Dll; // eax
  unsigned int v2; // ebx
  unsigned int v3; // edi
  _UNKNOWN **i; // rbx
  int ProcedureAddress; // esi
  char v7; // cl
  char v8; // al
  int v9; // [rsp+30h] [rbp-258h]
  int v10; // [rsp+38h] [rbp-250h]
  int v11; // [rsp+40h] [rbp-248h] BYREF
  char *v12; // [rsp+48h] [rbp-240h]
  char v13; // [rsp+50h] [rbp-238h] BYREF

  v11 = 34078720;
  v12 = &v13;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v11, a1);
  RtlAppendUnicodeToString((unsigned __int16 *)&v11, L"wow64.dll");
  Dll = LdrLoadDll(0LL, 0LL, (__int64)&v11, &Wow64Handle);
  v2 = Dll;
  if ( Dll < 0 )
  {
    v7 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v9 = Dll;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2913,
        (unsigned int)"LdrpLoadWow64",
        0,
        (__int64)"Loading WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
        &v11,
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
    for ( i = &off_180108FD0; ; i += 2 )
    {
      ProcedureAddress = LdrGetProcedureAddress(Wow64Handle, *i, 0LL, i[1]);
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
        &v11,
        v10);
      v8 = LdrpDebugFlags;
    }
    if ( (v8 & 0x10) != 0 )
      __debugbreak();
    return (unsigned int)ProcedureAddress;
  }
}
