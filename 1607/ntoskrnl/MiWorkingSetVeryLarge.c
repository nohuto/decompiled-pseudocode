/*
 * XREFs of MiWorkingSetVeryLarge @ 0x1401E2AAC
 * Callers:
 *     MiDoReplacement @ 0x1401E282C (MiDoReplacement.c)
 *     MiOrderTrimList @ 0x1401E9B8C (MiOrderTrimList.c)
 * Callees:
 *     MiGetSharedWorkingSetList @ 0x140047070 (MiGetSharedWorkingSetList.c)
 *     MiPartitionIdToPointer @ 0x1400680A0 (MiPartitionIdToPointer.c)
 *     MiGetStandbyRepurposed @ 0x1400BF4A8 (MiGetStandbyRepurposed.c)
 */

_BOOL8 __fastcall MiWorkingSetVeryLarge(__int64 a1, int a2)
{
  ULONG_PTR v2; // r9
  ULONG_PTR v3; // r8
  int *v5; // rax
  int v6; // r11d
  __int64 v7; // r8
  __int64 v8; // r9
  int *v9; // r10
  int StandbyRepurposed; // eax

  v2 = *(_QWORD *)(a1 + 128);
  if ( a2 == 1 )
    v3 = MiGetSharedWorkingSetList(a1)[1];
  else
    v3 = *(_QWORD *)(a1 + 104);
  if ( v2 <= v3 )
    return 0LL;
  v5 = MiPartitionIdToPointer(*(_WORD *)(a1 + 164));
  v9 = v5;
  if ( v8 - v7 < (unsigned __int64)(3LL * (*((_QWORD *)v5 + 786) >> 2)) )
    return 0LL;
  if ( v6 == 1
    && (StandbyRepurposed = MiGetStandbyRepurposed((__int64)v5, 1u),
        StandbyRepurposed == *(_DWORD *)(*((_QWORD *)v9 + 781) + 44LL)) )
  {
    return 0LL;
  }
  else
  {
    return *((_QWORD *)v9 + 808) < (unsigned __int64)(4LL * *(_QWORD *)(*((_QWORD *)v9 + 781) + 2400LL));
  }
}
