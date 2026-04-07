/*
 * XREFs of ??0CButton@@IEAA@XZ @ 0x18001F6B4
 * Callers:
 *     ?Create@CButton@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003E9C8 (-Create@CButton@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x180020EA4 (--0CAtlasedRectsVisual@@IEAA@XZ.c)
 */

CButton *__fastcall CButton::CButton(CButton *this)
{
  __int64 v1; // rcx
  CButton *result; // rax

  CAtlasedRectsVisual::CAtlasedRectsVisual(this);
  *(_QWORD *)v1 = &CButton::`vftable';
  *(_QWORD *)(v1 + 328) = 0LL;
  *(_QWORD *)(v1 + 336) = 0LL;
  *(_QWORD *)(v1 + 344) = 0LL;
  *(_DWORD *)(v1 + 352) = 0;
  *(_QWORD *)(v1 + 360) = 0LL;
  *(_QWORD *)(v1 + 368) = 0LL;
  *(_QWORD *)(v1 + 376) = 0LL;
  *(_DWORD *)(v1 + 384) = 0;
  *(_BYTE *)(v1 + 304) |= 1u;
  *(_DWORD *)(v1 + 424) = 1065353216;
  *(_DWORD *)(v1 + 428) = 1065353216;
  result = (CButton *)v1;
  *(_DWORD *)(v1 + 432) = 2;
  *(_QWORD *)(v1 + 312) = 0LL;
  *(_QWORD *)(v1 + 320) = 0LL;
  *(_QWORD *)(v1 + 392) = 0LL;
  *(_QWORD *)(v1 + 416) = 0LL;
  return result;
}
