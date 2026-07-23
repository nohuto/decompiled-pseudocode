/*
 * XREFs of FsRtlAddEntry @ 0x14008CA14
 * Callers:
 *     FsRtlRemoveBaseMcbEntry @ 0x14008BF7C (FsRtlRemoveBaseMcbEntry.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x14008C410 (FsRtlAddBaseMcbEntryEx.c)
 *     FsRtlSplitBaseMcb @ 0x1401B8638 (FsRtlSplitBaseMcb.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

char __fastcall FsRtlAddEntry(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // r15
  unsigned int v5; // ecx
  unsigned int v7; // ecx
  unsigned int v9; // edi
  unsigned __int64 v10; // rax
  PVOID PoolWithTag; // rax
  PVOID v12; // rsi

  v4 = a2;
  v5 = *(_DWORD *)a1;
  if ( a3 + *(_DWORD *)(a1 + 4) <= v5 )
  {
LABEL_2:
    v7 = *(_DWORD *)(a1 + 4);
    if ( (unsigned int)v4 < v7 )
      memmove(
        (void *)(*(_QWORD *)(a1 + 16) + 8LL * (unsigned int)(v4 + a3)),
        (const void *)(*(_QWORD *)(a1 + 16) + 8 * v4),
        8LL * (v7 - (unsigned int)v4));
    *(_DWORD *)(a1 + 4) += a3;
    return 1;
  }
  v9 = 2 * v5;
  if ( v5 >= 0x800 )
    v9 = v5 + 2048;
  v10 = 8LL * v9;
  if ( v10 <= 0xFFFFFFFF )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)*(unsigned __int16 *)(a1 + 8), (unsigned int)v10, 0x74725346u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *(const void **)(a1 + 16), 8LL * *(unsigned int *)(a1 + 4));
      if ( *(_WORD *)(a1 + 8) == 1 && *(_DWORD *)a1 == 15 )
        ExFreeToNPagedLookasideList(&FsRtlFirstMappingLookasideList, *(PVOID *)(a1 + 16));
      else
        ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
      *(_QWORD *)(a1 + 16) = v12;
      *(_DWORD *)a1 = v9;
      goto LABEL_2;
    }
  }
  if ( (*(_BYTE *)(a1 + 10) & 1) != 0 )
    RtlRaiseStatus(-1073741670);
  return 0;
}
