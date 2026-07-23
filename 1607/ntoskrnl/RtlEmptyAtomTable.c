/*
 * XREFs of RtlEmptyAtomTable @ 0x1406882B4
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLockAtomTable @ 0x140420E90 (RtlpLockAtomTable.c)
 *     RtlpUnlockAtomTable @ 0x14042A2C0 (RtlpUnlockAtomTable.c)
 *     RtlpFreeHandleForAtom @ 0x14051BA24 (RtlpFreeHandleForAtom.c)
 *     RtlpFreeAtom @ 0x14051C1D8 (RtlpFreeAtom.c)
 */

NTSTATUS __stdcall RtlEmptyAtomTable(PRTL_ATOM_TABLE AtomTable, BOOLEAN DeletePinned)
{
  unsigned int v5; // ebp
  _RTL_ATOM_TABLE_ENTRY **i; // r15
  __int64 *v7; // r14
  __int64 v8; // rdx
  __int64 **v9; // rsi
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx

  if ( !RtlpLockAtomTable(AtomTable) )
    return -1073741811;
  v5 = 0;
  for ( i = AtomTable->Buckets; v5 < AtomTable->NumberOfBuckets; ++v5 )
  {
    v7 = (__int64 *)i++;
    while ( 1 )
    {
      v12 = *v7;
      if ( !*v7 )
        break;
      if ( DeletePinned || (*(_BYTE *)(v12 + 38) & 1) == 0 )
      {
        v8 = *v7;
        *v7 = *(_QWORD *)v12;
        *(_QWORD *)v12 = 0LL;
        RtlpFreeHandleForAtom((__int64)AtomTable, v8);
        v9 = (__int64 **)(v12 + 16);
        while ( *v9 != (__int64 *)v9 )
        {
          v10 = *v9;
          v11 = **v9;
          if ( (__int64 **)(*v9)[1] != v9 || *(__int64 **)(v11 + 8) != v10 )
            __fastfail(3u);
          *v9 = (__int64 *)v11;
          *(_QWORD *)(v11 + 8) = v9;
          RtlpFreeAtom((__int64)v10);
        }
        RtlpFreeAtom(v12);
      }
      else
      {
        v7 = (__int64 *)*v7;
      }
    }
  }
  RtlpUnlockAtomTable((__int64)AtomTable);
  return 0;
}
