/*
 * XREFs of ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006D8AC
 * Callers:
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0069D54 (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?InvalidateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C006F038 (-InvalidateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C001033C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0054764 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006D7AC (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

char __fastcall VIDMM_GLOBAL::InvalidateOneAllocation(VIDMM_GLOBAL *this, DXGFASTMUTEX **a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  VIDMM_GLOBAL *CurrentThread; // rcx
  int v10; // eax
  __int64 v12; // rax
  signed __int32 v13[8]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v14[13]; // [rsp+20h] [rbp-68h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  if ( *((_BYTE *)a2 + 96) == 1 )
  {
    v12 = WdLogNewEntry5_WdEvent(this, a2, a3, a4);
    *(_QWORD *)(v12 + 24) = a2;
    WdLogEvent5_WdEvent(v12);
    return 0;
  }
  DXGFASTMUTEX::Acquire(a2[40]);
  *((_BYTE *)a2 + 96) = 1;
  _InterlockedOr(v13, 0);
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2[40], v6, v7, v8);
  if ( (*(_DWORD *)a2[63] & 0x40000000) == 0 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *(VIDMM_GLOBAL **)(*(_QWORD *)this + 8LL) )
  {
    memset(v14, 0, 0x58uLL);
    v10 = *((_DWORD *)a2 + 19) & 0x3F;
    LODWORD(v14[0]) = 103;
    HIDWORD(v14[0]) = v10;
    v14[5] = a2;
    VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v14);
    return 0;
  }
  return VIDMM_GLOBAL::CleanupPrimaryAllocation(CurrentThread, (struct _VIDMM_GLOBAL_ALLOC *)a2);
}
