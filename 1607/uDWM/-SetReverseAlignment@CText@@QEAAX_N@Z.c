/*
 * XREFs of ?SetReverseAlignment@CText@@QEAAX_N@Z @ 0x1800187D8
 * Callers:
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z @ 0x180017F70 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180025DA0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CText::SetReverseAlignment(CText *this, char a2)
{
  void (__fastcall *v2)(CText *, __int64); // rax

  if ( ((*((_BYTE *)this + 264) & 4) != 0) != a2 )
  {
    v2 = *(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL);
    *((_BYTE *)this + 264) ^= (*((_BYTE *)this + 264) ^ (4 * a2)) & 4;
    v2(this, 4096LL);
  }
}
