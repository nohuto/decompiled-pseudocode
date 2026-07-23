/*
 * XREFs of SepGetLowBoxHandlesEntry @ 0x140474800
 * Callers:
 *     SepSetTokenLowboxHandles @ 0x14007F600 (SepSetTokenLowboxHandles.c)
 * Callees:
 *     RtlInsertEntryHashTable @ 0x14007D02C (RtlInsertEntryHashTable.c)
 *     SepFindMatchingLowBoxHandlesEntry @ 0x14007FAD8 (SepFindMatchingLowBoxHandlesEntry.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlCopySid @ 0x14041154C (RtlCopySid.c)
 */

__int64 __fastcall SepGetLowBoxHandlesEntry(__int64 a1, unsigned __int8 *a2, _QWORD *a3)
{
  _RTL_DYNAMIC_HASH_TABLE *v3; // r12
  unsigned int v6; // edi
  unsigned int v7; // ebp
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rax
  ULONG_PTR v11; // r8
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_RTL_DYNAMIC_HASH_TABLE **)(a1 + 8);
  SepFindMatchingLowBoxHandlesEntry(v3, a2, &v13);
  v6 = 0;
  if ( v13 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)&v13[1]) <= 1 )
      __fastfail(0xEu);
    *a3 = v13;
    return 0LL;
  }
  else
  {
    v7 = (4 * a2[1] + 67) & 0xFFFFFFFC;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7, 0x734C6553u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[4] = PoolWithTag + 7;
      RtlCopySid(v7 - 56, PoolWithTag + 7, a2);
      v9[3] = 1LL;
      v9[6] = 0LL;
      *((_DWORD *)v9 + 10) = 0;
      v10 = (unsigned int)a2[1] - 1;
      v11 = *(unsigned int *)&a2[4 * v10 + 8];
      if ( !*(_DWORD *)&a2[4 * v10 + 8] )
        v11 = 1LL;
      if ( RtlInsertEntryHashTable(v3, (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v9, v11, 0LL) )
      {
        *a3 = v9;
      }
      else
      {
        ExFreePoolWithTag(v9, 0);
        return (unsigned int)-1073741670;
      }
      return v6;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
