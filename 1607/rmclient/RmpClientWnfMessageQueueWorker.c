/*
 * XREFs of RmpClientWnfMessageQueueWorker @ 0x18000D2F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpClientWnfMessageQueueWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int **v4; // rbx
  unsigned int *v5; // rdi
  __int64 v6; // rax

  v2 = a2 + 32;
  RtlAcquireSRWLockExclusive(a2 + 32);
  v4 = (unsigned int **)(a2 + 16);
  while ( *v4 != (unsigned int *)v4 )
  {
    v5 = *v4;
    v6 = *(_QWORD *)*v4;
    if ( *((unsigned int ***)*v4 + 1) != v4 || *(unsigned int **)(v6 + 8) != v5 )
      __fastfail(3u);
    *v4 = (unsigned int *)v6;
    *(_QWORD *)(v6 + 8) = v4;
    RtlReleaseSRWLockExclusive(v2);
    (*(void (__fastcall **)(_QWORD, unsigned int *, _QWORD))(a2 + 40))(*(_QWORD *)(a2 + 8), v5 + 5, v5[4]);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    RtlAcquireSRWLockExclusive(v2);
  }
  *(_BYTE *)(a2 + 64) = 0;
  return RtlReleaseSRWLockExclusive(v2);
}
