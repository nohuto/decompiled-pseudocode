/*
 * XREFs of PopPolicyWorkerAction @ 0x140530B48
 * Callers:
 *     PopPolicyWorkerThread @ 0x1400093E8 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x140008680 (PopGetPolicyWorker.c)
 *     KeAreApcsDisabled @ 0x140009710 (KeAreApcsDisabled.c)
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     PopSetPowerActionState @ 0x140114AF0 (PopSetPowerActionState.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopIssueActionRequest @ 0x1405305A8 (PopIssueActionRequest.c)
 *     PopCompleteAction @ 0x140530C60 (PopCompleteAction.c)
 */

__int64 PopPolicyWorkerAction()
{
  char v0; // si
  __int64 v1; // r14
  int v2; // edi
  int v3; // ebx
  int v4; // ebp
  unsigned int v5; // eax
  unsigned int v6; // edi
  __int64 *i; // rbx
  int v8; // ecx
  __int64 v10; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-30h]
  __int64 *v12; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+48h] [rbp-20h]
  int v14; // [rsp+4Ch] [rbp-1Ch]

  v0 = 0;
  PopAcquirePolicyLock();
  if ( byte_1403033A1 == 1 )
  {
    v1 = (int)qword_1403033A4;
    v2 = HIDWORD(qword_1403033A4);
    v3 = dword_1403033AC;
    PopSetPowerActionState(2);
    v4 = dword_1403033B4;
    v5 = PopIssueActionRequest(0, (POWER_ACTION)v1, v2, v3);
    v6 = v5;
    v0 = 1;
    if ( (PopAction & 2) != 0 )
    {
      if ( HIDWORD(qword_1403033A4) == 5 )
        v4 = 6;
      dword_1403033B4 = v4;
      dword_1403033AC = dword_1403033AC & 0x7FFFFFFC | 0x80000000;
      PopAction &= ~2u;
      PopSetPowerActionState(1);
      v8 = 2;
    }
    else
    {
      if ( (xmmword_1403AA2D0 & 0x8000) != 0 )
      {
        v14 = 0;
        v11 = v5;
        v10 = v1;
        v12 = &v10;
        v13 = 16;
        EtwTraceKernelEvent((int)&v12, 1, 0x80008000, 4643, 4200450);
      }
      dword_1403033B0 = v6;
      PopSetPowerActionState(0);
      for ( i = (__int64 *)PopActionWaiters; i != &PopActionWaiters; i = (__int64 *)*i )
        PopCompleteAction(i[2], v6);
      v8 = 1;
    }
    PopGetPolicyWorker(v8);
  }
  PopReleasePolicyLock();
  if ( v0 && PoPdcCallbacks )
    PoPdcCallbacks();
  if ( KeAreApcsDisabled() )
    __fastfail(0x20u);
  return 0LL;
}
