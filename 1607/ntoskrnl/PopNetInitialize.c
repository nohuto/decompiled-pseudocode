/*
 * XREFs of PopNetInitialize @ 0x140795FD0
 * Callers:
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlLengthRequiredSid @ 0x1404781C0 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x140478448 (RtlInitializeSid.c)
 *     PopInitializeTimer @ 0x14057A7BC (PopInitializeTimer.c)
 *     PopTraceStandbyConnectivityUpdate @ 0x14057C8F8 (PopTraceStandbyConnectivityUpdate.c)
 *     PopNetSetConnectivityConstraint @ 0x14057EDF8 (PopNetSetConnectivityConstraint.c)
 */

__int64 __fastcall PopNetInitialize(int a1)
{
  _DWORD *v1; // rbx
  ULONG v2; // edi
  _DWORD *PoolWithTag; // rax
  NTSTATUS v4; // edi
  int v6; // ecx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+48h] [rbp+10h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  v1 = 0LL;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  if ( a1 )
  {
    if ( a1 == 3 )
    {
      if ( PopEnforceDisconnectedStandby )
      {
        v6 = 2;
      }
      else
      {
        if ( PopNetDeferLogRequest )
        {
          PopTraceStandbyConnectivityUpdate(PopNetStandbyState, PopNetStandbyReason);
          goto LABEL_5;
        }
        if ( PopNetStandbyStateMask || PopPlatformAoAc )
          goto LABEL_5;
        v6 = 6;
      }
      PopNetSetConnectivityConstraint(v6);
    }
LABEL_5:
    v4 = 0;
    goto LABEL_6;
  }
  v2 = RtlLengthRequiredSid(6u);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v2, 0x74654E50u);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memset(PoolWithTag, 0, v2);
  v4 = RtlInitializeSid(v1, &IdentifierAuthority, 6u);
  if ( v4 >= 0 )
  {
    v1[2] = 80;
    v1[3] = 1988685059;
    v1[4] = 1921232356;
    v1[5] = 378231328;
    v1[6] = -1590824699;
    v1[7] = 890457928;
    PopNetBIServiceSid = v1;
    v1 = 0LL;
    PopInitializeTimer(
      (__int64)&PopNetEvaluationTimer,
      (__int64)PopNetEvaluationTimerCallback,
      0LL,
      (__int64)PopNetEvaluationWorkerCallback,
      0LL,
      2);
    PopIgnoreCsComplianceCheck &= ~4u;
    goto LABEL_5;
  }
LABEL_6:
  if ( v1 )
    ExFreePoolWithTag(v1, 0x74654E50u);
  return (unsigned int)v4;
}
