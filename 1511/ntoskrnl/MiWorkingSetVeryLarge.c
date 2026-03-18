/*
 * XREFs of MiWorkingSetVeryLarge @ 0x1401D29F0
 * Callers:
 *     MiDoReplacement @ 0x1401D27D4 (MiDoReplacement.c)
 *     MiOrderTrimList @ 0x1401D7DD0 (MiOrderTrimList.c)
 * Callees:
 *     MiGetStandbyRepurposed @ 0x14001516C (MiGetStandbyRepurposed.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 */

_BOOL8 __fastcall MiWorkingSetVeryLarge(_QWORD *a1, int a2)
{
  unsigned __int64 v2; // r8
  int *VmPartition; // rax
  int v5; // r11d
  __int64 v6; // r8
  __int64 v7; // r9
  int *v8; // r10
  int StandbyRepurposed; // eax

  if ( a2 == 1 )
    v2 = *(_QWORD *)(a1[23] + 8LL);
  else
    v2 = a1[12];
  if ( a1[15] <= v2 )
    return 0LL;
  VmPartition = MiGetVmPartition((__int64)a1);
  v8 = VmPartition;
  if ( v7 - v6 < (unsigned __int64)(3LL * (*((_QWORD *)VmPartition + 714) >> 2)) )
    return 0LL;
  if ( v5 == 1
    && (StandbyRepurposed = MiGetStandbyRepurposed((__int64)VmPartition, 1u),
        StandbyRepurposed == *(_DWORD *)(*((_QWORD *)v8 + 702) + 44LL)) )
  {
    return 0LL;
  }
  else
  {
    return *((_QWORD *)v8 + 736) < (unsigned __int64)(4LL * *(_QWORD *)(*((_QWORD *)v8 + 702) + 2400LL));
  }
}
