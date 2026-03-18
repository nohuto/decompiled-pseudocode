/*
 * XREFs of ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x18014BD80
 * Callers:
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18014C264 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18014C300 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z @ 0x18014C374 (-TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18014C474 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     ??$RunForAllScrollAnimations@V_lambda_37752b4d3a5cf957f6becd73f4bf70b3_@@@CInteractionTracker@@AEAAXAEBV_lambda_37752b4d3a5cf957f6becd73f4bf70b3_@@@Z @ 0x180149638 (--$RunForAllScrollAnimations@V_lambda_37752b4d3a5cf957f6becd73f4bf70b3_@@@CInteractionTracker@@A.c)
 *     ?AddPendingStateChange@CInteractionTracker@@QEAAXW4ScrollState@@@Z @ 0x180149D28 (-AddPendingStateChange@CInteractionTracker@@QEAAXW4ScrollState@@@Z.c)
 */

void __fastcall CInteractionTracker::SetState(__int64 a1, int a2)
{
  const GUID *v2; // r8
  int v4; // [rsp+30h] [rbp-29h] BYREF
  int v5; // [rsp+38h] [rbp-21h] BYREF
  int v6; // [rsp+3Ch] [rbp-1Dh] BYREF
  int *v7[2]; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  int **v9; // [rsp+70h] [rbp+17h]
  int v10; // [rsp+78h] [rbp+1Fh]
  int v11; // [rsp+7Ch] [rbp+23h]
  int *v12; // [rsp+80h] [rbp+27h]
  int v13; // [rsp+88h] [rbp+2Fh]
  int v14; // [rsp+8Ch] [rbp+33h]
  int *v15; // [rsp+90h] [rbp+37h]
  int v16; // [rsp+98h] [rbp+3Fh]
  int v17; // [rsp+9Ch] [rbp+43h]

  v2 = (const GUID *)*(unsigned int *)(a1 + 204);
  v4 = a2;
  if ( (_DWORD)v2 != a2 )
  {
    if ( (unsigned int)pRelatedActivityId > 4 && (qword_1801EAA90 & 2) != 0 && (qword_1801EAA98 & 2) == qword_1801EAA98 )
    {
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v9 = v7;
      v12 = &v5;
      v15 = &v6;
      v7[0] = (int *)a1;
      v10 = 8;
      v5 = (int)v2;
      v13 = 4;
      v6 = a2;
      v16 = 4;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C4621, v2, (LPCGUID)4, 5u, &pData);
      a2 = v4;
    }
    *(_DWORD *)(a1 + 204) = a2;
    v7[0] = &v4;
    CInteractionTracker::RunForAllScrollAnimations<_lambda_37752b4d3a5cf957f6becd73f4bf70b3_>(a1, v7);
    if ( v4 >= 0 && (v4 <= 1 || v4 == 3) )
      CInteractionTracker::AddPendingStateChange(a1, v4);
  }
}
