/*
 * XREFs of AlpcpReceiveLegacyMessage @ 0x1404760D0
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x140475F20 (NtReplyWaitReceivePortEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x140075130 (ObReferenceObjectSafe.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     AlpcpReadMessageData @ 0x14047A100 (AlpcpReadMessageData.c)
 *     AlpcpReceiveMessagePort @ 0x14047F3A0 (AlpcpReceiveMessagePort.c)
 *     AlpcpCancelMessage @ 0x14052BBC4 (AlpcpCancelMessage.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x14052F9E8 (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpReceiveLegacyMessage(void **a1, ULONG64 a2, ULONG64 a3, ULONG64 a4)
{
  void **v5; // r13
  struct _KTHREAD *CurrentThread; // rcx
  int v7; // edx
  void *v8; // rsi
  __int64 *v9; // r14
  _BYTE *v10; // rcx
  _QWORD *v11; // rcx
  void *v12; // r12
  void **v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // r9
  unsigned int v17; // r13d
  ULONG_PTR v18; // rbx
  ULONG64 v19; // rdx
  int v20; // esi
  ULONG_PTR v21; // rbx
  char v22; // cl
  signed __int64 BugCheckParameter4; // rcx
  __int64 v24; // rdi
  int (__fastcall *v25)(ULONG_PTR); // rax
  _SLIST_HEADER *v26; // r8
  int v27; // [rsp+30h] [rbp-78h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-70h] BYREF
  __int64 v29; // [rsp+40h] [rbp-68h] BYREF
  void *v30; // [rsp+48h] [rbp-60h]
  void *v31; // [rsp+50h] [rbp-58h]
  struct _KTHREAD *v32; // [rsp+58h] [rbp-50h]
  _QWORD *v33; // [rsp+60h] [rbp-48h]
  int v34; // [rsp+B0h] [rbp+8h]
  __int64 *v35; // [rsp+C0h] [rbp+18h]

  LODWORD(v35) = a3;
  v34 = (int)a1;
  v33 = (_QWORD *)a4;
  v5 = a1;
  CurrentThread = KeGetCurrentThread();
  v32 = CurrentThread;
  v7 = (unsigned __int8)CurrentThread->gap0[10];
  v27 = v7;
  v29 = 0LL;
  v8 = *v5;
  v30 = *v5;
  if ( (_BYTE)v7 )
  {
    v9 = (__int64 *)a3;
    if ( a3 )
    {
      if ( a3 >= MmUserProbeAddress )
        v9 = (__int64 *)MmUserProbeAddress;
      v29 = *v9;
      v9 = &v29;
      v35 = &v29;
    }
    if ( a2 )
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = (_BYTE *)a2;
      if ( a2 >= MmUserProbeAddress )
        v10 = (_BYTE *)MmUserProbeAddress;
      *v10 = *v10;
      v10[39] = v10[39];
      LODWORD(v9) = (_DWORD)v35;
    }
    if ( a4 )
    {
      v11 = (_QWORD *)a4;
      if ( a4 >= MmUserProbeAddress )
        v11 = (_QWORD *)MmUserProbeAddress;
      *v11 = *v11;
      LODWORD(v9) = (_DWORD)v35;
    }
  }
  else
  {
    v7 = (CurrentThread->MiscFlags & 0x400) != 0;
    v27 = v7;
    LODWORD(v9) = a3;
  }
  v12 = 0LL;
  v31 = 0LL;
  if ( (*((_BYTE *)v8 + 416) & 6) == 6 )
  {
    v13 = (void **)*((_QWORD *)v8 + 2);
    v14 = KeAbPreAcquire((ULONG_PTR)(v13 - 2), 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v13 - 2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)v13 - 2, v14, (ULONG_PTR)(v13 - 2), v15);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    v12 = *v13;
    v31 = v12;
    if ( v12 && ObReferenceObjectSafe((__int64)v12) )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v13 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v13 - 2);
      KeAbPostRelease((ULONG_PTR)(v13 - 2));
      v8 = v12;
      v30 = v12;
      *v5 = v12;
      LODWORD(v9) = (_DWORD)v35;
      v7 = v27;
      goto LABEL_31;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v13 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v13 - 2);
    KeAbPostRelease((ULONG_PTR)(v13 - 2));
    return 3221225527LL;
  }
  else
  {
LABEL_31:
    while ( 1 )
    {
      v17 = AlpcpReceiveMessagePort((_DWORD)v5, v7, (_DWORD)v9, (unsigned int)&BugCheckParameter2, 0);
      if ( v17 )
        break;
      v18 = BugCheckParameter2;
      if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) == 0 )
      {
        *(_QWORD *)(BugCheckParameter2 + 192) = v32;
        if ( a2 )
        {
          *(_OWORD *)a2 = *(_OWORD *)(v18 + 224);
          *(_OWORD *)(a2 + 16) = *(_OWORD *)(v18 + 240);
          *(_QWORD *)(a2 + 32) = *(_QWORD *)(v18 + 256);
          if ( (*((_DWORD *)v8 + 64) & 0x1000) != 0 )
            *(_WORD *)(a2 + 4) &= 0xC00Fu;
          v19 = a2 + 40;
          if ( *(_QWORD *)(v18 + 168) )
            AlpcpGetDataFromUserVaSafe(v18, v19);
          else
            AlpcpReadMessageData(v18, v19);
        }
        if ( v33 )
          *v33 = *(_QWORD *)(v18 + 120);
        if ( a2 )
        {
          if ( AlpcpMessageLogEnabled )
            AlpcpEnterStateChangeEventMessageLog(v18);
          v20 = 0;
          v21 = v18 - 48;
          v22 = *(_BYTE *)(v21 + 16);
          if ( (v22 & 1) != 0 )
          {
            v20 = 0x10000 - *(__int16 *)(v21 + 18);
            *(_BYTE *)(v21 + 16) = v22 & 0xFE;
            *(_WORD *)(v21 + 18) = 0;
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v21 + 32));
          KeAbPostRelease(v21 + 32);
          if ( v20 > 0 )
          {
            BugCheckParameter4 = -v20 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 24), -v20);
            if ( BugCheckParameter4 <= 0 )
            {
              if ( BugCheckParameter4 )
                KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
              v24 = AlpcpRegisteredTypes[*(unsigned __int8 *)(v21 + 17)];
              v25 = *(int (__fastcall **)(ULONG_PTR))(v24 + 32);
              if ( !v25 || v25(BugCheckParameter2) >= 0 )
              {
                if ( (*(_BYTE *)(v21 + 16) & 2) != 0 )
                {
                  v26 = &AlpcpLookasides + 8 * (unsigned __int64)*(unsigned int *)(v24 + 8);
                  ++*((_DWORD *)&v26[1].HeaderX64 + 3);
                  if ( LOWORD(v26->Alignment) < LOWORD(v26[1].Alignment) )
                  {
                    RtlpInterlockedPushEntrySList(v26, (PSLIST_ENTRY)v21);
                  }
                  else
                  {
                    ++LODWORD(v26[2].Alignment);
                    ((void (__fastcall *)(ULONG_PTR))v26[3].Region)(v21);
                  }
                }
                else if ( *(_QWORD *)(v24 + 40) )
                {
                  (*((void (__fastcall **)(ULONG_PTR))&AlpcpLookasides
                   + 16 * (unsigned __int64)*(unsigned int *)(v24 + 8)
                   + 7))(v21);
                }
                else
                {
                  ExFreePoolWithTag((PVOID)v21, *(_DWORD *)(v24 + 4));
                }
              }
            }
          }
        }
        else
        {
          *(_QWORD *)(v18 + 192) = 0LL;
          AlpcpCancelMessage(v8, v18, 0x10000LL);
        }
        break;
      }
      if ( *(void **)(BugCheckParameter2 + 64) == v8 )
      {
        *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
        *(_QWORD *)(v18 + 56) = 0LL;
      }
      AlpcpCancelMessage(v8, v18, 0x10000LL);
      BugCheckParameter2 = 0LL;
      v7 = v27;
      LODWORD(v5) = v34;
    }
    if ( v12 )
      ObfDereferenceObject(v12);
    return v17;
  }
}
