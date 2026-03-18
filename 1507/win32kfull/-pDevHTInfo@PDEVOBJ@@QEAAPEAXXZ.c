/*
 * XREFs of ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0030758
 * Callers:
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00A1510 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     EngHTBlt @ 0x1C00A30B4 (EngHTBlt.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00CF43C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C0114618 (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 *     ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x1C01263CC (-bDisableHalftone@PDEVOBJ@@QEAAHXZ.c)
 *     GreCreateHalftonePalette @ 0x1C02B1EB0 (GreCreateHalftonePalette.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     HT_DestroyDeviceHalftoneInfo @ 0x1C00FE028 (HT_DestroyDeviceHalftoneInfo.c)
 */

void *__fastcall PDEVOBJ::pDevHTInfo(PDEVOBJ *this)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rdi

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
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
