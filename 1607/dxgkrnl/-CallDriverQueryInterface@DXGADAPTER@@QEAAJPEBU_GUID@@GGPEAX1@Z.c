/*
 * XREFs of ?CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z @ 0x1C00E55B4
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00E5674 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DXGADAPTER::CallDriverQueryInterface(
        PDEVICE_OBJECT *this,
        const struct _GUID *a2,
        __int64 a3,
        __int64 a4,
        void *a5)
{
  PIRP v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _DEVICE_OBJECT *v11; // rcx
  NTSTATUS result; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  if ( KeGetCurrentIrql() )
  {
    v13 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v13 + 24) = 7152LL;
    WdLogEvent5_WdAssertion(v13);
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v6 = IoBuildSynchronousFsdRequest(0x1Bu, this[24], 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( v6 )
  {
    CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)&GUID_AGP_BUS_INTERFACE_STANDARD;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)a5;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
    CurrentStackLocation[-1].Parameters.Create.Options = 327864;
    v6->IoStatus.Status = -1073741637;
    v11 = this[24];
    IoStatusBlock.Status = -1073741637;
    result = IofCallDriver(v11, v6);
    if ( result == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      return IoStatusBlock.Status;
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdWarning(v7, 0LL, v8, v9);
    *(_QWORD *)(v14 + 24) = this;
    *(_QWORD *)(v14 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v14);
    return -1073741801;
  }
  return result;
}
