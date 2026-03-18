/*
 * XREFs of ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008A120
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0053C88 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008A740 (-PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW.c)
 * Callees:
 *     ?GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ @ 0x1C001DB6C (-GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C004FC2C (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0098748 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?MovePinnedResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009951C (-MovePinnedResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MoveResourcesForAllocationPlacement@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_ALLOC@@_K1W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00995F4 (-MoveResourcesForAllocationPlacement@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_ALLOC@@_K1W4VIDMM_DEFRAGMENT_.c)
 *     ?UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C009A9FC (-UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     VidSchiResumeFlipQueues @ 0x1C00A02C0 (VidSchiResumeFlipQueues.c)
 *     VidSchiSuspendFlipQueues @ 0x1C00A08A8 (VidSchiSuspendFlipQueues.c)
 */

__int64 __fastcall VIDMM_GLOBAL::MoveResources(
        VIDMM_GLOBAL *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned int a9,
        bool *a10,
        struct _VIDMM_GLOBAL_ALLOC **a11)
{
  char v11; // si
  __int64 v12; // rdx
  int v13; // ebx
  __int64 v14; // r9
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rdx
  bool v20; // r15
  int v21; // ebx
  _QWORD *v22; // rax
  unsigned __int64 v23; // rbx
  __int64 result; // rax
  unsigned __int64 v25; // r8
  unsigned __int64 ActiveVprEnd; // rax
  int v27; // edx
  __int64 v28; // rax

  v11 = 1;
  v12 = a4;
  v13 = a3;
  v14 = *((_QWORD *)a1 + 3);
  v16 = *(_QWORD *)(*((_QWORD *)a1 + 464) + 8 * v12);
  v17 = *(_QWORD *)(v14 + 2040);
  v18 = *(unsigned int *)(v16 + 372);
  v19 = 6 * v18;
  v20 = (*(_DWORD *)(v17 + 48 * v18 + 16) & 8) != 0;
  if ( (*(_DWORD *)(v17 + 48 * v18 + 16) & 8) != 0 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(a1, v18, 0LL, 0LL, 0LL, 0, 0);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(a1, v18);
  }
  if ( v13 )
  {
    v21 = v13 - 1;
    if ( v21 )
    {
      if ( v21 == 1 )
      {
        VidSchiSuspendFlipQueues(*(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL));
        v23 = a7;
        result = VIDMM_SEGMENT::MovePinnedResourcesOverRange((VIDMM_SEGMENT *)v16, a7, a8, a10, a11);
        if ( (int)result < 0 )
          return result;
        VidSchiResumeFlipQueues(*(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a1 + 2) + 384LL));
      }
      else
      {
        if ( g_IsInternalRelease )
        {
          v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, v19, a3, v14);
          v22[5] = 0LL;
          v22[6] = 0LL;
          v22[7] = 0LL;
          v22[3] = 270LL;
          v22[4] = 9LL;
          WdLogEvent5_WdCriticalError(v22);
        }
        v23 = a7;
      }
    }
    else
    {
      v23 = a7;
      VIDMM_SEGMENT::MoveResourcesForAllocationPlacement(v16, v19, a7, a8, a9, a10, a11);
    }
  }
  else
  {
    v25 = a8;
    v23 = a7;
    if ( !a8 && !a7 && a6 )
    {
      ActiveVprEnd = VIDMM_SEGMENT::GetActiveVprEnd((VIDMM_SEGMENT *)v16);
      if ( v27 == 1 )
      {
        v23 = 0LL;
      }
      else if ( v27 == 2 )
      {
        v23 = v25;
        v25 = ActiveVprEnd;
      }
      else
      {
        v25 = *(_QWORD *)(v16 + 40);
        v23 = ActiveVprEnd;
      }
    }
    VIDMM_SEGMENT::DefragmentResourcesOverRange(v16, v23, v25, a9, a10, a11);
  }
  if ( v20 )
  {
    if ( *(_DWORD *)(v16 + 404) == 1 )
      v28 = *(_QWORD *)(v16 + 408);
    else
      v28 = *(_QWORD *)(v16 + 376);
    if ( v23 != v28 || v23 == VIDMM_SEGMENT::GetActiveVprEnd((VIDMM_SEGMENT *)v16) )
      v11 = 0;
    VIDMM_GLOBAL::FlushPagingBufferInternal(a1, v18, 0LL, 0LL, 0LL, 0, v11);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(a1, v18);
  }
  return VIDMM_SEGMENT::UpdateActiveVPRAfterMove((VIDMM_SEGMENT *)v16);
}
