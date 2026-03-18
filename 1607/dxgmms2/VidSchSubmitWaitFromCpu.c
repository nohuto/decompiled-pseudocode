/*
 * XREFs of VidSchSubmitWaitFromCpu @ 0x1C000CA60
 * Callers:
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0059120 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000B590 (VidSchiUnwaitMonitoredFences.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ??_GVIDSCH_CPU_WAITER@@QEAAPEAXI@Z @ 0x1C001D168 (--_GVIDSCH_CPU_WAITER@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall VidSchSubmitWaitFromCpu(
        unsigned int a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        char a5,
        char a6,
        __int64 a7)
{
  unsigned __int64 v8; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v12; // rbx
  PVOID v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rbp
  char v16; // al
  __int64 v17; // r14
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v8 = a1;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x78uLL, 0x68536956u);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[4] = 0LL;
    *((_DWORD *)PoolWithTag + 26) = 0;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
    return 3221225495LL;
  if ( (unsigned int)v8 > 4 )
  {
    v14 = 0xFFFFFFFFFFFFFFFFuLL % v8;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v8 < 0x10 )
    {
LABEL_15:
      VIDSCH_CPU_WAITER::`scalar deleting destructor'((VIDSCH_CPU_WAITER *)v12, v14);
      return 3221225495LL;
    }
    v13 = ExAllocatePoolWithTag((POOL_TYPE)512, 16 * v8, 0x6E795356u);
  }
  else
  {
    v13 = v12 + 5;
  }
  v12[4] = v13;
  *((_DWORD *)v12 + 26) = v8;
  if ( v13 )
    memset(v13, 0, 16 * v8);
  v14 = v12[4];
  if ( !v14 )
    goto LABEL_15;
  v15 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  v16 = v12[14] & 0xFC;
  v12[2] = a4;
  v12[3] = a7;
  *((_BYTE *)v12 + 112) = a5 & 1 | v16 | (2 * (a6 & 1));
  if ( (_DWORD)v8 )
  {
    v17 = a2 - (_QWORD)a3;
    v18 = v8;
    do
    {
      *(_QWORD *)v14 = *(__int64 *)((char *)a3 + v17);
      v14 += 16LL;
      v19 = *a3++;
      *(_QWORD *)(v14 - 8) = v19;
      --v18;
    }
    while ( v18 );
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v15 + 1856), &LockHandle);
  v23 = *(_QWORD **)(v15 + 1008);
  if ( *v23 != v15 + 1000 )
    __fastfail(3u);
  v12[1] = v23;
  *v12 = v15 + 1000;
  *v23 = v12;
  *(_QWORD *)(v15 + 1008) = v12;
  VidSchiUnwaitMonitoredFences(v15, v20, v21, v22);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
