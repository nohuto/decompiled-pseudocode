/*
 * XREFs of USBCaptureSubmitRequest @ 0x1C0021E60
 * Callers:
 *     USBCaptureRequeueWorker @ 0x1C0005100 (USBCaptureRequeueWorker.c)
 *     USBCaptureStartTransfers @ 0x1C0021FA8 (USBCaptureStartTransfers.c)
 * Callees:
 *     memset @ 0x1C0008380 (memset.c)
 */

NTSTATUS __fastcall USBCaptureSubmitRequest(_QWORD *a1)
{
  _WORD *v2; // rdi
  IRP *v3; // r13
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // r12
  int v7; // r15d
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // r8d
  __int64 v11; // rcx
  __int16 v12; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v14; // rax

  v2 = (_WORD *)a1[3];
  v3 = (IRP *)a1[2];
  v4 = *(_QWORD *)(a1[5] + 16LL);
  v5 = *(_QWORD *)(v4 + 136);
  v6 = *(_QWORD *)(v4 + 16);
  v7 = *(_DWORD *)(*(_QWORD *)(v4 + 128) + 212LL);
  v8 = 12 * *(_DWORD *)(v5 + 92) + 152;
  memset(v2, 0, v8);
  *v2 = v8;
  v2[1] = 10;
  v9 = 0LL;
  *((_QWORD *)v2 + 3) = *(_QWORD *)(v5 + 64);
  *((_DWORD *)v2 + 8) = 5;
  *((_DWORD *)v2 + 32) = 0;
  *((_DWORD *)v2 + 33) = *(_DWORD *)(v5 + 92);
  if ( *(_DWORD *)(v5 + 92) )
  {
    v10 = 0;
    do
    {
      v11 = 3 * v9;
      v9 = (unsigned int)(v9 + 1);
      *(_DWORD *)&v2[2 * v11 + 70] = v10;
      v10 += v7;
    }
    while ( (unsigned int)v9 < *(_DWORD *)(v5 + 92) );
  }
  *((_QWORD *)v2 + 5) = a1[6];
  *((_DWORD *)v2 + 9) = *(_DWORD *)(v5 + 92) * v7;
  v12 = *(char *)(*(_QWORD *)(v6 + 40) + 76LL);
  IoInitializeIrp(v3, 72 * v12 + 208, v12);
  CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 15;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v2;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
  v14 = v3->Tail.Overlay.CurrentStackLocation;
  v14[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)USBCaptureCompleteCallback;
  v14[-1].Context = a1;
  v14[-1].Control = -32;
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 40));
  return IofCallDriver(*(PDEVICE_OBJECT *)(v6 + 40), v3);
}
