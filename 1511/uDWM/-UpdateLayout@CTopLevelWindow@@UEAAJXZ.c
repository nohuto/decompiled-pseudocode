/*
 * XREFs of ?UpdateLayout@CTopLevelWindow@@UEAAJXZ @ 0x180025180
 * Callers:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800236A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180021DA0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?UpdateLayout@CVisual@@UEAAJXZ @ 0x1800225C0 (-UpdateLayout@CVisual@@UEAAJXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateLayout(CTopLevelWindow *this)
{
  __int64 (__fastcall *v2)(struct tagSIZE *, const struct tagSIZE *); // rsi
  int v3; // eax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  int updated; // eax

  v2 = *(__int64 (__fastcall **)(struct tagSIZE *, const struct tagSIZE *))(**((_QWORD **)this + 35) + 80LL);
  if ( v2 == CVisual::SetSize )
    v3 = CVisual::SetSize(*((struct tagSIZE **)this + 35), (const struct tagSIZE *)this + 14);
  else
    v3 = v2(*((struct tagSIZE **)this + 35), (const struct tagSIZE *)this + 14);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x12BEu);
  }
  else
  {
    updated = CVisual::UpdateLayout(this, v4);
    v5 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x12C0u);
  }
  return v5;
}
