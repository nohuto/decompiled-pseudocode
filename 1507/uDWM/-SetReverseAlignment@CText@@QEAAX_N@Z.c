/*
 * XREFs of ?SetReverseAlignment@CText@@QEAAX_N@Z @ 0x180016738
 * Callers:
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z @ 0x180015EA0 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180023350 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CText::SetReverseAlignment(CText *this, char a2)
{
  char v3; // cl
  void (__fastcall *v4)(CText *, __int64); // rbx

  v3 = *((_BYTE *)this + 264);
  if ( ((v3 & 4) != 0) != a2 )
  {
    v4 = *(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL);
    *((_BYTE *)this + 264) = v3 ^ (v3 ^ (4 * a2)) & 4;
    v4(this, 4096LL);
  }
}
