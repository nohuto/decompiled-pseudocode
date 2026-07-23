/*
 * XREFs of TtmpAcquireSessionFromTerminalHandle @ 0x1406796B0
 * Callers:
 *     TtmpDispatchAssignDevice @ 0x1406797E4 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x140679890 (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x1406799F4 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x140679ADC (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x140679CE4 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayState @ 0x140679D94 (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x140679E4C (TtmpDispatchSetDisplayTimeouts.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     TtmiLogError @ 0x14054710C (TtmiLogError.c)
 *     TtmpAcquireSessionLock @ 0x140678F44 (TtmpAcquireSessionLock.c)
 */

__int64 __fastcall TtmpAcquireSessionFromTerminalHandle(void *a1, char a2, char a3, _QWORD *a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdi
  KPROCESSOR_MODE PreviousMode; // r9
  struct _OBJECT_TYPE *v11; // r8
  NTSTATUS v12; // eax
  int v13; // ebx
  int v14; // r8d
  int v15; // edx
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9

  CurrentThread = KeGetCurrentThread();
  v7 = a5;
  *a4 = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  v11 = TtmpTerminalObjectType;
  *(_QWORD *)v7 = 0LL;
  v12 = ObReferenceObjectByHandle(a1, 2u, v11, PreviousMode, (PVOID *)&a5, 0LL);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v13 = 0;
    *(_QWORD *)v7 = a5;
  }
  else
  {
    *(_QWORD *)v7 = 0LL;
    TtmiLogError("TtmiReferenceTerminalByHandle", 868, v12, v12);
  }
  if ( v13 < 0 )
  {
    v14 = v13;
    v15 = 88;
LABEL_6:
    TtmiLogError("TtmpAcquireSessionFromTerminalHandle", v15, v14, v13);
    return (unsigned int)v13;
  }
  v17 = *(_QWORD *)v7;
  if ( *(_DWORD *)(*(_QWORD *)v7 + 28LL) )
  {
    if ( !a3 )
    {
      v14 = -1;
      v13 = -1073741788;
      v15 = 98;
      goto LABEL_6;
    }
  }
  else if ( !a2 )
  {
    v14 = -1;
    v13 = -1073741788;
    v15 = 93;
    goto LABEL_6;
  }
  TtmpAcquireSessionLock();
  v18 = *(_QWORD *)(v17 + 16);
  if ( (*(_DWORD *)(v18 + 4) & 4) != 0 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v19, v20, v21);
    v14 = -1;
    v13 = -1073740715;
    v15 = 105;
    goto LABEL_6;
  }
  *a4 = v18;
  return 0LL;
}
