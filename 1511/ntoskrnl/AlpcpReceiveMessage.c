/*
 * XREFs of AlpcpReceiveMessage @ 0x1404280D0
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x140427E70 (NtAlpcSendWaitReceivePort.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     AlpcpUnlockMessage @ 0x140423364 (AlpcpUnlockMessage.c)
 *     AlpcpReadMessageData @ 0x1404233F0 (AlpcpReadMessageData.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     AlpcpLookupMessage @ 0x140426D80 (AlpcpLookupMessage.c)
 *     AlpcpExposeHandleAttribute @ 0x1404292E0 (AlpcpExposeHandleAttribute.c)
 *     AlpcpReceiveMessagePort @ 0x14042A910 (AlpcpReceiveMessagePort.c)
 *     AlpcpExposeTokenAttribute @ 0x14042B240 (AlpcpExposeTokenAttribute.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     AlpcpReceiveView @ 0x14047C0A8 (AlpcpReceiveView.c)
 *     AlpcpReferenceBlob @ 0x14047CD18 (AlpcpReferenceBlob.c)
 *     AlpcpCancelMessage @ 0x1404815E0 (AlpcpCancelMessage.c)
 *     AlpcpInsertMessagePendingQueue @ 0x140482798 (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x140482D7C (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1404A645C (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpGetMessageAttributeSize32 @ 0x1404BA248 (AlpcpGetMessageAttributeSize32.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14061FC34 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpLogReceiveMessage @ 0x140620C04 (AlpcpLogReceiveMessage.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpReceiveMessage(__int64 a1, ULONG64 a2, _QWORD *a3, unsigned int *a4, _QWORD *a5)
{
  ULONG64 v5; // r10
  struct _KTHREAD *CurrentThread; // rcx
  int v8; // r11d
  unsigned __int8 v9; // r12
  unsigned int v10; // edi
  _QWORD *v11; // rax
  unsigned int v12; // eax
  int v13; // esi
  unsigned int *v14; // rcx
  __int64 v15; // r15
  unsigned int MessageAttributeSize32; // eax
  ULONG v17; // r8d
  _BYTE *v18; // rdx
  unsigned __int64 *v19; // rcx
  _QWORD *v20; // rcx
  int v21; // ecx
  __int64 result; // rax
  ULONG_PTR v23; // r14
  __int16 v24; // dx
  unsigned __int16 v25; // ax
  __int64 v26; // rdi
  void *v27; // rcx
  size_t v28; // r8
  const void *v29; // rdx
  unsigned int *v30; // rdi
  unsigned int v31; // r12d
  _DWORD *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rax
  unsigned int *v36; // rcx
  _DWORD *v37; // r10
  __int64 v38; // rax
  unsigned int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned int v42; // r12d
  unsigned int *v43; // r8
  unsigned int v44; // ecx
  __int64 v45; // rcx
  __int64 v46; // rsi
  __int64 v47; // rax
  unsigned int *v48; // rcx
  _DWORD *v49; // r10
  unsigned int v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // eax
  __int64 v53; // rax
  unsigned int *v54; // rdi
  unsigned int v55; // r12d
  __int16 v56; // ax
  __int16 v57; // ax
  __int64 v58; // rdx
  _OWORD *v59; // rax
  _OWORD *v60; // rdx
  __int64 v61; // r8
  ULONG_PTR v62; // rsi
  int v63; // edi
  __int64 v64; // rdi
  _QWORD *v65; // rsi
  ULONG_PTR v66; // rsi
  int v67; // edi
  __int64 v68; // rdi
  int v69; // edi
  ULONG_PTR v70; // r14
  char v71; // cl
  signed __int64 BugCheckParameter4; // rcx
  __int64 v73; // rbx
  int (__fastcall *v74)(ULONG_PTR); // rax
  _SLIST_HEADER *v75; // r8
  __int64 v76; // r14
  volatile signed __int64 *v77; // r12
  __int64 v78; // rdi
  int v79; // ecx
  __int64 v80; // rax
  __int64 v81; // rdi
  ULONG_PTR v82; // rdx
  unsigned int v83; // eax
  unsigned int v84; // [rsp+30h] [rbp-138h]
  int v85; // [rsp+34h] [rbp-134h]
  char v86; // [rsp+38h] [rbp-130h]
  unsigned int v87; // [rsp+40h] [rbp-128h]
  _DWORD *v88; // [rsp+48h] [rbp-120h]
  _DWORD *v89; // [rsp+50h] [rbp-118h]
  ULONG_PTR v90; // [rsp+50h] [rbp-118h]
  unsigned int v91; // [rsp+58h] [rbp-110h]
  unsigned int v92; // [rsp+5Ch] [rbp-10Ch]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-108h] BYREF
  int v94; // [rsp+68h] [rbp-100h]
  char v95; // [rsp+70h] [rbp-F8h]
  ULONG_PTR v96; // [rsp+78h] [rbp-F0h] BYREF
  __int64 v97; // [rsp+80h] [rbp-E8h]
  __int64 v98; // [rsp+88h] [rbp-E0h]
  __int64 v99; // [rsp+90h] [rbp-D8h]
  __int64 v100; // [rsp+98h] [rbp-D0h]
  __int64 v101; // [rsp+A0h] [rbp-C8h]
  __int64 v102; // [rsp+A8h] [rbp-C0h]
  __int64 v103; // [rsp+B0h] [rbp-B8h]
  __int64 v104; // [rsp+B8h] [rbp-B0h]
  unsigned __int64 v105; // [rsp+C0h] [rbp-A8h]
  void *v106; // [rsp+C8h] [rbp-A0h]
  _QWORD v107[2]; // [rsp+D0h] [rbp-98h] BYREF
  int v108; // [rsp+E0h] [rbp-88h]
  _QWORD v109[4]; // [rsp+E8h] [rbp-80h] BYREF
  _DWORD v110[6]; // [rsp+108h] [rbp-60h] BYREF
  __int64 v111; // [rsp+120h] [rbp-48h]
  __int64 v112; // [rsp+128h] [rbp-40h]
  char v113; // [rsp+170h] [rbp+8h]
  ULONG64 v114; // [rsp+178h] [rbp+10h]
  _QWORD *v115; // [rsp+180h] [rbp+18h]

  v115 = a3;
  v114 = a2;
  v5 = a2;
  CurrentThread = KeGetCurrentThread();
  v106 = CurrentThread;
  v8 = *(_DWORD *)(a1 + 48);
  v85 = v8;
  v88 = *(_DWORD **)a1;
  v107[1] = *(_QWORD *)a1;
  v9 = CurrentThread->gap0[10];
  v10 = 0;
  v107[0] = 0LL;
  v105 = -1LL;
  v92 = 0;
  v94 = 0;
  if ( v9 )
  {
    v11 = a5;
    if ( a5 )
    {
      if ( (unsigned __int64)a5 >= MmUserProbeAddress )
        v11 = (_QWORD *)MmUserProbeAddress;
      v107[0] = *v11;
      a5 = v107;
    }
    v12 = v8 & 0xC0000000;
    if ( (v8 & 0xC0000000) == 0x80000000 )
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a2 >= MmUserProbeAddress )
        a2 = MmUserProbeAddress;
      *(_BYTE *)a2 = *(_BYTE *)a2;
      *(_BYTE *)(a2 + 23) = *(_BYTE *)(a2 + 23);
    }
    else
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a2 >= MmUserProbeAddress )
        a2 = MmUserProbeAddress;
      *(_BYTE *)a2 = *(_BYTE *)a2;
      *(_BYTE *)(a2 + 39) = *(_BYTE *)(a2 + 39);
    }
    v13 = v8 & 0x1000000;
    if ( (v8 & 0x1000000) != 0 )
    {
      if ( v12 == 0x80000000 )
      {
        v92 = *(_DWORD *)(v5 + 16);
        v21 = *(_DWORD *)(v5 + 20);
      }
      else
      {
        v92 = *(_DWORD *)(v5 + 24);
        v21 = *(_DWORD *)(v5 + 32);
      }
      v94 = v21;
    }
    if ( a4 )
    {
      v95 = 1;
      v14 = a4;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        v14 = (unsigned int *)MmUserProbeAddress;
      v10 = *v14;
      if ( v12 == 0x80000000 )
      {
        MessageAttributeSize32 = AlpcpGetMessageAttributeSize32(v10);
        v17 = 4;
        v15 = 2LL;
      }
      else
      {
        v15 = 2LL;
        MessageAttributeSize32 = 8;
        if ( (v10 & 0x80000000) != 0 )
          MessageAttributeSize32 = 32;
        if ( (v10 & 0x40000000) != 0 )
          MessageAttributeSize32 += 32;
        if ( (v10 & 0x20000000) != 0 )
          MessageAttributeSize32 += 32;
        if ( (v10 & 0x10000000) != 0 )
          MessageAttributeSize32 += 24;
        if ( (v10 & 0x8000000) != 0 )
          MessageAttributeSize32 += 24;
        if ( (v10 & 0x4000000) != 0 )
          MessageAttributeSize32 += 8;
        v17 = 8;
      }
      v18 = a4;
      if ( (unsigned __int64)MessageAttributeSize32 - 1 > 0xFFE )
      {
        ProbeForWrite(a4, MessageAttributeSize32, v17);
        v5 = v114;
        v8 = v85;
      }
      else
      {
        if ( ((v17 - 1) & (unsigned int)a4) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          v18 = (_BYTE *)MmUserProbeAddress;
        *v18 = *v18;
        v18[MessageAttributeSize32 - 1] = v18[MessageAttributeSize32 - 1];
      }
      v91 = v10;
      a3 = v115;
    }
    else
    {
      v91 = 0;
      v15 = 2LL;
    }
    if ( a3 )
    {
      v19 = a3;
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        v19 = (unsigned __int64 *)MmUserProbeAddress;
      v105 = *v19;
      v20 = a3;
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        v20 = (_QWORD *)MmUserProbeAddress;
      *v20 = *v20;
      v10 = v91;
    }
  }
  else
  {
    v13 = v8 & 0x1000000;
    if ( (v8 & 0x1000000) != 0 )
    {
      v92 = *(_DWORD *)(a2 + 24);
      v94 = *(_DWORD *)(a2 + 32);
    }
    if ( a4 )
      v10 = *a4;
    v91 = v10;
    if ( a3 )
      v105 = *a3;
    v15 = 2LL;
    if ( (CurrentThread->MiscFlags & 0x400) != 0 )
      v9 = 1;
  }
  if ( !v13 )
  {
    result = AlpcpReceiveMessagePort(a1, v9, (_DWORD)a5, (unsigned int)&BugCheckParameter2, v10);
LABEL_57:
    a3 = v115;
    v8 = v85;
    v5 = v114;
LABEL_58:
    v87 = result;
LABEL_59:
    v23 = BugCheckParameter2;
    goto LABEL_60;
  }
  if ( !v92 )
  {
    result = 3221225485LL;
    goto LABEL_58;
  }
  v76 = *(_QWORD *)a1;
  result = AlpcpLookupMessage(v76, v92, v94, &v96);
  v87 = result;
  if ( (int)result < 0 )
  {
    v5 = v114;
    v8 = v85;
    a3 = v115;
    goto LABEL_59;
  }
  v90 = v96;
  if ( (*(_DWORD *)(v96 + 40) & 7) != 4 )
  {
    AlpcpUnlockMessage(v96);
    result = 3221225485LL;
    goto LABEL_57;
  }
  v77 = (volatile signed __int64 *)(v76 + 352);
  v78 = KeAbPreAcquire(v76 + 352, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v76 + 352), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(v76 + 352), v78, v76 + 352);
  if ( v78 )
    *(_BYTE *)(v78 + 26) |= 1u;
  v79 = *(_DWORD *)(v76 + 416);
  if ( (v79 & 0x40) != 0 )
  {
    AlpcpUnlockMessage(v96);
    if ( _InterlockedCompareExchange64(v77, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v76 + 352));
    KeAbPostRelease(v76 + 352);
    result = 3221227264LL;
    v87 = -1073740032;
    v5 = v114;
    v8 = v85;
    a3 = v115;
    goto LABEL_59;
  }
  if ( (v79 & 0x10) != 0 )
  {
    AlpcpUnlockMessage(v96);
    if ( _InterlockedCompareExchange64(v77, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v76 + 352));
    KeAbPostRelease(v76 + 352);
    result = 3221225537LL;
    v87 = -1073741759;
    v5 = v114;
    v8 = v85;
    a3 = v115;
    goto LABEL_59;
  }
  v80 = KeAbPreAcquire(v76 + 200, 0LL, 0LL);
  v81 = v80;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v76 + 200), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v76 + 200), v80, v76 + 200);
  if ( v81 )
    *(_BYTE *)(v81 + 26) |= 1u;
  --*(_DWORD *)(v76 + 460);
  *(_DWORD *)(v90 + 40) &= 0xFFFFFFF8;
  v82 = v96;
  *(_QWORD *)(v96 + 16) = 0LL;
  **(_QWORD **)(v82 + 8) = *(_QWORD *)v82;
  *(_QWORD *)(*(_QWORD *)v82 + 8LL) = *(_QWORD *)(v82 + 8);
  v83 = 0;
  if ( *(_QWORD *)(v82 + 136) )
    v83 = 0x80000000;
  if ( *(_QWORD *)(v82 + 144) )
    v83 |= 0x40000000u;
  if ( *(_QWORD *)(v82 + 152) )
    v83 |= 0x10000000u;
  if ( (v83 & v91) != 0 )
  {
    *(_WORD *)(v82 + 228) |= 0x2000u;
    AlpcpInsertMessagePendingQueue(v76, v82);
  }
  else
  {
    *(_WORD *)(v82 + 228) &= ~0x2000u;
    --*(_WORD *)(v82 - 30);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v76 + 200), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v76 + 200));
  KeAbPostRelease(v76 + 200);
  if ( _InterlockedCompareExchange64(v77, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v76 + 352));
  KeAbPostRelease(v76 + 352);
  v23 = v96;
  if ( AlpcpLogEnabled )
    AlpcpLogReceiveMessage(v96);
  BugCheckParameter2 = v23;
  result = 0LL;
  v87 = 0;
  v5 = v114;
  v8 = v85;
  a3 = v115;
LABEL_60:
  v84 = result;
  if ( (_DWORD)result )
    return result;
  v24 = 40;
  if ( (v8 & 0xC0000000) == 0x80000000 )
    v24 = 24;
  v25 = v24 + *(_WORD *)(v23 + 224);
  v108 = v25;
  if ( a3 )
  {
    v26 = v25;
    if ( v25 > v105 )
    {
      v44 = AlpcpReturnMessageOnInsufficientBuffer(v88, v23);
      v87 = v44;
      v84 = v44;
      if ( v44 == -1073741789 )
        *v115 = v26;
      goto LABEL_196;
    }
  }
  *(_QWORD *)(v23 + 192) = v106;
  if ( (v8 & 0xC0000000) == 0x80000000 )
  {
    v56 = *(_WORD *)(v23 + 224);
    *(_WORD *)v5 = v56;
    *(_WORD *)(v5 + 2) = v56 + 24;
    v57 = *(_WORD *)(v23 + 230);
    if ( v57 )
      *(_WORD *)(v5 + 6) = v57 - 16;
    else
      *(_WORD *)(v5 + 6) = 0;
    *(_WORD *)(v5 + 4) = *(_WORD *)(v23 + 228) | 0x1000;
    *(_DWORD *)(v5 + 8) = *(_DWORD *)(v23 + 232);
    *(_DWORD *)(v5 + 12) = *(_DWORD *)(v23 + 240);
    *(_DWORD *)(v5 + 16) = *(_DWORD *)(v23 + 248);
    *(_DWORD *)(v5 + 20) = *(_DWORD *)(v23 + 256);
    *(_DWORD *)(v5 + 20) = *(_DWORD *)(v23 + 256);
    if ( (v88[64] & 0x1000) != 0 )
      *(_WORD *)(v5 + 4) &= 0xC00Fu;
    v58 = v5 + 24;
    if ( *(_QWORD *)(v23 + 168) )
      AlpcpGetDataFromUserVaSafe(v23, v58);
    else
      AlpcpReadMessageData(v23, v58);
  }
  else
  {
    *(_OWORD *)v5 = *(_OWORD *)(v23 + 224);
    *(_OWORD *)(v5 + 16) = *(_OWORD *)(v23 + 240);
    *(_QWORD *)(v5 + 32) = *(_QWORD *)(v23 + 256);
    if ( (v88[64] & 0x1000) != 0 )
      *(_WORD *)(v5 + 4) &= 0xC00Fu;
    v27 = (void *)(v5 + 40);
    if ( *(_QWORD *)(v23 + 168) )
    {
      AlpcpGetDataFromUserVaSafe(v23, v5 + 40);
    }
    else
    {
      v28 = *(unsigned __int16 *)(v23 + 224);
      if ( v28 > 0x200 )
      {
        v59 = (_OWORD *)(v23 + 264);
        v60 = (_OWORD *)(v5 + 40);
        v61 = 4LL;
        do
        {
          *v60 = *v59;
          v60[1] = v59[1];
          v60[2] = v59[2];
          v60[3] = v59[3];
          v60[4] = v59[4];
          v60[5] = v59[5];
          v60[6] = v59[6];
          v60 += 8;
          *(v60 - 1) = v59[7];
          v59 += 8;
          --v61;
        }
        while ( v61 );
        v28 = *(unsigned __int16 *)(v23 + 224) - 512LL;
        v27 = (void *)(v5 + 552);
        v29 = *(const void **)(v23 + 208);
      }
      else
      {
        v29 = (const void *)(v23 + 264);
      }
      memmove(v27, v29, v28);
    }
  }
  v30 = a4;
  if ( a4 )
  {
    v31 = *a4;
    v32 = a4 + 1;
    v89 = a4 + 1;
    a4[1] = 0;
    if ( (v85 & 0x80000000) == 0 )
    {
      if ( (v31 & 0x80000000) != 0 )
      {
        v111 = 8LL;
        if ( *(_QWORD *)(v23 + 136) )
        {
          a4[2] = 0;
          *((_QWORD *)a4 + 3) = *(_QWORD *)(*(_QWORD *)(v23 + 136) + 8LL);
          *v32 |= 0x80000000;
        }
      }
      if ( (v31 & 0x40000000) == 0 )
        goto LABEL_82;
      v33 = 2LL;
      v100 = 8LL;
      if ( (v31 & 0x80000000) != 0 )
      {
        v33 = 8LL;
        v100 = 32LL;
      }
      v106 = &a4[v33];
      v34 = *(_QWORD *)(v23 + 144);
      if ( v34 )
      {
        v62 = *(_QWORD *)(v34 + 16);
        AlpcpReferenceBlob(v62);
        v63 = AlpcpReceiveView(v88);
        AlpcpDereferenceBlobEx(v62, 1);
        if ( v63 >= 0 )
        {
          v64 = *(_QWORD *)(v23 + 144);
          v65 = v106;
          memset(v106, 0, 0x20uLL);
          v65[2] = *(_QWORD *)(v64 + 40);
          v65[3] = *(_QWORD *)(v64 + 48);
          if ( v86 )
            *(_DWORD *)v65 = 0x40000;
          v32 = a4 + 1;
          *v89 |= 0x40000000u;
          v30 = a4;
          goto LABEL_82;
        }
        v30 = a4;
      }
      v32 = a4 + 1;
LABEL_82:
      if ( (v31 & 0x20000000) != 0 )
      {
        v35 = 2LL;
        v102 = 8LL;
        if ( (v31 & 0x80000000) != 0 )
        {
          v35 = 8LL;
          v102 = 32LL;
        }
        if ( (v31 & 0x40000000) != 0 )
        {
          v35 += 8LL;
          v102 = v35 * 4;
        }
        v36 = &v30[v35];
        v37 = v88;
        if ( *(_DWORD **)(v23 + 56) == v88 || *(_DWORD **)(v23 + 64) == v88 )
          v38 = *(_QWORD *)(v23 + 128);
        else
          v38 = *(_QWORD *)(v23 + 120);
        *(_QWORD *)v36 = v38;
        if ( *(_DWORD **)(v23 + 56) == v88 || *(_DWORD **)(v23 + 64) == v88 )
          v39 = *(_DWORD *)(v23 + 72);
        else
          v39 = *(_DWORD *)(v23 + 44);
        v36[4] = v39;
        if ( (v88[104] & 6) == 4 )
          v40 = *(_QWORD *)(v23 + 104);
        else
          v40 = *(_QWORD *)(v23 + 112);
        *((_QWORD *)v36 + 1) = v40;
        v36[5] = *(_DWORD *)(v23 + 248);
        v36[6] = *(_DWORD *)(v23 + 256);
        if ( *(_QWORD *)v36 )
          *v32 |= 0x20000000u;
      }
      else
      {
        v37 = v88;
      }
      if ( (v31 & 0x10000000) != 0 )
      {
        v41 = 2LL;
        v104 = 8LL;
        if ( (v31 & 0x80000000) != 0 )
        {
          v41 = 8LL;
          v104 = 32LL;
        }
        if ( (v31 & 0x40000000) != 0 )
        {
          v41 += 8LL;
          v104 = v41 * 4;
        }
        if ( (v31 & 0x20000000) != 0 )
        {
          v41 += 8LL;
          v104 = v41 * 4;
        }
        AlpcpExposeHandleAttribute(v37, v23, &v30[v41], v32);
      }
      if ( (v31 & 0x8000000) == 0 )
        goto LABEL_118;
      v103 = 8LL;
      v42 = v31 & 0xF0000000;
      if ( (v42 & 0x80000000) != 0 )
      {
        v15 = 8LL;
        v103 = 32LL;
      }
      if ( (v42 & 0x40000000) != 0 )
      {
        v15 += 8LL;
        v103 = v15 * 4;
      }
      if ( (v42 & 0x20000000) != 0 )
      {
        v15 += 8LL;
        v103 = v15 * 4;
      }
      if ( (v42 & 0x10000000) != 0 )
      {
        v15 += 6LL;
        v103 = v15 * 4;
      }
      if ( (v42 & 0x8000000) != 0 )
      {
        v15 += 6LL;
        v103 = v15 * 4;
      }
      v43 = &v30[v15];
      goto LABEL_117;
    }
    if ( (v31 & 0x80000000) != 0 )
    {
      v112 = 8LL;
      if ( *(_QWORD *)(v23 + 136) )
      {
        a4[2] = 0;
        a4[4] = *(_DWORD *)(*(_QWORD *)(v23 + 136) + 8LL);
        *v32 |= 0x80000000;
      }
    }
    if ( (v31 & 0x40000000) != 0 )
    {
      v45 = 8LL;
      v97 = 8LL;
      if ( (v31 & 0x80000000) != 0 )
      {
        v45 = 20LL;
        v97 = 20LL;
      }
      v46 = *(_QWORD *)(v23 + 144);
      if ( v46 )
      {
        v66 = *(_QWORD *)(v46 + 16);
        AlpcpReferenceBlob(v66);
        v67 = AlpcpReceiveView(v88);
        AlpcpDereferenceBlobEx(v66, 1);
        if ( v67 < 0 )
        {
          v32 = a4 + 1;
          v30 = a4;
          goto LABEL_129;
        }
        v68 = *(_QWORD *)(v23 + 144);
        memset(v109, 0, sizeof(v109));
        v109[2] = *(_QWORD *)(v68 + 40);
        v109[3] = *(_QWORD *)(v68 + 48);
        if ( v113 )
          LODWORD(v109[0]) = 0x40000;
        v32 = a4 + 1;
        *v89 |= 0x40000000u;
        v45 = v97;
        v30 = a4;
      }
      else
      {
        v32 = a4 + 1;
      }
      *(unsigned int *)((char *)v30 + v45) = v109[0];
      *(unsigned int *)((char *)v30 + v45 + 4) = v109[1];
      *(unsigned int *)((char *)v30 + v45 + 8) = v109[2];
      *(unsigned int *)((char *)v30 + v45 + 12) = v109[3];
    }
LABEL_129:
    if ( (v31 & 0x20000000) != 0 )
    {
      v47 = 2LL;
      v98 = 8LL;
      if ( (v31 & 0x80000000) != 0 )
      {
        v47 = 5LL;
        v98 = 20LL;
      }
      if ( (v31 & 0x40000000) != 0 )
      {
        v47 += 4LL;
        v98 = v47 * 4;
      }
      v48 = &v30[v47];
      v49 = v88;
      if ( *(_DWORD **)(v23 + 56) == v88 || *(_DWORD **)(v23 + 64) == v88 )
        v50 = *(_DWORD *)(v23 + 128);
      else
        v50 = *(_DWORD *)(v23 + 120);
      *v48 = v50;
      if ( *(_DWORD **)(v23 + 56) == v88 || *(_DWORD **)(v23 + 64) == v88 )
        v51 = *(_DWORD *)(v23 + 72);
      else
        v51 = *(_DWORD *)(v23 + 44);
      v48[2] = v51;
      if ( (v88[104] & 6) == 4 )
        v52 = *(_DWORD *)(v23 + 104);
      else
        v52 = *(_DWORD *)(v23 + 112);
      v48[1] = v52;
      if ( *v48 )
        *v32 |= 0x20000000u;
    }
    else
    {
      v49 = v88;
    }
    if ( (v31 & 0x10000000) != 0 )
    {
      v53 = 2LL;
      v101 = 8LL;
      if ( (v31 & 0x80000000) != 0 )
      {
        v53 = 5LL;
        v101 = 20LL;
      }
      if ( (v31 & 0x40000000) != 0 )
      {
        v53 += 4LL;
        v101 = v53 * 4;
      }
      if ( (v31 & 0x20000000) != 0 )
      {
        v53 += 5LL;
        v101 = v53 * 4;
      }
      v54 = &v30[v53];
      if ( (int)AlpcpExposeHandleAttribute(v49, v23, v110, v32) >= 0 )
      {
        *v54 = v110[0];
        v54[1] = v110[2];
        v54[2] = v110[4];
        v54[3] = v110[5];
      }
    }
    if ( (v31 & 0x8000000) == 0 )
      goto LABEL_118;
    v99 = 8LL;
    v55 = v31 & 0xF0000000;
    if ( (v55 & 0x80000000) != 0 )
    {
      v15 = 5LL;
      v99 = 20LL;
    }
    if ( (v55 & 0x40000000) != 0 )
    {
      v15 += 4LL;
      v99 = v15 * 4;
    }
    if ( (v55 & 0x20000000) != 0 )
    {
      v15 += 5LL;
      v99 = v15 * 4;
    }
    if ( (v55 & 0x10000000) != 0 )
    {
      v15 += 4LL;
      v99 = v15 * 4;
    }
    if ( (v55 & 0x8000000) != 0 )
    {
      v15 += 6LL;
      v99 = v15 * 4;
    }
    v43 = &a4[v15];
LABEL_117:
    AlpcpExposeTokenAttribute(v88, v23, v43, v32);
  }
LABEL_118:
  v44 = v87;
LABEL_196:
  if ( v44 != -1073741789 && *(_DWORD **)(v23 + 64) == v88 )
  {
    *(_QWORD *)(v23 + 64) = 0LL;
    *(_QWORD *)(v23 + 56) = 0LL;
  }
  if ( ((v44 + 0x80000000) & 0x80000000) != 0 || v44 == -1073741789 )
  {
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(v23);
    v69 = 0;
    v70 = v23 - 48;
    v71 = *(_BYTE *)(v70 + 16);
    if ( (v71 & 1) != 0 )
    {
      v69 = 0x10000 - *(__int16 *)(v70 + 18);
      *(_BYTE *)(v70 + 16) = v71 & 0xFE;
      *(_WORD *)(v70 + 18) = 0;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v70 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v70 + 32));
    KeAbPostRelease(v70 + 32);
    if ( v69 > 0 )
    {
      BugCheckParameter4 = -v69 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v70 + 24), -v69);
      if ( BugCheckParameter4 <= 0 )
      {
        if ( BugCheckParameter4 )
          KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
        v73 = AlpcpRegisteredTypes[*(unsigned __int8 *)(v70 + 17)];
        v74 = *(int (__fastcall **)(_QWORD))(v73 + 32);
        if ( !v74 || v74(BugCheckParameter2) >= 0 )
        {
          if ( (*(_BYTE *)(v70 + 16) & 2) != 0 )
          {
            v75 = &AlpcpLookasides + 8 * (unsigned __int64)*(unsigned int *)(v73 + 8);
            ++*((_DWORD *)&v75[1].HeaderX64 + 3);
            if ( LOWORD(v75->Alignment) >= LOWORD(v75[1].Alignment) )
            {
              ++LODWORD(v75[2].Alignment);
              ((void (__fastcall *)(ULONG_PTR))v75[3].Region)(v70);
            }
            else
            {
              RtlpInterlockedPushEntrySList(v75, (PSLIST_ENTRY)v70);
            }
          }
          else if ( *(_QWORD *)(v73 + 40) )
          {
            (*((void (__fastcall **)(ULONG_PTR))&AlpcpLookasides + 16 * (unsigned __int64)*(unsigned int *)(v73 + 8) + 7))(v70);
          }
          else
          {
            ExFreePoolWithTag((PVOID)v70, *(_DWORD *)(v73 + 4));
          }
        }
      }
    }
    return v84;
  }
  else
  {
    *(_QWORD *)(v23 + 192) = 0LL;
    AlpcpCancelMessage(v88, v23, 0x10000LL);
    return v87;
  }
}
