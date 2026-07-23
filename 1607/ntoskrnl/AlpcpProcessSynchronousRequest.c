/*
 * XREFs of AlpcpProcessSynchronousRequest @ 0x140447A30
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x140448140 (NtAlpcSendWaitReceivePort.c)
 *     LpcpRequestWaitReplyPort @ 0x14049D2A8 (LpcpRequestWaitReplyPort.c)
 *     LpcSendWaitReceivePort @ 0x14065488C (LpcSendWaitReceivePort.c)
 *     LpcpReplyWaitReplyPort @ 0x14065492C (LpcpReplyWaitReplyPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x14008BCA0 (ObReferenceObjectSafe.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     AlpcpCancelMessage @ 0x140407A54 (AlpcpCancelMessage.c)
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     AlpcpClearOwnerPortMessage @ 0x140408128 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpReceiveSynchronousReply @ 0x140446B10 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpExposeAttributes @ 0x140448CF0 (AlpcpExposeAttributes.c)
 *     AlpcpSendMessage @ 0x140449750 (AlpcpSendMessage.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     AlpcpReadMessageData @ 0x14049D800 (AlpcpReadMessageData.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14049E74C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1404AEF1C (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1404BEFCC (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpGetMessageAttributeSize32 @ 0x1405298AC (AlpcpGetMessageAttributeSize32.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x140654F24 (AlpcpEnterFreeEventMessageLog.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140654FBC (AlpcpEnterStateChangeEventMessageLog.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpProcessSynchronousRequest(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 *a6,
        _DWORD *Address,
        PLARGE_INTEGER a8,
        unsigned __int8 a9,
        KPROCESSOR_MODE a10)
{
  unsigned __int8 v11; // r15
  __int64 v12; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  _DWORD *v20; // r12
  __int64 v21; // rax
  int v22; // edi
  unsigned int MessageAttributeSize32; // eax
  ULONG v24; // ecx
  _BYTE *v25; // rcx
  void **v26; // r15
  __int64 v27; // rdi
  void *v28; // r14
  int v30; // eax
  unsigned int v31; // r15d
  int v32; // eax
  ULONG_PTR v33; // rdi
  int v34; // edx
  unsigned __int64 v35; // rax
  __int16 v36; // ax
  __int16 v37; // ax
  __int64 v38; // rdx
  signed __int64 v39; // rax
  int v40; // esi
  ULONG_PTR v41; // rdi
  char v42; // cl
  signed __int64 BugCheckParameter4; // rcx
  __int64 v44; // rbx
  int (__fastcall *v45)(ULONG_PTR); // rax
  _SLIST_HEADER *v46; // r8
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-B8h] BYREF
  char v48; // [rsp+38h] [rbp-B0h]
  int v49; // [rsp+40h] [rbp-A8h]
  void *v50; // [rsp+48h] [rbp-A0h]
  int v51; // [rsp+50h] [rbp-98h]
  unsigned __int64 v52; // [rsp+58h] [rbp-90h]
  __int64 v53; // [rsp+60h] [rbp-88h] BYREF
  int v54[2]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v55; // [rsp+78h] [rbp-70h]
  __int64 v56; // [rsp+80h] [rbp-68h]
  __int64 v57; // [rsp+88h] [rbp-60h]
  __int64 v58; // [rsp+90h] [rbp-58h]
  __int64 v59; // [rsp+98h] [rbp-50h]
  __int64 v60; // [rsp+A0h] [rbp-48h]
  __int64 v61; // [rsp+A8h] [rbp-40h]
  unsigned int v65; // [rsp+130h] [rbp+48h]

  *(_QWORD *)v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v49 = 0;
  v52 = -1LL;
  v11 = a9;
  if ( a9 )
  {
    v12 = (__int64)a8;
    v13 = 0x7FFFFFFF0000LL;
    if ( a8 )
    {
      if ( (unsigned __int64)a8 >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      v53 = *(_QWORD *)v12;
      a8 = (PLARGE_INTEGER)&v53;
    }
    v14 = a2 & 0xC0000000;
    v15 = a5;
    if ( (_DWORD)v14 == 0x80000000 )
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = a5;
      if ( a5 >= 0x7FFFFFFF0000LL )
        v16 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v16 = *(_BYTE *)v16;
      *(_BYTE *)(v16 + 23) = *(_BYTE *)(v16 + 23);
    }
    else
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = a5;
      if ( a5 >= 0x7FFFFFFF0000LL )
        v17 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v17 = *(_BYTE *)v17;
      *(_BYTE *)(v17 + 39) = *(_BYTE *)(v17 + 39);
    }
    if ( a6 )
    {
      v18 = (__int64)a6;
      if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
        v18 = 0x7FFFFFFF0000LL;
      v52 = *(_QWORD *)v18;
      v19 = (__int64)a6;
      if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
        v19 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v19 = *(_QWORD *)v19;
    }
    v20 = Address;
    if ( Address )
    {
      v48 = 1;
      v21 = (__int64)Address;
      if ( (unsigned __int64)Address >= 0x7FFFFFFF0000LL )
        v21 = 0x7FFFFFFF0000LL;
      v22 = *(_DWORD *)v21;
      if ( (_DWORD)v14 == 0x80000000 )
      {
        MessageAttributeSize32 = AlpcpGetMessageAttributeSize32((unsigned int)v22, v14, 0x7FFFFFFF0000LL);
        v24 = 4;
      }
      else
      {
        v24 = 8;
        MessageAttributeSize32 = 8;
        if ( v22 < 0 )
          MessageAttributeSize32 = 32;
        if ( (v22 & 0x40000000) != 0 )
          MessageAttributeSize32 += 32;
        if ( (v22 & 0x20000000) != 0 )
          MessageAttributeSize32 += 32;
        if ( (v22 & 0x10000000) != 0 )
          MessageAttributeSize32 += 24;
        if ( (v22 & 0x8000000) != 0 )
          MessageAttributeSize32 += 24;
        if ( (v22 & 0x4000000) != 0 )
          MessageAttributeSize32 += 8;
        if ( (v22 & 0x2000000) != 0 )
          MessageAttributeSize32 += 8;
      }
      if ( (unsigned __int64)MessageAttributeSize32 - 1 > 0xFFE )
      {
        ProbeForWrite(Address, MessageAttributeSize32, v24);
      }
      else
      {
        if ( ((v24 - 1) & (unsigned int)Address) != 0 )
          ExRaiseDatatypeMisalignment();
        v25 = Address;
        if ( (unsigned __int64)Address >= v13 )
          v25 = (_BYTE *)v13;
        *v25 = *v25;
        v25[MessageAttributeSize32 - 1] = v25[MessageAttributeSize32 - 1];
      }
      v49 = v22;
    }
  }
  else
  {
    if ( a6 )
      v52 = *a6;
    v20 = Address;
    v15 = a5;
    if ( Address )
      v49 = *Address;
  }
  if ( (*(_BYTE *)(a1 + 416) & 6) != 6 )
  {
    v28 = (void *)a1;
    v50 = (void *)a1;
LABEL_69:
    *(_QWORD *)v54 = a1;
    LODWORD(v60) = a2;
    if ( (*(_DWORD *)(a1 + 416) & 0x1000) != 0 )
      v30 = AlpcpSendLegacySynchronousRequest(a1, v54, a3, v11);
    else
      v30 = AlpcpSendMessage(v54, a3, a4, v11);
    v31 = v30;
    if ( v30 >= 0 )
    {
      BugCheckParameter2 = 0LL;
      *(_QWORD *)v54 = v28;
      v31 = AlpcpReceiveSynchronousReply((__int64 *)v54, a10, &BugCheckParameter2, v49, a8);
      if ( !v31 )
      {
        v32 = 40;
        if ( (a2 & 0xC0000000) == 0x80000000 )
          v32 = 24;
        v33 = BugCheckParameter2;
        v34 = *(unsigned __int16 *)(BugCheckParameter2 + 232);
        v35 = (unsigned int)(v34 + v32);
        v65 = v35;
        if ( a6 && v35 > v52 )
        {
          v31 = AlpcpReturnMessageOnInsufficientBuffer(v28, BugCheckParameter2);
          if ( v31 == -1073741789 )
          {
            AlpcpUnlockMessage(v33);
            *a6 = v65;
          }
          else
          {
            AlpcpCancelMessage((__int64)v28, v33, 0x10000);
          }
        }
        else
        {
          if ( (a2 & 0xC0000000) == 0x80000000 )
          {
            *(_WORD *)v15 = v34;
            v51 = *(unsigned __int16 *)(v33 + 232) + 24;
            *(_WORD *)(v15 + 2) = v51;
            v36 = *(_WORD *)(v33 + 238);
            if ( v36 )
              v37 = v36 - 16;
            else
              v37 = 0;
            *(_WORD *)(v15 + 6) = v37;
            *(_WORD *)(v15 + 4) = *(_WORD *)(v33 + 236) | 0x1000;
            *(_DWORD *)(v15 + 8) = *(_DWORD *)(v33 + 240);
            *(_DWORD *)(v15 + 12) = *(_DWORD *)(v33 + 248);
            *(_DWORD *)(v15 + 16) = *(_DWORD *)(v33 + 256);
            *(_DWORD *)(v15 + 20) = *(_DWORD *)(v33 + 264);
            *(_DWORD *)(v15 + 20) = *(_DWORD *)(v33 + 264);
            if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
              *(_WORD *)(v15 + 4) &= 0xC00Fu;
            v38 = v15 + 24;
          }
          else
          {
            *(_OWORD *)v15 = *(_OWORD *)(BugCheckParameter2 + 232);
            *(_OWORD *)(v15 + 16) = *(_OWORD *)(v33 + 248);
            *(_QWORD *)(v15 + 32) = *(_QWORD *)(v33 + 264);
            if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
              *(_WORD *)(v15 + 4) &= 0xC00Fu;
            v51 = *(unsigned __int16 *)(v33 + 234);
            v38 = v15 + 40;
          }
          if ( *(_QWORD *)(v33 + 176) )
            AlpcpGetDataFromUserVaSafe(v33, v38);
          else
            AlpcpReadMessageData(v33, v38);
          if ( a6 )
            *a6 = v65;
          if ( v20 )
            AlpcpExposeAttributes(a1, a2, v33, v20);
          if ( (*(_DWORD *)(v33 + 40) & 0x200) != 0 && !*(_QWORD *)(v33 + 96) && (*(_DWORD *)(a1 + 416) & 0x2000) != 0 )
          {
            v39 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 440), v33, 0LL);
            v33 = BugCheckParameter2;
            if ( !v39 )
            {
              if ( AlpcpMessageLogEnabled )
                AlpcpEnterFreeEventMessageLog(BugCheckParameter2);
              ++*(_WORD *)(v33 - 30);
              *(_DWORD *)(v33 + 256) |= 0x80000000;
              AlpcpClearOwnerPortMessage(v33);
            }
          }
          if ( AlpcpMessageLogEnabled )
            AlpcpEnterStateChangeEventMessageLog(v33);
          v40 = 0;
          v41 = v33 - 48;
          v42 = *(_BYTE *)(v41 + 16);
          if ( (v42 & 1) != 0 )
          {
            v40 = 0x10000 - *(__int16 *)(v41 + 18);
            *(_BYTE *)(v41 + 16) = v42 & 0xFE;
            *(_WORD *)(v41 + 18) = 0;
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v41 + 32));
          KeAbPostRelease(v41 + 32);
          if ( v40 > 0 )
          {
            BugCheckParameter4 = -v40 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 24), -v40);
            if ( BugCheckParameter4 <= 0 )
            {
              if ( BugCheckParameter4 )
                KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
              v44 = AlpcpRegisteredTypes[*(unsigned __int8 *)(v41 + 17)];
              v45 = *(int (__fastcall **)(ULONG_PTR))(v44 + 32);
              if ( !v45 || v45(BugCheckParameter2) >= 0 )
              {
                if ( (*(_BYTE *)(v41 + 16) & 2) != 0 )
                {
                  v46 = &AlpcpLookasides + 8 * (unsigned __int64)*(unsigned int *)(v44 + 8);
                  ++*((_DWORD *)&v46[1].HeaderX64 + 3);
                  if ( LOWORD(v46->Alignment) < LOWORD(v46[1].Alignment) )
                  {
                    RtlpInterlockedPushEntrySList(v46, (PSLIST_ENTRY)v41);
                  }
                  else
                  {
                    ++LODWORD(v46[2].Alignment);
                    ((void (__fastcall *)(ULONG_PTR))v46[3].Region)(v41);
                  }
                }
                else if ( *(_QWORD *)(v44 + 40) )
                {
                  (*((void (__fastcall **)(ULONG_PTR))&AlpcpLookasides
                   + 16 * (unsigned __int64)*(unsigned int *)(v44 + 8)
                   + 7))(v41);
                }
                else
                {
                  ExFreePoolWithTag((PVOID)v41, *(_DWORD *)(v44 + 4));
                }
              }
            }
          }
        }
      }
    }
    if ( v28 != (void *)a1 )
      ObfDereferenceObject(v28);
    return v31;
  }
  v26 = *(void ***)(a1 + 16);
  v27 = KeAbPreAcquire((ULONG_PTR)(v26 - 2), 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v26 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)v26 - 2, v27, (ULONG_PTR)(v26 - 2));
  if ( v27 )
    *(_BYTE *)(v27 + 26) |= 1u;
  v28 = *v26;
  v50 = v28;
  if ( v28 && ObReferenceObjectSafe((__int64)v28) )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v26 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v26 - 2);
    KeAbPostRelease((ULONG_PTR)(v26 - 2));
    v11 = a9;
    goto LABEL_69;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v26 - 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v26 - 2);
  KeAbPostRelease((ULONG_PTR)(v26 - 2));
  return 3221225527LL;
}
