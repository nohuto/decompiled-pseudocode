/*
 * XREFs of AlpcpReceiveLegacyMessage @ 0x14049D4E0
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x14049D380 (NtReplyWaitReceivePortEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x14008BCA0 (ObReferenceObjectSafe.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     AlpcpCancelMessage @ 0x140407A54 (AlpcpCancelMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14044BC40 (AlpcpReceiveMessagePort.c)
 *     AlpcpReadMessageData @ 0x14049D800 (AlpcpReadMessageData.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x14049D884 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1404AEF1C (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpUnlockBlob @ 0x1404F14C0 (AlpcpUnlockBlob.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140654FBC (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcpReceiveLegacyMessage(__int64 *a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 *v6; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // rcx
  void *v12; // r12
  unsigned int v13; // r15d
  ULONG_PTR v14; // rdi
  __int64 v15; // rdx
  void **v17; // r12
  __int64 v18; // r14
  __int64 v19; // [rsp+30h] [rbp-68h]
  void **v20; // [rsp+30h] [rbp-68h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-60h] BYREF
  __int64 v22; // [rsp+40h] [rbp-58h] BYREF
  __int64 v23; // [rsp+48h] [rbp-50h]
  void *v24; // [rsp+50h] [rbp-48h]
  struct _KTHREAD *v25; // [rsp+58h] [rbp-40h]
  __int64 *v27; // [rsp+B0h] [rbp+18h]

  v27 = (__int64 *)a3;
  v6 = a1;
  CurrentThread = KeGetCurrentThread();
  v25 = CurrentThread;
  v8 = CurrentThread->gap0[10];
  v22 = 0LL;
  v9 = *v6;
  v19 = *v6;
  v23 = *v6;
  if ( v8 )
  {
    v10 = a3;
    if ( a3 )
    {
      if ( a3 >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      v22 = *(_QWORD *)v10;
      v10 = (__int64)&v22;
      v27 = &v22;
    }
    if ( a2 )
    {
      AlpcpProbeForWriteMessageHeader(a2, 0LL);
      v9 = v19;
    }
    if ( a4 )
    {
      v11 = (__int64)a4;
      if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
        v11 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v11 = *(_QWORD *)v11;
      v10 = (__int64)v27;
    }
    v6 = a1;
  }
  else
  {
    v10 = a3;
    v8 = (CurrentThread->MiscFlags & 0x400) != 0;
  }
  v12 = 0LL;
  v24 = 0LL;
  if ( (*(_BYTE *)(v9 + 416) & 6) == 6 )
  {
    v17 = *(void ***)(v9 + 16);
    v20 = v17;
    v18 = KeAbPreAcquire((ULONG_PTR)(v17 - 2), 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v17 - 2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)v17 - 2, v18, (ULONG_PTR)(v17 - 2));
    if ( v18 )
      *(_BYTE *)(v18 + 26) |= 1u;
    v12 = *v17;
    v24 = v12;
    if ( v12 && ObReferenceObjectSafe((__int64)v12) )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v20 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v20 - 2);
      KeAbPostRelease((ULONG_PTR)(v20 - 2));
      v19 = (__int64)v12;
      v23 = (__int64)v12;
      *v6 = (__int64)v12;
      v10 = (__int64)v27;
      goto LABEL_14;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v20 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v20 - 2);
    KeAbPostRelease((ULONG_PTR)(v20 - 2));
    return 3221225527LL;
  }
  else
  {
LABEL_14:
    while ( 1 )
    {
      v13 = AlpcpReceiveMessagePort(v6, v8, v10, &BugCheckParameter2, 0);
      if ( v13 )
        break;
      v14 = BugCheckParameter2;
      if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) == 0 )
      {
        *(_QWORD *)(BugCheckParameter2 + 200) = v25;
        if ( a2 )
        {
          *(_OWORD *)a2 = *(_OWORD *)(v14 + 232);
          *(_OWORD *)(a2 + 16) = *(_OWORD *)(v14 + 248);
          *(_QWORD *)(a2 + 32) = *(_QWORD *)(v14 + 264);
          if ( (*(_DWORD *)(v19 + 256) & 0x1000) != 0 )
            *(_WORD *)(a2 + 4) &= 0xC00Fu;
          v15 = a2 + 40;
          if ( *(_QWORD *)(v14 + 176) )
            AlpcpGetDataFromUserVaSafe(v14, v15);
          else
            AlpcpReadMessageData(v14, v15);
        }
        if ( a4 )
          *a4 = *(_QWORD *)(v14 + 120);
        if ( a2 )
        {
          if ( AlpcpMessageLogEnabled )
            AlpcpEnterStateChangeEventMessageLog(v14);
          AlpcpUnlockBlob(v14);
        }
        else
        {
          *(_QWORD *)(v14 + 200) = 0LL;
          AlpcpCancelMessage(v19, v14, 0x10000);
        }
        break;
      }
      if ( *(_QWORD *)(BugCheckParameter2 + 64) == v19 )
      {
        *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
        *(_QWORD *)(v14 + 56) = 0LL;
      }
      AlpcpCancelMessage(v19, v14, 0x10000);
      BugCheckParameter2 = 0LL;
      v6 = a1;
    }
    if ( v12 )
      ObfDereferenceObject(v12);
    return v13;
  }
}
