/*
 * XREFs of CiDispatchCreateNotificationClient @ 0x1C000A030
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00040E4 (WPP_SF_q.c)
 *     CiProcessLocate @ 0x1C000AAA0 (CiProcessLocate.c)
 *     CiProcessCreate @ 0x1C000ADF0 (CiProcessCreate.c)
 *     CiProcessDereference @ 0x1C000B320 (CiProcessDereference.c)
 *     CiSystemAcquirePushLock @ 0x1C000B4F0 (CiSystemAcquirePushLock.c)
 */

__int64 __fastcall CiDispatchCreateNotificationClient(PIRP Irp, __int64 a2)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // r14
  __int64 v6; // rsi
  NTSTATUS v7; // ebp
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  CurrentProcess = PsGetCurrentProcess();
  v5 = *(_QWORD *)(a2 + 48);
  v6 = CurrentProcess;
  v7 = 0;
  KeEnterCriticalRegion();
  v12 = CiProcessLocate(v6);
  v8 = (_QWORD *)v12;
  if ( !v12 )
  {
    v7 = CiProcessCreate(&v12);
    if ( v7 < 0 )
      goto LABEL_6;
    v8 = (_QWORD *)v12;
  }
  CiSystemAcquirePushLock(v8 + 2);
  if ( v8[1] )
    v7 = -1073741790;
  else
    v8[1] = v5;
  v8[3] = 0LL;
  ExReleasePushLockExclusiveEx(v8 + 2, 0LL);
  if ( v7 < 0 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_q((__int64)WPP_GLOBAL_Control->AttachedDevice, v9, v10, v8[1]);
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
