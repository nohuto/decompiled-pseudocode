/*
 * XREFs of MiFreeReservationRun @ 0x1404F1774
 * Callers:
 *     MiFreeWorkingSetSwapContext @ 0x1404F16CC (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x1404F1730 (MiFreeReservationRuns.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14001A280 (MiReleasePageFileInfo.c)
 *     MiGetPteTimeStamp @ 0x1401F269C (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x1401F2958 (MiUpdatePageFileHighInPte.c)
 */

void __fastcall MiFreeReservationRun(struct _KEVENT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 PteTimeStamp; // rdi
  __int64 updated; // rax
  bool v8; // zf

  if ( *(_DWORD *)(a2 + 8) )
  {
    PteTimeStamp = MiGetPteTimeStamp(*(_QWORD *)a2, a2, a3, a4);
    do
    {
      MiReleasePageFileInfo(a1, *(_QWORD *)a2, 0);
      updated = MiUpdatePageFileHighInPte(*(_QWORD *)a2, ++PteTimeStamp);
      v8 = (*(_DWORD *)(a2 + 8))-- == 1;
      *(_QWORD *)a2 = updated;
    }
    while ( !v8 );
  }
}
