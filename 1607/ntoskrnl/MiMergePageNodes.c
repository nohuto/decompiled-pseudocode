/*
 * XREFs of MiMergePageNodes @ 0x1401F1CB8
 * Callers:
 *     MiDeletePartitionResources @ 0x1401F11FC (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x1401F19A0 (MiInsertPartitionPages.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140026F30 (RtlAvlInsertNodeEx.c)
 *     RtlMergeBitMapsEx @ 0x140212F00 (RtlMergeBitMapsEx.c)
 */

__int64 __fastcall MiMergePageNodes(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // r10
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax

  v2 = (unsigned __int64 *)(a1 + 56);
  LOBYTE(v3) = 0;
  v4 = *(_QWORD **)(a1 + 56);
  if ( !v4 )
  {
LABEL_13:
    RtlAvlInsertNodeEx(v2, (unsigned __int64)v4, (bool)v3, a2);
    return 0LL;
  }
  v6 = *(_QWORD *)(a2 + 24) & 0x7FFFFFFFFFFFFFFFLL;
  while ( 1 )
  {
    v7 = v4[3] & 0x7FFFFFFFFFFFFFFFLL;
    if ( v6 < v7 )
    {
      v3 = (_QWORD *)*v4;
      if ( !*v4 )
        goto LABEL_13;
      goto LABEL_8;
    }
    if ( v6 <= v7 )
      break;
    v3 = (_QWORD *)v4[1];
    if ( !v3 )
    {
      LOBYTE(v3) = 1;
      goto LABEL_13;
    }
LABEL_8:
    v4 = v3;
  }
  RtlMergeBitMapsEx(v4 + 4, a2 + 32);
  if ( *(__int64 *)(a2 + 24) >= 0 || (v4[3] & 0x8000000000000000uLL) == 0 )
    v4[3] &= ~0x8000000000000000uLL;
  return 1LL;
}
