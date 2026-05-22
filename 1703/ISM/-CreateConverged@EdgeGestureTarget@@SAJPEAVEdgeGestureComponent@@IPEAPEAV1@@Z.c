/*
 * XREFs of ?CreateConverged@EdgeGestureTarget@@SAJPEAVEdgeGestureComponent@@IPEAPEAV1@@Z @ 0x180023BB0
 * Callers:
 *     ?DoConvergedTargetingDecision@EdgeGestureComponent@@UEAAJPEAUtagINPUTDEST@@PEAUIInputDisplay@@PEAUInputInfo@@PEAW4InputTargetingResult@@@Z @ 0x180022F00 (-DoConvergedTargetingDecision@EdgeGestureComponent@@UEAAJPEAUtagINPUTDEST@@PEAUIInputDisplay@@PE.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??0EdgeGestureTarget@@IEAA@PEAVEdgeGestureComponent@@@Z @ 0x1800233EC (--0EdgeGestureTarget@@IEAA@PEAVEdgeGestureComponent@@@Z.c)
 *     ?InitializeConverged@EdgeGestureTarget@@IEAAJI@Z @ 0x18002388C (-InitializeConverged@EdgeGestureTarget@@IEAAJI@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EdgeGestureTarget::CreateConverged(
        struct EdgeGestureComponent *a1,
        int a2,
        struct EdgeGestureTarget **a3)
{
  EdgeGestureTarget *v6; // rax
  __int64 v7; // rcx
  EdgeGestureTarget *v8; // rbx
  EdgeGestureTarget *v9; // rdi
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx

  *a3 = 0LL;
  v6 = (EdgeGestureTarget *)malloc(0x70uLL);
  v8 = v6;
  if ( v6 )
    memset(v6, 0, 0x70uLL);
  if ( v8 )
    v9 = EdgeGestureTarget::EdgeGestureTarget(v8, a1);
  else
    v9 = 0LL;
  if ( v9 )
  {
    v11 = EdgeGestureTarget::InitializeConverged(v9, a2);
    v10 = v11;
    if ( v11 >= 0 )
    {
      *a3 = v9;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v12, &MinInput_Warning_CheckResult, 0, 140, v11);
    }
    if ( v10 < 0 )
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v9 + 3) + 24LL))((__int64)v9 + 24, 1LL);
  }
  else
  {
    v10 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v7, &MinInput_Warning_CheckResult, 0, 138, 14);
  }
  return (unsigned int)v10;
}
