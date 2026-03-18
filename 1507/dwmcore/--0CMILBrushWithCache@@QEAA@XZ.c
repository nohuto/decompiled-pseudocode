/*
 * XREFs of ??0CMILBrushWithCache@@QEAA@XZ @ 0x180057604
 * Callers:
 *     ??0CMILBrushBitmap@@IEAA@PEAVCMILFactory@@@Z @ 0x180080FBC (--0CMILBrushBitmap@@IEAA@PEAVCMILFactory@@@Z.c)
 *     ??0CMILBrushGradient@@IEAA@PEAVCMILFactory@@@Z @ 0x18014BBF8 (--0CMILBrushGradient@@IEAA@PEAVCMILFactory@@@Z.c)
 * Callees:
 *     <none>
 */

CMILBrushWithCache *__fastcall CMILBrushWithCache::CMILBrushWithCache(CMILBrushWithCache *this)
{
  *((_DWORD *)this + 3) = 3;
  *(_QWORD *)this = &CMILBrush::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 4) = 1;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = (char *)this + 72;
  *((_QWORD *)this + 6) = (char *)this + 72;
  *((_DWORD *)this + 14) = 2;
  *(_QWORD *)((char *)this + 60) = 2LL;
  *((_QWORD *)this + 4) = &CMILResourceCache::`vftable';
  *((_DWORD *)this + 22) = 0;
  *(_QWORD *)this = &CMILBrushWithCache::`vftable'{for `CMILBrush'};
  *((_QWORD *)this + 4) = &CMILResourceCache::`vftable';
  return this;
}
