/*
 * XREFs of ??0VIDMM_PROCESS_BUDGET_STATE@@QEAA@XZ @ 0x1C0017390
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0016C00 (memset.c)
 */

VIDMM_PROCESS_BUDGET_STATE *__fastcall VIDMM_PROCESS_BUDGET_STATE::VIDMM_PROCESS_BUDGET_STATE(
        VIDMM_PROCESS_BUDGET_STATE *this)
{
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  memset((char *)this + 72, 0, 0x20uLL);
  memset((char *)this + 104, 0, 0x20uLL);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  memset((char *)this + 200, 0, 0x28uLL);
  return this;
}
