/*
 * XREFs of PipEnumerateCompleted @ 0x1403F1FB0
 * Callers:
 *     PipProcessDevNodeTree @ 0x1403F30A4 (PipProcessDevNodeTree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1400091A0 (PipSetDevNodeState.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiSwGetChildPdo @ 0x1403F03EC (PiSwGetChildPdo.c)
 *     PiSwLock @ 0x1403F0938 (PiSwLock.c)
 *     PiSwFindChildren @ 0x1403F0958 (PiSwFindChildren.c)
 *     PipProcessEnumeratedChildDevice @ 0x1403F21AC (PipProcessEnumeratedChildDevice.c)
 *     PipSetDevNodeFlags @ 0x1403F2264 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1403F22D8 (PipClearDevNodeFlags.c)
 *     PnpRequestDeviceRemoval @ 0x140484BC8 (PnpRequestDeviceRemoval.c)
 *     PiPnpRtlEndOperation @ 0x1404E440C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1404E46CC (PiPnpRtlBeginOperation.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404E9804 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipEnumerateCompleted(__int64 a1)
{
  _QWORD *v2; // rdi
  _DWORD *v3; // rax
  __int64 v4; // rdi
  _QWORD **Children; // rax
  __int64 v6; // r8
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rdi
  char v12; // bp
  __int64 *v13; // rsi
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD *v18; // rdi
  PDEVICE_OBJECT ChildPdo; // rax
  __int64 v20; // rdx
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v2 = *(_QWORD **)(a1 + 8);
  if ( *(_QWORD *)(a1 + 528) )
  {
    while ( v2 )
    {
      PipClearDevNodeFlags(v2, 16LL);
      v2 = (_QWORD *)*v2;
    }
  }
  else
  {
    while ( v2 )
    {
      if ( *(PDRIVER_OBJECT *)(v2[4] + 8LL) == PiSwDeviceDriverObject )
        PipClearDevNodeFlags(v2, 16LL);
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
  Children = (_QWORD **)PiSwFindChildren();
  v7 = Children;
  if ( Children )
  {
    v18 = *Children;
    if ( *Children != Children )
    {
      do
      {
        ChildPdo = PiSwGetChildPdo(*(_QWORD *)(a1 + 32), (__int64)v18, v6);
        if ( ChildPdo )
          PipProcessEnumeratedChildDevice(a1, ChildPdo);
        v18 = (_QWORD *)*v18;
      }
      while ( v18 != v7 );
    }
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
  v11 = *(__int64 **)(a1 + 8);
  v12 = 0;
  if ( v11 )
  {
    do
    {
      v13 = (__int64 *)*v11;
      if ( (*((_DWORD *)v11 + 99) & 0x10010) == 0 )
      {
        PipSetDevNodeFlags(v11, 0x10000LL);
        LOBYTE(v20) = 1;
        PnpRequestDeviceRemoval(v11, v20, 24LL, 0LL);
        v12 = 1;
      }
      v11 = v13;
    }
    while ( v13 );
  }
  PipSetDevNodeState(a1, 776);
  if ( !v12 || a1 == IopRootDeviceNode )
    v14 = 0;
  else
    v14 = -1073741106;
  PiPnpRtlBeginOperation(&P);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v15, *(_QWORD *)(IopRootDeviceNode + 48), 15LL);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v16, *(_QWORD *)(IopRootDeviceNode + 48), 20LL);
  if ( P )
    PiPnpRtlEndOperation(P);
  return v14;
}
