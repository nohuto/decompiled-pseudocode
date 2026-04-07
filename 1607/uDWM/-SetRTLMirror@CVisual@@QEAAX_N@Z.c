/*
 * XREFs of ?SetRTLMirror@CVisual@@QEAAX_N@Z @ 0x180020C78
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180025DA0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::SetRTLMirror(CVisual *this, char a2)
{
  if ( a2 != (*((_BYTE *)this + 84) & 1) )
  {
    *((_BYTE *)this + 84) ^= (a2 ^ *((_BYTE *)this + 84)) & 1;
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 16LL);
  }
}
