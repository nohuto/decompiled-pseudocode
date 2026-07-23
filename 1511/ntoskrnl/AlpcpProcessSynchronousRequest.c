/*
 * XREFs of AlpcpProcessSynchronousRequest @ 0x1404271A0
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x140427E70 (NtAlpcSendWaitReceivePort.c)
 *     LpcpRequestWaitReplyPort @ 0x1404AAC20 (LpcpRequestWaitReplyPort.c)
 *     LpcSendWaitReceivePort @ 0x14061F504 (LpcSendWaitReceivePort.c)
 *     LpcpReplyWaitReplyPort @ 0x14061F5A4 (LpcpReplyWaitReplyPort.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ObReferenceObjectSafe @ 0x1400C8410 (ObReferenceObjectSafe.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     AlpcpUnlockMessage @ 0x140423364 (AlpcpUnlockMessage.c)
 *     AlpcpReadMessageData @ 0x1404233F0 (AlpcpReadMessageData.c)
 *     AlpcpGetMessageAttributeOffset32 @ 0x140423FF4 (AlpcpGetMessageAttributeOffset32.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     AlpcpExposeHandleAttribute @ 0x1404292E0 (AlpcpExposeHandleAttribute.c)
 *     AlpcpSendMessage @ 0x140429460 (AlpcpSendMessage.c)
 *     AlpcpExposeTokenAttribute @ 0x14042B240 (AlpcpExposeTokenAttribute.c)
 *     AlpcpGetMessageAttributeOffset @ 0x14042C940 (AlpcpGetMessageAttributeOffset.c)
 *     AlpcpReceiveSynchronousReply @ 0x14042EF50 (AlpcpReceiveSynchronousReply.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     AlpcpReceiveView @ 0x14047C0A8 (AlpcpReceiveView.c)
 *     AlpcpReferenceBlob @ 0x14047CD18 (AlpcpReferenceBlob.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140480230 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x1404815E0 (AlpcpCancelMessage.c)
 *     AlpcpClearOwnerPortMessage @ 0x140481BFC (AlpcpClearOwnerPortMessage.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x140482D7C (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1404A645C (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpExposeContextAttribute32 @ 0x1404ABBB4 (AlpcpExposeContextAttribute32.c)
 *     AlpcpExposeViewAttribute @ 0x1404ABC0C (AlpcpExposeViewAttribute.c)
 *     AlpcpGetMessageAttributeSize32 @ 0x1404BA248 (AlpcpGetMessageAttributeSize32.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x14061FB9C (AlpcpEnterFreeEventMessageLog.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14061FC34 (AlpcpEnterStateChangeEventMessageLog.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpProcessSynchronousRequest(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        ULONG64 a5,
        unsigned __int64 *a6,
        int *Address,
        LARGE_INTEGER *a8,
        unsigned __int8 a9,
        unsigned __int8 a10)
{
  __int64 v10; // r14
  int v11; // edi
  unsigned __int8 v13; // cl
  __int64 *v14; // rax
  unsigned int v15; // edx
  __int64 v16; // r12
  _BYTE *v17; // rcx
  unsigned __int64 *v18; // rsi
  unsigned __int64 *v19; // rcx
  _QWORD *v20; // rcx
  int *v21; // r9
  int *v22; // rax
  int v23; // edi
  __int64 v24; // r15
  unsigned int MessageAttributeSize32; // ecx
  ULONG v26; // r8d
  _BYTE *v27; // rdx
  int v28; // eax
  unsigned int v29; // r14d
  unsigned int v30; // eax
  int v31; // ecx
  ULONG_PTR v32; // r14
  int v33; // edx
  unsigned __int64 v34; // rdi
  void *v35; // rcx
  size_t v36; // r8
  const void *v37; // rdx
  int *v38; // rdi
  int v39; // r12d
  _DWORD *v40; // rsi
  signed int v41; // r9d
  __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rcx
  signed int v49; // r12d
  int *v50; // r8
  __int64 MessageAttributeOffset; // rax
  __int64 v52; // r10
  _OWORD *v53; // rax
  _OWORD *v54; // rdx
  __int64 v55; // r8
  _DWORD *v56; // r15
  __int64 v57; // rax
  _DWORD *v58; // r15
  ULONG_PTR v59; // rsi
  int v60; // edi
  __int64 v61; // rdi
  _QWORD *v62; // rsi
  __int64 MessageAttributeOffset32; // rax
  __int64 v64; // r10
  __int16 v65; // ax
  __int16 v66; // ax
  __int64 v67; // rdx
  int v68; // esi
  char v69; // cl
  signed __int64 BugCheckParameter4; // rcx
  __int64 v71; // rbx
  int (__fastcall *v72)(ULONG_PTR); // rax
  _SLIST_HEADER *v73; // r8
  void *v74; // rcx
  signed __int64 v76; // rax
  __int64 *v77; // r14
  __int64 v78; // rdi
  __int64 v79; // rax
  void *v80; // rcx
  PVOID Object; // [rsp+30h] [rbp-128h]
  char v82; // [rsp+38h] [rbp-120h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-118h] BYREF
  int v84; // [rsp+48h] [rbp-110h]
  char v85; // [rsp+50h] [rbp-108h]
  _DWORD *v86; // [rsp+58h] [rbp-100h]
  __int64 v87; // [rsp+60h] [rbp-F8h]
  __int64 v88; // [rsp+68h] [rbp-F0h]
  __int64 v89; // [rsp+70h] [rbp-E8h]
  __int64 v90; // [rsp+78h] [rbp-E0h]
  void *v91; // [rsp+80h] [rbp-D8h]
  __int64 v92; // [rsp+88h] [rbp-D0h]
  unsigned __int64 v93; // [rsp+90h] [rbp-C8h]
  __int64 v94; // [rsp+98h] [rbp-C0h] BYREF
  _DWORD v95[6]; // [rsp+A0h] [rbp-B8h] BYREF
  _DWORD v96[10]; // [rsp+B8h] [rbp-A0h] BYREF
  int v97[2]; // [rsp+E0h] [rbp-78h] BYREF
  _DWORD v98[14]; // [rsp+E8h] [rbp-70h] BYREF
  int v102; // [rsp+1A0h] [rbp+48h]

  v10 = a3;
  v11 = a2;
  *(_QWORD *)v97 = 0LL;
  memset(v98, 0, sizeof(v98));
  v84 = 0;
  v93 = -1LL;
  v13 = a9;
  if ( a9 )
  {
    v14 = (__int64 *)a8;
    if ( a8 )
    {
      if ( (unsigned __int64)a8 >= MmUserProbeAddress )
        v14 = (__int64 *)MmUserProbeAddress;
      v94 = *v14;
      a8 = (LARGE_INTEGER *)&v94;
    }
    v15 = v11 & 0xC0000000;
    v16 = a5;
    v17 = (_BYTE *)a5;
    if ( (v11 & 0xC0000000) == 0x80000000 )
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a5 >= MmUserProbeAddress )
        v17 = (_BYTE *)MmUserProbeAddress;
      *v17 = *v17;
      v17[23] = v17[23];
    }
    else
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a5 >= MmUserProbeAddress )
        v17 = (_BYTE *)MmUserProbeAddress;
      *v17 = *v17;
      v17[39] = v17[39];
    }
    v18 = a6;
    if ( a6 )
    {
      v19 = a6;
      if ( (unsigned __int64)a6 >= MmUserProbeAddress )
        v19 = (unsigned __int64 *)MmUserProbeAddress;
      v93 = *v19;
      v20 = a6;
      if ( (unsigned __int64)a6 >= MmUserProbeAddress )
        v20 = (_QWORD *)MmUserProbeAddress;
      *v20 = *v20;
    }
    v21 = Address;
    if ( Address )
    {
      v85 = 1;
      v22 = Address;
      if ( (unsigned __int64)Address >= MmUserProbeAddress )
        v22 = (int *)MmUserProbeAddress;
      v23 = *v22;
      if ( v15 == 0x80000000 )
      {
        MessageAttributeSize32 = AlpcpGetMessageAttributeSize32((unsigned int)v23);
        v26 = 4;
        v24 = 2LL;
      }
      else
      {
        v24 = 2LL;
        MessageAttributeSize32 = 8;
        if ( v23 < 0 )
          MessageAttributeSize32 = 32;
        if ( (v23 & 0x40000000) != 0 )
          MessageAttributeSize32 += 32;
        if ( (v23 & 0x20000000) != 0 )
          MessageAttributeSize32 += 32;
        if ( (v23 & 0x10000000) != 0 )
          MessageAttributeSize32 += 24;
        if ( (v23 & 0x8000000) != 0 )
          MessageAttributeSize32 += 24;
        if ( (v23 & 0x4000000) != 0 )
          MessageAttributeSize32 += 8;
        v26 = 8;
      }
      v27 = v21;
      if ( (unsigned __int64)MessageAttributeSize32 - 1 > 0xFFE )
      {
        ProbeForWrite(v21, MessageAttributeSize32, v26);
      }
      else
      {
        if ( ((v26 - 1) & (unsigned int)v21) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)v21 >= MmUserProbeAddress )
          v27 = (_BYTE *)MmUserProbeAddress;
        *v27 = *v27;
        v27[MessageAttributeSize32 - 1] = v27[MessageAttributeSize32 - 1];
      }
      v84 = v23;
      v11 = a2;
    }
    else
    {
      v24 = 2LL;
    }
    v13 = a9;
  }
  else
  {
    v18 = a6;
    if ( a6 )
      v93 = *a6;
    v24 = 2LL;
    v16 = a5;
    if ( Address )
      v84 = *Address;
  }
  if ( (*(_BYTE *)(a1 + 416) & 6) != 6 )
  {
    Object = (PVOID)a1;
    v92 = a1;
    goto LABEL_53;
  }
  v77 = *(__int64 **)(a1 + 16);
  v78 = KeAbPreAcquire((ULONG_PTR)(v77 - 2), 0LL, 0LL);
  if ( _InterlockedCompareExchange64(v77 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)v77 - 2, v78, (ULONG_PTR)(v77 - 2));
  if ( v78 )
    *(_BYTE *)(v78 + 26) |= 1u;
  v79 = *v77;
  Object = (PVOID)v79;
  v92 = *v77;
  if ( v79 && ObReferenceObjectSafe(v79) )
  {
    if ( _InterlockedCompareExchange64(v77 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v77 - 2);
    KeAbPostRelease((ULONG_PTR)(v77 - 2));
    v13 = a9;
    v11 = a2;
    v10 = a3;
LABEL_53:
    *(_QWORD *)v97 = a1;
    v98[10] = v11;
    if ( (*(_DWORD *)(a1 + 416) & 0x1000) != 0 )
      v28 = AlpcpSendLegacySynchronousRequest(a1, v97, v10, v13);
    else
      v28 = AlpcpSendMessage(v97, v10, a4, v13);
    v29 = v28;
    if ( v28 < 0 )
      goto LABEL_174;
    BugCheckParameter2 = 0LL;
    *(_QWORD *)v97 = Object;
    v29 = AlpcpReceiveSynchronousReply((int)v97, a10, (int)&BugCheckParameter2, v84, a8);
    v102 = v29;
    if ( v29 )
      goto LABEL_174;
    v30 = v11 & 0xC0000000;
    if ( (v11 & 0xC0000000) == 0x80000000 )
      v31 = 24;
    else
      v31 = 40;
    v32 = BugCheckParameter2;
    v33 = *(unsigned __int16 *)(BugCheckParameter2 + 224);
    v34 = (unsigned int)(v33 + v31);
    if ( v18 && v34 > v93 )
    {
      v102 = AlpcpReturnMessageOnInsufficientBuffer(Object, BugCheckParameter2);
      if ( v102 == -1073741789 )
      {
        AlpcpUnlockMessage(v32);
        *v18 = v34;
        v29 = -1073741789;
        v74 = Object;
        goto LABEL_175;
      }
      AlpcpCancelMessage(Object, v32, 0x10000LL);
      goto LABEL_173;
    }
    if ( v30 == 0x80000000 )
    {
      *(_WORD *)v16 = v33;
      LODWORD(v86) = v33 + 24;
      *(_WORD *)(v16 + 2) = v33 + 24;
      v65 = *(_WORD *)(v32 + 230);
      if ( v65 )
        v66 = v65 - 16;
      else
        v66 = 0;
      *(_WORD *)(v16 + 6) = v66;
      *(_WORD *)(v16 + 4) = *(_WORD *)(v32 + 228) | 0x1000;
      *(_DWORD *)(v16 + 8) = *(_DWORD *)(v32 + 232);
      *(_DWORD *)(v16 + 12) = *(_DWORD *)(v32 + 240);
      *(_DWORD *)(v16 + 16) = *(_DWORD *)(v32 + 248);
      *(_DWORD *)(v16 + 20) = *(_DWORD *)(v32 + 256);
      *(_DWORD *)(v16 + 20) = *(_DWORD *)(v32 + 256);
      if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
        *(_WORD *)(v16 + 4) &= 0xC00Fu;
      v67 = v16 + 24;
      if ( *(_QWORD *)(v32 + 168) )
        AlpcpGetDataFromUserVaSafe(v32, v67);
      else
        AlpcpReadMessageData(v32, v67);
    }
    else
    {
      *(_OWORD *)v16 = *(_OWORD *)(BugCheckParameter2 + 224);
      *(_OWORD *)(v16 + 16) = *(_OWORD *)(v32 + 240);
      *(_QWORD *)(v16 + 32) = *(_QWORD *)(v32 + 256);
      if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
        *(_WORD *)(v16 + 4) &= 0xC00Fu;
      LODWORD(v86) = *(unsigned __int16 *)(v16 + 2);
      v35 = (void *)(v16 + 40);
      if ( *(_QWORD *)(v32 + 168) )
      {
        AlpcpGetDataFromUserVaSafe(v32, v16 + 40);
      }
      else
      {
        v36 = *(unsigned __int16 *)(v32 + 224);
        if ( v36 > 0x200 )
        {
          v53 = (_OWORD *)(v32 + 264);
          v54 = (_OWORD *)(v16 + 40);
          v55 = 4LL;
          do
          {
            *v54 = *v53;
            v54[1] = v53[1];
            v54[2] = v53[2];
            v54[3] = v53[3];
            v54[4] = v53[4];
            v54[5] = v53[5];
            v54[6] = v53[6];
            v54 += 8;
            *(v54 - 1) = v53[7];
            v53 += 8;
            --v55;
          }
          while ( v55 );
          v36 = *(unsigned __int16 *)(v32 + 224) - 512LL;
          v35 = (void *)(v16 + 552);
          v37 = *(const void **)(v32 + 208);
        }
        else
        {
          v37 = (const void *)(v32 + 264);
        }
        memmove(v35, v37, v36);
      }
    }
    if ( v18 )
      *v18 = (unsigned int)v34;
    v38 = Address;
    if ( Address )
    {
      v39 = *Address;
      v40 = Address + 1;
      v86 = Address + 1;
      Address[1] = 0;
      if ( a2 < 0 )
      {
        if ( v39 < 0 )
        {
          MessageAttributeOffset32 = AlpcpGetMessageAttributeOffset32(v39, 0x80000000);
          if ( *(_QWORD *)(v32 + 136) != v64 )
          {
            *(int *)((char *)Address + MessageAttributeOffset32) = v64;
            *(int *)((char *)Address + MessageAttributeOffset32 + 8) = *(_DWORD *)(*(_QWORD *)(v32 + 136) + 8LL);
            *v40 |= 0x80000000;
          }
        }
        if ( (v39 & 0x40000000) != 0 )
        {
          v56 = (int *)((char *)Address + AlpcpGetMessageAttributeOffset32(v39, 0x40000000));
          if ( (int)AlpcpExposeViewAttribute(a1, v32, v96, Address + 1) >= 0 )
          {
            *v56 = v96[0];
            v56[1] = v96[2];
            v56[2] = v96[4];
            v56[3] = v96[6];
          }
        }
        if ( (v39 & 0x20000000) != 0 )
        {
          v57 = AlpcpGetMessageAttributeOffset32(v39, 0x20000000);
          AlpcpExposeContextAttribute32(a1, v32, (char *)Address + v57, Address + 1);
        }
        if ( (v39 & 0x10000000) != 0 )
        {
          v58 = (int *)((char *)Address + AlpcpGetMessageAttributeOffset32(v39, 0x10000000));
          if ( (int)AlpcpExposeHandleAttribute(a1, v32, v95, Address + 1) >= 0 )
          {
            *v58 = v95[0];
            v58[1] = v95[2];
            v58[2] = v95[4];
            v58[3] = v95[5];
          }
        }
        if ( (v39 & 0x8000000) == 0 )
          goto LABEL_157;
        v50 = (int *)((char *)Address + AlpcpGetMessageAttributeOffset32(v39, 0x8000000));
      }
      else
      {
        v41 = v39 & 0x80000000;
        if ( v39 < 0 )
        {
          MessageAttributeOffset = AlpcpGetMessageAttributeOffset((unsigned int)v39, 0x80000000LL);
          if ( *(_QWORD *)(v32 + 136) != v52 )
          {
            *(int *)((char *)Address + MessageAttributeOffset) = v52;
            *(_QWORD *)((char *)Address + MessageAttributeOffset + 16) = *(_QWORD *)(*(_QWORD *)(v32 + 136) + 8LL);
            *v40 |= 0x80000000;
          }
        }
        if ( (v39 & 0x40000000) != 0 )
        {
          v88 = 8LL;
          v42 = 2LL;
          if ( v41 < 0 )
            v42 = 8LL;
          v88 = v42 * 4;
          if ( (v41 & 0x40000000) != 0 )
          {
            v42 += 8LL;
            v88 = v42 * 4;
          }
          if ( (v41 & 0x20000000) != 0 )
          {
            v42 += 8LL;
            v88 = v42 * 4;
          }
          if ( (v41 & 0x10000000) != 0 )
          {
            v42 += 6LL;
            v88 = v42 * 4;
          }
          if ( (v41 & 0x8000000) != 0 )
          {
            v42 += 6LL;
            v88 = v42 * 4;
          }
          v91 = &Address[v42];
          v43 = *(_QWORD *)(v32 + 144);
          if ( v43 )
          {
            v59 = *(_QWORD *)(v43 + 16);
            AlpcpReferenceBlob(v59);
            v60 = AlpcpReceiveView((PVOID)a1);
            AlpcpDereferenceBlobEx(v59, 1);
            if ( v60 < 0 )
            {
              v38 = Address;
              v40 = v86;
            }
            else
            {
              v61 = *(_QWORD *)(v32 + 144);
              v62 = v91;
              memset(v91, 0, 0x20uLL);
              v62[2] = *(_QWORD *)(v61 + 40);
              v62[3] = *(_QWORD *)(v61 + 48);
              if ( v82 )
                *(_DWORD *)v62 = 0x40000;
              v40 = v86;
              *v86 |= 0x40000000u;
              v38 = Address;
            }
          }
          else
          {
            v40 = Address + 1;
          }
        }
        if ( (v39 & 0x20000000) != 0 )
        {
          v90 = 8LL;
          v44 = 2LL;
          if ( v39 < 0 )
            v44 = 8LL;
          v90 = v44 * 4;
          if ( (v39 & 0x40000000) != 0 )
          {
            v44 += 8LL;
            v90 = v44 * 4;
          }
          if ( *(_QWORD *)(v32 + 56) == a1 || *(_QWORD *)(v32 + 64) == a1 )
            v45 = *(_QWORD *)(v32 + 128);
          else
            v45 = *(_QWORD *)(v32 + 120);
          *(_QWORD *)&v38[v44] = v45;
          if ( *(_QWORD *)(v32 + 56) == a1 || *(_QWORD *)(v32 + 64) == a1 )
            v46 = *(_DWORD *)(v32 + 72);
          else
            v46 = *(_DWORD *)(v32 + 44);
          v38[v44 + 4] = v46;
          if ( (*(_DWORD *)(a1 + 416) & 6) == 4 )
            v47 = *(_QWORD *)(v32 + 104);
          else
            v47 = *(_QWORD *)(v32 + 112);
          *(_QWORD *)&v38[v44 + 2] = v47;
          v38[v44 + 5] = *(_DWORD *)(v32 + 248);
          v38[v44 + 6] = *(_DWORD *)(v32 + 256);
          if ( *(_QWORD *)&v38[v44] )
            *v40 |= 0x20000000u;
        }
        if ( (v39 & 0x10000000) != 0 )
        {
          v87 = 8LL;
          v48 = 2LL;
          if ( v39 < 0 )
            v48 = 8LL;
          v87 = v48 * 4;
          if ( (v39 & 0x40000000) != 0 )
          {
            v48 += 8LL;
            v87 = v48 * 4;
          }
          if ( (v39 & 0x20000000) != 0 )
          {
            v48 += 8LL;
            v87 = v48 * 4;
          }
          AlpcpExposeHandleAttribute(a1, v32, &v38[v48], v40);
        }
        if ( (v39 & 0x8000000) == 0 )
          goto LABEL_157;
        v89 = 8LL;
        v49 = v39 & 0xF0000000;
        if ( v49 < 0 )
          v24 = 8LL;
        v89 = v24 * 4;
        if ( (v49 & 0x40000000) != 0 )
        {
          v24 += 8LL;
          v89 = v24 * 4;
        }
        if ( (v49 & 0x20000000) != 0 )
        {
          v24 += 8LL;
          v89 = v24 * 4;
        }
        if ( (v49 & 0x10000000) != 0 )
        {
          v24 += 6LL;
          v89 = v24 * 4;
        }
        if ( (v49 & 0x8000000) != 0 )
        {
          v24 += 6LL;
          v89 = v24 * 4;
        }
        v50 = &v38[v24];
      }
      AlpcpExposeTokenAttribute(a1, v32, v50, v40);
    }
LABEL_157:
    if ( (*(_DWORD *)(v32 + 40) & 0x200) != 0 && (*(_DWORD *)(a1 + 416) & 0x2000) != 0 )
    {
      v76 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 440), v32, 0LL);
      v32 = BugCheckParameter2;
      if ( !v76 )
      {
        if ( AlpcpMessageLogEnabled )
          AlpcpEnterFreeEventMessageLog(BugCheckParameter2);
        ++*(_WORD *)(v32 - 30);
        *(_DWORD *)(v32 + 248) |= 0x80000000;
        AlpcpClearOwnerPortMessage(v32);
      }
    }
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(v32);
    v68 = 0;
    v69 = *(_BYTE *)(v32 - 32);
    if ( (v69 & 1) != 0 )
    {
      v68 = 0x10000 - *(__int16 *)(v32 - 30);
      *(_BYTE *)(v32 - 32) = v69 & 0xFE;
      *(_WORD *)(v32 - 30) = 0;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v32 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v32 - 16));
    KeAbPostRelease(v32 - 16);
    if ( v68 > 0 )
    {
      BugCheckParameter4 = -v68 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 - 24), -v68);
      if ( BugCheckParameter4 <= 0 )
      {
        if ( BugCheckParameter4 )
          KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
        v71 = AlpcpRegisteredTypes[*(unsigned __int8 *)(v32 - 31)];
        v72 = *(int (__fastcall **)(ULONG_PTR))(v71 + 32);
        if ( !v72 || v72(BugCheckParameter2) >= 0 )
        {
          if ( (*(_BYTE *)(v32 - 32) & 2) != 0 )
          {
            v73 = &AlpcpLookasides + 8 * (unsigned __int64)*(unsigned int *)(v71 + 8);
            ++*((_DWORD *)&v73[1].HeaderX64 + 3);
            if ( LOWORD(v73->Alignment) >= LOWORD(v73[1].Alignment) )
            {
              ++LODWORD(v73[2].Alignment);
              ((void (__fastcall *)(ULONG_PTR))v73[3].Region)(v32 - 48);
            }
            else
            {
              RtlpInterlockedPushEntrySList(v73, (PSLIST_ENTRY)(v32 - 48));
            }
          }
          else
          {
            v80 = (void *)(v32 - 48);
            if ( *(_QWORD *)(v71 + 40) )
              (*((void (__fastcall **)(void *))&AlpcpLookasides + 16 * (unsigned __int64)*(unsigned int *)(v71 + 8) + 7))(v80);
            else
              ExFreePoolWithTag(v80, *(_DWORD *)(v71 + 4));
          }
        }
      }
    }
LABEL_173:
    v29 = v102;
LABEL_174:
    v74 = Object;
LABEL_175:
    if ( v74 != (void *)a1 )
      ObfDereferenceObject(v74);
    return v29;
  }
  if ( _InterlockedCompareExchange64(v77 - 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v77 - 2);
  KeAbPostRelease((ULONG_PTR)(v77 - 2));
  return 3221225527LL;
}
