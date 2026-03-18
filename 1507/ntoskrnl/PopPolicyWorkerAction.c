/*
 * XREFs of PopPolicyWorkerAction @ 0x140566108
 * Callers:
 *     PopPolicyWorkerThread @ 0x1400D0054 (PopPolicyWorkerThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     PopGetPolicyWorker @ 0x1400D042C (PopGetPolicyWorker.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopCompleteAction @ 0x140566224 (PopCompleteAction.c)
 *     PopIssueActionRequest @ 0x14056624C (PopIssueActionRequest.c)
 */

__int64 PopPolicyWorkerAction()
{
  char v0; // si
  __int64 v1; // rbp
  int v2; // ebx
  int v3; // eax
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
  if ( byte_14032E641 == 1 )
  {
    v1 = (int)qword_14032E644;
    v2 = dword_14032E654;
    byte_14032E641 = 2;
    v3 = PopIssueActionRequest(
           0LL,
           (unsigned int)qword_14032E644,
           HIDWORD(qword_14032E644),
           (unsigned int)dword_14032E64C);
    v4 = v3;
    v0 = 1;
    if ( v3 < 0 && (PoDebug & 0xA) != 0 )
      DbgPrint("PopPolicyWorkerAction: action request %d failed %08lx\n", v1, v3);
    if ( (PopAction & 2) != 0 )
    {
      byte_14032E641 = 1;
      if ( HIDWORD(qword_14032E644) == 5 )
        v2 = 6;
      dword_14032E654 = v2;
      dword_14032E64C = dword_14032E64C & 0x7FFFFFFC | 0x80000000;
      PopAction &= ~2u;
      v6 = 2;
    }
    else
    {
      if ( (xmmword_1403D1290 & 0x8000) != 0 )
      {
        v12 = 0;
        v10 = &v8;
        v8 = v1;
        v9 = v4;
        v11 = 16;
        EtwTraceKernelEvent((int)&v10, 1, 0x80008000, 0x1223u, 4200450);
      }
      v5 = (__int64 *)PopActionWaiters;
      dword_14032E650 = v4;
      byte_14032E641 = 0;
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
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
