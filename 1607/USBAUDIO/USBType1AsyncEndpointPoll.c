/*
 * XREFs of USBType1AsyncEndpointPoll @ 0x1C0003800
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0008380 (memset.c)
 *     USBHwAbortOrResetPipe @ 0x1C001D550 (USBHwAbortOrResetPipe.c)
 */

void __fastcall USBType1AsyncEndpointPoll(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  _QWORD *v2; // rbx
  __int64 v4; // rdi
  KSPIN_LOCK *v5; // rsi
  _DWORD *v6; // r15
  struct _DEVICE_OBJECT *v7; // r14
  IRP *v8; // r12
  KIRQL v9; // al
  KIRQL v10; // bp
  __int64 v11; // rax
  unsigned int v12; // edx
  unsigned int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // rdx
  KIRQL v16; // al
  KIRQL v17; // bl
  KIRQL v18; // dl
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v20; // rax

  v2 = (_QWORD *)Context[2];
  v4 = v2[17];
  v5 = v2 + 12;
  v6 = *(_DWORD **)(v4 + 848);
  v7 = *(struct _DEVICE_OBJECT **)(v2[2] + 40LL);
  v8 = *(IRP **)(v4 + 856);
  v9 = KeAcquireSpinLockRaiseToDpc(v2 + 12);
  v10 = v9;
  if ( *(_BYTE *)(v4 + 84) )
  {
    *(_BYTE *)(v4 + 901) = 1;
    KeReleaseSpinLock(v2 + 12, v9);
    if ( (int)USBHwAbortOrResetPipe(v7) >= 0 )
      goto LABEL_11;
    v11 = v2[17];
    v12 = 0;
    v13 = *(_DWORD *)(v11 + 56);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v11 + 72);
      while ( *(_BYTE *)(v14 + 24LL * v12 + 2) != *(_BYTE *)(*(_QWORD *)(v2[16] + 176LL) + 2LL) )
      {
        if ( ++v12 >= v13 )
          goto LABEL_10;
      }
      v15 = *(_QWORD *)(v14 + 24LL * v12 + 8);
      if ( v15 )
      {
        *(_QWORD *)(v4 + 872) = v15;
        if ( (int)USBHwAbortOrResetPipe(v7) >= 0 )
        {
LABEL_11:
          memset(v6, 0, 0xA4uLL);
          *v6 = 655524;
          *((_QWORD *)v6 + 3) = *(_QWORD *)(v4 + 872);
          v6[8] = 1;
          v6[32] = *(_DWORD *)(v4 + 880);
          v6[33] = 1;
          v6[35] = 0;
          *((_QWORD *)v6 + 5) = v4 + 960;
          v6[9] = 3;
          IoInitializeIrp(v8, 72 * v7->StackSize + 208, v7->StackSize);
          CurrentStackLocation = v8->Tail.Overlay.CurrentStackLocation;
          CurrentStackLocation[-1].MajorFunction = 15;
          CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v6;
          CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
          v20 = v8->Tail.Overlay.CurrentStackLocation;
          v20[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)USBType1AsyncEndpointPollCallback;
          v20[-1].Context = Context;
          v20[-1].Control = -32;
          IofCallDriver(v7, v8);
          return;
        }
      }
    }
LABEL_10:
    v16 = KeAcquireSpinLockRaiseToDpc(v2 + 12);
    *(_BYTE *)(v4 + 901) = 0;
    v17 = v16;
    KeSetEvent((PRKEVENT)(v4 + 904), 0, 0);
    *(_BYTE *)(v4 + 900) = 0;
    KeSetEvent((PRKEVENT)(v4 + 928), 0, 0);
    v18 = v17;
  }
  else
  {
    *(_BYTE *)(v4 + 900) = 0;
    KeSetEvent((PRKEVENT)(v4 + 928), 0, 0);
    v18 = v10;
  }
  KeReleaseSpinLock(v5, v18);
}
