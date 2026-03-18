/*
 * XREFs of RtlDestroyAtomTable @ 0x14052836C
 * Callers:
 *     RtlDereferenceAtomTable @ 0x14010E660 (RtlDereferenceAtomTable.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     RtlpUnlockAtomTable @ 0x1404216C8 (RtlpUnlockAtomTable.c)
 *     RtlpLockAtomTable @ 0x140423F20 (RtlpLockAtomTable.c)
 *     RtlpFreeAtom @ 0x140504D9C (RtlpFreeAtom.c)
 *     ExDestroyHandleTable @ 0x140508CB0 (ExDestroyHandleTable.c)
 */

NTSTATUS __stdcall RtlDestroyAtomTable(PRTL_ATOM_TABLE AtomTable)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v5; // ebp
  _RTL_ATOM_TABLE_ENTRY **i; // r14
  _RTL_ATOM_TABLE_ENTRY *v7; // rdi
  _RTL_ATOM_TABLE_ENTRY *v8; // r15
  _RTL_ATOM_TABLE_REFERENCE *p_Reference; // rsi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v12; // rax

  if ( _InterlockedExchangeAdd(&AtomTable->ReferenceCount, 0xFFFFFFFF) != 1 )
    return 0;
  if ( RtlpLockAtomTable(AtomTable, v1, v2, v3) )
  {
    v5 = 0;
    for ( i = AtomTable->Buckets; v5 < AtomTable->NumberOfBuckets; ++v5 )
    {
      v7 = *i;
      *i++ = 0LL;
      while ( 1 )
      {
        v8 = v7;
        if ( !v7 )
          break;
        v7 = v7->HashLink;
        p_Reference = &v8->Reference;
        v8->HashLink = 0LL;
        while ( (_RTL_ATOM_TABLE_REFERENCE *)p_Reference->LowBoxList.Flink != p_Reference )
        {
          Flink = p_Reference->LowBoxList.Flink;
          v12 = p_Reference->LowBoxList.Flink->Flink;
          if ( (_RTL_ATOM_TABLE_REFERENCE *)p_Reference->LowBoxList.Flink->Blink != p_Reference || v12->Blink != Flink )
            __fastfail(3u);
          p_Reference->LowBoxList.Flink = v12;
          v12->Blink = &p_Reference->LowBoxList;
          RtlpFreeAtom((__int64)Flink);
        }
        RtlpFreeAtom((__int64)v8);
      }
    }
    AtomTable->Signature = 0;
    RtlpUnlockAtomTable((__int64)AtomTable);
    ExDestroyHandleTable(AtomTable->ExHandleTable);
    memset(AtomTable, 0, sizeof(struct _RTL_ATOM_TABLE));
    RtlpFreeAtom((__int64)AtomTable);
    return 0;
  }
  return -1073741811;
}
