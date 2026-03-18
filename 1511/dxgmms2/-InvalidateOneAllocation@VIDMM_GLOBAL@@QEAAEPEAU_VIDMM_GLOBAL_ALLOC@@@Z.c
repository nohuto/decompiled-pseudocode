/*
 * XREFs of ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0067C40
 * Callers:
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00624B4 (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?InvalidateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C006979C (-InvalidateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011E30 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011EF0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C004C618 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0067B40 (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

char __fastcall VIDMM_GLOBAL::InvalidateOneAllocation(VIDMM_GLOBAL *this, union _LARGE_INTEGER **a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  VIDMM_GLOBAL *CurrentThread; // rcx
  int v12; // eax
  signed __int32 v13[8]; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v14[11]; // [rsp+20h] [rbp-58h] BYREF

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
    _InterlockedOr(v13, 0);
    DXGFASTMUTEX::Release((DXGFASTMUTEX *)a2[39], v5, v6, v7);
    if ( (a2[59]->LowPart & 0x40000000) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread == *(VIDMM_GLOBAL **)(*(_QWORD *)this + 8LL) )
        return VIDMM_GLOBAL::CleanupPrimaryAllocation(CurrentThread, (struct _VIDMM_GLOBAL_ALLOC *)a2, v8, v9);
      memset(v14, 0, 0x50uLL);
      v12 = *((_DWORD *)a2 + 19) & 0x3F;
      LODWORD(v14[0]) = 103;
      HIDWORD(v14[0]) = v12;
      v14[5] = a2;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v14);
    }
  }
  return 0;
}
