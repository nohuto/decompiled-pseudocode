/*
 * XREFs of MiComputeZeroClusterMaximum @ 0x1400E71AC
 * Callers:
 *     MiZeroFault @ 0x14004D290 (MiZeroFault.c)
 *     MiResolveDemandZeroFault @ 0x140052430 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x14007CA30 (MiGetAvailablePagesBelowPriority.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
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
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned int v13; // edx
  unsigned __int64 AvailablePagesBelowPriority; // rax

  v2 = a1[4];
  v3 = a1[1] + 16LL * a1[3];
  v4 = (((unsigned __int64)(*(_DWORD *)v3 & 0xFFF) + *(_QWORD *)(v3 + 8) + 4095LL) >> 12) - v2;
  v5 = *(_QWORD *)v3 + (v2 << 12);
  v6 = (*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) - (v5 >> 12);
  if ( v4 > v6 + 1 )
    v4 = v6 + 1;
  v8 = MiPartitionIdToPointer(KeGetCurrentThread()->ApcState.Process[2].Header.SignalState);
  if ( *((_QWORD *)v8 + 736) < 0x1388uLL )
    v4 = 1LL;
  if ( (*(_BYTE *)(v7 + 1496) & 0x40) != 0 && (*(_BYTE *)v9 != 1 || (*(_DWORD *)(v9 + 80) & 0x4000) == 0) )
  {
    v11 = *(_QWORD *)(v7 + 1384);
    v12 = *(_QWORD *)(v7 + 1416);
    if ( v11 >= v12 )
      return 1LL;
    if ( v11 + v4 > v12 )
      v4 = v12 - v11;
  }
  if ( *(_BYTE *)v9 == 1 )
  {
    v13 = *(_DWORD *)(v9 + 80);
    if ( (v13 & 0x4000) != 0 )
    {
      AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v8, ((v13 >> 3) & 7) + 1);
      if ( v4 > AvailablePagesBelowPriority )
        v4 = AvailablePagesBelowPriority;
    }
  }
  if ( !v4 )
    v4 = 1LL;
  if ( v4 > 512 - ((v5 >> 12) & 0x1FF) )
    return 512 - ((v5 >> 12) & 0x1FF);
  return v4;
}
