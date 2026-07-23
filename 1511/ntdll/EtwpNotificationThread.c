/*
 * XREFs of EtwpNotificationThread @ 0x180052810
 * Callers:
 *     <none>
 * Callees:
 *     TpSetWaitEx @ 0x18000A960 (TpSetWaitEx.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     EtwDeliverDataBlock @ 0x180052940 (EtwDeliverDataBlock.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A85D0 (NtTraceControl.c)
 */

void __fastcall EtwpNotificationThread(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_WAIT a3)
{
  _ETW_NOTIFICATION_HEADER *Heap; // rbx
  ULONG OutputBufferLength; // esi
  NTSTATUS v7; // eax
  int v8; // edi
  LARGE_INTEGER *v9; // r8
  ULONG ReturnLength; // [rsp+30h] [rbp-138h] BYREF
  __int64 v11; // [rsp+38h] [rbp-130h] BYREF
  _BYTE OutputBuffer[256]; // [rsp+40h] [rbp-128h] BYREF

  v11 = -600000000LL;
  Heap = (_ETW_NOTIFICATION_HEADER *)OutputBuffer;
  OutputBufferLength = 256;
  while ( 1 )
  {
    v7 = NtTraceControl(EtwReceiveNotification, 0LL, 0, Heap, OutputBufferLength, &ReturnLength);
    v8 = v7;
    if ( v7 < 0 )
      break;
    EtwDeliverDataBlock(Heap);
LABEL_4:
    if ( v8 != 261 )
    {
      v9 = 0LL;
      goto LABEL_6;
    }
  }
  if ( v7 != -1073741789 )
    goto LABEL_4;
  if ( Heap != (_ETW_NOTIFICATION_HEADER *)OutputBuffer )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  OutputBufferLength = ReturnLength;
  Heap = (_ETW_NOTIFICATION_HEADER *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, ReturnLength);
  if ( Heap )
  {
    v8 = 261;
    goto LABEL_4;
  }
  v9 = (LARGE_INTEGER *)&v11;
LABEL_6:
  TpSetWaitEx(a3, a2, v9, 0LL);
  if ( Heap != (_ETW_NOTIFICATION_HEADER *)OutputBuffer )
  {
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
}
