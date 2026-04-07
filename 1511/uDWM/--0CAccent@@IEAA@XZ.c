/*
 * XREFs of ??0CAccent@@IEAA@XZ @ 0x18001585C
 * Callers:
 *     ?Create@CAccent@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003EFD8 (-Create@CAccent@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CCanvas@@IEAA@XZ @ 0x18001F8A0 (--0CCanvas@@IEAA@XZ.c)
 */

CAccent *__fastcall CAccent::CAccent(CAccent *this)
{
  __int64 v1; // rcx
  CAccent *result; // rax

  CCanvas::CCanvas(this);
  *(_DWORD *)(v1 + 332) = 0xFFFFFF;
  *(_DWORD *)(v1 + 348) = 0;
  *(_QWORD *)(v1 + 376) = 0LL;
  *(_QWORD *)(v1 + 384) = 0LL;
  *(_QWORD *)(v1 + 304) = 0LL;
  *(_QWORD *)(v1 + 312) = 0LL;
  *(_QWORD *)(v1 + 336) = 0LL;
  *(_QWORD *)(v1 + 368) = 0LL;
  result = (CAccent *)v1;
  *(_QWORD *)v1 = &CAccent::`vftable';
  return result;
}
