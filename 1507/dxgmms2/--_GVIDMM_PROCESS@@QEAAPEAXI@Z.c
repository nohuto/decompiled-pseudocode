/*
 * XREFs of ??_GVIDMM_PROCESS@@QEAAPEAXI@Z @ 0x1C000DF74
 * Callers:
 *     VidMmCreateProcess @ 0x1C0005EE0 (VidMmCreateProcess.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C00369F0 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 */

VIDMM_PROCESS *__fastcall VIDMM_PROCESS::`scalar deleting destructor'(VIDMM_PROCESS *this)
{
  VIDMM_PROCESS::~VIDMM_PROCESS(this);
  operator delete(this);
  return this;
}
