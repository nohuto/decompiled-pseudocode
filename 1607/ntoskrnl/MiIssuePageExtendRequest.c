/*
 * XREFs of MiIssuePageExtendRequest @ 0x1401EE7B4
 * Callers:
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MmResourcesAvailable @ 0x14007E300 (MmResourcesAvailable.c)
 *     MiPageFileNoFreeSpace @ 0x1401EE9E8 (MiPageFileNoFreeSpace.c)
 *     MiCreatePagingFile @ 0x140568764 (MiCreatePagingFile.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x1406633A8 (MiExtendWorkingSetSwapPagefile.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     MiQueuePageFileExtension @ 0x1401EEB64 (MiQueuePageFileExtension.c)
 */

__int64 __fastcall MiIssuePageExtendRequest(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx
  int v8; // r10d
  int v10; // r12d
  volatile signed __int32 *v11; // rdi
  unsigned int v12; // ecx
  LARGE_INTEGER *Timeout; // rsi
  unsigned int v14; // r9d
  char v15; // al
  __int64 v16; // r11
  KIRQL v17; // al
  __int64 v18; // rcx
  __int64 v19; // r8
  volatile signed __int32 **v20; // rdx
  __int64 v21; // [rsp+30h] [rbp-29h] BYREF
  __int16 v22; // [rsp+60h] [rbp+7h]
  char v23; // [rsp+62h] [rbp+9h]
  int v24; // [rsp+64h] [rbp+Bh]
  _QWORD v25[2]; // [rsp+68h] [rbp+Fh] BYREF
  int v26; // [rsp+78h] [rbp+1Fh]
  char v27; // [rsp+7Ch] [rbp+23h]
  char v28; // [rsp+7Fh] [rbp+26h]

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v8 = a3 & 8;
  if ( (a3 & 8) != 0 && !*(_BYTE *)(a1 + 1521) )
    return 0LL;
  v10 = a3 & 2;
  if ( (a3 & 2) != 0 )
  {
    v11 = (volatile signed __int32 *)(a1 + 1272);
    if ( (a3 & 8) == 0 )
      v11 = (volatile signed __int32 *)(a1 + 352);
    if ( _InterlockedCompareExchange(v11 + 18, 1, 0) )
      return 0LL;
    a2 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( (a3 & 4) != 0 )
      *((_BYTE *)v11 + 79) |= 1u;
    else
      *((_BYTE *)v11 + 79) &= ~1u;
    v12 = 0;
    goto LABEL_12;
  }
  if ( (void (__fastcall *)(int *))CurrentThread[1].ApcState.ApcListHead[1].Flink == MiDereferenceSegmentThread
    || KeGetCurrentIrql() >= 2u )
  {
    return 0LL;
  }
  if ( (a3 & 8) != 0 )
    a2 = (a2 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v14 = *(_DWORD *)(a1 + 6296);
  v11 = (volatile signed __int32 *)&v21;
  v12 = 1;
  v26 = 1;
  v21 = 0LL;
  v27 = a4;
  if ( (a3 & 1) != 0 )
    v15 = v28 & 0xE8 | 2;
  else
    v15 = v28 & 0xE8;
  v28 = v15;
  v25[1] = v25;
  v25[0] = v25;
  v22 = 0;
  v23 = 6;
  v24 = 0;
  if ( (a3 & 8) != 0 )
  {
    Timeout = (LARGE_INTEGER *)&MiOneSecond;
  }
  else
  {
    if ( a4 < v14 )
    {
LABEL_12:
      Timeout = 0LL;
      goto LABEL_29;
    }
    Timeout = (LARGE_INTEGER *)&MiOneSecond;
    a3 = 0LL;
    if ( v14 )
    {
      v16 = a1 + 6304;
      do
      {
        if ( (*(_BYTE *)(*(_QWORD *)v16 + 204LL) & 0x50) == 0 && **(_QWORD **)v16 < *(_QWORD *)(*(_QWORD *)v16 + 8LL) )
          break;
        a3 = (unsigned int)(a3 + 1);
        v16 += 8LL;
      }
      while ( (unsigned int)a3 < v14 );
    }
    if ( (_DWORD)a3 == v14 )
      return 0LL;
  }
LABEL_29:
  if ( v8 )
    *((_BYTE *)v11 + 79) |= 8u;
  else
    *((_BYTE *)v11 + 79) &= ~8u;
  *((_QWORD *)v11 + 4) = a2;
  LOBYTE(a3) = 17;
  *((_QWORD *)v11 + 5) = 0LL;
  *((_QWORD *)v11 + 3) = a1;
  *((_QWORD *)v11 + 10) = 0LL;
  MiQueuePageFileExtension(v11, v12, a3);
  if ( v10 )
    return 0LL;
  if ( KeWaitForSingleObject((PVOID)(v11 + 12), Executive, 0, 0, Timeout) == 258 )
  {
    v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1664));
    if ( !*((_DWORD *)v11 + 13) )
    {
      v18 = *((_QWORD *)v11 + 10);
      if ( v18 )
      {
        *(_QWORD *)(v18 + 80) = 0LL;
      }
      else
      {
        v19 = *((_QWORD *)v11 + 1);
        v20 = (volatile signed __int32 **)*((_QWORD *)v11 + 2);
        if ( *(volatile signed __int32 **)(v19 + 8) != v11 + 2 || *v20 != v11 + 2 )
          __fastfail(3u);
        *v20 = (volatile signed __int32 *)v19;
        *(_QWORD *)(v19 + 8) = v20;
      }
      *((_QWORD *)v11 + 5) = 0LL;
    }
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1664), v17);
  }
  LOBYTE(v5) = *((_QWORD *)v11 + 5) != 0LL;
  return v5;
}
