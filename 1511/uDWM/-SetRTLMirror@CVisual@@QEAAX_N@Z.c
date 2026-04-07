/*
 * XREFs of ?SetRTLMirror@CVisual@@QEAAX_N@Z @ 0x180023E64
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180028AC0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CVisual::SetRTLMirror(CVisual *this, char a2)
{
  if ( a2 != (*((_BYTE *)this + 84) & 1) )
  {
    *((_BYTE *)this + 84) ^= (a2 ^ *((_BYTE *)this + 84)) & 1;
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 16LL);
  }
}
