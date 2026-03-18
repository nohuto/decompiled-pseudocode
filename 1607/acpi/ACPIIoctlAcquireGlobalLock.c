/*
 * XREFs of ACPIIoctlAcquireGlobalLock @ 0x1C0050434
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C00044E0 (ACPIIrpDispatchDeviceControl.c)
 * Callees:
 *     ACPIAsyncAcquireGlobalLock @ 0x1C0014380 (ACPIAsyncAcquireGlobalLock.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall ACPIIoctlAcquireGlobalLock(__int64 a1, IRP *a2, __int64 a3)
{
  unsigned int v3; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  _IRP *MasterIrp; // rsi
  PVOID PoolWithTag; // rax
  __int64 v9; // rbx

  v3 = *(_DWORD *)(a3 + 8);
  a2->IoStatus.Information = 0LL;
  if ( v3 < 0x10 )
  {
    v5 = -1073741820;
LABEL_3:
    a2->IoStatus.Status = v5;
    IofCompleteRequest(a2, 0);
    return v5;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( *(_DWORD *)&MasterIrp->Type != 1281843521 )
  {
    v5 = -1073741585;
    goto LABEL_3;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x4C706341u);
  v9 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    v5 = -1073741670;
    goto LABEL_3;
  }
  memset(PoolWithTag, 0, 0x20uLL);
  MasterIrp->MdlAddress = (_MDL *)v9;
  a2->IoStatus.Information = 16LL;
  *(_WORD *)(v9 + 8) = 1;
  *(_QWORD *)v9 = a2;
  v5 = ACPIAsyncAcquireGlobalLock(v9);
  result = 259LL;
  if ( v5 != 259 )
    goto LABEL_3;
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  return result;
}
