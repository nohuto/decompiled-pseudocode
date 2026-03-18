/*
 * XREFs of ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C029BC84
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C002D428 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x1C029BDC0 (-vRestartbRealizeFont@@YAXPEAVRFONT@@@Z.c)
 * Callees:
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C01261C0 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C0126458 (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 */

void __fastcall RFONTOBJ::vDestroyFont(struct _FONTOBJ **this, int a2)
{
  struct _FONTOBJ *v2; // r8
  ULONG_PTR iTTUniq; // [rsp+30h] [rbp+8h] BYREF
  __int64 *pvConsumer; // [rsp+40h] [rbp+18h] BYREF

  v2 = *this;
  pvConsumer = (__int64 *)(*this)[1].pvConsumer;
  iTTUniq = v2[1].iTTUniq;
  PFEOBJ::vFreepfdg(&pvConsumer);
  if ( a2 )
  {
    if ( *(_QWORD *)(iTTUniq + 3064) )
      PDEVOBJ::DestroyFont((PDEVOBJ *)&iTTUniq, *this);
  }
}
