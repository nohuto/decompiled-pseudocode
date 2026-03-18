/*
 * XREFs of ??_GVIDMM_PROCESS@@QEAAPEAXI@Z @ 0x1C001D128
 * Callers:
 *     VidMmCreateProcess @ 0x1C0010D60 (VidMmCreateProcess.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C005C8A0 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 */

VIDMM_PROCESS *__fastcall VIDMM_PROCESS::`scalar deleting destructor'(VIDMM_PROCESS *this)
{
  VIDMM_PROCESS::~VIDMM_PROCESS(this);
  operator delete(this);
  return this;
}
