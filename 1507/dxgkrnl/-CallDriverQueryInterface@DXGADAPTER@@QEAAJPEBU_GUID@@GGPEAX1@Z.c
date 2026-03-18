/*
 * XREFs of ?CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z @ 0x1C00BEA20
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00BEB04 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
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
  USHORT v5; // di
  USHORT v6; // si
  PIRP v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _DEVICE_OBJECT *v14; // rcx
  NTSTATUS result; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  v5 = a4;
  v6 = a3;
  if ( KeGetCurrentIrql() )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v16 + 24) = 20591LL;
    WdLogEvent5_WdAssertion(v16);
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v9 = IoBuildSynchronousFsdRequest(0x1Bu, this[22], 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( v9 )
  {
    CurrentStackLocation = v9->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)a5;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)a2;
    CurrentStackLocation[-1].Parameters.QueryInterface.Size = v6;
    CurrentStackLocation[-1].Parameters.QueryInterface.Version = v5;
    v9->IoStatus.Status = -1073741637;
    v14 = this[22];
    IoStatusBlock.Status = -1073741637;
    result = IofCallDriver(v14, v9);
    if ( result == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      return IoStatusBlock.Status;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdWarning(v10, 0LL, v11, v12);
    *(_QWORD *)(v17 + 24) = this;
    *(_QWORD *)(v17 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v17);
    return -1073741801;
  }
  return result;
}
