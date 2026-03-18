/*
 * XREFs of AlpcpReplyLegacySynchronousRequest @ 0x14052EE8C
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x140475F20 (NtReplyWaitReceivePortEx.c)
 *     NtReplyPort @ 0x14052ED7C (NtReplyPort.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140044830 (KeReleaseSemaphoreEx.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpLookupMessage @ 0x14047A7B0 (AlpcpLookupMessage.c)
 *     AlpcpCaptureMessageData @ 0x140523318 (AlpcpCaptureMessageData.c)
 *     AlpcpCancelMessage @ 0x14052BBC4 (AlpcpCancelMessage.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpValidateDataInformation @ 0x14069F150 (AlpcpValidateDataInformation.c)
 */

__int64 __fastcall AlpcpReplyLegacySynchronousRequest(__int64 a1, ULONG64 a2, char a3)
{
  __int64 v4; // r15
  ULONG64 v5; // rcx
  unsigned __int16 v6; // bx
  __int64 result; // rax
  int v8; // r8d
  __int64 v9; // r9
  ULONG_PTR v10; // rsi
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // r9
  bool v17; // r14
  _QWORD *v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // r9
  int v22; // eax
  int v23; // r14d
  char v24; // cl
  signed __int64 BugCheckParameter4; // rcx
  ULONG_PTR v26; // r12
  unsigned __int64 *v27; // r13
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 v30; // rbx
  _QWORD *v31; // rdx
  __int64 v32; // r9
  ULONG_PTR v33; // r13
  ULONG_PTR v34; // rcx
  ULONG_PTR v35; // r8
  unsigned int v36; // edx
  ULONG_PTR v37; // rcx
  __int64 v38; // r10
  unsigned __int64 *v39; // r9
  __int64 v40; // rdx
  signed __int64 *v41; // rcx
  unsigned int v42; // eax
  void *v43; // rcx
  int v44; // esi
  char v45; // cl
  __int64 v46; // r9
  signed __int64 v47; // rcx
  int v48; // r14d
  char v49; // cl
  signed __int64 v50; // rcx
  int v51; // r14d
  char v52; // cl
  signed __int64 v53; // rcx
  signed __int32 v54[8]; // [rsp+0h] [rbp-B8h] BYREF
  unsigned int v55; // [rsp+30h] [rbp-88h]
  __int64 v56; // [rsp+38h] [rbp-80h]
  ULONG_PTR v57; // [rsp+40h] [rbp-78h]
  ULONG_PTR v58; // [rsp+48h] [rbp-70h]
  __m128i v59; // [rsp+50h] [rbp-68h] BYREF
  __int128 v60; // [rsp+60h] [rbp-58h]
  __int64 v61; // [rsp+70h] [rbp-48h]
  unsigned __int64 v62; // [rsp+78h] [rbp-40h]
  ULONG_PTR BugCheckParameter2; // [rsp+D8h] [rbp+20h] BYREF

  v4 = *(_QWORD *)a1;
  v58 = *(_QWORD *)a1;
  if ( !a3 )
  {
    v59 = *(__m128i *)a2;
    v60 = *(_OWORD *)(a2 + 16);
    HIDWORD(v61) = HIDWORD(*(_QWORD *)(a2 + 32));
    v8 = 0;
    LODWORD(v61) = 0;
    v6 = _mm_cvtsi128_si32(v59);
    if ( v6 >= (unsigned __int16)(v6 + 40) || (unsigned __int64)v6 + 40 > v59.m128i_u16[1] )
      return 3221225485LL;
    v59.m128i_i16[1] = v6 + 40;
LABEL_14:
    result = AlpcpLookupMessage(v4, SDWORD2(v60), v8, &BugCheckParameter2);
    v55 = result;
    if ( (int)result < 0 )
      return result;
    v10 = BugCheckParameter2;
    v11 = *(_DWORD *)(BugCheckParameter2 + 40);
    if ( (v11 & 0x80u) != 0 )
    {
      AlpcpCancelMessage(v4, BugCheckParameter2, 0x10000u);
      return 3221225527LL;
    }
    if ( (v11 & 0x200) != 0 || !*(_QWORD *)(BugCheckParameter2 + 32) )
    {
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
      v51 = 0;
      v52 = *(_BYTE *)(v10 - 32);
      if ( (v52 & 1) != 0 )
      {
        v51 = 0x10000 - *(__int16 *)(v10 - 30);
        *(_BYTE *)(v10 - 32) = v52 & 0xFE;
        *(_WORD *)(v10 - 30) = 0;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v10 - 16));
      KeAbPostRelease(v10 - 16);
      if ( v51 <= 0 )
        return 3221225506LL;
      v53 = -v51 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 - 24), -v51);
      if ( v53 > 0 )
        return 3221225506LL;
      if ( v53 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v53);
      goto LABEL_116;
    }
    v12 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( v12 != v4 )
    {
      if ( (v11 & 7) == 0 )
      {
        v13 = *(_QWORD *)(BugCheckParameter2 + 24);
        v56 = v13;
        if ( v13 )
        {
          v14 = *(_QWORD **)(v13 + 16);
          v15 = KeAbPreAcquire((ULONG_PTR)(v14 - 2), 0LL, 0LL, v9);
          if ( _InterlockedCompareExchange64(v14 - 2, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v14 - 2, v15, (ULONG_PTR)(v14 - 2), v16);
          if ( v15 )
            *(_BYTE *)(v15 + 26) |= 1u;
          if ( ((*(_DWORD *)(v56 + 416) >> 1) & 3) == 2 )
            v17 = *v14 == v4 || v14[1] == v4;
          else
            v17 = v14[2] == v4;
          if ( _InterlockedCompareExchange64(v14 - 2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v14 - 2);
          KeAbPostRelease((ULONG_PTR)(v14 - 2));
          v6 = v59.m128i_i16[0];
          v10 = BugCheckParameter2;
LABEL_41:
          if ( v17 )
          {
            v19 = *(_QWORD *)(v10 + 96);
            if ( v19 )
              v20 = *(_QWORD *)(v19 + 32) - 40LL;
            else
              v20 = 512LL;
            v62 = v20;
            if ( (__int16)v6 > v20 )
            {
              v22 = AlpcpCaptureMessageData(v10, (__int16)v6, (char *)(a2 + 40));
            }
            else
            {
              memmove((void *)(v10 + 264), (const void *)(a2 + 40), (__int16)v6);
              v22 = 0;
            }
            v55 = v22;
            if ( v22 >= 0 )
            {
              *(_DWORD *)(v10 + 40) |= 0x10000u;
              _InterlockedOr(v54, 0);
              v26 = BugCheckParameter2;
              v58 = BugCheckParameter2;
              v57 = *(_QWORD *)(BugCheckParameter2 + 24);
              v56 = *(_QWORD *)(BugCheckParameter2 + 16);
              v27 = (unsigned __int64 *)(v56 + 176);
              v28 = KeAbPreAcquire(v56 + 176, 0LL, 0LL, v21);
              v30 = v28;
              if ( _interlockedbittestandset64((volatile signed __int32 *)v27, 0LL) )
                ExfAcquirePushLockExclusiveEx(v27, v28, (ULONG_PTR)v27, v29);
              if ( v30 )
                *(_BYTE *)(v30 + 26) |= 1u;
              --*(_DWORD *)(v56 + 456);
              *(_DWORD *)(v10 + 40) &= 0xFFFFFFF8;
              *(_QWORD *)(v26 + 16) = 0LL;
              v31 = (_QWORD *)BugCheckParameter2;
              **(_QWORD **)(BugCheckParameter2 + 8) = *(_QWORD *)BugCheckParameter2;
              *(_QWORD *)(*v31 + 8LL) = v31[1];
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v27, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)v27);
              KeAbPostRelease((ULONG_PTR)v27);
              v33 = BugCheckParameter2;
              --*(_WORD *)(BugCheckParameter2 - 30);
              *(_DWORD *)(v33 + 224) = v59.m128i_i32[0];
              *(_WORD *)(v33 + 228) = 2;
              v34 = BugCheckParameter2;
              *(_OWORD *)(BugCheckParameter2 + 232) = *(_OWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
              *(_DWORD *)(v10 + 40) |= 0x200u;
              v35 = v57;
              v36 = *(_DWORD *)(v10 + 40) & 0xFFFFFF87 | (4 * (*(_DWORD *)(v57 + 416) & 6));
              *(_DWORD *)(v10 + 40) = v36;
              if ( ((v36 >> 3) & 0xF) == 1 )
              {
                v56 = *(_QWORD *)(v35 + 16);
                v37 = KeAbPreAcquire(v56 - 16, 0LL, 0LL, v32);
                v57 = v37;
                v38 = v56;
                v39 = (unsigned __int64 *)(v56 - 16);
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v56 - 16), 17LL, 0LL) )
                {
                  ExfAcquirePushLockSharedEx(v39, v37, (ULONG_PTR)v39, (__int64)v39);
                  v37 = v57;
                  v38 = v56;
                }
                if ( v37 )
                  *(_BYTE *)(v37 + 26) |= 1u;
                v40 = *(_QWORD *)(v38 + 8);
                if ( v40 )
                  *(_QWORD *)(BugCheckParameter2 + 120) = *(_QWORD *)(v40 + 56);
                else
                  *(_QWORD *)(BugCheckParameter2 + 120) = 0LL;
                v41 = (signed __int64 *)(v38 - 16);
                v57 = v38 - 16;
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v38 - 16), 0LL, 17LL) != 17 )
                {
                  ExfReleasePushLockShared(v41);
                  v41 = (signed __int64 *)v57;
                }
                KeAbPostRelease((ULONG_PTR)v41);
                v34 = BugCheckParameter2;
              }
              else
              {
                *(_QWORD *)(v34 + 120) = *(_QWORD *)(v35 + 56);
              }
              v56 = *(_QWORD *)(v34 + 32);
              *(_QWORD *)(v34 + 32) = 0LL;
              --*(_WORD *)(v33 - 30);
              v42 = *(_DWORD *)(v10 + 40) & 0xFFFEFEF8 | 0x105;
              *(_DWORD *)(v10 + 40) = v42;
              v43 = *(void **)(v58 + 24);
              if ( v43 )
              {
                if ( (v42 & 0x1000) != 0 )
                  ObfDereferenceObject(v43);
                *(_QWORD *)(v58 + 24) = 0LL;
              }
              ObfReferenceObject((PVOID)v4);
              *(_QWORD *)(v58 + 24) = v4;
              *(_DWORD *)(v10 + 40) |= 0x1000u;
              if ( AlpcpMessageLogEnabled )
                AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
              v44 = 0;
              v45 = *(_BYTE *)(v33 - 32);
              if ( (v45 & 1) != 0 )
              {
                v44 = 0x10000 - *(__int16 *)(v33 - 30);
                *(_BYTE *)(v33 - 32) = v45 & 0xFE;
                *(_WORD *)(v33 - 30) = 0;
              }
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v33 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v33 - 16));
              KeAbPostRelease(v33 - 16);
              if ( v44 > 0 )
              {
                v47 = -v44 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v33 - 24), -v44);
                if ( v47 <= 0 )
                {
                  if ( v47 )
                    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v47);
                  AlpcpDestroyBlob(BugCheckParameter2);
                }
              }
              if ( (*(_DWORD *)(a1 + 48) & 4) != 0 )
                *(_QWORD *)(a1 + 24) = v56;
              else
                KeReleaseSemaphoreEx(v56 + 1592, 1, 1, v46, 2);
            }
            else
            {
              if ( AlpcpMessageLogEnabled )
                AlpcpEnterStateChangeEventMessageLog(v10);
              v23 = 0;
              v24 = *(_BYTE *)(v10 - 32);
              if ( (v24 & 1) != 0 )
              {
                v23 = 0x10000 - *(__int16 *)(v10 - 30);
                *(_BYTE *)(v10 - 32) = v24 & 0xFE;
                *(_WORD *)(v10 - 30) = 0;
              }
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v10 - 16));
              KeAbPostRelease(v10 - 16);
              if ( v23 > 0 )
              {
                BugCheckParameter4 = -v23 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 - 24), -v23);
                if ( BugCheckParameter4 <= 0 )
                {
                  if ( BugCheckParameter4 )
                    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
                  AlpcpDestroyBlob(BugCheckParameter2);
                }
              }
            }
            return v55;
          }
          goto LABEL_97;
        }
        goto LABEL_97;
      }
      if ( (*(_BYTE *)(v4 + 416) & 6) != 6 )
        goto LABEL_97;
      v18 = *(_QWORD **)(v4 + 16);
      if ( !v18 || *v18 != v12 )
        goto LABEL_97;
    }
    if ( (v11 & 7) == 3 && (v11 & 0x4000) == 0 )
    {
      v17 = 1;
      goto LABEL_41;
    }
LABEL_97:
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(v10);
    v48 = 0;
    v49 = *(_BYTE *)(v10 - 32);
    if ( (v49 & 1) != 0 )
    {
      v48 = 0x10000 - *(__int16 *)(v10 - 30);
      *(_BYTE *)(v10 - 32) = v49 & 0xFE;
      *(_WORD *)(v10 - 30) = 0;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v10 - 16));
    KeAbPostRelease(v10 - 16);
    if ( v48 <= 0 )
      return 3221225506LL;
    v50 = -v48 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 - 24), -v48);
    if ( v50 > 0 )
      return 3221225506LL;
    if ( v50 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v50);
LABEL_116:
    AlpcpDestroyBlob(BugCheckParameter2);
    return 3221225506LL;
  }
  v5 = a2;
  if ( a2 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  v59 = *(__m128i *)v5;
  v60 = *(_OWORD *)(v5 + 16);
  v61 = *(_QWORD *)(v5 + 32);
  v6 = _mm_cvtsi128_si32(v59);
  if ( v6 >= (unsigned __int16)(v6 + 40) || (unsigned __int64)v6 + 40 > v59.m128i_u16[1] )
  {
    result = 3221225485LL;
    v55 = -1073741811;
    return result;
  }
  v59.m128i_i16[1] = v6 + 40;
  v55 = 0;
  if ( !v59.m128i_i16[3] || (result = AlpcpValidateDataInformation(a2, &v59), v55 = result, (int)result >= 0) )
  {
    v8 = v61;
    goto LABEL_14;
  }
  return result;
}
