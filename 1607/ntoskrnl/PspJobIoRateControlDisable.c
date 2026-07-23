/*
 * XREFs of PspJobIoRateControlDisable @ 0x14051A458
 * Callers:
 *     PspJobDelete @ 0x14010CAAC (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x1404D4610 (PspSetJobIoRateControl.c)
 * Callees:
 *     PspJobIoRateVolumeEntryRemoveAll @ 0x14010C410 (PspJobIoRateVolumeEntryRemoveAll.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PspIoRateEntryDeactivate @ 0x1404D3B2C (PspIoRateEntryDeactivate.c)
 */

__int64 __fastcall PspJobIoRateControlDisable(struct _EX_RUNDOWN_REF *a1)
{
  unsigned int v1; // edi
  struct _EX_RUNDOWN_REF *v3; // rbx
  __int64 v5; // rax
  PVOID P[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  if ( a1[179].Count )
  {
    PspIoRateEntryDeactivate(a1 + 174);
    v1 = 1;
  }
  P[1] = P;
  P[0] = P;
  PspJobIoRateVolumeEntryRemoveAll((__int64)a1, (__int64)P);
  while ( 1 )
  {
    v3 = (struct _EX_RUNDOWN_REF *)P[0];
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
