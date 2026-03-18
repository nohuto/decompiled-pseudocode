/*
 * XREFs of ??0VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE@@QEAA@XZ @ 0x1C0011E60
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0014E40 (memset.c)
 */

VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE *__fastcall VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE::VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE(
        VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE *this)
{
  memset((char *)this + 16, 0, 0xF2uLL);
  *((_WORD *)this + 129) = 0;
  return this;
}
