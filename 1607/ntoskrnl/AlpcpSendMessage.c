/*
 * XREFs of AlpcpSendMessage @ 0x140449750
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E490 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpProcessSynchronousRequest @ 0x140447A30 (AlpcpProcessSynchronousRequest.c)
 *     NtAlpcSendWaitReceivePort @ 0x140448140 (NtAlpcSendWaitReceivePort.c)
 *     NtReplyWaitReceivePortEx @ 0x14049D380 (NtReplyWaitReceivePortEx.c)
 *     NtReplyPort @ 0x14049DF70 (NtReplyPort.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14049E74C (AlpcpSendLegacySynchronousRequest.c)
 *     LpcRequestPort @ 0x1404ACD8C (LpcRequestPort.c)
 *     NtRequestPort @ 0x1404CBC00 (NtRequestPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     AlpcpReleaseDirectAttribute @ 0x1400A7D50 (AlpcpReleaseDirectAttribute.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     ExfUnblockPushLock @ 0x140159E30 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExHandleLogBadReference @ 0x14022C880 (ExHandleLogBadReference.c)
 *     AlpcpCancelMessage @ 0x140407A54 (AlpcpCancelMessage.c)
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14040A330 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcReferenceBlobByHandle @ 0x14040AB18 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x14040B134 (AlpcpDereferenceBlobEx.c)
 *     AlpcpChargePagedPoolQuota @ 0x14040C5B4 (AlpcpChargePagedPoolQuota.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140446E10 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchReplyToPort @ 0x140447320 (AlpcpDispatchReplyToPort.c)
 *     AlpcpDispatchNewMessage @ 0x14044A430 (AlpcpDispatchNewMessage.c)
 *     AlpcpCaptureAttributes @ 0x14044B6A0 (AlpcpCaptureAttributes.c)
 *     ExpLookupHandleTableEntry @ 0x140450260 (ExpLookupHandleTableEntry.c)
 *     ExUnlockHandleTableEntry @ 0x14045DCA4 (ExUnlockHandleTableEntry.c)
 *     PsReleaseProcessWakeCounter @ 0x1404674F0 (PsReleaseProcessWakeCounter.c)
 *     AlpcpReleaseAttributes @ 0x14049F9A8 (AlpcpReleaseAttributes.c)
 *     AlpcpValidateMessage @ 0x14049FEF4 (AlpcpValidateMessage.c)
 *     AlpcpReleaseViewAttribute @ 0x14049FFDC (AlpcpReleaseViewAttribute.c)
 *     AlpcpCaptureMessageData @ 0x1404A01B8 (AlpcpCaptureMessageData.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404AF024 (ExpBlockOnLockedHandleEntry.c)
 *     AlpcpDestroyBlob @ 0x1404F2C54 (AlpcpDestroyBlob.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x140654E20 (AlpcpEnterAllocationEventMessageLog.c)
 *     AlpcpValidateDataInformation @ 0x1406555E4 (AlpcpValidateDataInformation.c)
 */

__int64 __fastcall AlpcpSendMessage(__int64 a1, __m256i *a2, __int64 a3, char a4)
{
  __m256i *v5; // r8
  __int64 v6; // r13
  int v7; // r11d
  int v8; // eax
  __int64 result; // rax
  __int64 v10; // rax
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // r15
  int v13; // edi
  int v14; // ebx
  bool v15; // cl
  __int16 v16; // di
  bool v17; // al
  unsigned __int16 v18; // cx
  __int16 v19; // di
  int v20; // esi
  PSLIST_ENTRY v21; // rax
  ULONG_PTR v22; // rdi
  _BYTE *v23; // rax
  _BYTE *v24; // rbx
  signed __int64 BugCheckParameter4; // rax
  int v26; // ebx
  signed __int32 v27; // eax
  int v28; // r15d
  ULONG_PTR v29; // rbx
  __int64 v30; // rcx
  ULONG_PTR v31; // rbx
  signed __int32 v32; // eax
  int v33; // r12d
  ULONG_PTR v34; // r15
  char PreviousMode; // r12
  ULONG_PTR v36; // rbx
  signed __int64 *v37; // rdi
  signed __int64 v38; // r8
  __int64 v39; // rax
  bool v40; // zf
  __int64 v41; // rdx
  _BYTE *v42; // rax
  _BYTE *v43; // r13
  signed __int64 v44; // rax
  int v45; // ecx
  __int64 v46; // r13
  __int64 v47; // r8
  _QWORD *v48; // r15
  __int64 v49; // rdi
  bool v50; // di
  _QWORD *v51; // rax
  unsigned int v52; // eax
  unsigned __int64 v53; // rdx
  int v54; // edi
  _BYTE *v55; // r13
  __int64 v56; // rcx
  int v57; // eax
  unsigned int v58; // ebx
  __int64 v59; // rcx
  __int64 v60; // rbx
  _QWORD *v61; // r15
  ULONG_PTR v62; // r8
  signed __int64 v63; // rax
  bool v64; // cc
  ULONG_PTR v65; // rax
  ULONG_PTR v66; // rcx
  ULONG_PTR v67; // rcx
  __int64 *v68; // rdx
  unsigned __int16 v69; // cx
  __int64 v70; // rax
  unsigned __int64 v71; // rax
  signed __int32 v72[8]; // [rsp+0h] [rbp-128h] BYREF
  int v73; // [rsp+30h] [rbp-F8h]
  int v74; // [rsp+34h] [rbp-F4h]
  bool v75; // [rsp+38h] [rbp-F0h]
  __m256i v76; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v77; // [rsp+60h] [rbp-C8h]
  __int64 v78; // [rsp+68h] [rbp-C0h]
  ULONG_PTR v79; // [rsp+70h] [rbp-B8h]
  __m256i *v80; // [rsp+78h] [rbp-B0h]
  __m128i v81; // [rsp+88h] [rbp-A0h]
  __int64 v82; // [rsp+98h] [rbp-90h]
  _BYTE v83[136]; // [rsp+A0h] [rbp-88h] BYREF

  v5 = a2;
  v80 = a2;
  memset(v83, 0, 72);
  v6 = *(_QWORD *)a1;
  v78 = v6;
  v7 = *(_DWORD *)(a1 + 48);
  v73 = v7;
  v8 = *(_DWORD *)(v6 + 416);
  if ( (v8 & 0x10) != 0 )
    return 3221225537LL;
  if ( (v8 & 8) != 0 )
    return 3221227271LL;
  if ( (v8 & 0x20) != 0 && (*(_DWORD *)(v6 + 256) & 0x1000) == 0 )
    return 3221225527LL;
  if ( a4 )
  {
    v10 = (__int64)a2;
    if ( (v7 & 0xC0000000) == 0x80000000 )
    {
      if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      v81 = *(__m128i *)v10;
      v82 = *(_QWORD *)(v10 + 16);
      v11 = _mm_cvtsi128_si32(v81);
      v76.m256i_i16[0] = v11;
      v12 = v81.m128i_i16[0] + 40;
      v76.m256i_i16[1] = v81.m128i_i16[0] + 40;
      v13 = _mm_cvtsi128_si32(_mm_srli_si128(v81, 4));
      v76.m256i_i32[1] = v13;
      v76.m256i_i64[1] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v81, 8));
      v76.m256i_i64[2] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v81, 12));
      v14 = v82;
      v76.m256i_i32[6] = v82;
      v77 = HIDWORD(v82);
    }
    else
    {
      if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      v76 = *(__m256i *)v10;
      v77 = *(_QWORD *)(v10 + 32);
      v14 = v76.m256i_i32[6];
      LOWORD(v13) = v76.m256i_i16[2];
      v12 = v76.m256i_u16[1];
      v11 = v76.m256i_i16[0];
    }
    v15 = (*(_DWORD *)(v6 + 256) & 0x1000) != 0 || (v7 & 2) != 0;
    v75 = v15;
    if ( v11 < (unsigned __int16)(v11 + 40) )
    {
      if ( v15 )
      {
        if ( (unsigned __int64)v11 + 40 <= v12 )
        {
          v12 = v11 + 40;
          v76.m256i_i16[1] = v11 + 40;
          goto LABEL_25;
        }
      }
      else if ( v11 + 40LL == v12 )
      {
LABEL_25:
        v16 = v13 & 0x7FFF;
        v76.m256i_i16[2] = v16;
        if ( v76.m256i_i16[3] )
        {
          result = AlpcpValidateDataInformation(v5, &v76);
          v74 = result;
          if ( (int)result < 0 )
            return result;
          v7 = v73;
        }
LABEL_36:
        v17 = (*(_DWORD *)(v6 + 256) & 0x1000) != 0 || (v7 & 2) != 0;
        v18 = (unsigned __int8)v16;
        v19 = v16 & 0xFF00;
        if ( v17 )
        {
          if ( (v7 & 1) != 0 )
          {
            if ( v14 )
            {
              v20 = 0;
              v19 = 0;
              v18 = 2;
              goto LABEL_61;
            }
            return 3221225485LL;
          }
          if ( (v7 & 0x10000) != 0 )
          {
            if ( v18 )
            {
              if ( (unsigned int)v18 - 3 > 3 && v18 != 13 || (v7 & 2) == 0 )
                return 3221225485LL;
            }
            else
            {
              v18 = 3;
            }
          }
          else if ( v18 )
          {
            if ( v18 == 1 )
            {
              if ( !v14 )
                return 3221225485LL;
              v20 = 0;
LABEL_61:
              v76.m256i_i32[6] = v14;
              if ( !a4 )
                LODWORD(v77) = 0;
              goto LABEL_74;
            }
            if ( (unsigned int)v18 - 7 > 2 || (v7 & 2) == 0 )
              return 3221225485LL;
          }
          else
          {
            v18 = 1;
          }
          v20 = 0;
          v14 = 0;
          goto LABEL_61;
        }
        if ( v18 != 7 || a4 )
        {
          if ( v14 <= 0 )
          {
            if ( (v7 & 0x10000) != 0 )
            {
              v18 = 3;
              goto LABEL_71;
            }
          }
          else if ( (v7 & 0x10000) != 0 )
          {
            v18 = 2;
            goto LABEL_71;
          }
          v18 = 1;
        }
LABEL_71:
        if ( !v14 && *(_OWORD *)&v76.m256i_u64[1] != 0LL )
          return 3221227266LL;
        v20 = 0;
LABEL_74:
        v76.m256i_i16[2] = v18 | v19 & 0xEFFF;
        if ( (unsigned __int64)v12 > *(_QWORD *)(v6 + 272) )
          return 3221225519LL;
        if ( (v7 & 0x20000) != 0 )
        {
          if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 0x20) != 0 )
            return 3221225473LL;
          v14 = v76.m256i_i32[6];
        }
        if ( !v14 )
        {
          ++dword_14033B494;
          v21 = RtlpInterlockedPopEntrySList(&AlpcpLookasides);
          if ( !v21 )
          {
            ++dword_14033B498;
            v21 = (PSLIST_ENTRY)qword_14033B4B0(
                                  (unsigned int)dword_14033B4A4,
                                  (unsigned int)dword_14033B4AC,
                                  (unsigned int)dword_14033B4A8);
            if ( !v21 )
              return 3221225626LL;
          }
          v21[1].Next = 0LL;
          *((_QWORD *)&v21[1].Next + 1) = 0LL;
          *((_QWORD *)&v21[2].Next + 1) = 0LL;
          v21[2].Next = 0LL;
          BYTE1(v21[1].Next) = 2;
          *((_QWORD *)&v21->Next + 1) = v21;
          v21->Next = v21;
          LOBYTE(v21[1].Next) |= 2u;
          *((_QWORD *)&v21[1].Next + 1) = 1LL;
          v22 = (ULONG_PTR)&v21[3];
          if ( v21 == (PSLIST_ENTRY)-48LL )
            return 3221225626LL;
          v23 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&v21[2], 0LL, 0);
          v24 = v23;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v22 - 16), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v22 - 16), v23, v22 - 16);
          if ( v24 )
            v24[26] |= 1u;
          *(_BYTE *)(v22 - 32) |= 1u;
          BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 - 24), 0x10000uLL) + 0x10000;
          if ( BugCheckParameter4 <= 0 )
            KeBugCheckEx(0x18u, 0LL, v22, 0x26uLL, BugCheckParameter4);
          v26 = *(_DWORD *)(v22 + 256);
          memset((void *)v22, 0, 0x110uLL);
          *(_WORD *)(v22 + 234) = 40;
          --*(_WORD *)(v22 - 30);
          *(_DWORD *)(v22 + 256) = v26 & 0x7FFFFFFF;
          do
            v27 = _InterlockedIncrement(&AlpcpNextCallbackId);
          while ( !v27 );
          *(_DWORD *)(v22 + 264) = v27;
          if ( AlpcpMessageLogEnabled )
            AlpcpEnterAllocationEventMessageLog(v22);
          *(_WORD *)(v22 + 234) = 40;
          v79 = v22;
          v28 = 0;
          v74 = 0;
LABEL_177:
          v33 = v76.m256i_i32[6];
          goto LABEL_178;
        }
        v73 = v7 | 0x10;
        if ( v14 < 0 )
        {
          v29 = 0LL;
          v30 = *(_QWORD *)(v6 + 16);
          if ( v30 )
            v29 = AlpcReferenceBlobByHandle((_QWORD *)(v30 + 40), v76.m256i_i32[6] & 0x7FFFFFFF, AlpcReserveType);
          if ( !v29 )
            return 3221226224LL;
          if ( _InterlockedCompareExchange((volatile signed __int32 *)(v29 + 40), 1, 0) )
          {
            AlpcpDereferenceBlobEx(v29, 1);
            return 3221227272LL;
          }
          v31 = *(_QWORD *)(v29 + 24);
          AlpcpLockForCachedReferenceBlob(v31);
          *(_DWORD *)(v31 + 40) |= 0x2000u;
          *(_DWORD *)(v31 + 256) &= ~0x80000000;
          do
            v32 = _InterlockedIncrement(&AlpcpNextCallbackId);
          while ( !v32 );
          *(_DWORD *)(v31 + 264) = v32;
          v33 = v76.m256i_i32[6];
          goto LABEL_146;
        }
        if ( (v14 & 0xFC000000) != 0 )
        {
          if ( AlpcpSecondaryMessageTables )
            v34 = *(_QWORD *)(AlpcpSecondaryMessageTables + 8LL * ((unsigned int)v14 >> 26));
          else
            v34 = 0LL;
        }
        else
        {
          v34 = AlpcMessageTable;
        }
        if ( v34 )
        {
          PreviousMode = KeGetCurrentThread()->PreviousMode;
          v36 = v76.m256i_i32[6] & 0x3FFFFFF;
          if ( (v76.m256i_i16[12] & 0x3FC) != 0 )
          {
            v37 = (signed __int64 *)ExpLookupHandleTableEntry(v34, (unsigned int)v36);
            if ( v37 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  _m_prefetchw(v37);
                  v38 = *v37;
                  if ( (*v37 & 1) == 0 )
                    break;
                  if ( v38 == _InterlockedCompareExchange64(v37, v38 - 1, v38) )
                    goto LABEL_120;
                }
                if ( !v38 )
                  break;
                ExpBlockOnLockedHandleEntry(v34, v37, v38);
              }
            }
          }
          v37 = 0LL;
          ExHandleLogBadReference(v34, v36, PreviousMode);
LABEL_120:
          if ( v37 )
          {
            v31 = (*v37 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
            if ( *(_DWORD *)(v31 + 0x100) == v76.m256i_i32[6]
              && (!(_DWORD)v77 || *(_DWORD *)(((*v37 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x108) == (_DWORD)v77) )
            {
              _m_prefetchw((const void *)(v31 - 24));
              v39 = *(_QWORD *)(v31 - 24);
              v40 = v39 == 0;
              if ( v39 <= 0 )
              {
LABEL_227:
                if ( !v40 )
                  KeBugCheckEx(0x18u, 0LL, v31, 0x20uLL, v39);
              }
              else
              {
                while ( 1 )
                {
                  v41 = v39;
                  v39 = _InterlockedCompareExchange64((volatile signed __int64 *)(v31 - 24), v39 + 1, v39);
                  if ( v39 == v41 )
                    break;
                  if ( v39 <= 0 )
                  {
                    v40 = v39 == 0;
                    goto LABEL_227;
                  }
                }
                if ( v39 != -1 )
                {
                  v42 = (_BYTE *)KeAbPreAcquire(v31 - 16, 0LL, 0);
                  v43 = v42;
                  if ( _interlockedbittestandset64((volatile signed __int32 *)(v31 - 16), 0LL) )
                    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v31 - 16), v42, v31 - 16);
                  if ( v43 )
                    v43[26] |= 1u;
                  *(_BYTE *)(v31 - 32) |= 1u;
                  v44 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 - 24), 0x10000uLL) + 0x10000;
                  if ( v44 <= 0 )
                    KeBugCheckEx(0x18u, 0LL, v31, 0x26uLL, v44);
                  --*(_WORD *)(v31 - 30);
                  _InterlockedExchangeAdd64(v37, 1uLL);
                  _InterlockedOr(v72, 0);
                  if ( *(_QWORD *)(v34 + 48) )
                    ExfUnblockPushLock((volatile __int64 *)(v34 + 48), 0LL);
                  v33 = v76.m256i_i32[6];
                  if ( *(_DWORD *)(v31 + 256) == v76.m256i_i32[6]
                    && (!(_DWORD)v77 || *(_DWORD *)(v31 + 264) == (_DWORD)v77)
                    && (*(_QWORD *)(v31 + 24) || *(_QWORD *)(v31 + 16)) )
                  {
                    if ( *(_QWORD *)(v31 + 184) != *(_QWORD *)(v78 + 16) && *(_QWORD *)(v31 + 192) != v78 )
                      goto LABEL_145;
LABEL_146:
                    v74 = 0;
                    v28 = 0;
                    v79 = v31;
                    v22 = v31;
                    v45 = *(_DWORD *)(v31 + 40);
                    if ( (v45 & 0x80u) != 0 )
                      goto LABEL_178;
                    v46 = *(_QWORD *)(v31 + 24);
                    if ( v46 )
                    {
                      v47 = *(_QWORD *)(v31 + 16);
                      if ( v47 != v78 )
                      {
                        if ( (v45 & 7) == 0 )
                        {
                          v48 = *(_QWORD **)(v46 + 16);
                          v49 = KeAbPreAcquire((ULONG_PTR)(v48 - 2), 0LL, 0);
                          if ( _InterlockedCompareExchange64(v48 - 2, 17LL, 0LL) )
                            ExfAcquirePushLockSharedEx(v48 - 2, v49, (ULONG_PTR)(v48 - 2));
                          if ( v49 )
                            *(_BYTE *)(v49 + 26) |= 1u;
                          if ( ((*(_DWORD *)(v46 + 416) >> 1) & 3) == 2 )
                            v50 = *v48 == v78 || v48[1] == v78;
                          else
                            v50 = v48[2] == v78;
                          if ( _InterlockedCompareExchange64(v48 - 2, 0LL, 17LL) != 17 )
                            ExfReleasePushLockShared(v48 - 2);
                          KeAbPostRelease((ULONG_PTR)(v48 - 2));
                          if ( v50 )
                          {
                            v33 = v76.m256i_i32[6];
                            v28 = v74;
                            v22 = v79;
                            goto LABEL_169;
                          }
LABEL_145:
                          AlpcpUnlockMessage(v31);
                          return 3221225506LL;
                        }
                        if ( (*(_BYTE *)(v78 + 416) & 6) != 6 )
                          goto LABEL_145;
                        v51 = *(_QWORD **)(v78 + 16);
                        if ( !v51 || *v51 != v47 )
                          goto LABEL_145;
                      }
                      if ( (v45 & 7) != 3 || (v45 & 0x4000) != 0 )
                        goto LABEL_145;
                    }
LABEL_169:
                    if ( *(_QWORD *)(v31 + 32) )
                    {
                      v52 = v73;
                      if ( *(_QWORD *)(v31 + 48) || (v73 & 0x30000) != 0 )
                      {
LABEL_179:
                        v55 = 0LL;
                        v56 = a3;
                        if ( a3 )
                        {
                          v55 = v83;
                          v28 = AlpcpCaptureAttributes(v78, v52, a3, v22, v83);
                          v74 = v28;
                          v56 = a3;
                        }
                        if ( v33 )
                        {
                          v57 = *(_DWORD *)(v22 + 40);
                          if ( (v57 & 0x280) != 0 )
                          {
                            v58 = (v57 & 0x80u) != 0 ? 0xC0000703 : 0;
                            if ( v56 )
                              AlpcpReleaseAttributes(v55);
                            AlpcpReleaseAttributes(v22 + 104);
                            AlpcpCancelMessage(v78, v22, 0x10000);
                            return v58;
                          }
                        }
                        if ( v28 < 0 )
                        {
                          AlpcpUnlockMessage(v22);
                          return (unsigned int)v28;
                        }
                        if ( v33 )
                        {
                          v59 = *(_QWORD *)(v22 + 208);
                          if ( v59 )
                          {
                            PsReleaseProcessWakeCounter(v59, *(unsigned int *)(v22 + 256));
                            *(_QWORD *)(v22 + 208) = 0LL;
                          }
                        }
                        v60 = 0LL;
                        if ( v33 > 0 )
                        {
                          v60 = *(_QWORD *)(v22 + 160);
                          *(_QWORD *)(v22 + 160) = 0LL;
                          v61 = (_QWORD *)(v22 + 104);
                          v62 = *(_QWORD *)(v22 + 136);
                          if ( v62 )
                          {
                            v63 = _InterlockedExchangeAdd64(
                                    (volatile signed __int64 *)(v62 - 24),
                                    0xFFFFFFFFFFFFFFFFuLL);
                            v64 = v63 <= 1;
                            v65 = v63 - 1;
                            if ( v64 )
                            {
                              if ( v65 )
                                KeBugCheckEx(0x18u, 0LL, v62, 0x21uLL, v65);
                              AlpcpDestroyBlob(v62);
                            }
                            *(_QWORD *)(v22 + 136) = 0LL;
                            v22 = v79;
                          }
                          v66 = v61[5];
                          if ( v66 )
                          {
                            AlpcpReleaseViewAttribute(v66);
                            v61[5] = 0LL;
                          }
                          v67 = v61[6];
                          if ( v67 )
                          {
                            AlpcpDereferenceBlobEx(v67, 1);
                            v61[6] = 0LL;
                          }
                          if ( v61[7] )
                          {
                            AlpcpReleaseDirectAttribute(v61[7]);
                            v61[7] = 0LL;
                          }
                        }
                        if ( v55 )
                        {
                          *(_OWORD *)(v22 + 104) = *(_OWORD *)v55;
                          *(_OWORD *)(v22 + 120) = *((_OWORD *)v55 + 1);
                          *(_OWORD *)(v22 + 136) = *((_OWORD *)v55 + 2);
                          *(_OWORD *)(v22 + 152) = *((_OWORD *)v55 + 3);
                          *(_QWORD *)(v22 + 168) = *((_QWORD *)v55 + 8);
                        }
                        if ( v60 )
                          *(_QWORD *)(v22 + 160) = v60;
                        if ( (v73 & 0xC0000000) == 0x80000000 )
                          v68 = &v80->m256i_i64[3];
                        else
                          v68 = &v80[1].m256i_i64[1];
                        if ( a4 )
                        {
                          v69 = v76.m256i_i16[0];
                          if ( (unsigned __int64)v68 + v76.m256i_u16[0] > 0x7FFFFFFF0000LL )
                          {
                            v20 = -1073741819;
                            goto LABEL_221;
                          }
                        }
                        else
                        {
                          v69 = v76.m256i_i16[0];
                        }
                        *(_QWORD *)(v22 + 176) = v68;
                        v70 = *(_QWORD *)(v22 + 96);
                        if ( v70 )
                          v71 = *(_QWORD *)(v70 + 32) - 40LL;
                        else
                          v71 = 512LL;
                        if ( v69 > v71 )
                          v20 = AlpcpCaptureMessageData(v22, v69, 0LL);
                        if ( v20 >= 0 )
                        {
                          *(_QWORD *)(a1 + 8) = v22;
                          *(_DWORD *)(a1 + 52) = *(__int32 *)((char *)v76.m256i_i32 + 2);
                          *(_WORD *)(a1 + 56) = v76.m256i_i16[3];
                          if ( !*(_QWORD *)(v22 + 24) )
                            return AlpcpDispatchNewMessage();
                          if ( *(_QWORD *)(v22 + 32) )
                            return AlpcpDispatchReplyToWaitingThread((__int64 *)a1);
                          return AlpcpDispatchReplyToPort(a1);
                        }
LABEL_221:
                        AlpcpUnlockMessage(v22);
                        return (unsigned int)v20;
                      }
                      v53 = 784LL;
                      if ( *(_QWORD *)(v31 + 216) )
                        v53 = *(_QWORD *)(v31 + 224) + 784LL;
                      v54 = AlpcpChargePagedPoolQuota((__int64)KeGetCurrentThread()->ApcState.Process, v53);
                      v74 = v54;
                      if ( v54 < 0 )
                      {
                        AlpcpUnlockMessage(v31);
                        return (unsigned int)v54;
                      }
                      *(_QWORD *)(v31 + 48) = KeGetCurrentThread()->ApcState.Process;
                      ObfReferenceObjectWithTag(KeGetCurrentThread()->ApcState.Process, 0x63706C41u);
                      v28 = v74;
                      v22 = v79;
                      goto LABEL_177;
                    }
LABEL_178:
                    v52 = v73;
                    goto LABEL_179;
                  }
                  AlpcpUnlockMessage(v31);
                  return 3221227266LL;
                }
              }
            }
            ExUnlockHandleTableEntry(v34, v37);
          }
        }
        return 3221227266LL;
      }
    }
    return 3221225485LL;
  }
  v76 = *a2;
  v77 = a2[1].m256i_i64[0];
  LOBYTE(a2) = (*(_DWORD *)(v6 + 256) & 0x1000) != 0 || (v7 & 2) != 0;
  result = AlpcpValidateMessage(&v76, a2, v5);
  v74 = result;
  if ( (int)result >= 0 )
  {
    v14 = v76.m256i_i32[6];
    v16 = v76.m256i_i16[2];
    v12 = v76.m256i_u16[1];
    goto LABEL_36;
  }
  return result;
}
