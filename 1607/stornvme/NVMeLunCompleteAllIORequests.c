/*
 * XREFs of NVMeLunCompleteAllIORequests @ 0x1C00078E0
 * Callers:
 *     NVMeHwUnitControl @ 0x1C0004F40 (NVMeHwUnitControl.c)
 * Callees:
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000666C (NVMeCompleteSubmissionQueueRequests.c)
 */

void __fastcall NVMeLunCompleteAllIORequests(__int64 a1, int a2)
{
  unsigned int i; // edi

  for ( i = 0;
        i < *(unsigned __int16 *)(a1 + 232);
        NVMeCompleteSubmissionQueueRequests(
          a1,
          *(_QWORD *)(a1 + 544) + 136LL * i++,
          *(unsigned __int16 *)(a1 + 230),
          a2,
          0,
          0,
          8) )
  {
    ;
  }
  NVMeCompleteSubmissionQueueRequests(a1, a1 + 240, *(unsigned __int16 *)(a1 + 228), a2, 0, 1, 8);
}
