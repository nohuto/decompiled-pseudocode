/*
 * XREFs of ?Trace@CRateInfo@@QEAAXXZ @ 0x1800B1F1C
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x18008FC60 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180090CF0 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 * Callees:
 *     Template_nxxqnx @ 0x180101A84 (Template_nxxqnx.c)
 */

void __fastcall CRateInfo::Trace(CRateInfo *this, __int64 a2, int a3)
{
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_nxxqnx(
      (_DWORD)this,
      (_DWORD)this + 36,
      a3,
      (_DWORD)this,
      *((_QWORD *)this + 1),
      *((_QWORD *)this + 3),
      *((_DWORD *)this + 8));
}
