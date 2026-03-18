/*
 * XREFs of PspJobIoRateControlDisable @ 0x1404A204C
 * Callers:
 *     PspJobDelete @ 0x1400888BC (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x1404F1E7C (PspSetJobIoRateControl.c)
 * Callees:
 *     PspJobIoRateVolumeEntryRemoveAll @ 0x140088220 (PspJobIoRateVolumeEntryRemoveAll.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PspIoRateEntryDeactivate @ 0x1404F1A38 (PspIoRateEntryDeactivate.c)
 */

__int64 __fastcall PspJobIoRateControlDisable(__int64 a1)
{
  unsigned int v1; // edi
  PVOID v3; // rbx
  __int64 v5; // rax
  PVOID P[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  if ( *(_QWORD *)(a1 + 1432) )
  {
    PspIoRateEntryDeactivate(a1 + 1392);
    v1 = 1;
  }
  P[1] = P;
  P[0] = P;
  PspJobIoRateVolumeEntryRemoveAll(a1, (__int64)P);
  while ( 1 )
  {
    v3 = P[0];
    if ( P[0] == P )
      break;
    v5 = *(_QWORD *)P[0];
    if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v5 + 8) != P[0] )
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v5 + 8) = P;
    PspIoRateEntryDeactivate(v3);
    ExFreePoolWithTag(v3, 0);
    ++v1;
  }
  return v1;
}
