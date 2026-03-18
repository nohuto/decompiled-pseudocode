/*
 * XREFs of ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C002F444
 * Callers:
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C002A864 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002B2F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C010F958 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0125E48 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     prfntKillList @ 0x1C012A6E0 (prfntKillList.c)
 *     vDeactivateEudcRFONTsWorker @ 0x1C028B454 (vDeactivateEudcRFONTsWorker.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C029BE5C (vRemoveAllInactiveRFONTs.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTOBJ::vRemove(__int64 a1, _QWORD *a2, int a3)
{
  __int64 *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 *v8; // rcx

  if ( a3 )
  {
    if ( a3 != 1 )
      return;
    v4 = (__int64 *)(*(_QWORD *)a1 + 496LL);
    v5 = *v4;
    if ( *v4 )
      v6 = v5 + 496;
    else
      v6 = 0LL;
    v7 = *(_QWORD *)(*(_QWORD *)a1 + 504LL);
    if ( v7 )
    {
      v8 = (__int64 *)(v7 + 496);
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  v4 = (__int64 *)(*(_QWORD *)a1 + 512LL);
  v5 = *v4;
  if ( *v4 )
    v6 = v5 + 512;
  else
    v6 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)a1 + 520LL);
  if ( !v7 )
  {
LABEL_10:
    v8 = 0LL;
    goto LABEL_11;
  }
  v8 = (__int64 *)(v7 + 512);
LABEL_11:
  if ( v5 )
  {
    *(_QWORD *)(v6 + 8) = v7;
    if ( v8 )
      *v8 = *v4;
  }
  else
  {
    *a2 = v7;
    if ( v8 )
      *v8 = 0LL;
  }
}
