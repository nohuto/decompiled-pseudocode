/*
 * XREFs of ??0CText@@AEAA@XZ @ 0x180016B20
 * Callers:
 *     ?Create@CText@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800085D0 (-Create@CText@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z @ 0x180015EA0 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x18001CC18 (--0CVisual@@IEAA@XZ.c)
 */

CText *__fastcall CText::CText(CText *this)
{
  CText *v1; // rcx
  CText *result; // rax

  CVisual::CVisual(this);
  *((_DWORD *)v1 + 98) = -1;
  *((_DWORD *)v1 + 99) = -1;
  result = v1;
  *(_QWORD *)v1 = &CText::`vftable';
  return result;
}
