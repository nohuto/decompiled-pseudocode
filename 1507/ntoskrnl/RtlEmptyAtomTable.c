/*
 * XREFs of RtlEmptyAtomTable @ 0x1406CBC90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpUnlockAtomTable @ 0x1404216C8 (RtlpUnlockAtomTable.c)
 *     RtlpLockAtomTable @ 0x140423F20 (RtlpLockAtomTable.c)
 *     RtlpFreeAtom @ 0x140504D9C (RtlpFreeAtom.c)
 *     RtlpFreeHandleForAtom @ 0x140504DC4 (RtlpFreeHandleForAtom.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall RtlEmptyAtomTable(PRTL_ATOM_TABLE AtomTable, BOOLEAN DeletePinned)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v7; // ebp
  _RTL_ATOM_TABLE_ENTRY **i; // r15
  __int64 *v9; // r14
  __int64 v10; // rdx
  __int64 **v11; // rsi
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbx

  if ( !RtlpLockAtomTable(AtomTable, DeletePinned, v2, v3) )
    return -1073741811;
  v7 = 0;
  for ( i = AtomTable->Buckets; v7 < AtomTable->NumberOfBuckets; ++v7 )
  {
    v9 = (__int64 *)i++;
    while ( 1 )
    {
      v14 = *v9;
      if ( !*v9 )
        break;
      if ( DeletePinned || (*(_BYTE *)(v14 + 38) & 1) == 0 )
      {
        v10 = *v9;
        *v9 = *(_QWORD *)v14;
        *(_QWORD *)v14 = 0LL;
        RtlpFreeHandleForAtom((__int64)AtomTable, v10);
        v11 = (__int64 **)(v14 + 16);
        while ( *v11 != (__int64 *)v11 )
        {
          v12 = *v11;
          v13 = **v11;
          if ( (__int64 **)(*v11)[1] != v11 || *(__int64 **)(v13 + 8) != v12 )
            __fastfail(3u);
          *v11 = (__int64 *)v13;
          *(_QWORD *)(v13 + 8) = v11;
          RtlpFreeAtom((__int64)v12);
        }
        RtlpFreeAtom(v14);
      }
      else
      {
        v9 = (__int64 *)*v9;
      }
    }
  }
  RtlpUnlockAtomTable((__int64)AtomTable);
  return 0;
}
