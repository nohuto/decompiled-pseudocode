/*
 * XREFs of ?Create@CSolidRectangleInstruction@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800354FC
 * Callers:
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180035990 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ @ 0x180071B44 (-_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ.c)
 *     ?_AddRectInstruction@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@AEBU_D3DCOLORVALUE@@@Z @ 0x180074764 (-_AddRectInstruction@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x18008F1E4 (-UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z.c)
 *     ?SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ @ 0x18009BAB8 (-SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180028470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CSolidRectangleInstruction::Create(
        struct MIL_CHANNEL__ *const a1,
        struct CSolidRectangleInstruction **a2)
{
  unsigned int v2; // ebx
  void *(__fastcall *v5)(WPF::ProcessHeapImpl *, size_t); // rbp
  _DWORD *v6; // rax

  v2 = 0;
  if ( !a2 )
  {
    v2 = -2147024809;
LABEL_12:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x13u);
    return v2;
  }
  v5 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v5 == WPF::ProcessHeapImpl::AllocClear )
    v6 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x38uLL);
  else
    v6 = (_DWORD *)v5(WPF::g_pProcessHeap, 56LL);
  if ( v6 )
  {
    v6[2] = 1;
    *(_QWORD *)v6 = &CSolidRectangleInstruction::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
  {
    v2 = -2147024882;
    goto LABEL_12;
  }
  *((_QWORD *)v6 + 6) = a1;
  *a2 = (struct CSolidRectangleInstruction *)v6;
  return v2;
}
