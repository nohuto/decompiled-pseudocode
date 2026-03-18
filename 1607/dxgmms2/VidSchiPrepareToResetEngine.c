/*
 * XREFs of VidSchiPrepareToResetEngine @ 0x1C00A0078
 * Callers:
 *     VidSchWaitForCompletionEvent @ 0x1C0042284 (VidSchWaitForCompletionEvent.c)
 *     VidSchiCheckHwProgress @ 0x1C0043C50 (VidSchiCheckHwProgress.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000A130 (VidSchIsTDRPending.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0010D48 (VidSchiSchedulerNodeToDriverEngine.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x1C0015114 (VidSchiSchedulerNodeToDriverNode.c)
 *     ?DdiQueryDependentEngineGroup@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYDEPENDENTENGINEGROUP@@@Z @ 0x1C001D234 (-DdiQueryDependentEngineGroup@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYDEPENDENTENGINEGROUP@@@Z.c)
 *     VidSchiPreemptEngineNodes @ 0x1C0068BF8 (VidSchiPreemptEngineNodes.c)
 */

char __fastcall VidSchiPrepareToResetEngine(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  unsigned int v5; // edx
  unsigned int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // r9
  ULONGLONG DependentNodeOrdinalMask; // r8
  _QWORD *v10; // rax
  UINT EngineOrdinal; // edx
  __int64 v12; // rcx
  char result; // al
  _DXGKARG_QUERYDEPENDENTENGINEGROUP v14; // [rsp+20h] [rbp-20h] BYREF

  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 24);
  if ( !*(_BYTE *)(v3 + 44) )
    return 0;
  if ( !TdrIsEnabled() )
    return 0;
  if ( (*(_DWORD *)(v3 + 36) & 7) == 0 )
    return 0;
  v5 = *(unsigned __int16 *)(a1 + 4);
  HIDWORD(v14.DependentNodeOrdinalMask) = 0;
  *(_QWORD *)&v14.EngineOrdinal = (unsigned int)VidSchiSchedulerNodeToDriverEngine(v3, v5);
  v14.NodeOrdinal = VidSchiSchedulerNodeToDriverNode(v3, v6);
  if ( (unsigned int)ADAPTER_RENDER::DdiQueryDependentEngineGroup(*(ADAPTER_RENDER **)(v3 + 8), &v14) )
    return 0;
  DependentNodeOrdinalMask = v14.DependentNodeOrdinalMask;
  if ( !(v14.DependentNodeOrdinalMask | (1LL << SLOBYTE(v14.NodeOrdinal))) )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14.NodeOrdinal, v7, v14.DependentNodeOrdinalMask, v8);
    v10[3] = 281LL;
    v10[4] = 8LL;
    v10[5] = v14.DependentNodeOrdinalMask;
    v10[6] = 1LL << SLOBYTE(v14.NodeOrdinal);
    v10[7] = v14.NodeOrdinal;
    WdLogEvent5_WdCriticalError(v10);
    __debugbreak();
  }
  EngineOrdinal = v14.EngineOrdinal;
  _bittestandreset64((__int64 *)&DependentNodeOrdinalMask, v14.NodeOrdinal);
  VidSchiPreemptEngineNodes(v3, EngineOrdinal, DependentNodeOrdinalMask, a2);
  if ( VidSchIsTDRPending(v3) )
    return 0;
  v12 = *a2;
  _bittestandset64(&v12, v14.NodeOrdinal);
  result = 1;
  *a2 = v12;
  return result;
}
