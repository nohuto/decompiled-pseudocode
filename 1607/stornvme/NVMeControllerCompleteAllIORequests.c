/*
 * XREFs of NVMeControllerCompleteAllIORequests @ 0x1C00069CC
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0002A40 (NVMeHwAdapterControl.c)
 *     NVMeControllerReset @ 0x1C00072C8 (NVMeControllerReset.c)
 * Callees:
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000666C (NVMeCompleteSubmissionQueueRequests.c)
 */

void __fastcall NVMeControllerCompleteAllIORequests(__int64 a1, char a2)
{
  unsigned int i; // edi
  unsigned __int16 j; // di

  StorPortExtendedFunction(81LL, a1, 10000LL);
  for ( i = 0;
        i < *(unsigned __int16 *)(a1 + 232);
        NVMeCompleteSubmissionQueueRequests(
          a1,
          *(_QWORD *)(a1 + 544) + 136LL * i++,
          *(unsigned __int16 *)(a1 + 230),
          0,
          1,
          0,
          a2) )
  {
    ;
  }
  for ( j = 0; *(_WORD *)(a1 + 236) && j < 0x1388u; ++j )
    StorPortExtendedFunction(81LL, a1, 10LL);
  NVMeCompleteSubmissionQueueRequests(a1, a1 + 240, *(unsigned __int16 *)(a1 + 228), 0, 1, 0, a2);
}
