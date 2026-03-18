/*
 * XREFs of GreSfmCleanupPresentHistory @ 0x1C0080958
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C007F9E4 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007FFC0 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     ?GreSfmCleanupDxgAdapter@@YAXI@Z @ 0x1C0080AA8 (-GreSfmCleanupDxgAdapter@@YAXI@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

_DWORD *__fastcall GreSfmCleanupPresentHistory(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rdi
  _DWORD *result; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rsi
  int v8; // [rsp+38h] [rbp-79h] BYREF
  unsigned int v9; // [rsp+40h] [rbp-71h] BYREF
  _DWORD *v10; // [rsp+48h] [rbp-69h]
  _DWORD v11[40]; // [rsp+58h] [rbp-59h] BYREF

  memset(v11, 0, sizeof(v11));
  v9 = 0;
  v3 = v11;
  v10 = 0LL;
  LOBYTE(a3) = 1;
  result = (_DWORD *)((__int64 (__fastcall *)(unsigned int *, _QWORD, __int64, _QWORD))qword_1C0103EE8)(
                       &v9,
                       0LL,
                       a3,
                       0LL);
  if ( (int)result >= 0 )
  {
    v5 = v9;
    if ( v9 )
    {
      if ( v9 <= 8 || (result = PALLOCMEM2(20 * v9, 1886221383LL, 1), (v3 = result) != 0LL) )
      {
        memset(v3, 0, 20 * v5);
        v10 = v3;
        LOBYTE(v6) = 1;
        if ( (int)((__int64 (__fastcall *)(unsigned int *, _QWORD, __int64, _QWORD))qword_1C0103EE8)(&v9, 0LL, v6, 0LL) >= 0
          && v9
          && v9 <= (unsigned int)v5 )
        {
          v7 = 0LL;
          do
          {
            GreSfmCleanupDxgAdapter(v10[5 * v7]);
            v8 = 0;
            v8 = v10[5 * v7];
            ((void (__fastcall *)(int *, _QWORD))qword_1C0103F00)(&v8, 0LL);
            v7 = (unsigned int)(v7 + 1);
          }
          while ( (unsigned int)v7 < v9 );
        }
        result = v11;
        if ( v3 != v11 )
          return (_DWORD *)Win32FreePool();
      }
    }
  }
  return result;
}
