/*
 * XREFs of CiDispatchCreateNotificationClient @ 0x1C000B620
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C000447C (WPP_SF_q.c)
 *     CiProcessCreate @ 0x1C000A170 (CiProcessCreate.c)
 *     CiProcessLocate @ 0x1C000AB10 (CiProcessLocate.c)
 *     CiProcessDereference @ 0x1C000B420 (CiProcessDereference.c)
 *     CiSystemAcquirePushLock @ 0x1C000B5F0 (CiSystemAcquirePushLock.c)
 */

__int64 __fastcall CiDispatchCreateNotificationClient(PIRP Irp, __int64 a2)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // r14
  __int64 v6; // rsi
  NTSTATUS v7; // ebp
  char *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  char *v12; // [rsp+40h] [rbp+8h] BYREF

  CurrentProcess = PsGetCurrentProcess();
  v5 = *(_QWORD *)(a2 + 48);
  v6 = CurrentProcess;
  v7 = 0;
  KeEnterCriticalRegion();
  v12 = (char *)CiProcessLocate(v6);
  v8 = v12;
  if ( !v12 )
  {
    v7 = CiProcessCreate(&v12);
    if ( v7 < 0 )
      goto LABEL_6;
    v8 = v12;
  }
  CiSystemAcquirePushLock((__int64)(v8 + 16));
  if ( *((_QWORD *)v8 + 1) )
    v7 = -1073741790;
  else
    *((_QWORD *)v8 + 1) = v5;
  *((_QWORD *)v8 + 3) = 0LL;
  ExReleasePushLockExclusiveEx(v8 + 16, 0LL);
  if ( v7 < 0 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_q((__int64)WPP_GLOBAL_Control->AttachedDevice, v9, v10, *((_QWORD *)v8 + 1));
    CiProcessDereference(v8);
  }
  else
  {
    *(_QWORD *)(v5 + 24) = v8;
  }
LABEL_6:
  KeLeaveCriticalRegion();
  Irp->IoStatus.Status = v7;
  Irp->IoStatus.Information = 0LL;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v7;
}
