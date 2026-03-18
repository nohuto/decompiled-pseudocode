/*
 * XREFs of PopPolicyWorkerAction @ 0x1404F7554
 * Callers:
 *     PopPolicyWorkerThread @ 0x14009934C (PopPolicyWorkerThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     PopGetPolicyWorker @ 0x1400975A0 (PopGetPolicyWorker.c)
 *     KeAreApcsDisabled @ 0x140099410 (KeAreApcsDisabled.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     PopCompleteAction @ 0x1404F7660 (PopCompleteAction.c)
 *     PopIssueActionRequest @ 0x1404F7688 (PopIssueActionRequest.c)
 */

__int64 PopPolicyWorkerAction()
{
  char v0; // si
  __int64 v1; // rbp
  int v2; // ebx
  unsigned int v3; // eax
  unsigned int v4; // edi
  __int64 *v5; // rbx
  int v6; // ecx
  __int64 v8; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v9; // [rsp+38h] [rbp-30h]
  __int64 *v10; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+48h] [rbp-20h]
  int v12; // [rsp+4Ch] [rbp-1Ch]

  v0 = 0;
  PopAcquirePolicyLock();
  if ( byte_1402DE081 == 1 )
  {
    v1 = (int)qword_1402DE084;
    v2 = dword_1402DE094;
    byte_1402DE081 = 2;
    v3 = PopIssueActionRequest(
           0LL,
           (unsigned int)qword_1402DE084,
           HIDWORD(qword_1402DE084),
           (unsigned int)dword_1402DE08C);
    v4 = v3;
    v0 = 1;
    if ( (PopAction & 2) != 0 )
    {
      byte_1402DE081 = 1;
      if ( HIDWORD(qword_1402DE084) == 5 )
        v2 = 6;
      dword_1402DE094 = v2;
      dword_1402DE08C = dword_1402DE08C & 0x7FFFFFFC | 0x80000000;
      PopAction &= ~2u;
      v6 = 2;
    }
    else
    {
      if ( (xmmword_140382290 & 0x8000) != 0 )
      {
        v12 = 0;
        v9 = v3;
        v8 = v1;
        v10 = &v8;
        v11 = 16;
        EtwTraceKernelEvent((int)&v10, 1, 0x80008000, 0x1223u, 4200450);
      }
      v5 = (__int64 *)PopActionWaiters;
      dword_1402DE090 = v4;
      byte_1402DE081 = 0;
      while ( v5 != &PopActionWaiters )
      {
        PopCompleteAction(v5[2], v4);
        v5 = (__int64 *)*v5;
      }
      v6 = 1;
    }
    PopGetPolicyWorker(v6);
  }
  PopReleasePolicyLock();
  if ( v0 && PoPdcCallbacks )
    PoPdcCallbacks();
  if ( KeAreApcsDisabled() )
    __fastfail(0x20u);
  return 0LL;
}
