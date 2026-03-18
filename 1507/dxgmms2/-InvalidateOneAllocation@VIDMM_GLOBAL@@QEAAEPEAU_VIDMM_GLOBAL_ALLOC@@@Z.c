/*
 * XREFs of ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004E6E8
 * Callers:
 *     ?InvalidateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C004E6E0 (-InvalidateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0070634 (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005B60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005BE8 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004BD88 (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0051A04 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

char __fastcall VIDMM_GLOBAL::InvalidateOneAllocation(VIDMM_GLOBAL *this, DXGFASTMUTEX **a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  VIDMM_GLOBAL *CurrentThread; // rcx
  int v10; // eax
  signed __int32 v11[8]; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v12[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( *((_BYTE *)a2 + 93) == 1 )
  {
    v4 = WdLogNewEntry5_WdEvent(this, a2);
    *(_QWORD *)(v4 + 24) = a2;
    WdLogEvent5_WdEvent(v4);
  }
  else
  {
    DXGFASTMUTEX::Acquire(a2[39]);
    *((_BYTE *)a2 + 93) = 1;
    _InterlockedOr(v11, 0);
    DXGFASTMUTEX::Release((struct _KTHREAD **)a2[39], v5, v6, v7);
    if ( (*(_DWORD *)a2[59] & 0x40000000) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread == *(VIDMM_GLOBAL **)(*(_QWORD *)this + 8LL) )
        return VIDMM_GLOBAL::CleanupPrimaryAllocation(CurrentThread, (struct _VIDMM_GLOBAL_ALLOC *)a2);
      memset(v12, 0, 0x50uLL);
      v10 = *((_DWORD *)a2 + 19) & 0x3F;
      LODWORD(v12[0]) = 103;
      HIDWORD(v12[0]) = v10;
      v12[5] = a2;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v12, 1);
    }
  }
  return 0;
}
