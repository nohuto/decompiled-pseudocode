/*
 * XREFs of PopNetEvaluationWorkerCallback @ 0x14057C7A8
 * Callers:
 *     <none>
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14015D930 (ZwUpdateWnfStateData.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopTraceStandbyConnectivityUpdate @ 0x14057C8F8 (PopTraceStandbyConnectivityUpdate.c)
 *     PopNetUpdateCsConsumptionFlags @ 0x14057C9D8 (PopNetUpdateCsConsumptionFlags.c)
 */

__int64 PopNetEvaluationWorkerCallback()
{
  __int64 v0; // rcx
  int v1; // edx
  int v2; // ebp
  int v3; // r13d
  int v4; // r12d
  char v5; // r14
  char v6; // r15
  unsigned int v7; // edi
  unsigned int v8; // esi
  __int64 v10; // rcx
  char v11; // [rsp+88h] [rbp+10h]
  int Buffer; // [rsp+90h] [rbp+18h] BYREF
  int Buffer_4; // [rsp+94h] [rbp+1Ch]

  PopAcquirePolicyLock();
  while ( 1 )
  {
    v1 = 2;
    v2 = PopNetStandbyState;
    v3 = 0;
    v4 = PopNetStandbyReason;
    v5 = 0;
    v11 = 0;
    v6 = 0;
    if ( (PopNetStandbyStateMask & 4) != 0 )
    {
      v7 = 2;
      v8 = 2;
      goto LABEL_6;
    }
    if ( (PopNetStandbyStateMask & 8) != 0 )
    {
      v7 = 2;
      v8 = 3;
      goto LABEL_6;
    }
    if ( (PopNetStandbyStateMask & 0x40) != 0 )
    {
      v7 = 2;
      v8 = 6;
      goto LABEL_6;
    }
    if ( !PopNetResiliencyEngaged || PopNetCompliantMbnPresent )
      goto LABEL_32;
    if ( (PopNetStandbyStateMask & 2) != 0 )
    {
      v7 = 2;
      v8 = 1;
      goto LABEL_6;
    }
    if ( (PopNetStandbyStateMask & 0x10) != 0 )
    {
      if ( (PopNetStandbyStateMask & 0x20) != 0 )
      {
        v7 = 1;
        v8 = 5;
      }
      else
      {
        v7 = 2;
        v8 = 4;
      }
    }
    else
    {
LABEL_32:
      v7 = 0;
      v8 = 0;
    }
LABEL_6:
    if ( v7 == PopNetStandbyState )
      goto LABEL_11;
    if ( PopNetStandbyState == 2 )
    {
      v3 = 1;
      v6 = 1;
    }
    else
    {
      if ( v7 != 2 )
        goto LABEL_11;
      v6 = 1;
    }
    if ( PopNetResiliencyEngaged && xmmword_140329040 )
    {
      v11 = 1;
      PopReleasePolicyLock();
      LOBYTE(v10) = 1;
      xmmword_140329040(v10);
      PopAcquirePolicyLock();
      v1 = 2;
    }
LABEL_11:
    if ( v8 != v4 )
    {
      v5 = 1;
      PopNetStandbyReason = v8;
    }
    if ( v7 != v2 )
    {
      v5 = 1;
      PopNetStandbyState = v7;
      PopNetUpdateCsConsumptionFlags(v0, 2LL);
    }
    if ( v6 )
    {
      Buffer_4 = -1;
      Buffer = v1 & (2 * v3) | 1;
      ZwUpdateWnfStateData(&WNF_SEB_NETWORK_CONNECTIVITY_IN_STANDBY, &Buffer, 8u, 0LL, 0LL, 0, 0);
      if ( v11 )
      {
        PopReleasePolicyLock();
        xmmword_140329040(0LL);
        PopAcquirePolicyLock();
      }
    }
    if ( !v5 )
      break;
    if ( PopDiagHandleRegistered )
      PopTraceStandbyConnectivityUpdate(v7, v8);
    else
      PopNetDeferLogRequest = 1;
  }
  _InterlockedExchange(&dword_1403026C8, 0);
  return PopReleasePolicyLock();
}
