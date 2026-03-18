/*
 * XREFs of AlpcpReceiveLegacyMessage @ 0x140423610
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x1404234B0 (NtReplyWaitReceivePortEx.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ObReferenceObjectSafe @ 0x1400C8410 (ObReferenceObjectSafe.c)
 *     AlpcpReadMessageData @ 0x1404233F0 (AlpcpReadMessageData.c)
 *     AlpcpUnlockBlob @ 0x140424050 (AlpcpUnlockBlob.c)
 *     AlpcpReceiveMessagePort @ 0x14042A910 (AlpcpReceiveMessagePort.c)
 *     AlpcpCancelMessage @ 0x1404815E0 (AlpcpCancelMessage.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1404A645C (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14061FC34 (AlpcpEnterStateChangeEventMessageLog.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpReceiveLegacyMessage(_QWORD *a1, ULONG64 a2, ULONG64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 v8; // r12
  _DWORD *v9; // rdx
  __int64 *v10; // rcx
  _BYTE *v11; // rcx
  _QWORD *v12; // rcx
  void *v13; // r15
  unsigned int v14; // r14d
  ULONG_PTR v15; // rdi
  __int64 v16; // rdx
  void **v18; // r15
  __int64 v19; // rdi
  _DWORD *v20; // [rsp+30h] [rbp-68h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-60h] BYREF
  __int64 v22; // [rsp+40h] [rbp-58h] BYREF
  _DWORD *v23; // [rsp+48h] [rbp-50h]
  void *v24; // [rsp+50h] [rbp-48h]
  struct _KTHREAD *v25; // [rsp+58h] [rbp-40h]
  void **v26; // [rsp+A0h] [rbp+8h]
  __int64 *v27; // [rsp+B0h] [rbp+18h]

  LODWORD(v27) = a3;
  CurrentThread = KeGetCurrentThread();
  v25 = CurrentThread;
  v8 = CurrentThread->gap0[10];
  v22 = 0LL;
  v9 = (_DWORD *)*a1;
  v20 = (_DWORD *)*a1;
  v23 = (_DWORD *)*a1;
  if ( v8 )
  {
    v10 = (__int64 *)a3;
    if ( a3 )
    {
      if ( a3 >= MmUserProbeAddress )
        v10 = (__int64 *)MmUserProbeAddress;
      v22 = *v10;
      v27 = &v22;
    }
    if ( a2 )
    {
      v11 = (_BYTE *)a2;
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a2 >= MmUserProbeAddress )
        v11 = (_BYTE *)MmUserProbeAddress;
      *v11 = *v11;
      v11[39] = v11[39];
    }
    if ( a4 )
    {
      v12 = a4;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        v12 = (_QWORD *)MmUserProbeAddress;
      *v12 = *v12;
    }
  }
  else
  {
    v8 = (CurrentThread->MiscFlags & 0x400) != 0;
  }
  v13 = 0LL;
  v24 = 0LL;
  if ( (v9[104] & 6) == 6 )
  {
    v18 = (void **)*((_QWORD *)v9 + 2);
    v26 = v18;
    v19 = KeAbPreAcquire((ULONG_PTR)(v18 - 2), 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v18 - 2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)v18 - 2, v19, (ULONG_PTR)(v18 - 2));
    if ( v19 )
      *(_BYTE *)(v19 + 26) |= 1u;
    v13 = *v18;
    v24 = v13;
    if ( v13 && ObReferenceObjectSafe((__int64)v13) )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v26 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v26 - 2);
      KeAbPostRelease((ULONG_PTR)(v26 - 2));
      v20 = v13;
      v23 = v13;
      *a1 = v13;
      goto LABEL_17;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v26 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v26 - 2);
    KeAbPostRelease((ULONG_PTR)(v26 - 2));
    return 3221225527LL;
  }
  else
  {
LABEL_17:
    while ( 1 )
    {
      v14 = AlpcpReceiveMessagePort((_DWORD)a1, v8, (_DWORD)v27, (unsigned int)&BugCheckParameter2, 0);
      if ( v14 )
        break;
      v15 = BugCheckParameter2;
      if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) == 0 )
      {
        *(_QWORD *)(BugCheckParameter2 + 192) = v25;
        if ( a2 )
        {
          *(_OWORD *)a2 = *(_OWORD *)(v15 + 224);
          *(_OWORD *)(a2 + 16) = *(_OWORD *)(v15 + 240);
          *(_QWORD *)(a2 + 32) = *(_QWORD *)(v15 + 256);
          if ( (v20[64] & 0x1000) != 0 )
            *(_WORD *)(a2 + 4) &= 0xC00Fu;
          v16 = a2 + 40;
          if ( *(_QWORD *)(v15 + 168) )
            AlpcpGetDataFromUserVaSafe(v15, v16);
          else
            AlpcpReadMessageData(v15, v16);
        }
        if ( a4 )
          *a4 = *(_QWORD *)(v15 + 120);
        if ( a2 )
        {
          if ( AlpcpMessageLogEnabled )
            AlpcpEnterStateChangeEventMessageLog(v15);
          AlpcpUnlockBlob(v15);
        }
        else
        {
          *(_QWORD *)(v15 + 192) = 0LL;
          AlpcpCancelMessage(v20, v15, 0x10000LL);
        }
        break;
      }
      if ( *(_DWORD **)(BugCheckParameter2 + 64) == v20 )
      {
        *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
        *(_QWORD *)(v15 + 56) = 0LL;
      }
      AlpcpCancelMessage(v20, v15, 0x10000LL);
      BugCheckParameter2 = 0LL;
    }
    if ( v13 )
      ObfDereferenceObject(v13);
    return v14;
  }
}
