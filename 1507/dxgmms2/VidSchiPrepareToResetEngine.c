/*
 * XREFs of VidSchiPrepareToResetEngine @ 0x1C0076B80
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C0032B80 (VidSchiCheckHwProgress.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0079BB0 (VidSchWaitForCompletionEvent.c)
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0005B44 (VidSchiSchedulerNodeToDriverEngine.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x1C0008DA4 (VidSchiSchedulerNodeToDriverNode.c)
 *     ?DdiQueryDependentEngineGroup@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYDEPENDENTENGINEGROUP@@@Z @ 0x1C000E0D4 (-DdiQueryDependentEngineGroup@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYDEPENDENTENGINEGROUP@@@Z.c)
 *     VidSchiPreemptEngineNodes @ 0x1C0076A74 (VidSchiPreemptEngineNodes.c)
 */

char __fastcall VidSchiPrepareToResetEngine(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  unsigned int v5; // edx
  unsigned int v6; // edx
  __int64 v7; // rdx
  ULONGLONG DependentNodeOrdinalMask; // r8
  _QWORD *v9; // rax
  UINT EngineOrdinal; // edx
  __int64 v11; // rcx
  char result; // al
  _DXGKARG_QUERYDEPENDENTENGINEGROUP v13; // [rsp+20h] [rbp-20h] BYREF

  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 24);
  if ( !*(_BYTE *)(v3 + 44) )
    return 0;
  if ( !TdrIsEnabled() )
    return 0;
  if ( (*(_DWORD *)(v3 + 36) & 7) == 0 )
    return 0;
  v5 = *(unsigned __int16 *)(a1 + 4);
  HIDWORD(v13.DependentNodeOrdinalMask) = 0;
  *(_QWORD *)&v13.EngineOrdinal = (unsigned int)VidSchiSchedulerNodeToDriverEngine(v3, v5);
  v13.NodeOrdinal = VidSchiSchedulerNodeToDriverNode(v3, v6);
  if ( (unsigned int)ADAPTER_RENDER::DdiQueryDependentEngineGroup(*(ADAPTER_RENDER **)(v3 + 8), &v13) )
    return 0;
  DependentNodeOrdinalMask = v13.DependentNodeOrdinalMask;
  if ( !(v13.DependentNodeOrdinalMask | (1LL << SLOBYTE(v13.NodeOrdinal))) )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13.NodeOrdinal, v7);
    v9[3] = 281LL;
    v9[4] = 8LL;
    v9[5] = v13.DependentNodeOrdinalMask;
    v9[6] = 1LL << SLOBYTE(v13.NodeOrdinal);
    v9[7] = v13.NodeOrdinal;
    WdLogEvent5_WdCriticalError(v9);
    __debugbreak();
  }
  EngineOrdinal = v13.EngineOrdinal;
  _bittestandreset64((__int64 *)&DependentNodeOrdinalMask, v13.NodeOrdinal);
  VidSchiPreemptEngineNodes(v3, EngineOrdinal, DependentNodeOrdinalMask, a2);
  v11 = *a2;
  _bittestandset64(&v11, v13.NodeOrdinal);
  result = 1;
  *a2 = v11;
  return result;
}
