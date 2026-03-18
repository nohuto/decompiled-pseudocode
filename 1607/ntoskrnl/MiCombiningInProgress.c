/*
 * XREFs of MiCombiningInProgress @ 0x1401F8634
 * Callers:
 *     MiCombineIdenticalPages @ 0x140663BA4 (MiCombineIdenticalPages.c)
 * Callees:
 *     MiFlushEntireTbDueToAttributeChange @ 0x14001DD98 (MiFlushEntireTbDueToAttributeChange.c)
 *     RtlAvlInsertNodeEx @ 0x1400273B0 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x140028500 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     memset @ 0x1401715C0 (memset.c)
 */

void __fastcall MiCombiningInProgress(__int64 *a1, _QWORD *a2, int a3)
{
  __int64 v3; // rbp
  KIRQL v7; // r14
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v9; // rcx
  __int64 v10; // rax
  bool v11; // al
  _QWORD *v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax

  v3 = *a1;
  v7 = ExAcquireSpinLockExclusive(&dword_140326E00);
  if ( a3 == 1 )
  {
    ++*((_DWORD *)a1 + 16);
    ++dword_140326E04;
    CurrentThread = KeGetCurrentThread();
    memset(a2, 0, 0x50uLL);
    v9 = (_QWORD *)(v3 + 5864);
    a2[5] = CurrentThread;
    v10 = *(_QWORD *)(v3 + 5864);
    if ( *(_QWORD *)(v10 + 8) != v3 + 5864 )
      __fastfail(3u);
    *a2 = v10;
    a2[1] = v9;
    *(_QWORD *)(v10 + 8) = a2;
    v11 = 0;
    *v9 = a2;
    v12 = (_QWORD *)qword_140326E08;
    if ( qword_140326E08 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)CurrentThread >= v12[3] )
        {
          v13 = (_QWORD *)v12[1];
          if ( !v13 )
          {
            v11 = 1;
            break;
          }
        }
        else
        {
          v13 = (_QWORD *)*v12;
          if ( !*v12 )
            break;
        }
        v12 = v13;
      }
    }
    RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140326E08, (unsigned __int64)v12, v11, (unsigned __int64)(a2 + 2));
  }
  else
  {
    v14 = *a2;
    v15 = (_QWORD *)a2[1];
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v15 != a2 )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140326E08, (__int64)(a2 + 2));
    --*((_DWORD *)a1 + 16);
    v20 = dword_140326E04;
    if ( dword_140326E04 == 1 )
    {
      MiFlushEntireTbDueToAttributeChange(v17, v16, v18, v19);
      v20 = dword_140326E04;
    }
    dword_140326E04 = v20 - 1;
  }
  ExReleaseSpinLockExclusive(&dword_140326E00, v7);
}
