/*
 * XREFs of USBType1AsyncEndpointPoll @ 0x1C00036C0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0008240 (memset.c)
 *     USBHwAbortOrResetPipe @ 0x1C001D4EC (USBHwAbortOrResetPipe.c)
 */

void __fastcall USBType1AsyncEndpointPoll(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  _QWORD *v2; // rdi
  __int64 v4; // rbx
  _DWORD *v5; // r15
  struct _DEVICE_OBJECT *v6; // r14
  IRP *v7; // r12
  KIRQL v8; // al
  KIRQL v9; // bp
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // r8d
  __int64 v13; // r9
  __int64 v14; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v16; // rax

  v2 = (_QWORD *)Context[2];
  v4 = v2[17];
  v5 = *(_DWORD **)(v4 + 848);
  v6 = *(struct _DEVICE_OBJECT **)(v2[2] + 40LL);
  v7 = *(IRP **)(v4 + 856);
  v8 = KeAcquireSpinLockRaiseToDpc(v2 + 12);
  v9 = v8;
  if ( *(_BYTE *)(v4 + 84) )
  {
    *(_BYTE *)(v4 + 901) = 1;
    KeReleaseSpinLock(v2 + 12, v8);
    if ( (int)USBHwAbortOrResetPipe(v6) >= 0 )
      goto LABEL_11;
    v10 = v2[17];
    v11 = 0LL;
    v12 = *(_DWORD *)(v10 + 56);
    if ( !v12 )
      goto LABEL_10;
    v13 = *(_QWORD *)(v10 + 72);
    while ( *(_BYTE *)(v13 + 24 * v11 + 2) != *(_BYTE *)(*(_QWORD *)(v2[16] + 176LL) + 2LL) )
    {
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= v12 )
        goto LABEL_10;
    }
    v14 = *(_QWORD *)(v13 + 24 * v11 + 8);
    if ( v14 && (*(_QWORD *)(v4 + 872) = v14, (int)USBHwAbortOrResetPipe(v6) >= 0) )
    {
LABEL_11:
      memset(v5, 0, 0xA4uLL);
      *v5 = 655524;
      *((_QWORD *)v5 + 3) = *(_QWORD *)(v4 + 872);
      v5[8] = 1;
      v5[32] = *(_DWORD *)(v4 + 880);
      v5[33] = 1;
      v5[35] = 0;
      *((_QWORD *)v5 + 5) = v4 + 960;
      v5[9] = 3;
      IoInitializeIrp(v7, 72 * v6->StackSize + 208, v6->StackSize);
      CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].MajorFunction = 15;
      CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v5;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
      v16 = v7->Tail.Overlay.CurrentStackLocation;
      v16[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)USBType1AsyncEndpointPollCallback;
      v16[-1].Context = Context;
      v16[-1].Control = -32;
      IofCallDriver(v6, v7);
    }
    else
    {
LABEL_10:
      *(_BYTE *)(v4 + 900) = 0;
      KeSetEvent((PRKEVENT)(v4 + 928), 0, 0);
    }
  }
  else
  {
    *(_BYTE *)(v4 + 900) = 0;
    KeSetEvent((PRKEVENT)(v4 + 928), 0, 0);
    KeReleaseSpinLock(v2 + 12, v9);
  }
}
