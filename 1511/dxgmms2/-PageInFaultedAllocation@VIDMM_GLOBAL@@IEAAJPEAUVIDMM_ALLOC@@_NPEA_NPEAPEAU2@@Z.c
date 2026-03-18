/*
 * XREFs of ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C0062C40
 * Callers:
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0060F0C (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C00469F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C0048244 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C006143C (-UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ReferenceAllocationForSubmission@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@E@Z @ 0x1C0062F94 (-ReferenceAllocationForSubmission@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@E@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInFaultedAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        __int64 a3,
        bool *a4,
        struct VIDMM_ALLOC **a5)
{
  int v8; // ebx
  __int64 v9; // rsi
  struct VIDMM_ALLOC *v10; // rdx
  __int64 v11; // rcx
  unsigned __int8 v12; // r9
  int inited; // eax
  __int64 v15; // rax

  v8 = 0;
  *a5 = 0LL;
  v9 = **(_QWORD **)a2;
  VIDMM_DEVICE::UnfaultCommitment(this, a2);
  if ( *(int *)(*((_QWORD *)v10 + 12) + 4LL) < 3 )
  {
    if ( (*(_DWORD *)(v9 + 76) & 0x100000) != 0 )
    {
      v8 = -1071775466;
    }
    else
    {
      v8 = VIDMM_GLOBAL::PageInOneAllocation(
             (__int64)this,
             v10,
             (**(_DWORD **)(v9 + 472) & 0x20000) != 0 ? 5 : 0,
             v12,
             a4,
             a5);
      if ( v8 != -1071775466 )
        goto LABEL_4;
    }
    if ( (*(_DWORD *)(v9 + 76) & 0x8000000) == 0 )
      goto LABEL_10;
    inited = VIDMM_GLOBAL::InitContextAllocation((ADAPTER_RENDER **)this, (__int64 **)a2, 0, a4, a5);
    *(_DWORD *)(v9 + 76) &= ~0x100000u;
    v8 = inited;
LABEL_4:
    if ( v8 >= 0 )
    {
      VIDMM_GLOBAL::ReferenceAllocationForSubmission(
        **(VIDMM_GLOBAL ***)a2,
        a2,
        (*(_DWORD *)(**(_QWORD **)a2 + 76LL) & 0x8000000) != 0);
      return (unsigned int)v8;
    }
LABEL_10:
    v15 = WdLogNewEntry5_WdWarning(v11);
    *(_QWORD *)(v15 + 32) = v8;
    *(_QWORD *)(v15 + 24) = a2;
    WdLogEvent5_WdWarning(v15);
  }
  return (unsigned int)v8;
}
