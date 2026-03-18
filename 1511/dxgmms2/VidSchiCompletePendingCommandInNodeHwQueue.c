/*
 * XREFs of VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C0022F10
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C00086D0 (VidSchiSendToExecutionQueue.c)
 *     VidSchiResetEngine @ 0x1C00212F4 (VidSchiResetEngine.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C0022E60 (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000B390 (VidSchiProfilePerformanceTick.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C0020BE4 (VidSchDdiNotifyDpcWorker.c)
 *     VidSchWaitForCompletionEvent @ 0x1C003C908 (VidSchWaitForCompletionEvent.c)
 */

void __fastcall VidSchiCompletePendingCommandInNodeHwQueue(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rcx
  _DWORD v17[20]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v18[2]; // [rsp+98h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v20[40]; // [rsp+C8h] [rbp-40h] BYREF
  char v21; // [rsp+178h] [rbp+70h] BYREF
  __int64 v22; // [rsp+180h] [rbp+78h]

  v22 = a2;
  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 2720) )
  {
    if ( a3 && *(_DWORD *)(a1 + 2720) > 1u )
    {
      memset(v20, 0, sizeof(v20));
      v5 = *(unsigned __int16 *)(a1 + 4);
      v20[4] = 0;
      v20[8] |= 0x10u;
      v20[12] = v5;
      v20[5] = 1;
      *(_QWORD *)(a1 + 240) = MEMORY[0xFFFFF78000000320];
      KeResetEvent((PRKEVENT)(a1 + 200));
      while ( *(_DWORD *)(a1 + 2720) > 1u )
      {
        VidSchiProfilePerformanceTick(16LL, v4, 0LL, v6, 0LL, 0LL, 0LL, 0LL);
        VidSchWaitForCompletionEvent(v4, v20, 0xFFFFFFFFLL);
        VidSchiProfilePerformanceTick(17LL, v4, 0LL, v7, 0LL, 0LL, 0LL, 0LL);
      }
    }
    if ( *(_DWORD *)(a1 + 2720) )
    {
      v21 = 0;
      memset(v17, 0, sizeof(v17));
      v8 = *(unsigned __int16 *)(a1 + 4);
      v9 = *(_QWORD *)(a1 + 24);
      if ( *(_DWORD *)(a1 + 2728) )
      {
        v17[3] = v22;
        v17[2] = *(_DWORD *)(a1 + 152);
        v17[0] = 2;
        v17[4] = *(unsigned __int16 *)(*(_QWORD *)(v9 + 8 * v8 + 376) + 8LL);
        v10 = *(_QWORD *)(v9 + 8 * v8 + 376);
        v11 = *(unsigned __int16 *)(v10 + 6);
        v17[5] = *(unsigned __int16 *)(v10 + 6);
        v12 = (_QWORD *)WdLogNewEntry5_WdEvent(v11, v9);
        v12[3] = v17[3];
        v12[4] = v17[2];
        v12[5] = v17[4];
        v12[6] = v17[5];
      }
      else
      {
        v17[0] = 1;
        v17[2] = v22;
        v17[3] = *(unsigned __int16 *)(*(_QWORD *)(v9 + 8 * v8 + 376) + 8LL);
        v13 = *(_QWORD *)(v9 + 8 * v8 + 376);
        v14 = *(unsigned __int16 *)(v13 + 6);
        v17[4] = *(unsigned __int16 *)(v13 + 6);
        v12 = (_QWORD *)WdLogNewEntry5_WdEvent(v14, v9);
        v12[3] = v17[2];
        v12[4] = v17[3];
        v12[5] = v17[4];
      }
      WdLogEvent5_WdEvent(v12);
      v15 = *(unsigned int *)(v4 + 32);
      v16 = *(_QWORD *)(v4 + 24);
      v18[0] = *(_QWORD *)(v4 + 8);
      v18[1] = v17;
      DpSynchronizeExecution(v16, VidSchiCallNotifyInterruptAtISR, v18, v15, &v21);
    }
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1848), &LockHandle);
  VidSchDdiNotifyDpcWorker(*(_QWORD *)(v4 + 8), 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
