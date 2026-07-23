/*
 * XREFs of SepGetLowBoxNumberEntry @ 0x140411948
 * Callers:
 *     SepSetTokenLowboxNumber @ 0x140411728 (SepSetTokenLowboxNumber.c)
 * Callees:
 *     RtlEqualSid @ 0x140014CF0 (RtlEqualSid.c)
 *     RtlLookupEntryHashTable @ 0x140015E90 (RtlLookupEntryHashTable.c)
 *     RtlClearAllBits @ 0x14001B168 (RtlClearAllBits.c)
 *     RtlInsertEntryHashTable @ 0x14002D070 (RtlInsertEntryHashTable.c)
 *     RtlFindClearBitsAndSet @ 0x14002D488 (RtlFindClearBitsAndSet.c)
 *     RtlClearBits @ 0x140062740 (RtlClearBits.c)
 *     RtlSetBits @ 0x14008B810 (RtlSetBits.c)
 *     RtlNumberOfSetBits @ 0x1400EF6A0 (RtlNumberOfSetBits.c)
 *     RtlGetNextEntryHashTable @ 0x14010ED10 (RtlGetNextEntryHashTable.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlCopySid @ 0x140438C64 (RtlCopySid.c)
 */

__int64 __fastcall SepGetLowBoxNumberEntry(__int64 a1, unsigned __int8 *a2, PRTL_DYNAMIC_HASH_TABLE_ENTRY *a3)
{
  _RTL_BITMAP *v3; // r14
  _RTL_DYNAMIC_HASH_TABLE *v4; // r13
  unsigned int v6; // ebx
  ULONG_PTR v8; // rdx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY i; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v10; // rdi
  unsigned int v12; // esi
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *PoolWithTag; // rax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v14; // rdi
  ULONG ClearBitsAndSet; // esi
  ULONG v16; // esi
  __int64 v17; // rax
  ULONG_PTR v18; // r8
  ULONG v19; // esi
  unsigned int *v20; // r12
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-48h] BYREF

  v3 = (_RTL_BITMAP *)(a1 + 8);
  v4 = *(_RTL_DYNAMIC_HASH_TABLE **)(a1 + 24);
  v6 = 0;
  v8 = *(unsigned int *)&a2[4 * a2[1] + 4];
  if ( !v8 )
    v8 = 1LL;
  for ( i = RtlLookupEntryHashTable(v4, v8, &Context); ; i = RtlGetNextEntryHashTable(v4, &Context) )
  {
    v10 = i;
    if ( !i )
      break;
    if ( RtlEqualSid(a2, i[1].Linkage.Blink) )
      goto LABEL_6;
  }
  v10 = 0LL;
LABEL_6:
  if ( !v10 )
  {
    v12 = (4 * a2[1] + 67) & 0xFFFFFFFC;
    PoolWithTag = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)ExAllocatePoolWithTag(PagedPool, v12, 0x734C6553u);
    v14 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    PoolWithTag[1].Linkage.Blink = (struct _LIST_ENTRY *)&PoolWithTag[2].Linkage.Blink;
    RtlCopySid(v12 - 56, &PoolWithTag[2].Linkage.Blink, a2);
    ClearBitsAndSet = RtlFindClearBitsAndSet(v3, 1u, 0);
    if ( ClearBitsAndSet == -1 )
    {
      v19 = 2 * RtlNumberOfSetBits(v3);
      if ( v19 > 0x10000 )
        goto LABEL_24;
      v20 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned __int64)v19 >> 3, 0x734C6553u);
      if ( !v20 )
        goto LABEL_24;
      ExFreePoolWithTag(v3->Buffer, 0);
      v3->SizeOfBitMap = v19;
      v3->Buffer = v20;
      RtlClearAllBits(v3);
      RtlSetBits(v3, 0, v19 >> 1);
      ClearBitsAndSet = RtlFindClearBitsAndSet(v3, 1u, 0);
      if ( ClearBitsAndSet == -1 )
        goto LABEL_24;
    }
    if ( ClearBitsAndSet == 0xFFFF )
    {
LABEL_24:
      ExFreePoolWithTag(v14, 0);
    }
    else
    {
      v14[2].Linkage.Flink = 0LL;
      v16 = ClearBitsAndSet + 1;
      LODWORD(v14[1].Signature) = v16;
      v14[1].Linkage.Flink = (struct _LIST_ENTRY *)1;
      v17 = (unsigned int)a2[1] - 1;
      v18 = *(unsigned int *)&a2[4 * v17 + 8];
      if ( !*(_DWORD *)&a2[4 * v17 + 8] )
        v18 = 1LL;
      if ( RtlInsertEntryHashTable(v4, v14, v18, 0LL) )
      {
        *a3 = v14;
        return v6;
      }
      ExFreePoolWithTag(v14, 0);
      RtlClearBits(v3, 1u, v16 - 1);
    }
    return (unsigned int)-1073741670;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)&v10[1]) <= 1 )
    __fastfail(0xEu);
  *a3 = v10;
  return 0LL;
}
