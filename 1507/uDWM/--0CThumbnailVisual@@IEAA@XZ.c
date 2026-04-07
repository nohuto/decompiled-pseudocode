/*
 * XREFs of ??0CThumbnailVisual@@IEAA@XZ @ 0x180014840
 * Callers:
 *     ?Create@CThumbnailVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001225C (-Create@CThumbnailVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x18001CC18 (--0CVisual@@IEAA@XZ.c)
 */

CThumbnailVisual *__fastcall CThumbnailVisual::CThumbnailVisual(CThumbnailVisual *this)
{
  __int64 v1; // rcx
  CThumbnailVisual *result; // rax

  CVisual::CVisual(this);
  *(_QWORD *)(v1 + 272) = 0LL;
  *(_QWORD *)(v1 + 280) = 0LL;
  *(_QWORD *)(v1 + 288) = 0LL;
  *(_QWORD *)(v1 + 296) = 0LL;
  *(_QWORD *)(v1 + 304) = 0LL;
  *(_DWORD *)(v1 + 312) = 0;
  *(_QWORD *)(v1 + 320) = 0LL;
  *(_BYTE *)(v1 + 328) = 0;
  *(_QWORD *)(v1 + 332) = 0LL;
  *(_QWORD *)v1 = &CThumbnailVisual::`vftable'{for `CVisual'};
  *(_QWORD *)(v1 + 264) = &CThumbnailVisual::`vftable'{for `IAnimatedVisual'};
  *(_QWORD *)(v1 + 344) = &CThumbnailVisual::`vftable';
  result = (CThumbnailVisual *)v1;
  *(_BYTE *)(v1 + 340) = 0;
  *(_QWORD *)(v1 + 360) = 0LL;
  *(_QWORD *)(v1 + 368) = 0LL;
  *(_QWORD *)(v1 + 376) = 0LL;
  *(_QWORD *)(v1 + 384) = 0LL;
  *(_QWORD *)(v1 + 392) = 0LL;
  *(_QWORD *)(v1 + 400) = 0LL;
  *(_QWORD *)(v1 + 408) = 0LL;
  *(_QWORD *)(v1 + 416) = 0LL;
  *(_QWORD *)(v1 + 424) = 0LL;
  *(_QWORD *)(v1 + 432) = 0LL;
  *(_QWORD *)(v1 + 440) = 0LL;
  *(_QWORD *)(v1 + 448) = 0LL;
  *(_BYTE *)(v1 + 456) = 1;
  *(_DWORD *)(v1 + 480) = 0;
  return result;
}
