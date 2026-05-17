/*
 * XREFs of LdrpLoadWow64 @ 0x180003478
 * Callers:
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrGetProcedureAddress @ 0x180003560 (LdrGetProcedureAddress.c)
 *     LdrLoadDll @ 0x18001B1F0 (LdrLoadDll.c)
 *     RtlAppendUnicodeToString @ 0x18001FA60 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x180040100 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpLoadWow64(__int64 a1)
{
  int v1; // ebx
  unsigned int v2; // edi
  _UNKNOWN **i; // rbx
  int ProcedureAddress; // esi
  char v6; // cl
  char v7; // al
  int v8; // [rsp+40h] [rbp-248h] BYREF
  char *v9; // [rsp+48h] [rbp-240h]
  char v10; // [rsp+50h] [rbp-238h] BYREF

  v8 = 34078720;
  v9 = &v10;
  RtlAppendUnicodeStringToString(&v8, a1);
  RtlAppendUnicodeToString(&v8, L"wow64.dll");
  v1 = LdrLoadDll(0LL, 0LL, &v8, &Wow64Handle);
  if ( v1 < 0 )
  {
    v6 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2925,
        (unsigned int)"LdrpLoadWow64",
        0,
        (__int64)"Loading WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
        (char)&v8);
      v6 = LdrpDebugFlags;
    }
    if ( (v6 & 0x10) != 0 )
      __debugbreak();
    return (unsigned int)v1;
  }
  else
  {
    v2 = 0;
    for ( i = &off_180105BD0; ; i += 2 )
    {
      ProcedureAddress = LdrGetProcedureAddress(Wow64Handle, *i, 0LL, i[1]);
      if ( ProcedureAddress < 0 )
        break;
      if ( ++v2 >= 5 )
        return (unsigned int)ProcedureAddress;
    }
    v7 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2946,
        (unsigned int)"LdrpLoadWow64",
        0,
        (__int64)"Locating procedure \"%Z\" in WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
        (char)*(&off_180105BD0 + 2 * v2));
      v7 = LdrpDebugFlags;
    }
    if ( (v7 & 0x10) != 0 )
      __debugbreak();
    return (unsigned int)ProcedureAddress;
  }
}
