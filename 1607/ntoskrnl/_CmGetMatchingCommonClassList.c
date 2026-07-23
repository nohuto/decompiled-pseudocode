/*
 * XREFs of _CmGetMatchingCommonClassList @ 0x1405627A0
 * Callers:
 *     _PnpDispatchInstallerClass @ 0x1404BB7AC (_PnpDispatchInstallerClass.c)
 *     _PnpDispatchInterfaceClass @ 0x1404D95D4 (_PnpDispatchInterfaceClass.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x1405628B0 (_CmGetMatchingCommonClassListWorker.c)
 */

__int64 __fastcall CmGetMatchingCommonClassList(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int a8)
{
  __int64 (__fastcall *v12)(__int64, _QWORD, _QWORD, __int64, int, _QWORD *); // r15
  int v13; // eax
  unsigned int MatchingCommonClassListWorker; // eax
  unsigned int v15; // ebx
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  _QWORD v20[12]; // [rsp+40h] [rbp-71h] BYREF

  LODWORD(v20[0]) = 0;
  memset(&v20[1], 0, 0x50uLL);
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int, _QWORD *))(a1 + 328);
  LODWORD(v20[5]) = a6;
  v20[2] = a3;
  v20[3] = a4;
  v20[6] = a7;
  LODWORD(v20[7]) = a8;
  v20[4] = a5;
  if ( v12 )
  {
    v13 = v12(a1, 0LL, a2, 4LL, 1, v20);
    if ( v13 == -1073741822 )
    {
      v12 = 0LL;
    }
    else
    {
      if ( v13 == -1073741536 )
        return LODWORD(v20[0]);
      if ( v13 )
        return (unsigned int)-1073741595;
    }
  }
  MatchingCommonClassListWorker = CmGetMatchingCommonClassListWorker(a1, a2, v20[2], v20[3], v20[4], v20[5], v20[6]);
  v15 = MatchingCommonClassListWorker;
  if ( !v12 )
    return v15;
  LODWORD(v20[0]) = MatchingCommonClassListWorker;
  v17 = v12(a1, 0LL, a2, 4LL, 2, v20);
  v18 = v17;
  if ( v17 == -1073741822 )
    return v15;
  if ( v17 == -1073741536 )
    return LODWORD(v20[0]);
  v19 = v15;
  if ( v18 )
    return (unsigned int)-1073741595;
  return v19;
}
