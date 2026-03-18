/*
 * XREFs of VidSchSubmitWaitFromCpu @ 0x1C0006CC0
 * Callers:
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0035A78 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C00059CC (VidSchiUnwaitMonitoredFences.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GVIDSCH_CPU_WAITER@@QEAAPEAXI@Z @ 0x1C0006E1C (--_GVIDSCH_CPU_WAITER@@QEAAPEAXI@Z.c)
 *     memset @ 0x1C0008500 (memset.c)
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
  unsigned __int64 v8; // rsi
  _QWORD *v11; // rax
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rbx
  PVOID PoolWithTag; // rax
  _QWORD *v15; // rdi
  unsigned __int64 v16; // rbp
  char v17; // al
  __int64 v18; // r15
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v8 = a1;
  v11 = operator new(0x78uLL, 0x68536956u, (POOL_TYPE)512);
  v13 = v11;
  if ( v11 )
  {
    v11[4] = 0LL;
    *((_DWORD *)v11 + 26) = 0;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13 )
    return 3221225495LL;
  if ( (unsigned int)v8 > 4 )
  {
    v12 = 0xFFFFFFFFFFFFFFFFuLL % v8;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v8 < 0x10 )
    {
LABEL_15:
      VIDSCH_CPU_WAITER::`scalar deleting destructor'((VIDSCH_CPU_WAITER *)v13, v12);
      return 3221225495LL;
    }
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 16 * v8, 0x6E795356u);
  }
  else
  {
    PoolWithTag = v13 + 5;
  }
  v13[4] = PoolWithTag;
  *((_DWORD *)v13 + 26) = v8;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 16 * v8);
  v15 = (_QWORD *)v13[4];
  if ( !v15 )
    goto LABEL_15;
  v16 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  v17 = v13[14] & 0xFC;
  v13[2] = a4;
  *((_BYTE *)v13 + 112) = a5 & 1 | v17 | (2 * (a6 & 1));
  v13[3] = a7;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v16 + 1872), &LockHandle);
  if ( (_DWORD)v8 )
  {
    v18 = a2 - (_QWORD)a3;
    v19 = v8;
    do
    {
      *v15 = *(__int64 *)((char *)a3 + v18);
      v15 += 2;
      v20 = *a3++;
      *(v15 - 1) = v20;
      --v19;
    }
    while ( v19 );
  }
  v21 = *(_QWORD **)(v16 + 968);
  *v13 = v16 + 960;
  v13[1] = v21;
  if ( *v21 != v16 + 960 )
    __fastfail(3u);
  *v21 = v13;
  *(_QWORD *)(v16 + 968) = v13;
  VidSchiUnwaitMonitoredFences(v16);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
