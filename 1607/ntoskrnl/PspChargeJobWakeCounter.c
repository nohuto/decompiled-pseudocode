/*
 * XREFs of PspChargeJobWakeCounter @ 0x140467B60
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x14044A860 (AlpcpCompleteDispatchMessage.c)
 *     PsReleaseProcessWakeCounter @ 0x1404674F0 (PsReleaseProcessWakeCounter.c)
 *     PspAssignProcessToJob @ 0x1404D5BEC (PspAssignProcessToJob.c)
 *     PsChargeProcessWakeCounter @ 0x140501218 (PsChargeProcessWakeCounter.c)
 *     PspAdjustKeepAliveCountProcess @ 0x14067D7A0 (PspAdjustKeepAliveCountProcess.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     PspUnlockJob @ 0x140467D80 (PspUnlockJob.c)
 *     PspLockRootJobShared @ 0x140467DC8 (PspLockRootJobShared.c)
 *     PspSendWakeNotification @ 0x1404D524C (PspSendWakeNotification.c)
 *     EtwTraceWakeCounter @ 0x1406A1FE8 (EtwTraceWakeCounter.c)
 */

void __fastcall PspChargeJobWakeCounter(
        char *Object,
        char *a2,
        int a3,
        signed __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  struct _KTHREAD *CurrentThread; // r13
  char v9; // r14
  int v10; // edi
  char *v12; // rbx
  bool v13; // bp
  int v14; // esi
  volatile signed __int64 *v15; // rax
  signed __int64 v16; // rdi
  int v17; // edi
  bool v18; // r14
  char v19; // al
  int v20; // [rsp+90h] [rbp+8h]
  unsigned int v21; // [rsp+98h] [rbp+10h]
  __int64 v23; // [rsp+A8h] [rbp+20h] BYREF

  v20 = (int)Object;
  CurrentThread = KeGetCurrentThread();
  v9 = a5;
  v10 = a3;
  v23 = 0LL;
  v12 = Object;
  v13 = (a5 & 4) != 0;
  v21 = 1 << a3;
  v14 = a5 & 1;
  if ( (a5 & 1) != 0 )
    PspLockRootJobShared(Object, CurrentThread, &v23);
  while ( 1 )
  {
    if ( v14 )
      ExAcquireResourceSharedLite((PERESOURCE)(v12 + 56), 1u);
    v15 = (volatile signed __int64 *)(v13 ? v12 + 928 : &v12[8 * v10 + 888]);
    v16 = a4 + _InterlockedExchangeAdd64(v15, a4);
    if ( v13 )
    {
      if ( *((_DWORD *)v12 + 214) )
      {
        if ( (v9 & 2) != 0 && (_BYTE)KdDebuggerEnabled )
          __int2c();
        v17 = a3;
        if ( (xmmword_1403AA2D0 & 0x200) != 0 )
          EtwTraceWakeCounter(v20, a3, 0, a6, a7);
      }
      else
      {
        v17 = a3;
      }
      if ( v14 )
        ExReleaseResourceLite((PERESOURCE)(v12 + 56));
    }
    else
    {
      v18 = (*((_DWORD *)v12 + 326) & 0x800) != 0;
      if ( (*((_DWORD *)v12 + 326) & 0x800) != 0 && !v16 && (HIDWORD(*((_QWORD *)v12 + 117)) & v21) == 0 )
      {
        v18 = 0;
        _InterlockedOr((volatile signed __int32 *)v12 + 236, v21);
      }
      if ( v14 )
        ExReleaseResourceLite((PERESOURCE)(v12 + 56));
      if ( v18 )
      {
        v19 = 0;
        if ( a4 > 0 )
          v19 = 6;
        if ( v14 )
          v19 |= 1u;
        v17 = a3;
        PspSendWakeNotification(v12, v19);
      }
      else
      {
        v17 = a3;
      }
      v9 = a5;
    }
    v12 = (char *)*((_QWORD *)v12 + 132);
    if ( v12 == a2 || (*((_DWORD *)v12 + 326) & 0x1000) == 0 )
      break;
    v10 = a3;
  }
  if ( v14 )
    PspUnlockJob(v23, CurrentThread);
  if ( (xmmword_1403AA2D0 & 0x2000) != 0 && !v13 )
    EtwTraceWakeCounter(v20, v17, a4, a6, a7);
}
