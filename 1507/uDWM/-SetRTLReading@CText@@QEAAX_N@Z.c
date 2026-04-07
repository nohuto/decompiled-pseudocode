/*
 * XREFs of ?SetRTLReading@CText@@QEAAX_N@Z @ 0x18001676C
 * Callers:
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z @ 0x180015EA0 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180023350 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CText::SetRTLReading(CText *this, char a2)
{
  char v3; // cl
  void (__fastcall *v4)(CText *, __int64); // rbx

  v3 = *((_BYTE *)this + 264);
  if ( ((v3 & 2) != 0) != a2 )
  {
    v4 = *(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL);
    *((_BYTE *)this + 264) = v3 ^ (v3 ^ (2 * a2)) & 2;
    v4(this, 4096LL);
  }
}
