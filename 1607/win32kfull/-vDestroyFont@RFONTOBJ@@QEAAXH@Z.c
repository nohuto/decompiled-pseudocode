/*
 * XREFs of ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C029B174
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C002BA28 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x1C029B4B0 (-vRestartbRealizeFont@@YAXPEAVRFONT@@@Z.c)
 * Callees:
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C0027D7C (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C00293CC (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
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
    if ( *(_QWORD *)(iTTUniq + 3056) )
      PDEVOBJ::DestroyFont((PDEVOBJ *)&iTTUniq, *this);
  }
}
