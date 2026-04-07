/*
 * XREFs of ??0CText@@AEAA@XZ @ 0x180017EEC
 * Callers:
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z @ 0x180017F70 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?Create@CText@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180041500 (-Create@CText@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x18001F310 (--0CVisual@@IEAA@XZ.c)
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 */

CText *__fastcall CText::CText(CText *this)
{
  CVisual::CVisual(this);
  *((_QWORD *)this + 34) = 0LL;
  *(_QWORD *)this = &CText::`vftable';
  memset_0((char *)this + 280, 0, 0x5CuLL);
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_DWORD *)this + 98) = -1;
  *((_DWORD *)this + 99) = -1;
  *((_QWORD *)this + 50) = 0x3FF0000000000000LL;
  return this;
}
