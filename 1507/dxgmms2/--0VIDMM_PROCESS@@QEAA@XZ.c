/*
 * XREFs of ??0VIDMM_PROCESS@@QEAA@XZ @ 0x1C0036590
 * Callers:
 *     VidMmCreateProcess @ 0x1C0005EE0 (VidMmCreateProcess.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
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
