/*
 * XREFs of KiAbEntryUpdateOwnerTreePosition @ 0x1401203A0
 * Callers:
 *     KiAbProcessContextSwitch @ 0x1400A1D30 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x1400F3A10 (KiAbProcessThreadLocks.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1400F6290 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x1400F70F0 (RtlRbInsertNodeEx.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14012041C (KiAbOwnerComputeCpuPriorityKey.c)
 */

void __fastcall KiAbEntryUpdateOwnerTreePosition(unsigned __int64 a1, __int64 a2)
{
  char v4; // al
  unsigned __int64 v5; // rdx
  bool v6; // al
  unsigned __int64 v7; // rcx

  v4 = KiAbOwnerComputeCpuPriorityKey(a1, a2);
  if ( *(_BYTE *)(a1 + 48) == v4 )
    return;
  *(_BYTE *)(a1 + 48) = v4;
  RtlRbRemoveNode((unsigned __int64 *)(a2 + 48), (unsigned __int64 *)a1);
  v5 = *(_QWORD *)(a2 + 48);
  v6 = 0;
  if ( !v5 )
    goto LABEL_3;
  while ( *(_BYTE *)(v5 + 48) > *(_BYTE *)(a1 + 48) )
  {
    v7 = *(_QWORD *)v5;
    if ( !*(_QWORD *)v5 )
      goto LABEL_3;
LABEL_6:
    v5 = v7;
  }
  v7 = *(_QWORD *)(v5 + 8);
  if ( v7 )
    goto LABEL_6;
  v6 = 1;
LABEL_3:
  RtlRbInsertNodeEx((unsigned __int64 *)(a2 + 48), v5, v6, a1);
}
