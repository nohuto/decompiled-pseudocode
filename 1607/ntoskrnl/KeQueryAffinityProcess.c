/*
 * XREFs of KeQueryAffinityProcess @ 0x14009C45C
 * Callers:
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14001D8E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400E8250 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

__int64 __fastcall KeQueryAffinityProcess(__int64 a1, _OWORD *a2, int *a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // r15
  unsigned int v9; // ebx
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  *a2 = *(_OWORD *)(a1 + 80);
  a2[1] = *(_OWORD *)(a1 + 96);
  a2[2] = *(_OWORD *)(a1 + 112);
  a2[3] = *(_OWORD *)(a1 + 128);
  a2[4] = *(_OWORD *)(a1 + 144);
  a2[5] = *(_OWORD *)(a1 + 160);
  a2[6] = *(_OWORD *)(a1 + 176);
  a2 += 8;
  *(a2 - 1) = *(_OWORD *)(a1 + 192);
  *a2 = *(_OWORD *)(a1 + 208);
  a2[1] = *(_OWORD *)(a1 + 224);
  *((_QWORD *)a2 + 4) = *(_QWORD *)(a1 + 240);
  v9 = *(_DWORD *)(a1 + 440);
  if ( a4 )
  {
    *(_OWORD *)a4 = *(_OWORD *)(a1 + 528);
    *(_OWORD *)(a4 + 16) = *(_OWORD *)(a1 + 544);
    *(_QWORD *)(a4 + 32) = *(_QWORD *)(a1 + 560);
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( a3 )
    *a3 = (v9 >> 8) & 0xFFFFF;
  return result;
}
