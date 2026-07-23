/*
 * XREFs of MiAnyAddressLocked @ 0x1401E25C4
 * Callers:
 *     MiFlushDirtyBitsToPfn @ 0x1400A44FC (MiFlushDirtyBitsToPfn.c)
 * Callees:
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 */

__int64 MiAnyAddressLocked()
{
  ULONG_PTR *SharedWorkingSetList; // rax
  unsigned __int64 v1; // r10
  unsigned __int64 v2; // r11
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9
  __int64 v5; // rdx
  __int64 *v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rax

  SharedWorkingSetList = MiGetSharedWorkingSetList((__int64)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12]);
  v3 = 1LL;
  v4 = SharedWorkingSetList[1];
  if ( v4 <= 1 )
    return 0LL;
  v5 = *((unsigned int *)SharedWorkingSetList + 8);
  v6 = (__int64 *)(v5 + SharedWorkingSetList[10]);
  while ( 1 )
  {
    v7 = *v6;
    v8 = (*v6 & 0x800000000000LL) != 0 ? v7 | 0xFFFF000000000000uLL : v7 & 0xFFFFFFFFFFFFLL;
    if ( v8 >= v2 && v8 <= v1 )
      break;
    ++v3;
    v6 = (__int64 *)((char *)v6 + v5);
    if ( v3 >= v4 )
      return 0LL;
  }
  return 1LL;
}
