/*
 * XREFs of RtlDestroyAtomTable @ 0x14045F99C
 * Callers:
 *     RtlDereferenceAtomTable @ 0x14009A298 (RtlDereferenceAtomTable.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     RtlpLockAtomTable @ 0x1403F6CFC (RtlpLockAtomTable.c)
 *     RtlpUnlockAtomTable @ 0x14045FF90 (RtlpUnlockAtomTable.c)
 *     RtlpFreeAtom @ 0x1404603BC (RtlpFreeAtom.c)
 *     ExDestroyHandleTable @ 0x1404AE2B0 (ExDestroyHandleTable.c)
 */

NTSTATUS __stdcall RtlDestroyAtomTable(PRTL_ATOM_TABLE AtomTable)
{
  unsigned int v3; // ebp
  _RTL_ATOM_TABLE_ENTRY **i; // r14
  _RTL_ATOM_TABLE_ENTRY *v5; // rdi
  _RTL_ATOM_TABLE_ENTRY *v6; // r15
  _RTL_ATOM_TABLE_REFERENCE *p_Reference; // rsi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v9; // rax

  if ( _InterlockedExchangeAdd(&AtomTable->ReferenceCount, 0xFFFFFFFF) != 1 )
    return 0;
  if ( RtlpLockAtomTable(AtomTable) )
  {
    v3 = 0;
    for ( i = AtomTable->Buckets; v3 < AtomTable->NumberOfBuckets; ++v3 )
    {
      v5 = *i;
      *i++ = 0LL;
      while ( 1 )
      {
        v6 = v5;
        if ( !v5 )
          break;
        v5 = v5->HashLink;
        p_Reference = &v6->Reference;
        v6->HashLink = 0LL;
        while ( (_RTL_ATOM_TABLE_REFERENCE *)p_Reference->LowBoxList.Flink != p_Reference )
        {
          Flink = p_Reference->LowBoxList.Flink;
          v9 = p_Reference->LowBoxList.Flink->Flink;
          if ( (_RTL_ATOM_TABLE_REFERENCE *)p_Reference->LowBoxList.Flink->Blink != p_Reference || v9->Blink != Flink )
            __fastfail(3u);
          p_Reference->LowBoxList.Flink = v9;
          v9->Blink = &p_Reference->LowBoxList;
          RtlpFreeAtom(Flink);
        }
        RtlpFreeAtom(v6);
      }
    }
    AtomTable->Signature = 0;
    RtlpUnlockAtomTable(AtomTable);
    ExDestroyHandleTable(AtomTable->ExHandleTable);
    memset(AtomTable, 0, sizeof(struct _RTL_ATOM_TABLE));
    RtlpFreeAtom(AtomTable);
    return 0;
  }
  return -1073741811;
}
