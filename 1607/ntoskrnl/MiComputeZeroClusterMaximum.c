/*
 * XREFs of MiComputeZeroClusterMaximum @ 0x1400B553C
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x14003ADC0 (MiResolvePrivateZeroFault.c)
 *     MiExpandSharedZeroCluster @ 0x1400B72E8 (MiExpandSharedZeroCluster.c)
 *     MiGetClusterPage @ 0x1401F6144 (MiGetClusterPage.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1400BE0E0 (MiGetAvailablePagesBelowPriority.c)
 */

__int64 __fastcall MiComputeZeroClusterMaximum(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // r9
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  int *v8; // r9
  __int64 v9; // r10
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned int v14; // edx
  unsigned __int64 AvailablePagesBelowPriority; // rax

  v2 = a1[4];
  v3 = a1[1] + 16LL * a1[3];
  v4 = (((unsigned __int64)(*(_DWORD *)v3 & 0xFFF) + *(_QWORD *)(v3 + 8) + 4095LL) >> 12) - v2;
  v5 = *(_QWORD *)v3 + (v2 << 12);
  v6 = (*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) - (v5 >> 12);
  if ( v4 > v6 + 1 )
    v4 = v6 + 1;
  v8 = MiPartitionIdToPointer(WORD2(KeGetCurrentThread()->ApcState.Process[1].InstrumentationCallback));
  if ( *((_QWORD *)v8 + 808) < 0x1388uLL )
    v4 = 1LL;
  if ( (*(_BYTE *)(v7 + 1464) & 0x40) != 0 && (*(_BYTE *)v9 != 1 || (*(_DWORD *)(v9 + 80) & 0x4000) == 0) )
  {
    v10 = *(_QWORD *)(v7 + 1392);
    v11 = *(_QWORD *)(v7 + 1424);
    if ( v10 >= v11 )
      return 1LL;
    if ( v10 + v4 > v11 )
      v4 = v11 - v10;
  }
  if ( *(_BYTE *)v9 == 1 )
  {
    v14 = *(_DWORD *)(v9 + 80);
    if ( (v14 & 0x4000) != 0 )
    {
      AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v8, ((v14 >> 3) & 7) + 1);
      if ( v4 > AvailablePagesBelowPriority )
        v4 = AvailablePagesBelowPriority;
    }
  }
  if ( !v4 )
    v4 = 1LL;
  v12 = (((v5 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF;
  if ( v4 > 512 - v12 )
    return 512 - v12;
  return v4;
}
