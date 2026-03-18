/*
 * XREFs of ??0VIDMM_PROCESS@@QEAA@XZ @ 0x1C0054128
 * Callers:
 *     VidMmCreateProcess @ 0x1C0013280 (VidMmCreateProcess.c)
 * Callees:
 *     memset @ 0x1C0016C00 (memset.c)
 */

VIDMM_PROCESS *__fastcall VIDMM_PROCESS::VIDMM_PROCESS(VIDMM_PROCESS *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)((char *)this + 52) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 12) |= 1u;
  memset((char *)this + 64, 0, 0x48uLL);
  return this;
}
