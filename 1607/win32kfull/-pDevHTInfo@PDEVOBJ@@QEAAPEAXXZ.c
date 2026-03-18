/*
 * XREFs of ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0029594
 * Callers:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00F12E4 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00F1C10 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     EngHTBlt @ 0x1C00F2408 (EngHTBlt.c)
 *     PDEVOBJ_bDisableHalftoneWrap @ 0x1C0135C90 (PDEVOBJ_bDisableHalftoneWrap.c)
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C027D154 (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 *     GreCreateHalftonePalette @ 0x1C02B3FD4 (GreCreateHalftonePalette.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     HT_DestroyDeviceHalftoneInfo @ 0x1C012B7F8 (HT_DestroyDeviceHalftoneInfo.c)
 */

void *__fastcall PDEVOBJ::pDevHTInfo(PDEVOBJ *this)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rdi

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v3 = ThreadWin32Thread;
  if ( !ThreadWin32Thread
    || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108)
    || !PDEVOBJ::bAllowShareAccess(this) )
  {
    return *(void **)(*(_QWORD *)this + 1544LL);
  }
  if ( *(_DWORD *)(v3 + 296) != gcModeChanges )
  {
    v4 = *(_QWORD **)(v3 + 288);
    if ( v4 )
    {
      bDeletePalette(*v4, 0LL, 0LL);
      HT_DestroyDeviceHalftoneInfo(v4);
      *(_QWORD *)(v3 + 288) = 0LL;
    }
  }
  return *(void **)(v3 + 288);
}
