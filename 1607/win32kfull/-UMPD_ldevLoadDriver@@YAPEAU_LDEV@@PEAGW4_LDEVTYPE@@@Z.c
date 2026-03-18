/*
 * XREFs of ?UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z @ 0x1C02A3D50
 * Callers:
 *     UMPD_ldevLoadDriverWrap @ 0x1C02A3ED0 (UMPD_ldevLoadDriverWrap.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?UMPDDrvDriverFn@@YAHPEAXPEAH@Z @ 0x1C029D654 (-UMPDDrvDriverFn@@YAHPEAXPEAH@Z.c)
 *     ?UMPDDrvEnableDriver@@YAHPEAGPEAPEAX@Z @ 0x1C029D708 (-UMPDDrvEnableDriver@@YAHPEAGPEAPEAX@Z.c)
 *     ?UMPD_ldevFillTable@@YAHPEAU_LDEV@@PEAH@Z @ 0x1C02A3CC4 (-UMPD_ldevFillTable@@YAHPEAU_LDEV@@PEAH@Z.c)
 */

_QWORD *__fastcall UMPD_ldevLoadDriver(unsigned __int16 *a1, int a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  BOOL v7; // esi
  void *v8; // rbx
  void *v10; // [rsp+20h] [rbp-1C8h] BYREF
  int v11[104]; // [rsp+30h] [rbp-1B8h] BYREF

  v4 = EngAllocMem(1u, 0x388u, 0x706D7547u);
  if ( v4 )
  {
    v7 = UMPDDrvEnableDriver(a1, &v10);
    if ( !v7 )
      goto LABEL_5;
    v8 = v10;
    *v4 = 0LL;
    v4[1] = 0LL;
    v4[2] = 0LL;
    v4[5] = v8;
    *((_DWORD *)v4 + 6) = a2;
    *((_DWORD *)v4 + 7) = 1;
    v4[6] = PsGetCurrentProcessWin32Process(v6, v5);
    if ( (unsigned int)UMPDDrvDriverFn(v8, v11) == 0
      || !v7
      || !(unsigned int)UMPD_ldevFillTable((struct _LDEV *)v4, v11) )
    {
LABEL_5:
      EngFreeMem(v4);
      return 0LL;
    }
  }
  return v4;
}
