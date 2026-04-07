/*
 * XREFs of ??0CText@@AEAA@XZ @ 0x18001BA00
 * Callers:
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001AD60 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?Create@CText@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003ECC8 (-Create@CText@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x180022088 (--0CVisual@@IEAA@XZ.c)
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
