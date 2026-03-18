/*
 * XREFs of AlpcpSendMessage @ 0x140429460
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14007F570 (NtWaitForWorkViaWorkerFactory.c)
 *     NtReplyWaitReceivePortEx @ 0x1404234B0 (NtReplyWaitReceivePortEx.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404271A0 (AlpcpProcessSynchronousRequest.c)
 *     NtAlpcSendWaitReceivePort @ 0x140427E70 (NtAlpcSendWaitReceivePort.c)
 *     LpcRequestPort @ 0x1404521F4 (LpcRequestPort.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140480230 (AlpcpSendLegacySynchronousRequest.c)
 *     NtReplyPort @ 0x140482478 (NtReplyPort.c)
 *     NtRequestPort @ 0x1404BFE1C (NtRequestPort.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     AlpcpReleaseDirectAttribute @ 0x1400BBFFC (AlpcpReleaseDirectAttribute.c)
 *     ExfUnblockPushLock @ 0x140150264 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExHandleLogBadReference @ 0x140213858 (ExHandleLogBadReference.c)
 *     PsReleaseProcessWakeCounter @ 0x1403E967C (PsReleaseProcessWakeCounter.c)
 *     ExUnlockHandleTableEntry @ 0x1403F7084 (ExUnlockHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x14040BF60 (ExpLookupHandleTableEntry.c)
 *     AlpcpUnlockMessage @ 0x140423364 (AlpcpUnlockMessage.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     AlpcpDestroyBlob @ 0x1404253D4 (AlpcpDestroyBlob.c)
 *     AlpcpDispatchNewMessage @ 0x14042A040 (AlpcpDispatchNewMessage.c)
 *     AlpcpCaptureAttributes @ 0x14042A430 (AlpcpCaptureAttributes.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x14042B610 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchReplyToPort @ 0x14042C0B0 (AlpcpDispatchReplyToPort.c)
 *     AlpcpChargePagedPoolQuota @ 0x14047C8C8 (AlpcpChargePagedPoolQuota.c)
 *     AlpcReferenceBlobByHandle @ 0x14047CC20 (AlpcReferenceBlobByHandle.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14047CFD8 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpReleaseAttributes @ 0x14047E354 (AlpcpReleaseAttributes.c)
 *     AlpcpValidateMessage @ 0x14047E4C0 (AlpcpValidateMessage.c)
 *     AlpcpCancelMessage @ 0x1404815E0 (AlpcpCancelMessage.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140498ABC (ExpBlockOnLockedHandleEntry.c)
 *     AlpcpCaptureMessageData @ 0x1404A7424 (AlpcpCaptureMessageData.c)
 *     AlpcpReleaseViewAttribute @ 0x1404B80D8 (AlpcpReleaseViewAttribute.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x14061FA98 (AlpcpEnterAllocationEventMessageLog.c)
 *     AlpcpValidateDataInformation @ 0x140620254 (AlpcpValidateDataInformation.c)
 */

__int64 __fastcall AlpcpSendMessage(__int64 *a1, __m256i *a2, __int64 a3, char a4)
{
  __m256i *v4; // r8
  int v6; // r12d
  __int64 v7; // r13
  unsigned int v8; // r14d
  int v9; // eax
  __m256i *v10; // rax
  int v11; // esi
  int v12; // ebx
  unsigned __int16 v13; // r15
  unsigned __int16 v14; // dx
  bool v15; // cl
  __int16 v16; // bx
  __m128i *v17; // rcx
  __int64 result; // rax
  bool v19; // al
  unsigned __int16 v20; // cx
  __int16 v21; // bx
  PSLIST_ENTRY v22; // rsi
  ULONG_PTR v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rbx
  signed __int64 BugCheckParameter4; // rax
  int v27; // ebx
  signed __int32 v28; // eax
  int v29; // eax
  int v30; // r15d
  _OWORD *v31; // r13
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // rbx
  __int64 *v35; // rcx
  unsigned __int16 v36; // dx
  unsigned int *v37; // r9
  char PreviousMode; // r15
  ULONG_PTR v39; // rbx
  signed __int64 *v40; // rsi
  signed __int64 v41; // r8
  ULONG_PTR v42; // rbx
  __int64 v43; // rax
  bool v44; // zf
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // r15
  signed __int64 v48; // rax
  volatile __int64 *v49; // rcx
  int v50; // ecx
  __int64 v51; // rax
  __int64 v52; // rdx
  int v53; // ecx
  __int64 v54; // rcx
  _QWORD *v55; // r15
  ULONG_PTR v56; // r8
  signed __int64 v57; // rax
  bool v58; // cc
  ULONG_PTR v59; // rax
  ULONG_PTR v60; // rcx
  ULONG_PTR v61; // rcx
  _QWORD *v62; // rax
  ULONG_PTR v63; // rbx
  __int64 v64; // rcx
  signed __int32 v65; // eax
  __int64 v66; // rdx
  int v67; // esi
  _QWORD *v68; // r15
  __int64 v69; // rsi
  bool v70; // si
  signed __int32 v71[8]; // [rsp+0h] [rbp-118h] BYREF
  unsigned int v72; // [rsp+30h] [rbp-E8h]
  __m256i v73; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v74; // [rsp+58h] [rbp-C0h]
  unsigned int *v75; // [rsp+60h] [rbp-B8h]
  ULONG_PTR v76; // [rsp+68h] [rbp-B0h]
  __int64 v77; // [rsp+70h] [rbp-A8h]
  __m128i v78; // [rsp+80h] [rbp-98h]
  __int64 v79; // [rsp+90h] [rbp-88h]
  _BYTE v80[120]; // [rsp+A0h] [rbp-78h] BYREF
  __m256i *v81; // [rsp+128h] [rbp+10h]
  char v83; // [rsp+138h] [rbp+20h]

  v83 = a4;
  v81 = a2;
  v4 = a2;
  v6 = 0;
  memset(v80, 0, 64);
  v7 = *a1;
  v77 = v7;
  v8 = *((_DWORD *)a1 + 12);
  v9 = *(_DWORD *)(v7 + 416);
  if ( (v9 & 0x10) != 0 )
    return 3221225537LL;
  if ( (v9 & 8) != 0 )
    return 3221227271LL;
  if ( (v9 & 0x20) != 0 && (*(_DWORD *)(v7 + 256) & 0x1000) == 0 )
    return 3221225527LL;
  if ( a4 )
  {
    if ( (v8 & 0xC0000000) == 0x80000000 )
    {
      v17 = (__m128i *)a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v17 = (__m128i *)MmUserProbeAddress;
      v78 = *v17;
      v79 = v17[1].m128i_i64[0];
      v14 = _mm_cvtsi128_si32(v78);
      v73.m256i_i16[0] = v14;
      v13 = v78.m128i_i16[0] + 40;
      v73.m256i_i16[1] = v78.m128i_i16[0] + 40;
      v12 = _mm_cvtsi128_si32(_mm_srli_si128(v78, 4));
      v73.m256i_i32[1] = v12;
      v73.m256i_i64[1] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v78, 8));
      v73.m256i_i64[2] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v78, 12));
      v11 = v79;
      v73.m256i_i32[6] = v79;
      v74 = HIDWORD(v79);
    }
    else
    {
      v10 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v10 = (__m256i *)MmUserProbeAddress;
      v73 = *v10;
      v74 = v10[1].m256i_i64[0];
      v11 = v73.m256i_i32[6];
      LOWORD(v12) = v73.m256i_i16[2];
      v13 = v73.m256i_u16[1];
      v14 = v73.m256i_i16[0];
    }
    v15 = (*(_DWORD *)(v7 + 256) & 0x1000) != 0 || (v8 & 2) != 0;
    if ( v14 < (unsigned __int16)(v14 + 40) )
    {
      if ( v15 )
      {
        if ( (unsigned __int64)v14 + 40 <= v13 )
        {
          v13 = v14 + 40;
          v73.m256i_i16[1] = v14 + 40;
LABEL_15:
          v16 = v12 & 0x7FFF;
          v73.m256i_i16[2] = v16;
          if ( v73.m256i_i16[3] )
          {
            result = AlpcpValidateDataInformation(v4, &v73);
            v72 = result;
            if ( (int)result < 0 )
              return result;
            a4 = v83;
          }
          goto LABEL_26;
        }
      }
      else if ( v14 + 40LL == v13 )
      {
        goto LABEL_15;
      }
    }
    return 3221225485LL;
  }
  v73 = *a2;
  v74 = a2[1].m256i_i64[0];
  LOBYTE(a2) = (*(_DWORD *)(v7 + 256) & 0x1000) != 0 || (v8 & 2) != 0;
  result = AlpcpValidateMessage(&v73, a2, v4);
  v72 = result;
  if ( (int)result < 0 )
    return result;
  v11 = v73.m256i_i32[6];
  v16 = v73.m256i_i16[2];
  v13 = v73.m256i_u16[1];
  a4 = v83;
LABEL_26:
  v19 = (*(_DWORD *)(v7 + 256) & 0x1000) != 0 || (v8 & 2) != 0;
  v20 = (unsigned __int8)v16;
  v21 = v16 & 0xFF00;
  if ( v19 )
  {
    if ( (v8 & 1) != 0 )
    {
      if ( v11 )
      {
        v21 = 0;
        v20 = 2;
LABEL_140:
        v73.m256i_i32[6] = v11;
        if ( !a4 )
          LODWORD(v74) = 0;
        goto LABEL_37;
      }
    }
    else if ( (v8 & 0x10000) != 0 )
    {
      if ( !v20 )
      {
        v20 = 3;
LABEL_139:
        v11 = 0;
        goto LABEL_140;
      }
      if ( v20 >= 3u && (v20 <= 6u || v20 == 13) && (v8 & 2) != 0 )
        goto LABEL_139;
    }
    else
    {
      if ( !v20 )
      {
        v20 = 1;
        goto LABEL_139;
      }
      if ( v20 == 1 )
      {
        if ( !v11 )
          return 3221225485LL;
        goto LABEL_140;
      }
      if ( (unsigned int)v20 - 7 <= 2 )
      {
        if ( (v8 & 2) == 0 )
          return 3221225485LL;
        goto LABEL_139;
      }
    }
    return 3221225485LL;
  }
  if ( v20 != 7 || a4 )
  {
    if ( v11 <= 0 )
    {
      if ( (v8 & 0x10000) != 0 )
      {
        v20 = 3;
        goto LABEL_36;
      }
    }
    else if ( (v8 & 0x10000) != 0 )
    {
      v20 = 2;
      goto LABEL_36;
    }
    v20 = 1;
  }
LABEL_36:
  if ( !v11 && *(_OWORD *)&v73.m256i_u64[1] != 0LL )
    return 3221227266LL;
LABEL_37:
  v73.m256i_i16[2] = v20 | v21 & 0xEFFF;
  if ( (unsigned __int64)v13 > *(_QWORD *)(v7 + 272) )
    return 3221225519LL;
  if ( (v8 & 0x20000) != 0 )
  {
    if ( ((__int64)KeGetCurrentThread()[1].Queue & 0x10) != 0 )
      return 3221225473LL;
    v11 = v73.m256i_i32[6];
  }
  if ( !v11 )
  {
    ++dword_140317754;
    v22 = RtlpInterlockedPopEntrySList(&AlpcpLookasides);
    if ( !v22 )
    {
      ++dword_140317758;
      v22 = (PSLIST_ENTRY)qword_140317770(
                            (unsigned int)dword_140317764,
                            (unsigned int)dword_14031776C,
                            (unsigned int)dword_140317768);
    }
    if ( !v22 )
      return 3221225626LL;
    memset(v22, 0, 0x30uLL);
    v22[2].Next = 0LL;
    BYTE1(v22[1].Next) = 2;
    *((_QWORD *)&v22->Next + 1) = v22;
    v22->Next = v22;
    LOBYTE(v22[1].Next) |= 2u;
    *((_QWORD *)&v22[1].Next + 1) = 1LL;
    v23 = (ULONG_PTR)&v22[3];
    if ( !v23 )
      return 3221225626LL;
    v24 = KeAbPreAcquire(v23 - 16, 0LL, 0LL);
    v25 = v24;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v23 - 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v23 - 16), v24, v23 - 16);
    if ( v25 )
      *(_BYTE *)(v25 + 26) |= 1u;
    *(_BYTE *)(v23 - 32) |= 1u;
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 - 24), 0x10000uLL) + 0x10000;
    if ( BugCheckParameter4 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v23, 0x26uLL, BugCheckParameter4);
    v27 = *(_DWORD *)(v23 + 248);
    memset((void *)v23, 0, 0x108uLL);
    *(_WORD *)(v23 + 226) = 40;
    --*(_WORD *)(v23 - 30);
    *(_DWORD *)(v23 + 248) = v27 & 0x7FFFFFFF;
    do
      v28 = _InterlockedIncrement(&AlpcpNextCallbackId);
    while ( !v28 );
    *(_DWORD *)(v23 + 256) = v28;
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterAllocationEventMessageLog(v23);
    *(_WORD *)(v23 + 226) = 40;
    v76 = v23;
    v29 = 0;
    v72 = 0;
    v30 = v73.m256i_i32[6];
    goto LABEL_54;
  }
  v8 |= 0x10u;
  if ( v11 < 0 )
  {
    v63 = 0LL;
    v64 = *(_QWORD *)(v7 + 16);
    if ( v64 )
      v63 = AlpcReferenceBlobByHandle(v64 + 40, v73.m256i_i64[3] & 0xFFFFFFFF7FFFFFFFuLL, &AlpcReserveType);
    if ( !v63 )
      return 3221226224LL;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v63 + 32), 1, 0) )
    {
      AlpcpDereferenceBlobEx(v63, 1);
      return 3221227272LL;
    }
    v42 = *(_QWORD *)(v63 + 24);
    AlpcpLockForCachedReferenceBlob(v42);
    *(_DWORD *)(v42 + 40) |= 0x2000u;
    *(_DWORD *)(v42 + 248) &= ~0x80000000;
    do
      v65 = _InterlockedIncrement(&AlpcpNextCallbackId);
    while ( !v65 );
    *(_DWORD *)(v42 + 256) = v65;
    v30 = v73.m256i_i32[6];
    goto LABEL_102;
  }
  if ( (v11 & 0xFC000000) != 0 )
  {
    if ( AlpcpSecondaryMessageTables )
      v37 = *(unsigned int **)(AlpcpSecondaryMessageTables + 8LL * ((unsigned int)v11 >> 26));
    else
      v37 = 0LL;
  }
  else
  {
    v37 = (unsigned int *)AlpcMessageTable;
  }
  v75 = v37;
  if ( !v37 )
    return 3221227266LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v39 = v73.m256i_i32[6] & 0x3FFFFFF;
  if ( (v73.m256i_i16[12] & 0x3FC) != 0 )
  {
    v40 = (signed __int64 *)ExpLookupHandleTableEntry(v37, (unsigned int)v39);
    if ( v40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          _m_prefetchw(v40);
          v41 = *v40;
          if ( (*v40 & 1) == 0 )
            break;
          if ( v41 == _InterlockedCompareExchange64(v40, v41 - 1, v41) )
            goto LABEL_82;
        }
        if ( !v41 )
          break;
        ExpBlockOnLockedHandleEntry(v37, v40, v41);
        v37 = v75;
      }
    }
  }
  v40 = 0LL;
  ExHandleLogBadReference((ULONG_PTR)v37, v39, PreviousMode);
  v37 = v75;
LABEL_82:
  if ( !v40 )
    return 3221227266LL;
  v42 = (*v40 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( *(_DWORD *)(v42 + 0xF8) != v73.m256i_i32[6]
    || (_DWORD)v74 && *(_DWORD *)(((*v40 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x100) != (_DWORD)v74 )
  {
LABEL_232:
    ExUnlockHandleTableEntry((__int64)v37, v40);
    return 3221227266LL;
  }
  _m_prefetchw((const void *)(v42 - 24));
  v43 = *(_QWORD *)(v42 - 24);
  v44 = v43 == 0;
  if ( v43 <= 0 )
  {
LABEL_230:
    if ( !v44 )
      KeBugCheckEx(0x18u, 0LL, v42, 0x20uLL, v43);
    goto LABEL_232;
  }
  while ( 1 )
  {
    v45 = v43;
    v43 = _InterlockedCompareExchange64((volatile signed __int64 *)(v42 - 24), v43 + 1, v43);
    if ( v43 == v45 )
      break;
    if ( v43 <= 0 )
    {
      v44 = v43 == 0;
      goto LABEL_230;
    }
  }
  if ( v43 == -1 )
    goto LABEL_232;
  v46 = KeAbPreAcquire(v42 - 16, 0LL, 0LL);
  v47 = v46;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v42 - 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v42 - 16), v46, v42 - 16);
  if ( v47 )
    *(_BYTE *)(v47 + 26) |= 1u;
  *(_BYTE *)(v42 - 32) |= 1u;
  v48 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v42 - 24), 0x10000uLL) + 0x10000;
  if ( v48 <= 0 )
    KeBugCheckEx(0x18u, 0LL, v42, 0x26uLL, v48);
  --*(_WORD *)(v42 - 30);
  _InterlockedExchangeAdd64(v40, 1uLL);
  v49 = (volatile __int64 *)(v75 + 12);
  _InterlockedOr(v71, 0);
  if ( *v49 )
    ExfUnblockPushLock(v49, 0LL);
  v30 = v73.m256i_i32[6];
  if ( *(_DWORD *)(v42 + 248) != v73.m256i_i32[6]
    || (_DWORD)v74 && *(_DWORD *)(v42 + 256) != (_DWORD)v74
    || !*(_QWORD *)(v42 + 24) && !*(_QWORD *)(v42 + 16) )
  {
    AlpcpUnlockMessage(v42);
    return 3221227266LL;
  }
  if ( *(_QWORD *)(v42 + 176) != *(_QWORD *)(v7 + 16) && *(_QWORD *)(v42 + 184) != v7 )
    goto LABEL_211;
LABEL_102:
  v29 = 0;
  v72 = 0;
  v76 = v42;
  v23 = v42;
  v50 = *(_DWORD *)(v42 + 40);
  if ( (v50 & 0x80u) != 0 )
    goto LABEL_54;
  v51 = *(_QWORD *)(v42 + 24);
  v75 = (unsigned int *)v51;
  if ( !v51 )
    goto LABEL_106;
  v52 = *(_QWORD *)(v42 + 16);
  if ( v52 == v7 )
  {
LABEL_105:
    if ( (v50 & 7) == 3 )
      goto LABEL_106;
LABEL_211:
    AlpcpUnlockMessage(v42);
    return 3221225506LL;
  }
  if ( v52 )
  {
    if ( (*(_BYTE *)(v7 + 416) & 6) != 6 )
      goto LABEL_211;
    v62 = *(_QWORD **)(v7 + 16);
    if ( !v62 || *v62 != v52 )
      goto LABEL_211;
    goto LABEL_105;
  }
  v68 = *(_QWORD **)(v51 + 16);
  v69 = KeAbPreAcquire((ULONG_PTR)(v68 - 2), 0LL, 0LL);
  if ( _InterlockedCompareExchange64(v68 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v68 - 2, v69, (ULONG_PTR)(v68 - 2));
  if ( v69 )
    *(_BYTE *)(v69 + 26) |= 1u;
  if ( ((v75[104] >> 1) & 3) == 2 )
    v70 = *v68 == v7 || v68[1] == v7;
  else
    v70 = v68[2] == v7;
  if ( _InterlockedCompareExchange64(v68 - 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v68 - 2);
  KeAbPostRelease((ULONG_PTR)(v68 - 2));
  if ( !v70 )
    goto LABEL_211;
  v30 = v73.m256i_i32[6];
  v23 = v76;
LABEL_106:
  if ( *(_QWORD *)(v42 + 32) && !*(_QWORD *)(v42 + 48) && (v8 & 0x30000) == 0 )
  {
    v66 = 776LL;
    if ( *(_QWORD *)(v42 + 208) )
      v66 = *(_QWORD *)(v42 + 216) + 776LL;
    v67 = AlpcpChargePagedPoolQuota(KeGetCurrentThread()->ApcState.Process, v66);
    v72 = v67;
    if ( v67 < 0 )
    {
      AlpcpUnlockMessage(v42);
      return (unsigned int)v67;
    }
    *(_QWORD *)(v42 + 48) = KeGetCurrentThread()->ApcState.Process;
    ObfReferenceObjectWithTag(KeGetCurrentThread()->ApcState.Process, 0x63706C41u);
    v30 = v73.m256i_i32[6];
    v23 = v76;
  }
  v29 = v72;
LABEL_54:
  v31 = 0LL;
  v32 = a3;
  v33 = v77;
  if ( a3 )
  {
    v31 = v80;
    v29 = AlpcpCaptureAttributes(v77, v8, a3, v23, v80);
    v72 = v29;
    v32 = a3;
  }
  if ( !v30 || (v53 = *(_DWORD *)(v23 + 40), (v53 & 0x280) == 0) )
  {
    if ( v29 < 0 )
    {
      AlpcpUnlockMessage(v23);
      return v72;
    }
    if ( v30 )
    {
      v54 = *(_QWORD *)(v23 + 200);
      if ( v54 )
      {
        PsReleaseProcessWakeCounter(v54, *(unsigned int *)(v23 + 248));
        *(_QWORD *)(v23 + 200) = 0LL;
      }
    }
    v34 = 0LL;
    if ( v30 > 0 )
    {
      v34 = *(_QWORD *)(v23 + 160);
      *(_QWORD *)(v23 + 160) = 0LL;
      v55 = (_QWORD *)(v23 + 104);
      v56 = *(_QWORD *)(v23 + 136);
      if ( v56 )
      {
        v57 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v56 - 24), 0xFFFFFFFFFFFFFFFFuLL);
        v58 = v57 <= 1;
        v59 = v57 - 1;
        if ( v58 )
        {
          if ( v59 )
            KeBugCheckEx(0x18u, 0LL, v56, 0x21uLL, v59);
          AlpcpDestroyBlob(v56);
        }
        *(_QWORD *)(v23 + 136) = 0LL;
        v23 = v76;
      }
      v60 = v55[5];
      if ( v60 )
      {
        AlpcpReleaseViewAttribute(v60);
        v55[5] = 0LL;
      }
      v61 = v55[6];
      if ( v61 )
      {
        AlpcpDereferenceBlobEx(v61, 1);
        v55[6] = 0LL;
      }
      if ( v55[7] )
      {
        AlpcpReleaseDirectAttribute(v55[7]);
        v55[7] = 0LL;
      }
    }
    if ( v31 )
    {
      *(_OWORD *)(v23 + 104) = *v31;
      *(_OWORD *)(v23 + 120) = v31[1];
      *(_OWORD *)(v23 + 136) = v31[2];
      *(_OWORD *)(v23 + 152) = v31[3];
    }
    if ( v34 )
      *(_QWORD *)(v23 + 160) = v34;
    if ( (v8 & 0xC0000000) == 0x80000000 )
      v35 = &v81->m256i_i64[3];
    else
      v35 = &v81[1].m256i_i64[1];
    if ( v83 )
    {
      v36 = v73.m256i_i16[0];
      if ( (unsigned __int64)v35 + v73.m256i_u16[0] > MmUserProbeAddress )
      {
        v6 = -1073741819;
        goto LABEL_229;
      }
    }
    else
    {
      v36 = v73.m256i_i16[0];
    }
    *(_QWORD *)(v23 + 168) = v35;
    if ( v36 > 0x200u )
      v6 = AlpcpCaptureMessageData(v23, v36, 0LL);
    if ( v6 >= 0 )
    {
      a1[1] = v23;
      *((_DWORD *)a1 + 13) = *(__int32 *)((char *)v73.m256i_i32 + 2);
      *((_WORD *)a1 + 28) = v73.m256i_i16[3];
      if ( !*(_QWORD *)(v23 + 24) )
        return AlpcpDispatchNewMessage(a1);
      if ( *(_QWORD *)(v23 + 32) )
        return AlpcpDispatchReplyToWaitingThread(a1);
      return AlpcpDispatchReplyToPort(a1);
    }
LABEL_229:
    AlpcpUnlockMessage(v23);
    return (unsigned int)v6;
  }
  if ( (v53 & 0x80u) != 0 )
    v6 = -1073740029;
  if ( v32 )
    AlpcpReleaseAttributes(v31);
  AlpcpReleaseAttributes(v23 + 104);
  AlpcpCancelMessage(v33, v23, 0x10000LL);
  return (unsigned int)v6;
}
