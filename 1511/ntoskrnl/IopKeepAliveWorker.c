/*
 * XREFs of IopKeepAliveWorker @ 0x1401BC0E0
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PspAdjustKeepAliveCountProcess @ 0x14063F054 (PspAdjustKeepAliveCountProcess.c)
 */

void IopKeepAliveWorker()
{
  KIRQL v0; // al
  KIRQL v1; // si
  PVOID v2; // rbx
  int v3; // edi
  PVOID v4; // rcx
  PVOID *v5; // rax
  bool v6; // zf
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rcx
  int v11; // eax
  KIRQL v12; // dl

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_1402FB6D0);
  qword_1402FB700 = (__int64)KeGetCurrentThread();
LABEL_2:
  v1 = v0;
  while ( 1 )
  {
    v2 = qword_1402FB6C0;
    if ( qword_1402FB6C0 == &qword_1402FB6C0 )
      break;
    v3 = *((_DWORD *)qword_1402FB6C0 + 8);
    *((_DWORD *)qword_1402FB6C0 + 8) = 0;
    if ( v3 )
    {
      KeReleaseSpinLock(&qword_1402FB6D0, v1);
      if ( v3 > 0 )
      {
        do
        {
          ObfReferenceObjectWithTag(*((PVOID *)v2 + 3), 0x746C6644u);
          LOBYTE(v8) = *((_BYTE *)v2 + 18);
          PspAdjustKeepAliveCountProcess(*((_QWORD *)v2 + 3), 1LL, *((_QWORD *)v2 + 5), v8);
          --v3;
        }
        while ( v3 );
        goto LABEL_23;
      }
      if ( v3 != -1 )
      {
        v9 = (unsigned int)(-1 - v3);
        do
        {
          LOBYTE(v7) = *((_BYTE *)v2 + 18);
          PspAdjustKeepAliveCountProcess(*((_QWORD *)v2 + 3), 0xFFFFFFFFLL, *((_QWORD *)v2 + 5), v7);
          ObfDereferenceObjectWithTag(*((PVOID *)v2 + 3), 0x746C6644u);
          --v9;
        }
        while ( v9 );
      }
      LOBYTE(v7) = *((_BYTE *)v2 + 18);
      v10 = *((_QWORD *)v2 + 3);
      if ( (_BYTE)v7 )
        v11 = *(_DWORD *)(v10 + 1808) & 0x7FFFFFFF;
      else
        v11 = *(_DWORD *)(v10 + 1812);
      if ( v11 == 1 )
      {
        v12 = KeAcquireSpinLockRaiseToDpc(&qword_1402FB6D0);
        if ( MEMORY[0xFFFFF78000000014] >= *((_QWORD *)v2 + 6) )
        {
          KeReleaseSpinLock(&qword_1402FB6D0, v12);
          LOBYTE(v7) = *((_BYTE *)v2 + 18);
          v10 = *((_QWORD *)v2 + 3);
          goto LABEL_21;
        }
        --*((_DWORD *)v2 + 8);
        KeReleaseSpinLock(&qword_1402FB6D0, v12);
        KeDelayExecutionThread(0, 1u, (PLARGE_INTEGER)v2 + 6);
      }
      else
      {
LABEL_21:
        PspAdjustKeepAliveCountProcess(v10, 0xFFFFFFFFLL, *((_QWORD *)v2 + 5), v7);
        ObfDereferenceObjectWithTag(*((PVOID *)v2 + 3), 0x746C6644u);
      }
LABEL_23:
      v0 = KeAcquireSpinLockRaiseToDpc(&qword_1402FB6D0);
      goto LABEL_2;
    }
    v4 = *(PVOID *)v2;
    v5 = (PVOID *)*((_QWORD *)v2 + 1);
    if ( *(PVOID *)(*(_QWORD *)v2 + 8LL) != v2 || *v5 != v2 )
      __fastfail(3u);
    *v5 = v4;
    *((_QWORD *)v4 + 1) = v5;
    v6 = *((_BYTE *)v2 + 17) == 1;
    *((_BYTE *)v2 + 16) = 0;
    if ( v6 )
      ExFreePoolWithTag(v2, 0);
  }
  qword_1402FB700 = 0LL;
  byte_1402FB6F8 = 0;
  KeReleaseSpinLock(&qword_1402FB6D0, v1);
}
