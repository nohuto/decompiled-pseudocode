/*
 * XREFs of SepGetLowBoxHandlesEntry @ 0x1404106F0
 * Callers:
 *     SepSetTokenLowboxHandles @ 0x140007984 (SepSetTokenLowboxHandles.c)
 * Callees:
 *     SepFindMatchingLowBoxHandlesEntry @ 0x140007BB8 (SepFindMatchingLowBoxHandlesEntry.c)
 *     RtlInsertEntryHashTable @ 0x14002D070 (RtlInsertEntryHashTable.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlCopySid @ 0x140438C64 (RtlCopySid.c)
 */

__int64 __fastcall SepGetLowBoxHandlesEntry(__int64 a1, unsigned __int8 *a2, _QWORD *a3)
{
  _RTL_DYNAMIC_HASH_TABLE *v3; // r12
  unsigned int v6; // edi
  unsigned int v8; // ebp
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rax
  ULONG_PTR v12; // r8
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
    v8 = (4 * a2[1] + 67) & 0xFFFFFFFC;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v8, 0x734C6553u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[4] = PoolWithTag + 7;
      RtlCopySid(v8 - 56, PoolWithTag + 7, a2);
      v10[3] = 1LL;
      v10[6] = 0LL;
      *((_DWORD *)v10 + 10) = 0;
      v11 = (unsigned int)a2[1] - 1;
      v12 = *(unsigned int *)&a2[4 * v11 + 8];
      if ( !*(_DWORD *)&a2[4 * v11 + 8] )
        v12 = 1LL;
      if ( RtlInsertEntryHashTable(v3, (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v10, v12, 0LL) )
      {
        *a3 = v10;
      }
      else
      {
        ExFreePoolWithTag(v10, 0);
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
