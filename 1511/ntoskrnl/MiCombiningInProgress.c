/*
 * XREFs of MiCombiningInProgress @ 0x140127954
 * Callers:
 *     MiCombineIdenticalPages @ 0x14050E19C (MiCombineIdenticalPages.c)
 * Callees:
 *     KeFlushTb @ 0x1400078BC (KeFlushTb.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x14000C920 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x14006BDC0 (RtlAvlRemoveNode.c)
 *     HvlFlushTbAllPartitions @ 0x1400E8120 (HvlFlushTbAllPartitions.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

void __fastcall MiCombiningInProgress(__int64 *a1, _QWORD *a2, int a3)
{
  __int64 v3; // rbp
  KIRQL v7; // r14
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v9; // rax
  bool v10; // al
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  _QWORD *v16; // rcx

  v3 = *a1;
  v7 = ExAcquireSpinLockExclusive(&dword_1402FEA40);
  if ( a3 == 1 )
  {
    ++*((_DWORD *)a1 + 16);
    ++dword_1402FEA44;
    CurrentThread = KeGetCurrentThread();
    memset(a2, 0, 0x50uLL);
    a2[5] = CurrentThread;
    v9 = *(_QWORD *)(v3 + 5232);
    *a2 = v9;
    a2[1] = v3 + 5232;
    if ( *(_QWORD *)(v9 + 8) != v3 + 5232 )
      __fastfail(3u);
    *(_QWORD *)(v9 + 8) = a2;
    v10 = 0;
    *(_QWORD *)(v3 + 5232) = a2;
    v11 = (_QWORD *)qword_1402FEA48;
    if ( qword_1402FEA48 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)CurrentThread >= v11[3] )
        {
          v16 = (_QWORD *)v11[1];
          if ( !v16 )
          {
            v10 = 1;
            break;
          }
        }
        else
        {
          v16 = (_QWORD *)*v11;
          if ( !*v11 )
            break;
        }
        v11 = v16;
      }
    }
    RtlAvlInsertNodeEx((unsigned __int64 *)&qword_1402FEA48, (unsigned __int64)v11, v10, (unsigned __int64)(a2 + 2));
  }
  else
  {
    v12 = *a2;
    v13 = (_QWORD *)a2[1];
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v13 != a2 )
      __fastfail(3u);
    *v13 = v12;
    *(_QWORD *)(v12 + 8) = v13;
    RtlAvlRemoveNode((unsigned __int64 *)&qword_1402FEA48, (__int64)(a2 + 2));
    --*((_DWORD *)a1 + 16);
    v15 = dword_1402FEA44;
    if ( dword_1402FEA44 == 1 )
    {
      ++dword_1402FE710;
      HvlFlushTbAllPartitions(v14);
      KeFlushTb(3u, 2u);
      v15 = dword_1402FEA44;
    }
    dword_1402FEA44 = v15 - 1;
  }
  ExReleaseSpinLockExclusive(&dword_1402FEA40, v7);
}
