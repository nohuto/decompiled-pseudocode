/*
 * XREFs of PipEnumerateCompleted @ 0x1404E09B8
 * Callers:
 *     PipProcessDevNodeTree @ 0x1404E16BC (PipProcessDevNodeTree.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     PipSetDevNodeState @ 0x1400CFB9C (PipSetDevNodeState.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiPnpRtlBeginOperation @ 0x14043B8C8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x14043BCB0 (PiPnpRtlEndOperation.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404DF4DC (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipProcessEnumeratedChildDevice @ 0x1404E0BF8 (PipProcessEnumeratedChildDevice.c)
 *     PipSetDevNodeFlags @ 0x1404E3454 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1404E3CDC (PipClearDevNodeFlags.c)
 *     PnpRequestDeviceRemoval @ 0x140534B48 (PnpRequestDeviceRemoval.c)
 *     PiSwFindChildren @ 0x140538A2C (PiSwFindChildren.c)
 *     PiSwGetChildPdo @ 0x140539FCC (PiSwGetChildPdo.c)
 */

__int64 __fastcall PipEnumerateCompleted(__int64 a1)
{
  _QWORD *v1; // rdi
  _DWORD *v3; // rax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **Children; // rax
  _QWORD *v6; // rsi
  struct _KTHREAD *v7; // rcx
  __int16 v8; // ax
  __int64 *v9; // rdi
  char v10; // bp
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v15; // edi
  __int64 *v16; // rsi
  _QWORD *v17; // rdi
  __int64 ChildPdo; // rax
  __int64 v19; // rdx
  bool v20; // zf
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD **)(a1 + 8);
  P = 0LL;
  if ( *(_QWORD *)(a1 + 528) )
  {
    while ( v1 )
    {
      PipClearDevNodeFlags(v1, 16LL);
      v1 = (_QWORD *)*v1;
    }
  }
  else
  {
    while ( v1 )
    {
      if ( *(PDRIVER_OBJECT *)(v1[4] + 8LL) == PiSwDeviceDriverObject )
        PipClearDevNodeFlags(v1, 16LL);
      v1 = (_QWORD *)*v1;
    }
  }
  v3 = *(_DWORD **)(a1 + 528);
  if ( v3 )
  {
    v15 = 0;
    if ( *v3 )
    {
      do
        PipProcessEnumeratedChildDevice(a1, *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * v15++ + 8));
      while ( v15 < **(_DWORD **)(a1 + 528) );
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 528), 0);
    *(_QWORD *)(a1 + 528) = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  Children = (_QWORD **)PiSwFindChildren(a1 + 40);
  v6 = Children;
  if ( Children )
  {
    v17 = *Children;
    if ( *Children != Children )
    {
      do
      {
        ChildPdo = PiSwGetChildPdo(*(_QWORD *)(a1 + 32), v17);
        if ( ChildPdo )
          PipProcessEnumeratedChildDevice(a1, ChildPdo);
        v17 = (_QWORD *)*v17;
      }
      while ( v17 != v6 );
    }
  }
  ExReleaseResourceLite(&PiSwLockObj);
  v7 = KeGetCurrentThread();
  v8 = v7->KernelApcDisable + 1;
  v7->KernelApcDisable = v8;
  if ( !v8
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v7->ApcState.ApcListHead[0].Flink != &v7->152
    && !v7->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  v9 = *(__int64 **)(a1 + 8);
  v10 = 0;
  if ( v9 )
  {
    do
    {
      v16 = (__int64 *)*v9;
      if ( (*((_DWORD *)v9 + 99) & 0x10010) == 0 )
      {
        PipSetDevNodeFlags(v9, 0x10000LL);
        LOBYTE(v19) = 1;
        PnpRequestDeviceRemoval(v9, v19, 24LL);
        v10 = 1;
      }
      v9 = v16;
    }
    while ( v16 );
  }
  PipSetDevNodeState(a1, 776);
  if ( !v10 || (v20 = a1 == IopRootDeviceNode, v11 = -1073741106, v20) )
    v11 = 0;
  PiPnpRtlBeginOperation((__int64 **)&P);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v12, *(_QWORD *)(IopRootDeviceNode + 48), 15);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v13, *(_QWORD *)(IopRootDeviceNode + 48), 20);
  if ( P )
    PiPnpRtlEndOperation((char *)P);
  return v11;
}
