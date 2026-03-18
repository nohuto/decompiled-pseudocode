/*
 * XREFs of AlpcpSendMessage @ 0x14047CF50
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14009D900 (NtWaitForWorkViaWorkerFactory.c)
 *     LpcRequestPort @ 0x14041BF2C (LpcRequestPort.c)
 *     NtReplyWaitReceivePortEx @ 0x140475F20 (NtReplyWaitReceivePortEx.c)
 *     AlpcpProcessSynchronousRequest @ 0x14047AD50 (AlpcpProcessSynchronousRequest.c)
 *     NtAlpcSendWaitReceivePort @ 0x14047B5F0 (NtAlpcSendWaitReceivePort.c)
 *     NtReplyPort @ 0x14052ED7C (NtReplyPort.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1405327A0 (AlpcpSendLegacySynchronousRequest.c)
 *     NtRequestPort @ 0x140541A44 (NtRequestPort.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExHandleLogBadReference @ 0x1402631AC (ExHandleLogBadReference.c)
 *     PspChargeJobWakeCounter @ 0x140417810 (PspChargeJobWakeCounter.c)
 *     AlpcpReleaseAttributes @ 0x1404713BC (AlpcpReleaseAttributes.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcReferenceBlobByHandle @ 0x140476C20 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDispatchNewMessage @ 0x14047E410 (AlpcpDispatchNewMessage.c)
 *     AlpcpCaptureAttributes @ 0x14047EB30 (AlpcpCaptureAttributes.c)
 *     AlpcpDispatchReplyToPort @ 0x1404807F0 (AlpcpDispatchReplyToPort.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140480E50 (AlpcpDispatchReplyToWaitingThread.c)
 *     ExpLookupHandleTableEntry @ 0x140498B20 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404EEB50 (ExpBlockOnLockedHandleEntry.c)
 *     AlpcpCaptureMessageData @ 0x140523318 (AlpcpCaptureMessageData.c)
 *     PsChargeProcessPagedPoolQuota @ 0x140524018 (PsChargeProcessPagedPoolQuota.c)
 *     AlpcpCancelMessage @ 0x14052BBC4 (AlpcpCancelMessage.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x14069E8E8 (AlpcpEnterAllocationEventMessageLog.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpValidateDataInformation @ 0x14069F150 (AlpcpValidateDataInformation.c)
 */

__int64 __fastcall AlpcpSendMessage(__int64 a1, __m256i *a2, __int64 a3, char a4)
{
  char v4; // r10
  __int64 v5; // r9
  _BYTE *v6; // r15
  int v7; // r8d
  int v8; // eax
  __int64 result; // rax
  __m128i *v10; // rcx
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // si
  int v13; // edi
  int v14; // ebx
  bool v15; // cl
  __int16 v16; // di
  bool v17; // cl
  bool v18; // al
  unsigned __int16 v19; // cx
  __int16 v20; // di
  char v21; // r14
  PSLIST_ENTRY v22; // rax
  __int64 v23; // r9
  ULONG_PTR v24; // rsi
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rbx
  signed __int64 BugCheckParameter4; // rax
  int v29; // ebx
  __int64 v30; // r8
  __int64 v31; // r9
  signed __int32 v32; // eax
  int v33; // r12d
  _BYTE *v34; // r13
  unsigned int v35; // ebx
  ULONG_PTR v36; // rdi
  __int64 v37; // rcx
  signed __int64 v38; // rbx
  bool v39; // cc
  ULONG_PTR v40; // rbx
  unsigned __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rbx
  signed __int64 v44; // rax
  signed __int32 v45; // eax
  ULONG_PTR v46; // rsi
  char PreviousMode; // r15
  ULONG_PTR v48; // rdi
  signed __int64 *v49; // rbx
  __int64 v50; // r9
  signed __int64 v51; // r8
  __int64 v52; // rax
  bool v53; // zf
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // r15
  signed __int64 v57; // rax
  int v58; // esi
  char v59; // cl
  signed __int64 v60; // rcx
  int v61; // esi
  char v62; // cl
  signed __int64 v63; // rcx
  int v64; // esi
  char v65; // cl
  signed __int64 v66; // rcx
  int v67; // esi
  char v68; // cl
  signed __int64 v69; // rcx
  int v70; // ecx
  __int64 v71; // r13
  _BYTE *v72; // rdx
  _QWORD *v73; // rsi
  __int64 v74; // rbx
  __int64 v75; // r9
  bool v76; // r15
  _QWORD *v77; // rax
  int v78; // esi
  char v79; // cl
  signed __int64 v80; // rcx
  unsigned __int64 v81; // rdx
  _KPROCESS *Process; // r8
  unsigned __int64 v83; // rax
  int v84; // esi
  char v85; // cl
  signed __int64 v86; // rcx
  ULONG_PTR v87; // rcx
  __int64 v88; // rdx
  _QWORD *v89; // rdi
  __int64 v90; // rcx
  int v91; // eax
  unsigned int v92; // ebx
  int v93; // edi
  char v94; // cl
  signed __int64 v95; // rcx
  __int64 v96; // rdi
  __int64 v97; // r8
  _QWORD *v98; // rdi
  ULONG_PTR v99; // r14
  __int64 v100; // rdi
  _QWORD *v101; // r13
  ULONG_PTR v102; // r8
  signed __int64 v103; // rax
  ULONG_PTR v104; // rax
  ULONG_PTR v105; // rsi
  __int64 v106; // rax
  __int64 v107; // r9
  __int64 v108; // r12
  signed __int64 v109; // rax
  ULONG_PTR v110; // rsi
  int v111; // r12d
  char v112; // cl
  volatile signed __int64 *v113; // rcx
  signed __int64 v114; // rcx
  signed __int64 v115; // rax
  ULONG_PTR v116; // rax
  ULONG_PTR v117; // r8
  signed __int64 v118; // rax
  ULONG_PTR v119; // rax
  __int64 v120; // rcx
  _OWORD *v121; // rax
  int v122; // edx
  __int64 *v123; // rcx
  unsigned __int64 v124; // r9
  __int64 v125; // rax
  unsigned __int64 v126; // rax
  int v127; // edi
  char v128; // cl
  signed __int64 v129; // rcx
  signed __int32 v130[8]; // [rsp+0h] [rbp-138h] BYREF
  unsigned int v131; // [rsp+40h] [rbp-F8h]
  int v132; // [rsp+44h] [rbp-F4h]
  bool v133; // [rsp+48h] [rbp-F0h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-E8h]
  _BYTE *v135; // [rsp+58h] [rbp-E0h]
  __m256i v136; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v137; // [rsp+80h] [rbp-B8h]
  unsigned __int64 v138; // [rsp+88h] [rbp-B0h]
  __m256i *v139; // [rsp+90h] [rbp-A8h]
  __m128i v140; // [rsp+A0h] [rbp-98h]
  __int64 v141; // [rsp+B0h] [rbp-88h]
  _BYTE v142[120]; // [rsp+C0h] [rbp-78h] BYREF

  v4 = a4;
  v5 = (__int64)a2;
  v139 = a2;
  memset(v142, 0, 64);
  v6 = *(_BYTE **)a1;
  v135 = v6;
  v7 = *(_DWORD *)(a1 + 48);
  v132 = v7;
  v8 = *((_DWORD *)v6 + 104);
  if ( (v8 & 0x10) != 0 )
    return 3221225537LL;
  if ( (v8 & 8) != 0 )
    return 3221227271LL;
  if ( (v8 & 0x20) != 0 && (*((_DWORD *)v6 + 64) & 0x1000) == 0 )
    return 3221225527LL;
  if ( v4 )
  {
    v10 = (__m128i *)a2;
    if ( (v7 & 0xC0000000) == 0x80000000 )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v10 = (__m128i *)MmUserProbeAddress;
      v140 = *v10;
      v141 = v10[1].m128i_i64[0];
      v11 = _mm_cvtsi128_si32(v140);
      v136.m256i_i16[0] = v11;
      v12 = v140.m128i_i16[0] + 40;
      v136.m256i_i16[1] = v140.m128i_i16[0] + 40;
      v13 = _mm_cvtsi128_si32(_mm_srli_si128(v140, 4));
      v136.m256i_i32[1] = v13;
      v136.m256i_i64[1] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v140, 8));
      v136.m256i_i64[2] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v140, 12));
      v14 = v141;
      v136.m256i_i32[6] = v141;
      v137 = HIDWORD(v141);
    }
    else
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v10 = (__m128i *)MmUserProbeAddress;
      v136 = *(__m256i *)v10->m128i_i8;
      v137 = v10[2].m128i_i64[0];
      v14 = v136.m256i_i32[6];
      LOWORD(v13) = v136.m256i_i16[2];
      v12 = v136.m256i_u16[1];
      v11 = v136.m256i_i16[0];
    }
    v15 = (*((_DWORD *)v6 + 64) & 0x1000) != 0 || (v7 & 2) != 0;
    v133 = v15;
    if ( v11 < (unsigned __int16)(v11 + 40) )
    {
      if ( v15 )
      {
        v138 = v11;
        if ( (unsigned __int64)v11 + 40 <= v12 )
        {
          v12 = v11 + 40;
          v136.m256i_i16[1] = v11 + 40;
          goto LABEL_25;
        }
      }
      else
      {
        v138 = v11;
        if ( v11 + 40LL == v12 )
        {
LABEL_25:
          v16 = v13 & 0x7FFF;
          v136.m256i_i16[2] = v16;
          if ( v136.m256i_i16[3] )
          {
            result = AlpcpValidateDataInformation(v5, &v136);
            v131 = result;
            if ( (int)result < 0 )
              return result;
            v7 = v132;
            v4 = a4;
          }
          goto LABEL_40;
        }
      }
    }
    return 3221225485LL;
  }
  v136 = *a2;
  v137 = a2[1].m256i_i64[0];
  v17 = (*((_DWORD *)v6 + 64) & 0x1000) != 0 || (v7 & 2) != 0;
  if ( (unsigned int)v136.m256i_i16[0] >= (unsigned __int16)(v136.m256i_i16[0] + 40) )
    return 3221225485LL;
  if ( v17 )
  {
    v5 = v136.m256i_u16[0];
    v138 = v136.m256i_u16[0];
    if ( (unsigned __int64)v136.m256i_u16[0] + 40 > v136.m256i_u16[1] )
      return 3221225485LL;
    v12 = v136.m256i_i16[0] + 40;
    v136.m256i_i16[1] = v136.m256i_i16[0] + 40;
  }
  else
  {
    v138 = v136.m256i_u16[0];
    v12 = v136.m256i_u16[1];
    if ( v136.m256i_u16[0] + 40LL != v136.m256i_u16[1] )
      return 3221225485LL;
  }
  v16 = v136.m256i_i16[2];
  v14 = v136.m256i_i32[6];
LABEL_40:
  v18 = (*((_DWORD *)v6 + 64) & 0x1000) != 0 || (v7 & 2) != 0;
  v19 = (unsigned __int8)v16;
  v20 = v16 & 0xFF00;
  if ( v18 )
  {
    if ( (v7 & 1) != 0 )
    {
      if ( v14 )
      {
        v20 = 0;
        v19 = 2;
LABEL_48:
        v21 = 1;
        goto LABEL_66;
      }
      return 3221225485LL;
    }
    if ( (v7 & 0x10000) != 0 )
    {
      if ( v19 )
      {
        if ( (unsigned int)v19 - 3 > 3 && v19 != 13 || (v7 & 2) == 0 )
          return 3221225485LL;
      }
      else
      {
        v19 = 3;
      }
      v21 = 1;
    }
    else if ( v19 )
    {
      if ( v19 == 1 )
      {
        if ( v14 )
          goto LABEL_48;
        return 3221225485LL;
      }
      if ( (unsigned int)v19 - 7 > 2 || (v7 & 2) == 0 )
        return 3221225485LL;
      v21 = 1;
    }
    else
    {
      v21 = 1;
      v19 = 1;
    }
    v14 = 0;
LABEL_66:
    v136.m256i_i32[6] = v14;
    if ( !v4 )
      LODWORD(v137) = 0;
    goto LABEL_79;
  }
  if ( v19 != 7 || v4 )
  {
    if ( v14 <= 0 )
    {
      v21 = 1;
      if ( (v7 & 0x10000) != 0 )
      {
        v19 = 3;
        goto LABEL_77;
      }
    }
    else
    {
      v21 = 1;
      if ( (v7 & 0x10000) != 0 )
      {
        v19 = 2;
        goto LABEL_77;
      }
    }
    v19 = 1;
    goto LABEL_77;
  }
  v21 = 1;
LABEL_77:
  if ( !v14 && *(_OWORD *)&v136.m256i_u64[1] != 0LL )
    return 3221227266LL;
LABEL_79:
  v136.m256i_i16[2] = v19 | v20 & 0xEFFF;
  if ( (unsigned __int64)v12 > *((_QWORD *)v6 + 34) )
    return 3221225519LL;
  if ( (v7 & 0x20000) != 0 )
  {
    if ( ((__int64)KeGetCurrentThread()[1].Queue & 8) != 0 )
      return 3221225473LL;
    v14 = v136.m256i_i32[6];
  }
  if ( !v14 )
  {
    ++dword_140367994;
    v22 = RtlpInterlockedPopEntrySList(&AlpcpLookasides);
    if ( !v22 )
    {
      ++dword_140367998;
      v22 = (PSLIST_ENTRY)qword_1403679B0(
                            (unsigned int)dword_1403679A4,
                            (unsigned int)dword_1403679AC,
                            (unsigned int)dword_1403679A8);
      if ( !v22 )
        return 3221225626LL;
    }
    v22[1].Next = 0LL;
    *((_QWORD *)&v22[1].Next + 1) = 0LL;
    *((_QWORD *)&v22[2].Next + 1) = 0LL;
    v22[2].Next = 0LL;
    BYTE1(v22[1].Next) = 2;
    *((_QWORD *)&v22->Next + 1) = v22;
    v22->Next = v22;
    LOBYTE(v22[1].Next) |= 2u;
    *((_QWORD *)&v22[1].Next + 1) = 1LL;
    v24 = (ULONG_PTR)&v22[3];
    if ( v22 == (PSLIST_ENTRY)-48LL )
      return 3221225626LL;
    v25 = KeAbPreAcquire((ULONG_PTR)&v22[2], 0LL, 0LL, v23);
    v27 = v25;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v24 - 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v24 - 16), v25, v24 - 16, v26);
    if ( v27 )
      *(_BYTE *)(v27 + 26) |= 1u;
    *(_BYTE *)(v24 - 32) |= 1u;
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 - 24), 0x10000uLL) + 0x10000;
    if ( BugCheckParameter4 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v24, 0x26uLL, BugCheckParameter4);
    v29 = *(_DWORD *)(v24 + 248);
    memset((void *)v24, 0, 0x108uLL);
    *(_WORD *)(v24 + 226) = 40;
    --*(_WORD *)(v24 - 30);
    *(_DWORD *)(v24 + 248) = v29 & 0x7FFFFFFF;
    do
      v32 = _InterlockedIncrement(&AlpcpNextCallbackId);
    while ( !v32 );
    *(_DWORD *)(v24 + 256) = v32;
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterAllocationEventMessageLog(v24);
    *(_WORD *)(v24 + 226) = 40;
    BugCheckParameter2 = v24;
    v131 = 0;
    v33 = v136.m256i_i32[6];
    v34 = v135;
    v35 = v132;
    goto LABEL_262;
  }
  v132 = v7 | 0x10;
  if ( v14 >= 0 )
  {
    if ( (v14 & 0xFC000000) != 0 )
    {
      if ( AlpcpSecondaryMessageTables )
        v46 = *(_QWORD *)(AlpcpSecondaryMessageTables + 8LL * ((unsigned int)v14 >> 26));
      else
        v46 = 0LL;
    }
    else
    {
      v46 = AlpcMessageTable;
    }
    if ( !v46 )
      return 3221227266LL;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v48 = v136.m256i_i32[6] & 0x3FFFFFF;
    if ( (v136.m256i_i16[12] & 0x3FC) != 0 )
    {
      v49 = (signed __int64 *)ExpLookupHandleTableEntry(v46);
      if ( v49 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            _m_prefetchw(v49);
            v51 = *v49;
            if ( (*v49 & 1) == 0 )
              break;
            if ( v51 == _InterlockedCompareExchange64(v49, v51 - 1, v51) )
              goto LABEL_135;
          }
          if ( !v51 )
            break;
          ExpBlockOnLockedHandleEntry(v46, v49);
        }
      }
    }
    v49 = 0LL;
    ExHandleLogBadReference(v46, v48, PreviousMode);
LABEL_135:
    if ( !v49 )
      return 3221227266LL;
    v41 = (*v49 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( *(_DWORD *)(v41 + 0xF8) == v136.m256i_i32[6]
      && (!(_DWORD)v137 || *(_DWORD *)(((*v49 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x100) == (_DWORD)v137) )
    {
      _m_prefetchw((const void *)(v41 - 24));
      v52 = *(_QWORD *)(v41 - 24);
      v53 = v52 == 0;
      if ( v52 <= 0 )
      {
LABEL_356:
        if ( !v53 )
          KeBugCheckEx(0x18u, 0LL, v41, 0x20uLL, v52);
      }
      else
      {
        while ( 1 )
        {
          v54 = v52;
          v52 = _InterlockedCompareExchange64((volatile signed __int64 *)(v41 - 24), v52 + 1, v52);
          if ( v52 == v54 )
            break;
          if ( v52 <= 0 )
          {
            v53 = v52 == 0;
            goto LABEL_356;
          }
        }
        if ( v52 != -1 )
        {
          v55 = KeAbPreAcquire(v41 - 16, 0LL, 0LL, v50);
          v56 = v55;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v41 - 16), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v41 - 16), v55, v41 - 16, v31);
          if ( v56 )
            *(_BYTE *)(v56 + 26) |= 1u;
          *(_BYTE *)(v41 - 32) |= 1u;
          v57 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 - 24), 0x10000uLL) + 0x10000;
          if ( v57 <= 0 )
            KeBugCheckEx(0x18u, 0LL, v41, 0x26uLL, v57);
          --*(_WORD *)(v41 - 30);
          _InterlockedExchangeAdd64(v49, 1uLL);
          _InterlockedOr(v130, 0);
          if ( *(_QWORD *)(v46 + 48) )
            ExfUnblockPushLock((volatile __int64 *)(v46 + 48), 0LL);
          v33 = v136.m256i_i32[6];
          if ( *(_DWORD *)(v41 + 248) == v136.m256i_i32[6] )
          {
            if ( !(_DWORD)v137 || *(_DWORD *)(v41 + 256) == (_DWORD)v137 )
            {
              if ( *(_QWORD *)(v41 + 24) || *(_QWORD *)(v41 + 16) )
              {
                v6 = v135;
                if ( *(_QWORD *)(v41 + 176) != *((_QWORD *)v135 + 2) && *(_BYTE **)(v41 + 184) != v135 )
                {
                  if ( AlpcpMessageLogEnabled )
                    AlpcpEnterStateChangeEventMessageLog(v41);
                  v67 = 0;
                  v68 = *(_BYTE *)(v41 - 32);
                  if ( (v68 & 1) != 0 )
                  {
                    v67 = 0x10000 - *(__int16 *)(v41 - 30);
                    *(_BYTE *)(v41 - 32) = v68 & 0xFE;
                    *(_WORD *)(v41 - 30) = 0;
                  }
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v41 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock((volatile signed __int64 *)(v41 - 16));
                  KeAbPostRelease(v41 - 16);
                  if ( v67 <= 0 )
                    return 3221225506LL;
                  v69 = -v67 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 - 24), -v67);
                  if ( v69 > 0 )
                    return 3221225506LL;
                  if ( v69 )
                    KeBugCheckEx(0x18u, 0LL, v41, 0x28uLL, v69);
                  goto LABEL_232;
                }
                goto LABEL_200;
              }
              if ( AlpcpMessageLogEnabled )
                AlpcpEnterStateChangeEventMessageLog(v41);
              v64 = 0;
              v65 = *(_BYTE *)(v41 - 32);
              if ( (v65 & 1) != 0 )
              {
                v64 = 0x10000 - *(__int16 *)(v41 - 30);
                *(_BYTE *)(v41 - 32) = v65 & 0xFE;
                *(_WORD *)(v41 - 30) = 0;
              }
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v41 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v41 - 16));
              KeAbPostRelease(v41 - 16);
              if ( v64 <= 0 )
                return 3221227266LL;
              v66 = -v64 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 - 24), -v64);
              if ( v66 > 0 )
                return 3221227266LL;
              if ( v66 )
                KeBugCheckEx(0x18u, 0LL, v41, 0x28uLL, v66);
            }
            else
            {
              if ( AlpcpMessageLogEnabled )
                AlpcpEnterStateChangeEventMessageLog(v41);
              v61 = 0;
              v62 = *(_BYTE *)(v41 - 32);
              if ( (v62 & 1) != 0 )
              {
                v61 = 0x10000 - *(__int16 *)(v41 - 30);
                *(_BYTE *)(v41 - 32) = v62 & 0xFE;
                *(_WORD *)(v41 - 30) = 0;
              }
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v41 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v41 - 16));
              KeAbPostRelease(v41 - 16);
              if ( v61 <= 0 )
                return 3221227266LL;
              v63 = -v61 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 - 24), -v61);
              if ( v63 > 0 )
                return 3221227266LL;
              if ( v63 )
                KeBugCheckEx(0x18u, 0LL, v41, 0x28uLL, v63);
            }
          }
          else
          {
            if ( AlpcpMessageLogEnabled )
              AlpcpEnterStateChangeEventMessageLog(v41);
            v58 = 0;
            v59 = *(_BYTE *)(v41 - 32);
            if ( (v59 & 1) != 0 )
            {
              v58 = 0x10000 - *(__int16 *)(v41 - 30);
              *(_BYTE *)(v41 - 32) = v59 & 0xFE;
              *(_WORD *)(v41 - 30) = 0;
            }
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v41 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v41 - 16));
            KeAbPostRelease(v41 - 16);
            if ( v58 <= 0 )
              return 3221227266LL;
            v60 = -v58 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 - 24), -v58);
            if ( v60 > 0 )
              return 3221227266LL;
            if ( v60 )
              KeBugCheckEx(0x18u, 0LL, v41, 0x28uLL, v60);
          }
          AlpcpDestroyBlob(v41);
          return 3221227266LL;
        }
      }
    }
    _InterlockedExchangeAdd64(v49, 1uLL);
    _InterlockedOr(v130, 0);
    if ( *(_QWORD *)(v46 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(v46 + 48), 0LL);
    return 3221227266LL;
  }
  v36 = 0LL;
  v37 = *((_QWORD *)v6 + 2);
  if ( v37 )
    v36 = AlpcReferenceBlobByHandle((_QWORD *)(v37 + 40), v136.m256i_i32[6] & 0x7FFFFFFF, AlpcReserveType, v5);
  if ( !v36 )
    return 3221226224LL;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v36 + 40), 1, 0) )
  {
    v41 = *(_QWORD *)(v36 + 24);
    v42 = KeAbPreAcquire(v41 - 16, 0LL, 0LL, v5);
    v43 = v42;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v41 - 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v41 - 16), v42, v41 - 16, v31);
    if ( v43 )
      *(_BYTE *)(v43 + 26) |= 1u;
    *(_BYTE *)(v41 - 32) |= 1u;
    v44 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 - 24), 0x10000uLL) + 0x10000;
    if ( v44 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v41, 0x26uLL, v44);
    *(_DWORD *)(v41 + 40) |= 0x2000u;
    *(_DWORD *)(v41 + 248) &= ~0x80000000;
    do
      v45 = _InterlockedIncrement(&AlpcpNextCallbackId);
    while ( !v45 );
    *(_DWORD *)(v41 + 256) = v45;
    v33 = v136.m256i_i32[6];
LABEL_200:
    v131 = 0;
    BugCheckParameter2 = v41;
    v24 = v41;
    v70 = *(_DWORD *)(v41 + 40);
    if ( (v70 & 0x80u) != 0 )
    {
      v34 = v135;
      v35 = v132;
      goto LABEL_262;
    }
    v71 = *(_QWORD *)(v41 + 24);
    if ( v71 )
    {
      v72 = *(_BYTE **)(v41 + 16);
      if ( v72 != v6 )
      {
        if ( (v70 & 7) == 0 )
        {
          v73 = *(_QWORD **)(v71 + 16);
          v74 = KeAbPreAcquire((ULONG_PTR)(v73 - 2), 0LL, 0LL, v31);
          if ( _InterlockedCompareExchange64(v73 - 2, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v73 - 2, v74, (ULONG_PTR)(v73 - 2), v75);
          if ( v74 )
            *(_BYTE *)(v74 + 26) |= 1u;
          if ( ((*(_DWORD *)(v71 + 416) >> 1) & 3) == 2 )
          {
            v34 = v135;
            v76 = (_BYTE *)*v73 == v135 || (_BYTE *)v73[1] == v135;
          }
          else
          {
            v34 = v135;
            v76 = v73[2] == (_QWORD)v135;
          }
          if ( _InterlockedCompareExchange64(v73 - 2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v73 - 2);
          KeAbPostRelease((ULONG_PTR)(v73 - 2));
          if ( v76 )
          {
            v33 = v136.m256i_i32[6];
            v24 = BugCheckParameter2;
LABEL_236:
            v35 = v132;
            if ( *(_QWORD *)(v41 + 32) && !*(_QWORD *)(v41 + 48) && (v132 & 0x30000) == 0 )
            {
              v81 = 776LL;
              if ( *(_QWORD *)(v41 + 208) )
                v81 = *(_QWORD *)(v41 + 216) + 776LL;
              Process = KeGetCurrentThread()->ApcState.Process;
              _m_prefetchw(&Process[2].Affinity.Bitmap[9]);
              v83 = Process[2].Affinity.Bitmap[9];
              if ( v83 < v81 )
              {
LABEL_246:
                v131 = PsChargeProcessPagedPoolQuota(Process, v81);
                if ( (v131 & 0x80000000) != 0 )
                {
                  if ( AlpcpMessageLogEnabled )
                    AlpcpEnterStateChangeEventMessageLog(v41);
                  v84 = 0;
                  v85 = *(_BYTE *)(v41 - 32);
                  if ( (v85 & 1) != 0 )
                  {
                    v84 = 0x10000 - *(__int16 *)(v41 - 30);
                    *(_BYTE *)(v41 - 32) = v85 & 0xFE;
                    *(_WORD *)(v41 - 30) = 0;
                  }
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v41 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock((volatile signed __int64 *)(v41 - 16));
                  KeAbPostRelease(v41 - 16);
                  if ( v84 <= 0 )
                    return v131;
                  v86 = -v84 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 - 24), -v84);
                  if ( v86 > 0 )
                    return v131;
                  if ( v86 )
                    KeBugCheckEx(0x18u, 0LL, v41, 0x28uLL, v86);
                  v87 = v41;
                  goto LABEL_258;
                }
              }
              else
              {
                while ( v83 != _InterlockedCompareExchange64(
                                 (volatile signed __int64 *)&Process[2].Affinity.Bitmap[9],
                                 v83 - v81,
                                 v83) )
                {
                  v83 = Process[2].Affinity.Bitmap[9];
                  if ( v83 < v81 )
                    goto LABEL_246;
                }
                v131 = 0;
              }
              *(_QWORD *)(v41 + 48) = KeGetCurrentThread()->ApcState.Process;
              ObfReferenceObjectWithTag(KeGetCurrentThread()->ApcState.Process, 0x63706C41u);
              v33 = v136.m256i_i32[6];
              v24 = BugCheckParameter2;
            }
LABEL_262:
            v88 = 0LL;
            v89 = 0LL;
            v135 = 0LL;
            v90 = a3;
            if ( a3 )
            {
              v89 = v142;
              v135 = v142;
              v131 = AlpcpCaptureAttributes(v34, v35, a3, v24, v142);
              v90 = a3;
              v88 = 0LL;
            }
            if ( v33 )
            {
              v91 = *(_DWORD *)(v24 + 40);
              if ( (v91 & 0x280) != 0 )
              {
                v92 = (v91 & 0x80u) != 0 ? 0xC0000703 : 0;
                if ( v90 )
                  AlpcpReleaseAttributes(v89, 0LL, v30, v31);
                AlpcpReleaseAttributes((_QWORD *)(v24 + 104), v88, v30, v31);
                AlpcpCancelMessage(v34, v24, 0x10000LL);
                return v92;
              }
            }
            if ( (v131 & 0x80000000) == 0 )
            {
              if ( v33 && (v96 = *(_QWORD *)(v24 + 200)) != 0 )
              {
                v97 = *(_QWORD *)(v24 + 200) & 7LL;
                v98 = (_QWORD *)(v96 & 0xFFFFFFFFFFFFFFF8uLL);
                if ( (_DWORD)v97 == 5 )
                {
                  v21 = 5;
                  LODWORD(v97) = 0;
                }
                PspChargeJobWakeCounter(v98, 0LL, v97, -1LL, v21, 0LL, *(unsigned int *)(v24 + 248));
                ObDereferenceObjectDeferDeleteWithTag(v98, 0x6B577350u);
                LODWORD(v99) = 0;
                *(_QWORD *)(v24 + 200) = 0LL;
              }
              else
              {
                LODWORD(v99) = 0;
              }
              v100 = 0LL;
              if ( v33 > 0 )
              {
                v100 = *(_QWORD *)(v24 + 160);
                *(_QWORD *)(v24 + 160) = 0LL;
                v101 = (_QWORD *)(v24 + 104);
                v102 = *(_QWORD *)(v24 + 136);
                if ( v102 )
                {
                  v103 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v102 - 24), 0xFFFFFFFFFFFFFFFFuLL);
                  v39 = v103 <= 1;
                  v104 = v103 - 1;
                  if ( v39 )
                  {
                    if ( v104 )
                      KeBugCheckEx(0x18u, 0LL, v102, 0x21uLL, v104);
                    AlpcpDestroyBlob(v102);
                  }
                  *(_QWORD *)(v24 + 136) = 0LL;
                  v24 = BugCheckParameter2;
                }
                v99 = v101[5];
                if ( v99 )
                {
                  v105 = *(_QWORD *)(v99 + 16);
                  v106 = KeAbPreAcquire(v105 - 16, 0LL, 0LL, v31);
                  v108 = v106;
                  if ( _interlockedbittestandset64((volatile signed __int32 *)(v105 - 16), 0LL) )
                    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v105 - 16), v106, v105 - 16, v107);
                  if ( v108 )
                    *(_BYTE *)(v108 + 26) |= 1u;
                  *(_BYTE *)(v105 - 32) |= 1u;
                  v109 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v105 - 24), 0x10000uLL) + 0x10000;
                  if ( v109 <= 0 )
                    KeBugCheckEx(0x18u, 0LL, v105, 0x26uLL, v109);
                  --*(_DWORD *)(v99 + 76);
                  v110 = *(_QWORD *)(v99 + 16);
                  v111 = 0;
                  v112 = *(_BYTE *)(v110 - 32);
                  if ( (v112 & 1) != 0 )
                  {
                    v111 = 0x10000 - *(__int16 *)(v110 - 30);
                    *(_BYTE *)(v110 - 32) = v112 & 0xFE;
                    *(_WORD *)(v110 - 30) = 0;
                  }
                  v113 = (volatile signed __int64 *)(v110 - 16);
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v110 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  {
                    ExfTryToWakePushLock(v113);
                    v113 = (volatile signed __int64 *)(v110 - 16);
                  }
                  KeAbPostRelease((ULONG_PTR)v113);
                  if ( v111 > 0 )
                  {
                    v114 = -v111 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v110 - 24), -v111);
                    if ( v114 <= 0 )
                    {
                      if ( v114 )
                        KeBugCheckEx(0x18u, 0LL, v110, 0x28uLL, v114);
                      AlpcpDestroyBlob(v110);
                    }
                  }
                  v115 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v99 - 24), 0xFFFFFFFFFFFFFFFFuLL);
                  v39 = v115 <= 1;
                  v116 = v115 - 1;
                  if ( v39 )
                  {
                    if ( v116 )
                      KeBugCheckEx(0x18u, 0LL, v99, 0x21uLL, v116);
                    AlpcpDestroyBlob(v99);
                  }
                  v99 = 0LL;
                  v101[5] = 0LL;
                  v24 = BugCheckParameter2;
                }
                v117 = v101[6];
                if ( v117 )
                {
                  v118 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v117 - 24), 0xFFFFFFFFFFFFFFFFuLL);
                  v39 = v118 <= 1;
                  v119 = v118 - 1;
                  if ( v39 )
                  {
                    if ( v119 )
                      KeBugCheckEx(0x18u, 0LL, v117, 0x21uLL, v119);
                    AlpcpDestroyBlob(v117);
                  }
                  v101[6] = v99;
                  v24 = BugCheckParameter2;
                }
                v120 = v101[7];
                if ( v120 )
                {
                  if ( (v120 & 1) != 0 )
                    ObfDereferenceObject((PVOID)(v120 & 0xFFFFFFFFFFFFFFFEuLL));
                  v101[7] = v99;
                }
              }
              v121 = v135;
              if ( v135 )
              {
                *(_OWORD *)(v24 + 104) = *(_OWORD *)v135;
                *(_OWORD *)(v24 + 120) = v121[1];
                *(_OWORD *)(v24 + 136) = v121[2];
                *(_OWORD *)(v24 + 152) = v121[3];
              }
              if ( v100 )
                *(_QWORD *)(v24 + 160) = v100;
              v122 = v99;
              if ( (v132 & 0xC0000000) == 0x80000000 )
                v123 = &v139->m256i_i64[3];
              else
                v123 = &v139[1].m256i_i64[1];
              v124 = v138;
              if ( a4 && (unsigned __int64)v123 + v138 > MmUserProbeAddress )
              {
                v131 = -1073741819;
              }
              else
              {
                *(_QWORD *)(v24 + 168) = v123;
                v125 = *(_QWORD *)(v24 + 96);
                if ( v125 )
                  v126 = *(_QWORD *)(v125 + 32) - 40LL;
                else
                  v126 = 512LL;
                if ( v124 > v126 )
                  v122 = AlpcpCaptureMessageData(v24, v124, 0LL);
                v131 = v122;
                if ( v122 >= 0 )
                {
                  *(_QWORD *)(a1 + 8) = v24;
                  *(_DWORD *)(a1 + 52) = *(__int32 *)((char *)v136.m256i_i32 + 2);
                  *(_WORD *)(a1 + 56) = v136.m256i_i16[3];
                  if ( !*(_QWORD *)(v24 + 24) )
                    return AlpcpDispatchNewMessage(a1);
                  if ( *(_QWORD *)(v24 + 32) )
                    return AlpcpDispatchReplyToWaitingThread(a1);
                  return AlpcpDispatchReplyToPort(a1);
                }
              }
              if ( AlpcpMessageLogEnabled )
                AlpcpEnterStateChangeEventMessageLog(v24);
              v127 = v99;
              v128 = *(_BYTE *)(v24 - 32);
              if ( (v128 & 1) != 0 )
              {
                v127 = 0x10000 - *(__int16 *)(v24 - 30);
                *(_BYTE *)(v24 - 32) = v128 & 0xFE;
                *(_WORD *)(v24 - 30) = v99;
              }
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v24 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v24 - 16));
              KeAbPostRelease(v24 - 16);
              if ( v127 <= 0 )
                return v131;
              v129 = -v127 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 - 24), -v127);
              if ( v129 > 0 )
                return v131;
              if ( v129 )
                KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v129);
            }
            else
            {
              if ( AlpcpMessageLogEnabled )
                AlpcpEnterStateChangeEventMessageLog(v24);
              v93 = 0;
              v94 = *(_BYTE *)(v24 - 32);
              if ( (v94 & 1) != 0 )
              {
                v93 = 0x10000 - *(__int16 *)(v24 - 30);
                *(_BYTE *)(v24 - 32) = v94 & 0xFE;
                *(_WORD *)(v24 - 30) = 0;
              }
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v24 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v24 - 16));
              KeAbPostRelease(v24 - 16);
              if ( v93 <= 0 )
                return v131;
              v95 = -v93 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 - 24), -v93);
              if ( v95 > 0 )
                return v131;
              if ( v95 )
                KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v95);
            }
            v87 = BugCheckParameter2;
LABEL_258:
            AlpcpDestroyBlob(v87);
            return v131;
          }
          goto LABEL_223;
        }
        if ( (v6[416] & 6) != 6 )
          goto LABEL_223;
        v77 = (_QWORD *)*((_QWORD *)v6 + 2);
        if ( !v77 || (_BYTE *)*v77 != v72 )
          goto LABEL_223;
      }
      if ( (v70 & 7) != 3 || (v70 & 0x4000) != 0 )
      {
LABEL_223:
        if ( AlpcpMessageLogEnabled )
          AlpcpEnterStateChangeEventMessageLog(v41);
        v78 = 0;
        v79 = *(_BYTE *)(v41 - 32);
        if ( (v79 & 1) != 0 )
        {
          v78 = 0x10000 - *(__int16 *)(v41 - 30);
          *(_BYTE *)(v41 - 32) = v79 & 0xFE;
          *(_WORD *)(v41 - 30) = 0;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v41 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v41 - 16));
        KeAbPostRelease(v41 - 16);
        if ( v78 <= 0 )
          return 3221225506LL;
        v80 = -v78 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 - 24), -v78);
        if ( v80 > 0 )
          return 3221225506LL;
        if ( v80 )
          KeBugCheckEx(0x18u, 0LL, v41, 0x28uLL, v80);
LABEL_232:
        AlpcpDestroyBlob(v41);
        return 3221225506LL;
      }
    }
    v34 = v135;
    goto LABEL_236;
  }
  v38 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 - 24), 0xFFFFFFFFFFFFFFFFuLL);
  v39 = v38 <= 1;
  v40 = v38 - 1;
  if ( v39 )
  {
    if ( v40 )
      KeBugCheckEx(0x18u, 0LL, v36, 0x21uLL, v40);
    AlpcpDestroyBlob(v36);
  }
  return 3221227272LL;
}
