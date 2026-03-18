/*
 * XREFs of PipEnumerateCompleted @ 0x140457A40
 * Callers:
 *     PipProcessDevNodeTree @ 0x1404583C8 (PipProcessDevNodeTree.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PipSetDevNodeState @ 0x140099720 (PipSetDevNodeState.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PiPnpRtlBeginOperation @ 0x140440904 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140440BC0 (PiPnpRtlEndOperation.c)
 *     PipClearDevNodeFlags @ 0x1404574A4 (PipClearDevNodeFlags.c)
 *     PipProcessEnumeratedChildDevice @ 0x140457C40 (PipProcessEnumeratedChildDevice.c)
 *     PipSetDevNodeFlags @ 0x140457CF8 (PipSetDevNodeFlags.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140459EF0 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PiSwLock @ 0x140494B8C (PiSwLock.c)
 *     PiSwGetChildPdo @ 0x140494F18 (PiSwGetChildPdo.c)
 *     PiSwFindChildren @ 0x140496750 (PiSwFindChildren.c)
 *     PnpRequestDeviceRemoval @ 0x14049EA8C (PnpRequestDeviceRemoval.c)
 */

__int64 __fastcall PipEnumerateCompleted(__int64 a1)
{
  _QWORD *v2; // rdi
  _DWORD *v3; // rax
  __int64 v4; // rdi
  _QWORD **Children; // rax
  _QWORD *v6; // rsi
  __int64 *v7; // rdi
  char v8; // bp
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 *v13; // rsi
  _QWORD *v14; // rdi
  __int64 ChildPdo; // rax
  __int64 v16; // rdx
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = 0LL;
  v2 = *(_QWORD **)(a1 + 8);
  if ( *(_QWORD *)(a1 + 528) )
  {
    while ( v2 )
    {
      PipClearDevNodeFlags((__int64)v2, 16);
      v2 = (_QWORD *)*v2;
    }
  }
  else
  {
    while ( v2 )
    {
      if ( *(PDRIVER_OBJECT *)(v2[4] + 8LL) == PiSwDeviceDriverObject )
        PipClearDevNodeFlags((__int64)v2, 16);
      v2 = (_QWORD *)*v2;
    }
  }
  v3 = *(_DWORD **)(a1 + 528);
  if ( v3 )
  {
    v4 = 0LL;
    if ( *v3 )
    {
      do
      {
        PipProcessEnumeratedChildDevice(a1, *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v4 + 8));
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < **(_DWORD **)(a1 + 528) );
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 528), 0);
    *(_QWORD *)(a1 + 528) = 0LL;
  }
  PiSwLock();
  Children = (_QWORD **)PiSwFindChildren(a1 + 40);
  v6 = Children;
  if ( Children )
  {
    v14 = *Children;
    if ( *Children != Children )
    {
      do
      {
        ChildPdo = PiSwGetChildPdo(*(_QWORD *)(a1 + 32), v14);
        if ( ChildPdo )
          PipProcessEnumeratedChildDevice(a1, ChildPdo);
        v14 = (_QWORD *)*v14;
      }
      while ( v14 != v6 );
    }
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v7 = *(__int64 **)(a1 + 8);
  v8 = 0;
  if ( v7 )
  {
    do
    {
      v13 = (__int64 *)*v7;
      if ( (*((_DWORD *)v7 + 99) & 0x10010) == 0 )
      {
        PipSetDevNodeFlags(v7, 0x10000LL);
        LOBYTE(v16) = 1;
        PnpRequestDeviceRemoval(v7, v16, 24LL);
        v8 = 1;
      }
      v7 = v13;
    }
    while ( v13 );
  }
  PipSetDevNodeState(a1, 776);
  if ( !v8 || a1 == IopRootDeviceNode )
    v9 = 0;
  else
    v9 = -1073741106;
  PiPnpRtlBeginOperation((__int64 **)&P);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v10, *(_QWORD *)(IopRootDeviceNode + 48), 15LL);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v11, *(_QWORD *)(IopRootDeviceNode + 48), 20LL);
  if ( P )
    PiPnpRtlEndOperation((char *)P);
  return v9;
}
