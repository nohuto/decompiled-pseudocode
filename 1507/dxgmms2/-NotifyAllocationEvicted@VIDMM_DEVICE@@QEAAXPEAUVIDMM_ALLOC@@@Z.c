/*
 * XREFs of ?NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0058D2C
 * Callers:
 *     ?UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C0059730 (-UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0059860 (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 * Callees:
 *     ?DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00588E0 (-DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::NotifyAllocationEvicted(VIDMM_DEVICE *this, __int64 **a2)
{
  __int64 v2; // r10
  __int64 v3; // rdx
  _QWORD *v4; // rax
  _QWORD *v5; // rdx
  __int64 v6; // r8
  _QWORD *v7; // rcx

  VIDMM_DEVICE::DecrementCurrentUsage(this, a2);
  v4 = *(_QWORD **)(v3 + 120);
  v5 = (_QWORD *)(v3 + 112);
  v6 = *v5;
  if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v4 != v5 )
    __fastfail(3u);
  *v4 = v6;
  *(_QWORD *)(v6 + 8) = v4;
  v7 = *(_QWORD **)(v2 + 160);
  *v5 = v2 + 152;
  v5[1] = v7;
  if ( *v7 != v2 + 152 )
    __fastfail(3u);
  *v7 = v5;
  *(_QWORD *)(v2 + 160) = v5;
}
