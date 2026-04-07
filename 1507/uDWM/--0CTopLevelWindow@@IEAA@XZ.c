/*
 * XREFs of ??0CTopLevelWindow@@IEAA@XZ @ 0x180024E2C
 * Callers:
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001EC40 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?Create@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180039EC8 (-Create@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x18001CC18 (--0CVisual@@IEAA@XZ.c)
 */

CTopLevelWindow *__fastcall CTopLevelWindow::CTopLevelWindow(CTopLevelWindow *this)
{
  __int64 v1; // rcx
  __int128 v2; // xmm0
  CTopLevelWindow *result; // rax

  CVisual::CVisual(this);
  *(_BYTE *)(v1 + 264) |= 3u;
  *(_QWORD *)v1 = &CTopLevelWindow::`vftable';
  *(_DWORD *)(v1 + 612) = -1;
  *(_BYTE *)(v1 + 265) &= ~1u;
  *(_DWORD *)(v1 + 616) = -1;
  *(_DWORD *)(v1 + 620) = -1;
  *(_DWORD *)(v1 + 624) = -1;
  v2 = *(_OWORD *)(v1 + 612);
  *(_DWORD *)(v1 + 720) = -1082130432;
  *(_DWORD *)(v1 + 708) = -1082130432;
  *(_DWORD *)(v1 + 712) = -1082130432;
  *(_DWORD *)(v1 + 716) = -1082130432;
  *(_DWORD *)(v1 + 736) = -1082130432;
  *(_DWORD *)(v1 + 724) = -1082130432;
  *(_DWORD *)(v1 + 728) = -1082130432;
  *(_DWORD *)(v1 + 732) = -1082130432;
  result = (CTopLevelWindow *)v1;
  *(_OWORD *)(v1 + 628) = v2;
  *(_QWORD *)(v1 + 296) = 0LL;
  *(_QWORD *)(v1 + 304) = 0LL;
  *(_QWORD *)(v1 + 312) = 0LL;
  *(_QWORD *)(v1 + 496) = 0LL;
  *(_QWORD *)(v1 + 544) = 0LL;
  *(_QWORD *)(v1 + 584) = 0LL;
  *(_QWORD *)(v1 + 592) = 0LL;
  *(_QWORD *)(v1 + 600) = 0LL;
  *(_QWORD *)(v1 + 696) = 0LL;
  *(_QWORD *)(v1 + 752) = 0LL;
  *(_QWORD *)(v1 + 760) = 0LL;
  *(_OWORD *)(v1 + 644) = v2;
  *(_QWORD *)(v1 + 288) = 0LL;
  *(_OWORD *)(v1 + 660) = v2;
  *(_QWORD *)(v1 + 768) = 0LL;
  *(_QWORD *)(v1 + 776) = 0LL;
  return result;
}
