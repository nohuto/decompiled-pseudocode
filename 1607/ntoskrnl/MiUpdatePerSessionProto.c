/*
 * XREFs of MiUpdatePerSessionProto @ 0x1401F5170
 * Callers:
 *     MiCreatePerSessionProtos @ 0x140661C44 (MiCreatePerSessionProtos.c)
 *     MiDereferenceSubsectionProtos @ 0x140661EB8 (MiDereferenceSubsectionProtos.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140026F30 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x140028080 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiUpdatePerSessionProto(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  volatile LONG *v4; // rbp
  KIRQL v8; // al
  bool v9; // cl
  KIRQL v10; // r14
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax

  v4 = (volatile LONG *)(a1 + 72);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v9 = 0;
  v10 = v8;
  if ( !a4 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)(a2 + 24), a3);
    goto LABEL_11;
  }
  v11 = *(_QWORD *)(a2 + 24);
  if ( !v11 )
    goto LABEL_9;
  while ( *(_DWORD *)(a3 + 24) < *(_DWORD *)(v11 + 24) )
  {
    v12 = *(_QWORD *)v11;
    if ( !*(_QWORD *)v11 )
      goto LABEL_9;
LABEL_7:
    v11 = v12;
  }
  v12 = *(_QWORD *)(v11 + 8);
  if ( v12 )
    goto LABEL_7;
  v9 = 1;
LABEL_9:
  RtlAvlInsertNodeEx((unsigned __int64 *)(a2 + 24), v11, v9, a3);
LABEL_11:
  ExReleaseSpinLockExclusive(v4, v10);
}
