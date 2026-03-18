/*
 * XREFs of ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C0050FD8
 * Callers:
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0050D60 (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0039BC8 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C004DE74 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?ReferenceAllocationForSubmission@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@E@Z @ 0x1C0052184 (-ReferenceAllocationForSubmission@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@E@Z.c)
 *     ?UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00596FC (-UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
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
  char v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int inited; // eax
  __int64 v16; // rax

  v8 = 0;
  *a5 = 0LL;
  v9 = **(_QWORD **)a2;
  VIDMM_DEVICE::UnfaultCommitment(this, a2);
  if ( *(int *)(*((_QWORD *)v10 + 12) + 4LL) < 3 )
  {
    v8 = VIDMM_GLOBAL::PageInOneAllocation((__int64)this, v10, 0, v11, (char *)a4, a5);
    if ( v8 == -1071775466 )
    {
      if ( (*(_DWORD *)(v9 + 76) & 0x4000000) == 0 )
      {
LABEL_6:
        v16 = WdLogNewEntry5_WdWarning(v13, v12, v14);
        *(_QWORD *)(v16 + 32) = v8;
        *(_QWORD *)(v16 + 24) = a2;
        WdLogEvent5_WdWarning(v16);
        return (unsigned int)v8;
      }
      inited = VIDMM_GLOBAL::InitContextAllocation((ADAPTER_RENDER **)this, (__int64 **)a2, 0, a4, a5);
      *(_DWORD *)(v9 + 76) &= ~0x80000u;
      v8 = inited;
    }
    if ( v8 >= 0 )
    {
      VIDMM_GLOBAL::ReferenceAllocationForSubmission(
        **(VIDMM_GLOBAL ***)a2,
        a2,
        (*(_DWORD *)(**(_QWORD **)a2 + 76LL) & 0x4000000) != 0);
      return (unsigned int)v8;
    }
    goto LABEL_6;
  }
  return (unsigned int)v8;
}
