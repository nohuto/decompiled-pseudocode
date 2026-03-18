/*
 * XREFs of ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C001BFE0
 * Callers:
 *     ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x1C001CB98 (-bDisableHalftone@PDEVOBJ@@QEAAHXZ.c)
 *     EngHTBlt @ 0x1C00BAC98 (EngHTBlt.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00BB4A0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00E7048 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C0140788 (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 *     GreCreateHalftonePalette @ 0x1C02B1138 (GreCreateHalftonePalette.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     HT_DestroyDeviceHalftoneInfo @ 0x1C010A308 (HT_DestroyDeviceHalftoneInfo.c)
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
