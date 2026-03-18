/*
 * XREFs of ??0VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE@@QEAA@XZ @ 0x1C00087B0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 */

VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE *__fastcall VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE::VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE(
        VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE *this)
{
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  memset((char *)this + 80, 0, 0x90uLL);
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_DWORD *)this + 64) = 0;
  return this;
}
