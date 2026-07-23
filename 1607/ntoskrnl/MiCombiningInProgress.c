/*
 * XREFs of MiCombiningInProgress @ 0x1401F8460
 * Callers:
 *     MiCombineIdenticalPages @ 0x140663C88 (MiCombineIdenticalPages.c)
 * Callees:
 *     MiFlushEntireTbDueToAttributeChange @ 0x14001D918 (MiFlushEntireTbDueToAttributeChange.c)
 *     RtlAvlInsertNodeEx @ 0x140026F30 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x140028080 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     memset @ 0x140171AC0 (memset.c)
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
  v7 = ExAcquireSpinLockExclusive(&dword_140326E40);
  if ( a3 == 1 )
  {
    ++*((_DWORD *)a1 + 16);
    ++dword_140326E44;
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
    v12 = (_QWORD *)qword_140326E48;
    if ( qword_140326E48 )
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
    RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140326E48, (unsigned __int64)v12, v11, (unsigned __int64)(a2 + 2));
  }
  else
  {
    v14 = *a2;
    v15 = (_QWORD *)a2[1];
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v15 != a2 )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140326E48, (__int64)(a2 + 2));
    --*((_DWORD *)a1 + 16);
    v20 = dword_140326E44;
    if ( dword_140326E44 == 1 )
    {
      MiFlushEntireTbDueToAttributeChange(v17, v16, v18, v19);
      v20 = dword_140326E44;
    }
    dword_140326E44 = v20 - 1;
  }
  ExReleaseSpinLockExclusive(&dword_140326E40, v7);
}
