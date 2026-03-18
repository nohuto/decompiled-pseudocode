/*
 * XREFs of _CmOpenCommonClassRegKey @ 0x14044034C
 * Callers:
 *     _CmOpenInstallerClassRegKey @ 0x140440574 (_CmOpenInstallerClassRegKey.c)
 *     _CmOpenInterfaceClassRegKey @ 0x1404583D8 (_CmOpenInterfaceClassRegKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140440170 (_CmOpenCommonClassRegKeyWorker.c)
 */

__int64 __fastcall CmOpenCommonClassRegKey(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  unsigned int v12; // esi
  __int64 (__fastcall *v13)(__int64 *, __int64, _QWORD, __int64, int, _QWORD *); // rdi
  int v14; // eax
  int v15; // eax
  int v16; // ebx
  int v18; // eax
  _QWORD v19[12]; // [rsp+50h] [rbp-71h] BYREF

  LODWORD(v19[0]) = 0;
  memset(&v19[1], 0, 0x50uLL);
  if ( (unsigned __int8)a3 == 32 )
  {
    v12 = 2;
  }
  else
  {
    if ( (unsigned __int8)a3 != 64 )
    {
      v16 = -1073741811;
      goto LABEL_7;
    }
    v12 = 4;
  }
  v13 = (__int64 (__fastcall *)(__int64 *, __int64, _QWORD, __int64, int, _QWORD *))a1[40];
  LODWORD(v19[3]) = a5;
  BYTE4(v19[3]) = a6;
  v19[4] = a7;
  v19[2] = __PAIR64__(a4, a3);
  if ( v13 )
  {
    v14 = v13(a1, a2, v12, 11LL, 1, v19);
    if ( v14 == -1073741822 )
    {
      v13 = 0LL;
    }
    else
    {
      if ( v14 == -1073741536 )
        goto LABEL_17;
      if ( v14 )
        return (unsigned int)-1073741595;
    }
  }
  v15 = CmOpenCommonClassRegKeyWorker(
          a1,
          a2,
          v19[2],
          SHIDWORD(v19[2]),
          v19[3],
          SBYTE4(v19[3]),
          (HANDLE *)v19[4],
          &v19[5]);
  v16 = v15;
  if ( !v13 )
    goto LABEL_7;
  LODWORD(v19[0]) = v15;
  v18 = v13(a1, a2, v12, 11LL, 2, v19);
  if ( v18 == -1073741822 )
    goto LABEL_7;
  if ( v18 == -1073741536 )
  {
LABEL_17:
    v16 = v19[0];
    goto LABEL_7;
  }
  if ( v18 )
    return (unsigned int)-1073741595;
LABEL_7:
  if ( v16 >= 0 && a8 )
    *a8 = v19[5];
  return (unsigned int)v16;
}
