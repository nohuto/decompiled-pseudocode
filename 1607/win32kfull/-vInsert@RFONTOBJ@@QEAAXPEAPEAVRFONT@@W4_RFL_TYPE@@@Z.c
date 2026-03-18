/*
 * XREFs of ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C002D7D8
 * Callers:
 *     prfntKillList @ 0x1C0021534 (prfntKillList.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C002B5C4 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C002BA28 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     vDeactivateEudcRFONTsWorker @ 0x1C0289E44 (vDeactivateEudcRFONTsWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTOBJ::vInsert(__int64 *a1, __int64 *a2, int a3)
{
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 *v7; // rcx

  if ( a3 )
  {
    if ( a3 != 1 )
      return;
    v5 = *a2;
    v6 = (_QWORD *)(*a1 + 496);
    if ( v5 )
    {
      v7 = (__int64 *)(v5 + 496);
      goto LABEL_8;
    }
  }
  else
  {
    v5 = *a2;
    v6 = (_QWORD *)(*a1 + 512);
    if ( v5 )
    {
      v7 = (__int64 *)(v5 + 512);
      goto LABEL_8;
    }
  }
  v7 = 0LL;
LABEL_8:
  if ( v6 )
  {
    *v6 = 0LL;
    v6[1] = v5;
    if ( v7 )
      *v7 = *a1;
    *a2 = *a1;
  }
}
