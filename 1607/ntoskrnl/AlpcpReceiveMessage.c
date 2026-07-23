/*
 * XREFs of AlpcpReceiveMessage @ 0x1404483A0
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x140448140 (NtAlpcSendWaitReceivePort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     AlpcpCancelMessage @ 0x140407A54 (AlpcpCancelMessage.c)
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     AlpcpExposeAttributes @ 0x140448CF0 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveMessagePort @ 0x14044BC40 (AlpcpReceiveMessagePort.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     AlpcpReadMessageData @ 0x14049D800 (AlpcpReadMessageData.c)
 *     AlpcpInsertMessagePendingQueue @ 0x1404A0010 (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1404AEF1C (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1404BEFCC (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpLookupMessage @ 0x1404F1290 (AlpcpLookupMessage.c)
 *     AlpcpGetMessageAttributeSize32 @ 0x1405298AC (AlpcpGetMessageAttributeSize32.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140654FBC (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpLogReceiveMessage @ 0x140656990 (AlpcpLogReceiveMessage.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpReceiveMessage(__int64 a1, unsigned __int64 a2, _QWORD *a3, unsigned int *a4, __int64 *a5)
{
  _QWORD *v6; // r10
  struct _KTHREAD *CurrentThread; // rdx
  unsigned int v8; // edi
  unsigned __int8 v9; // cl
  __int64 v10; // rax
  unsigned int v11; // r15d
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // r13d
  unsigned int v15; // r9d
  unsigned int v16; // eax
  volatile void *v17; // r11
  __int64 v18; // rax
  unsigned int v19; // edi
  unsigned int MessageAttributeSize32; // eax
  ULONG v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // esi
  __int64 v26; // r13
  int v27; // eax
  ULONG_PTR v28; // r15
  volatile signed __int64 *v29; // rdi
  __int64 v30; // rsi
  int v31; // ecx
  _BYTE *v32; // rax
  _BYTE *v33; // rcx
  ULONG_PTR v34; // rdx
  unsigned int v35; // eax
  ULONG_PTR v36; // rdi
  unsigned int v37; // ecx
  __int16 v38; // dx
  unsigned __int16 v39; // ax
  __int64 v40; // r15
  __int16 v41; // ax
  __int64 v42; // r15
  unsigned __int64 v43; // rdx
  char *v44; // r13
  __int64 v45; // r14
  size_t v46; // r14
  size_t v47; // rax
  size_t v48; // r15
  const void *v49; // rdx
  char *v50; // rcx
  size_t v51; // r8
  __int64 v52; // r9
  int v53; // r14d
  ULONG_PTR v54; // rdi
  char v55; // cl
  signed __int64 BugCheckParameter4; // rcx
  __int64 v57; // rbx
  int (__fastcall *v58)(ULONG_PTR); // rax
  _SLIST_HEADER *v59; // r8
  unsigned int v61; // [rsp+30h] [rbp-98h]
  unsigned int v62; // [rsp+34h] [rbp-94h]
  unsigned int v63; // [rsp+38h] [rbp-90h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v65; // [rsp+48h] [rbp-80h]
  ULONG_PTR v66; // [rsp+50h] [rbp-78h] BYREF
  __int64 v67; // [rsp+58h] [rbp-70h]
  unsigned int v68; // [rsp+60h] [rbp-68h]
  int v69; // [rsp+64h] [rbp-64h]
  unsigned __int64 v70; // [rsp+68h] [rbp-60h]
  _QWORD *v71; // [rsp+70h] [rbp-58h]
  __int64 v72; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v73; // [rsp+80h] [rbp-48h]
  int v74; // [rsp+88h] [rbp-40h]
  struct _KTHREAD *v75; // [rsp+90h] [rbp-38h]
  __int64 v76; // [rsp+98h] [rbp-30h]
  _BYTE *v78; // [rsp+D0h] [rbp+8h]

  v73 = (unsigned __int64)a4;
  v71 = a3;
  v6 = (_QWORD *)a1;
  CurrentThread = KeGetCurrentThread();
  v75 = CurrentThread;
  v8 = *(_DWORD *)(a1 + 48);
  v68 = v8;
  v67 = *(_QWORD *)a1;
  v76 = v67;
  v9 = CurrentThread->gap0[10];
  v69 = v9;
  v72 = 0LL;
  v70 = -1LL;
  v62 = 0;
  v65 = 0;
  if ( v9 )
  {
    v10 = (__int64)a5;
    if ( a5 )
    {
      if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      v72 = *(_QWORD *)v10;
      a5 = &v72;
    }
    v11 = v8 & 0xC0000000;
    if ( (v8 & 0xC0000000) == 0x80000000 )
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = a2;
      if ( a2 >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v12 = *(_BYTE *)v12;
      *(_BYTE *)(v12 + 23) = *(_BYTE *)(v12 + 23);
    }
    else
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = a2;
      if ( a2 >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v13 = *(_BYTE *)v13;
      *(_BYTE *)(v13 + 39) = *(_BYTE *)(v13 + 39);
    }
    v14 = v8 & 0x1000000;
    v15 = 0x80000000;
    if ( (v8 & 0x1000000) != 0 )
    {
      if ( v11 == 0x80000000 )
      {
        v62 = *(_DWORD *)(a2 + 16);
        v16 = *(_DWORD *)(a2 + 20);
      }
      else
      {
        v62 = *(_DWORD *)(a2 + 24);
        v16 = *(_DWORD *)(a2 + 32);
      }
      v65 = v16;
    }
    v17 = (volatile void *)v73;
    if ( v73 )
    {
      v18 = v73;
      if ( v73 >= 0x7FFFFFFF0000LL )
        v18 = 0x7FFFFFFF0000LL;
      v19 = *(_DWORD *)v18;
      if ( v11 == 0x80000000 )
      {
        MessageAttributeSize32 = AlpcpGetMessageAttributeSize32(v19, CurrentThread, a3);
        v21 = 4;
      }
      else
      {
        v21 = 8;
        MessageAttributeSize32 = 8;
        if ( (v19 & 0x80000000) != 0 )
          MessageAttributeSize32 = 32;
        if ( (v19 & 0x40000000) != 0 )
          MessageAttributeSize32 += 32;
        if ( (v19 & 0x20000000) != 0 )
          MessageAttributeSize32 += 32;
        if ( (v19 & 0x10000000) != 0 )
          MessageAttributeSize32 += 24;
        if ( (v19 & 0x8000000) != 0 )
          MessageAttributeSize32 += 24;
        if ( (v19 & 0x4000000) != 0 )
          MessageAttributeSize32 += 8;
        if ( (v19 & 0x2000000) != 0 )
          MessageAttributeSize32 += 8;
      }
      if ( (unsigned __int64)MessageAttributeSize32 - 1 > 0xFFE )
      {
        ProbeForWrite(v17, MessageAttributeSize32, v21);
        v15 = 0x80000000;
      }
      else
      {
        if ( ((v21 - 1) & (unsigned int)v17) != 0 )
          ExRaiseDatatypeMisalignment();
        v22 = (__int64)v17;
        if ( (unsigned __int64)v17 >= 0x7FFFFFFF0000LL )
          v22 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v22 = *(_BYTE *)v22;
        *(_BYTE *)(v22 + MessageAttributeSize32 - 1) = *(_BYTE *)(v22 + MessageAttributeSize32 - 1);
      }
      v63 = v19;
    }
    else
    {
      v19 = 0;
      v63 = 0;
    }
    if ( v71 )
    {
      v23 = (__int64)v71;
      if ( (unsigned __int64)v71 >= 0x7FFFFFFF0000LL )
        v23 = 0x7FFFFFFF0000LL;
      v70 = *(_QWORD *)v23;
      v24 = (__int64)v71;
      if ( (unsigned __int64)v71 >= 0x7FFFFFFF0000LL )
        v24 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v24 = *(_QWORD *)v24;
      v19 = v63;
    }
    v9 = v69;
    v6 = (_QWORD *)a1;
  }
  else
  {
    v14 = v8 & 0x1000000;
    if ( (v8 & 0x1000000) != 0 )
    {
      v62 = *(_DWORD *)(a2 + 24);
      v65 = *(_DWORD *)(a2 + 32);
    }
    if ( a4 )
    {
      v19 = *a4;
      v63 = *a4;
    }
    else
    {
      v19 = 0;
      v63 = 0;
    }
    if ( a3 )
      v70 = *a3;
    if ( (CurrentThread->MiscFlags & 0x400) != 0 )
      v9 = 1;
    v15 = 0x80000000;
  }
  if ( !v14 )
  {
    v27 = AlpcpReceiveMessagePort((_DWORD)v6, v9, (_DWORD)a5, (unsigned int)&BugCheckParameter2, v19);
    v25 = v27;
LABEL_108:
    v61 = v27;
    goto LABEL_109;
  }
  if ( !v62 )
  {
    v25 = -1073741811;
    v61 = -1073741811;
LABEL_110:
    v36 = BugCheckParameter2;
    goto LABEL_111;
  }
  v26 = *v6;
  v27 = AlpcpLookupMessage(*v6, v62, v65, &v66);
  v25 = v27;
  if ( v27 < 0 )
    goto LABEL_108;
  v28 = v66;
  if ( v26 != *(_QWORD *)(v66 + 16) )
  {
    AlpcpUnlockMessage(v66);
    v25 = -1073740030;
    v61 = -1073740030;
LABEL_109:
    v15 = 0x80000000;
    goto LABEL_110;
  }
  if ( (*(_DWORD *)(v66 + 40) & 7) != 4 )
  {
    AlpcpUnlockMessage(v66);
    v25 = -1073741811;
    v61 = -1073741811;
    goto LABEL_109;
  }
  v29 = (volatile signed __int64 *)(v26 + 352);
  v30 = KeAbPreAcquire(v26 + 352, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v26 + 352), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(v26 + 352), v30, v26 + 352);
  if ( v30 )
    *(_BYTE *)(v30 + 26) |= 1u;
  v31 = *(_DWORD *)(v26 + 416);
  if ( (v31 & 0x40) != 0 )
  {
    AlpcpUnlockMessage(v66);
    if ( _InterlockedCompareExchange64(v29, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v26 + 352));
    KeAbPostRelease(v26 + 352);
    v25 = -1073740032;
    v61 = -1073740032;
    goto LABEL_109;
  }
  if ( (v31 & 0x10) != 0 )
  {
    AlpcpUnlockMessage(v66);
    if ( _InterlockedCompareExchange64(v29, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v26 + 352));
    KeAbPostRelease(v26 + 352);
    v25 = -1073741759;
    v61 = -1073741759;
    goto LABEL_109;
  }
  v32 = (_BYTE *)KeAbPreAcquire(v26 + 200, 0LL, 0);
  v33 = v32;
  v78 = v32;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 200), 0LL) )
  {
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v26 + 200), v32, v26 + 200);
    v33 = v78;
  }
  if ( v33 )
    v33[26] |= 1u;
  --*(_DWORD *)(v26 + 460);
  *(_DWORD *)(v28 + 40) &= 0xFFFFFFF8;
  *(_QWORD *)(v28 + 16) = 0LL;
  v34 = v66;
  **(_QWORD **)(v66 + 8) = *(_QWORD *)v66;
  *(_QWORD *)(*(_QWORD *)v34 + 8LL) = *(_QWORD *)(v34 + 8);
  v35 = 0;
  if ( *(_QWORD *)(v34 + 136) )
    v35 = 0x80000000;
  if ( *(_QWORD *)(v34 + 144) )
    v35 |= 0x40000000u;
  if ( *(_QWORD *)(v34 + 152) )
    v35 |= 0x10000000u;
  if ( (v35 & v63) != 0 )
  {
    *(_WORD *)(v34 + 236) |= 0x2000u;
    AlpcpInsertMessagePendingQueue(v26, v34);
  }
  else
  {
    *(_WORD *)(v34 + 236) &= ~0x2000u;
    --*(_WORD *)(v34 - 30);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 200), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v26 + 200));
  KeAbPostRelease(v26 + 200);
  if ( _InterlockedCompareExchange64(v29, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v26 + 352));
  KeAbPostRelease(v26 + 352);
  v36 = v66;
  if ( AlpcpLogEnabled )
    AlpcpLogReceiveMessage(v66);
  BugCheckParameter2 = v36;
  v25 = 0;
  v61 = 0;
  v15 = 0x80000000;
LABEL_111:
  if ( !v25 )
  {
    v37 = v68 & 0xC0000000;
    v38 = 40;
    if ( (v68 & 0xC0000000) == v15 )
      v38 = 24;
    v39 = v38 + *(_WORD *)(v36 + 232);
    v74 = v39;
    if ( v71 && (v40 = v39, v39 > v70) )
    {
      v25 = AlpcpReturnMessageOnInsufficientBuffer(v67, v36);
      v61 = v25;
      if ( v25 == -1073741789 )
        *v71 = v40;
    }
    else
    {
      *(_QWORD *)(v36 + 200) = v75;
      if ( v37 == v15 )
      {
        *(_WORD *)a2 = *(_WORD *)(v36 + 232);
        *(_WORD *)(a2 + 2) = *(_WORD *)(v36 + 232) + 24;
        v41 = *(_WORD *)(v36 + 238);
        if ( v41 )
          *(_WORD *)(a2 + 6) = v41 - 16;
        else
          *(_WORD *)(a2 + 6) = 0;
        *(_WORD *)(a2 + 4) = *(_WORD *)(v36 + 236) | 0x1000;
        *(_DWORD *)(a2 + 8) = *(_DWORD *)(v36 + 240);
        *(_DWORD *)(a2 + 12) = *(_DWORD *)(v36 + 248);
        *(_DWORD *)(a2 + 16) = *(_DWORD *)(v36 + 256);
        *(_DWORD *)(a2 + 20) = *(_DWORD *)(v36 + 264);
        *(_DWORD *)(a2 + 20) = *(_DWORD *)(v36 + 264);
        v42 = v67;
        if ( (*(_DWORD *)(v67 + 256) & 0x1000) != 0 )
          *(_WORD *)(a2 + 4) &= 0xC00Fu;
        v43 = a2 + 24;
        if ( *(_QWORD *)(v36 + 176) )
          AlpcpGetDataFromUserVaSafe(v36, v43);
        else
          AlpcpReadMessageData(v36, v43);
      }
      else
      {
        *(_OWORD *)a2 = *(_OWORD *)(v36 + 232);
        *(_OWORD *)(a2 + 16) = *(_OWORD *)(v36 + 248);
        *(_QWORD *)(a2 + 32) = *(_QWORD *)(v36 + 264);
        v42 = v67;
        if ( (*(_DWORD *)(v67 + 256) & 0x1000) != 0 )
          *(_WORD *)(a2 + 4) &= 0xC00Fu;
        v44 = (char *)(a2 + 40);
        if ( *(_QWORD *)(v36 + 176) )
        {
          AlpcpGetDataFromUserVaSafe(v36, a2 + 40);
        }
        else
        {
          v45 = *(_QWORD *)(v36 + 96);
          if ( v45 )
            v46 = *(_QWORD *)(v45 + 32) - 40LL;
          else
            v46 = 512LL;
          v47 = *(unsigned __int16 *)(v36 + 232);
          v48 = v47;
          v49 = (const void *)(v36 + 272);
          v50 = v44;
          if ( v47 > v46 )
          {
            memmove(v44, v49, v46);
            v50 = &v44[v46];
            v51 = v48 - v46;
            v49 = *(const void **)(v36 + 216);
          }
          else
          {
            v51 = (unsigned int)v47;
          }
          memmove(v50, v49, v51);
          v42 = v67;
        }
      }
      if ( v73 )
        AlpcpExposeAttributes(v42, v68, v36, v73);
    }
    v52 = v67;
    if ( v25 != -1073741789 && *(_QWORD *)(v36 + 64) == v67 )
    {
      *(_QWORD *)(v36 + 64) = 0LL;
      *(_QWORD *)(v36 + 56) = 0LL;
    }
    if ( ((v25 + 0x80000000) & 0x80000000) != 0 || v25 == -1073741789 )
    {
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v36);
      v53 = 0;
      v54 = v36 - 48;
      v55 = *(_BYTE *)(v54 + 16);
      if ( (v55 & 1) != 0 )
      {
        v53 = 0x10000 - *(__int16 *)(v54 + 18);
        *(_BYTE *)(v54 + 16) = v55 & 0xFE;
        *(_WORD *)(v54 + 18) = 0;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v54 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v54 + 32));
      KeAbPostRelease(v54 + 32);
      if ( v53 > 0 )
      {
        BugCheckParameter4 = -v53 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v54 + 24), -v53);
        if ( BugCheckParameter4 <= 0 )
        {
          if ( BugCheckParameter4 )
            KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
          v57 = AlpcpRegisteredTypes[*(unsigned __int8 *)(v54 + 17)];
          v58 = *(int (__fastcall **)(ULONG_PTR))(v57 + 32);
          if ( !v58 || v58(BugCheckParameter2) >= 0 )
          {
            if ( (*(_BYTE *)(v54 + 16) & 2) != 0 )
            {
              v59 = &AlpcpLookasides + 8 * (unsigned __int64)*(unsigned int *)(v57 + 8);
              ++*((_DWORD *)&v59[1].HeaderX64 + 3);
              if ( LOWORD(v59->Alignment) < LOWORD(v59[1].Alignment) )
              {
                RtlpInterlockedPushEntrySList(v59, (PSLIST_ENTRY)v54);
              }
              else
              {
                ++LODWORD(v59[2].Alignment);
                ((void (__fastcall *)(ULONG_PTR))v59[3].Region)(v54);
              }
            }
            else if ( *(_QWORD *)(v57 + 40) )
            {
              (*((void (__fastcall **)(ULONG_PTR))&AlpcpLookasides
               + 16 * (unsigned __int64)*(unsigned int *)(v57 + 8)
               + 7))(v54);
            }
            else
            {
              ExFreePoolWithTag((PVOID)v54, *(_DWORD *)(v57 + 4));
            }
          }
        }
      }
      return v61;
    }
    else
    {
      *(_QWORD *)(v36 + 200) = 0LL;
      AlpcpCancelMessage(v52, v36, 0x10000);
    }
  }
  return v25;
}
