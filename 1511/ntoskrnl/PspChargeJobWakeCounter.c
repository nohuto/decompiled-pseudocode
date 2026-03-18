/*
 * XREFs of PspChargeJobWakeCounter @ 0x1403EB4DC
 * Callers:
 *     PsReleaseProcessWakeCounter @ 0x1403E967C (PsReleaseProcessWakeCounter.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404069A0 (AlpcpCompleteDispatchMessage.c)
 *     PspAssignProcessToJob @ 0x140486CD0 (PspAssignProcessToJob.c)
 *     PsChargeProcessWakeCounter @ 0x1404CFD98 (PsChargeProcessWakeCounter.c)
 *     PspAdjustKeepAliveCountProcess @ 0x14063F054 (PspAdjustKeepAliveCountProcess.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     PspUnlockJob @ 0x1403EB8D0 (PspUnlockJob.c)
 *     PspLockRootJobShared @ 0x1403EBA18 (PspLockRootJobShared.c)
 *     PspSendWakeNotification @ 0x1403EC9F4 (PspSendWakeNotification.c)
 *     EtwTraceWakeCounter @ 0x1406611A0 (EtwTraceWakeCounter.c)
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
  struct _KTHREAD *CurrentThread; // rdx
  int v8; // r12d
  char *v9; // rbx
  __int64 v11; // r15
  bool v12; // r14
  int v13; // ebp
  volatile signed __int64 *v14; // rax
  signed __int64 v15; // rsi
  __int64 v16; // rax
  int v17; // edi
  char v18; // di
  char v19; // al
  struct _KTHREAD *v20; // [rsp+30h] [rbp-58h]
  __int64 v21; // [rsp+90h] [rbp+8h] BYREF
  char *v22; // [rsp+98h] [rbp+10h]
  unsigned int v23; // [rsp+A0h] [rbp+18h]
  __int64 v24; // [rsp+A8h] [rbp+20h]

  v22 = a2;
  CurrentThread = KeGetCurrentThread();
  v8 = (int)Object;
  v9 = Object;
  v21 = 0LL;
  v11 = a3;
  v12 = (a5 & 4) != 0;
  v20 = CurrentThread;
  v23 = 1 << a3;
  v13 = a5 & 1;
  if ( (a5 & 1) != 0 )
    PspLockRootJobShared(Object, CurrentThread, &v21);
  do
  {
    if ( v13 )
      ExAcquireResourceSharedLite((PERESOURCE)(v9 + 56), 1u);
    if ( v12 )
      v14 = (volatile signed __int64 *)(v9 + 936);
    else
      v14 = (volatile signed __int64 *)&v9[8 * v11 + 896];
    v15 = a4 + _InterlockedExchangeAdd64(v14, a4);
    if ( v12 )
    {
      if ( *((_DWORD *)v9 + 216) )
      {
        if ( (a5 & 2) != 0 && (_BYTE)KdDebuggerEnabled )
          __int2c();
        if ( (xmmword_140382290 & 0x200) != 0 )
          EtwTraceWakeCounter(v8, v11, 0, a6, a7);
      }
      if ( v13 )
        ExReleaseResourceLite((PERESOURCE)(v9 + 56));
    }
    else
    {
      v16 = *((_QWORD *)v9 + 118);
      v17 = *((_DWORD *)v9 + 324) >> 11;
      v24 = v16;
      v18 = v17 & 1;
      if ( v18 && !v15 && (HIDWORD(v16) & v23) == 0 )
      {
        v18 = 0;
        _InterlockedOr((volatile signed __int32 *)v9 + 238, v23);
      }
      if ( v13 )
        ExReleaseResourceLite((PERESOURCE)(v9 + 56));
      if ( v18 )
      {
        v19 = 0;
        if ( a4 > 0 )
          v19 = 6;
        if ( v13 )
          v19 |= 1u;
        PspSendWakeNotification(v9, v19);
      }
    }
    v9 = (char *)*((_QWORD *)v9 + 133);
  }
  while ( v9 != v22 && (*((_DWORD *)v9 + 324) & 0x1000) != 0 );
  if ( v13 )
    PspUnlockJob(v21, v20);
  if ( (xmmword_140382290 & 0x2000) != 0 && !v12 )
    EtwTraceWakeCounter(v8, v11, a4, a6, a7);
}
