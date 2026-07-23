/*
 * XREFs of AlpcpAcceptConnectPort @ 0x14049EE08
 * Callers:
 *     NtAcceptConnectPort @ 0x14049D9F8 (NtAcceptConnectPort.c)
 *     NtAlpcAcceptConnectPort @ 0x14049ED80 (NtAlpcAcceptConnectPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     AlpcpSetOwnerProcessPort @ 0x140407830 (AlpcpSetOwnerProcessPort.c)
 *     AlpcpCancelMessage @ 0x140407A54 (AlpcpCancelMessage.c)
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     AlpcpFlushResourcesPort @ 0x140409934 (AlpcpFlushResourcesPort.c)
 *     AlpcpReferenceBlob @ 0x14040AC0C (AlpcpReferenceBlob.c)
 *     AlpcpCaptureAttributes @ 0x14044B6A0 (AlpcpCaptureAttributes.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     PsReleaseProcessWakeCounter @ 0x1404674F0 (PsReleaseProcessWakeCounter.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     AlpcpMapLegacyPortView @ 0x1404713B8 (AlpcpMapLegacyPortView.c)
 *     AlpcpDispatchMessage @ 0x14049F988 (AlpcpDispatchMessage.c)
 *     AlpcpReleaseAttributes @ 0x14049F9A8 (AlpcpReleaseAttributes.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x14049FA0C (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x14049FA94 (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcpInitializePort @ 0x14049FCA0 (AlpcpInitializePort.c)
 *     AlpcpCreatePort @ 0x14049FE60 (AlpcpCreatePort.c)
 *     AlpcpValidateConnectionMessage @ 0x14049FEBC (AlpcpValidateConnectionMessage.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14049FF34 (AlpcpProbeAndCaptureMessageHeader.c)
 *     PsDereferencePrimaryToken @ 0x1404C4BF8 (PsDereferencePrimaryToken.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     AlpcpLookupMessage @ 0x1404F1290 (AlpcpLookupMessage.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x14054739C (AlpcpMapLegacyPortRemoteView.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall AlpcpAcceptConnectPort(
        unsigned __int64 a1,
        int a2,
        void *a3,
        __int64 a4,
        unsigned __int64 a5,
        void *a6,
        __int128 *a7,
        _DWORD *a8,
        char a9,
        __m128i *a10,
        __m128i *a11,
        char a12)
{
  int v14; // r13d
  KPROCESSOR_MODE PreviousMode; // cl
  __int64 v16; // r8
  __int64 v17; // rcx
  __m128i *v18; // r9
  char v19; // r10
  __m128i *v20; // rax
  __m128i *v21; // rax
  NTSTATUS result; // eax
  __m128i *v23; // rcx
  __m128i *v24; // rax
  __m128i *v25; // rcx
  __int64 v26; // r8
  int inserted; // ebx
  __int64 v28; // r8
  int v29; // edx
  _BYTE *v30; // rcx
  __int64 v31; // r13
  PVOID *v32; // rsi
  __int64 v33; // rbx
  bool v34; // bl
  void **v35; // rax
  _KPROCESS *Process; // rcx
  __int64 v37; // r14
  ULONG_PTR v38; // r13
  int v39; // r14d
  int v40; // r12d
  _BYTE *v41; // rax
  _BYTE *v42; // rsi
  int v43; // eax
  _DWORD *v44; // rsi
  _BYTE *v45; // rax
  _BYTE *v46; // rbx
  _QWORD *v47; // rcx
  int v48; // edx
  int v49; // r13d
  ULONG_PTR v50; // rsi
  __m128i *v51; // r12
  ULONG_PTR v52; // rsi
  __int64 v53; // rcx
  HANDLE v54; // rsi
  HANDLE v55; // rcx
  __m128i *v56; // rax
  void *v57; // rsi
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-248h]
  _BYTE *v59; // [rsp+50h] [rbp-238h]
  PVOID PrimaryToken; // [rsp+58h] [rbp-230h]
  ULONG_PTR v61; // [rsp+60h] [rbp-228h] BYREF
  int v62; // [rsp+68h] [rbp-220h]
  PVOID v63; // [rsp+70h] [rbp-218h] BYREF
  int v64; // [rsp+78h] [rbp-210h]
  HANDLE Handle; // [rsp+80h] [rbp-208h] BYREF
  __int128 *v66; // [rsp+88h] [rbp-200h]
  _QWORD *v67; // [rsp+90h] [rbp-1F8h]
  PVOID v68; // [rsp+98h] [rbp-1F0h]
  PVOID Object; // [rsp+A0h] [rbp-1E8h] BYREF
  __int64 v70; // [rsp+A8h] [rbp-1E0h]
  __m128i *v71; // [rsp+B0h] [rbp-1D8h]
  _DWORD *v72; // [rsp+B8h] [rbp-1D0h]
  __m128i *v73; // [rsp+C0h] [rbp-1C8h]
  __m128i v74; // [rsp+D0h] [rbp-1B8h]
  __int64 v75; // [rsp+E0h] [rbp-1A8h]
  __int128 v76; // [rsp+E8h] [rbp-1A0h] BYREF
  __int128 v77; // [rsp+F8h] [rbp-190h]
  __int64 v78; // [rsp+108h] [rbp-180h]
  __m128i v79[3]; // [rsp+110h] [rbp-178h] BYREF
  _OWORD v80[5]; // [rsp+140h] [rbp-148h] BYREF
  _QWORD v81[12]; // [rsp+190h] [rbp-F8h] BYREF
  _OWORD v82[5]; // [rsp+1F0h] [rbp-98h] BYREF

  v70 = a4;
  v62 = a2;
  v67 = (_QWORD *)a1;
  v66 = a7;
  v72 = a8;
  v71 = a10;
  v73 = a11;
  memset(v81, 0, 0x40uLL);
  memset(v82, 0, 0x48uLL);
  memset(v79, 0, sizeof(v79));
  v74 = 0uLL;
  v75 = 0LL;
  v63 = 0LL;
  PrimaryToken = 0LL;
  v68 = 0LL;
  v14 = 0;
  v61 = 0LL;
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AccessMode = PreviousMode;
  if ( PreviousMode )
  {
    if ( a12 || a9 )
    {
      v16 = (unsigned int)v62;
      v17 = a1;
      if ( v62 >= 0 )
      {
        if ( a1 >= 0x7FFFFFFF0000LL )
          v17 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v17 = *(_QWORD *)v17;
      }
      else
      {
        if ( a1 >= 0x7FFFFFFF0000LL )
          v17 = 0x7FFFFFFF0000LL;
        *(_DWORD *)v17 = *(_DWORD *)v17;
      }
    }
    else
    {
      v16 = (unsigned int)v62;
    }
    AlpcpProbeAndCaptureMessageHeader(v66, &v76, v16);
    if ( a5 )
    {
      v20 = (__m128i *)a5;
      if ( a5 >= (unsigned __int64)v18 )
        v20 = v18;
      v82[0] = *v20;
      v82[1] = v20[1];
      v82[2] = v20[2];
      v82[3] = v20[3];
      *(_QWORD *)&v82[4] = v20[4].m128i_i64[0];
    }
    if ( a10 )
    {
      v21 = a10;
      if ( a10 >= v18 )
        v21 = v18;
      v79[0] = *v21;
      v79[1] = v21[1];
      v79[2] = v21[2];
      if ( _mm_cvtsi128_si32(v79[0]) != 48 )
        return -1073741811;
      if ( ((unsigned __int8)a10 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v23 = a10;
      if ( a10 >= v18 )
        v23 = v18;
      v23->m128i_i8[0] = v23->m128i_i8[0];
      v23[2].m128i_i8[15] = v23[2].m128i_i8[15];
    }
    if ( a11 )
    {
      v24 = a11;
      if ( a11 >= v18 )
        v24 = v18;
      if ( v24->m128i_i32[0] != 24 )
        return -1073741811;
      if ( ((unsigned __int8)a11 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v25 = a11;
      if ( a11 >= v18 )
        v25 = v18;
      v25->m128i_i8[0] = v25->m128i_i8[0];
      v25[1].m128i_i8[7] = v25[1].m128i_i8[7];
    }
    PreviousMode = AccessMode;
  }
  else
  {
    if ( a5 )
    {
      v82[0] = *(_OWORD *)a5;
      v82[1] = *(_OWORD *)(a5 + 16);
      v82[2] = *(_OWORD *)(a5 + 32);
      v82[3] = *(_OWORD *)(a5 + 48);
      *(_QWORD *)&v82[4] = *(_QWORD *)(a5 + 64);
    }
    v76 = *v66;
    v77 = v66[1];
    v78 = *((_QWORD *)v66 + 4);
    v19 = a12;
  }
  if ( !DWORD2(v77) )
    return -1073741281;
  v59 = 0LL;
  if ( a3 )
  {
    result = ObReferenceObjectByHandle(a3, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    PrimaryToken = Object;
    v59 = Object;
    if ( result < 0 )
      return result;
    v68 = Object;
    v26 = (unsigned int)v78;
  }
  else
  {
    if ( !v19 )
      return -1073741504;
    v26 = 0LL;
    LODWORD(v78) = 0;
  }
  inserted = AlpcpLookupMessage(v59, DWORD2(v77), v26, &v61);
  v64 = inserted;
  if ( inserted < 0 )
    goto LABEL_137;
  if ( !v59 )
    v59 = *(_BYTE **)(v61 + 16);
  v29 = *(_DWORD *)(v61 + 40);
  if ( (v29 & 0x80u) != 0 )
  {
    v14 = 1;
    inserted = -1073740029;
LABEL_137:
    v39 = 0;
    v40 = 0;
    goto LABEL_138;
  }
  if ( (*(unsigned __int16 *)(v61 + 236) & 0xFFFF00FF) != 0xA )
  {
    inserted = -1073741281;
    goto LABEL_137;
  }
  v30 = *(_BYTE **)(v61 + 16);
  if ( v30 != *(_BYTE **)(v61 + 192) )
    goto LABEL_136;
  if ( v30 == v59 )
  {
LABEL_74:
    if ( (v29 & 7) != 3 || (v29 & 0x4000) != 0 )
      goto LABEL_136;
    v34 = 1;
    goto LABEL_77;
  }
  if ( (v29 & 7) != 0 )
  {
    if ( (v59[416] & 6) != 6 )
      goto LABEL_136;
    v35 = (void **)*((_QWORD *)v59 + 2);
    if ( !v35 || *v35 != v30 )
      goto LABEL_136;
    goto LABEL_74;
  }
  v31 = *(_QWORD *)(v61 + 24);
  if ( !v31 )
  {
LABEL_136:
    inserted = -1073740030;
    goto LABEL_84;
  }
  v32 = *(PVOID **)(v31 + 16);
  v33 = KeAbPreAcquire((ULONG_PTR)(v32 - 2), 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v32 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)v32 - 2, v33, (ULONG_PTR)(v32 - 2));
  if ( v33 )
    *(_BYTE *)(v33 + 26) |= 1u;
  if ( ((*(_DWORD *)(v31 + 416) >> 1) & 3) == 2 )
    v34 = *v32 == v59 || v32[1] == v59;
  else
    v34 = v32[2] == v59;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v32 - 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v32 - 2);
  KeAbPostRelease((ULONG_PTR)(v32 - 2));
LABEL_77:
  if ( !v34 )
    goto LABEL_136;
  LOBYTE(v28) = a12;
  inserted = AlpcpValidateConnectionMessage(v59, &v76, v28);
  v64 = inserted;
  if ( inserted >= 0 )
  {
    v37 = *(_QWORD *)(v61 + 24);
    v38 = *(_QWORD *)(v37 + 16);
    if ( (*(_DWORD *)(v37 + 416) & 0x20) != 0 )
    {
      v14 = 1;
      inserted = -1073741769;
      goto LABEL_137;
    }
    if ( (*((_DWORD *)v59 + 64) & 0x100000) != 0
      || (Process = KeGetCurrentThread()->ApcState.Process, Process == *((_KPROCESS **)v59 + 3)) )
    {
      if ( !a9 )
      {
        v41 = (_BYTE *)KeAbPreAcquire(v37 + 352, 0LL, 0);
        v42 = v41;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 352), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v37 + 352), v41, v37 + 352);
        if ( v42 )
          v42[26] |= 1u;
        v43 = *(_DWORD *)(v37 + 416) | 0x10;
        *(_DWORD *)(v37 + 416) = v43;
        if ( (v43 & 0x100) != 0 )
          *(_QWORD *)(v37 + 56) = a6;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v37 + 352));
        KeAbPostRelease(v37 + 352);
        v14 = 1;
        inserted = 0;
        v39 = 0;
        v40 = 0;
        goto LABEL_138;
      }
      LOBYTE(Process) = AccessMode;
      inserted = AlpcpCreatePort(Process, v70, &v63);
      if ( inserted >= 0 )
      {
        v44 = v63;
        inserted = AlpcpInitializePort(v63, 3LL, 0LL);
        if ( inserted >= 0 )
        {
          inserted = AlpcpValidateAndSetPortAttributes(
                       (_DWORD)v44,
                       (unsigned __int64)v82 & ((unsigned __int128)-(__int128)a5 >> 64),
                       (_DWORD)v59,
                       0,
                       0,
                       0,
                       a12);
          v64 = inserted;
          if ( inserted >= 0 )
          {
            AlpcpSetOwnerProcessPort((__int64)v44, (_DWORD *)((unsigned __int64)v82 & -(__int64)(a5 != 0)));
            if ( a12 )
              v44[104] |= 0x1000u;
            AlpcpReferenceBlob(v38);
            v45 = (_BYTE *)KeAbPreAcquire(v38 - 16, 0LL, 0);
            v46 = v45;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v38 - 16), 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v38 - 16), v45, v38 - 16);
            if ( v46 )
              v46[26] |= 1u;
            v47 = v63;
            *((_QWORD *)v63 + 2) = v38;
            *(_QWORD *)(v38 + 8) = v47;
            *(_QWORD *)(v37 + 424) = v59;
            *(_QWORD *)(v37 + 432) = v47;
            v47[53] = v37;
            v47[54] = v37;
            v48 = *(_DWORD *)(v37 + 416);
            if ( (v48 & 0x1000) != 0 && (v47[52] & 0x1000) != 0 )
            {
              *(_DWORD *)(v37 + 416) = v48 | 0x2000;
              *((_DWORD *)v47 + 104) |= 0x2000u;
            }
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v38 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v38 - 16));
            KeAbPostRelease(v38 - 16);
            WORD2(v81[6]) = v76 + 40;
            *(_DWORD *)((char *)&v81[6] + 6) = 11;
            v49 = v62;
            v50 = v61;
            inserted = AlpcpSetupMessageDataForDeferredCopy(v61, (_DWORD)v66, v62, (unsigned __int16)v76, 0, AccessMode);
            if ( inserted >= 0 )
            {
              if ( !a12 || !*(_QWORD *)(v50 + 144) || (inserted = AlpcpMapLegacyPortRemoteView(v63), inserted >= 0) )
              {
                v51 = v71;
                if ( v71 )
                {
                  memset(v80, 0, 0x48uLL);
                  inserted = AlpcpMapLegacyPortView(v63, (__int64)v79, (__int64)v80);
                  if ( inserted >= 0 )
                  {
                    inserted = AlpcpMapLegacyPortRemoteView((PVOID)v37);
                    if ( inserted >= 0 )
                      v79[2].m128i_i64[1] = v81[10];
                  }
                }
                else
                {
                  inserted = AlpcpCaptureAttributes(v59, v49, v72, v61, v80);
                }
                if ( inserted >= 0 )
                {
                  ObfReferenceObject(v63);
                  inserted = ObInsertObject(v63, 0LL, 0x1F0001u, 0, 0LL, &Handle);
                  if ( inserted >= 0 )
                  {
                    v52 = v61;
                    AlpcpReleaseAttributes(v61 + 104);
                    *(_OWORD *)(v52 + 104) = v80[0];
                    *(_OWORD *)(v52 + 120) = v80[1];
                    *(_OWORD *)(v52 + 136) = v80[2];
                    *(_OWORD *)(v52 + 152) = v80[3];
                    *(_QWORD *)(v52 + 168) = *(_QWORD *)&v80[4];
                    v39 = 0;
                    v53 = *(_QWORD *)(v52 + 208);
                    if ( v53 )
                    {
                      PsReleaseProcessWakeCounter(v53, *(unsigned int *)(v52 + 256));
                      *(_QWORD *)(v52 + 208) = 0LL;
                    }
                    v54 = Handle;
                    if ( v49 >= 0 )
                      *v67 = Handle;
                    else
                      *(_DWORD *)v67 = (_DWORD)Handle;
                    v55 = a6;
                    if ( !a6 )
                      v55 = v54;
                    *((_QWORD *)v63 + 7) = v55;
                    if ( v51 )
                    {
                      *v51 = v79[0];
                      v51[1] = v79[1];
                      v51[2] = v79[2];
                    }
                    v56 = v73;
                    if ( v73 )
                    {
                      *v73 = v74;
                      v56[1].m128i_i64[0] = v75;
                    }
                    v81[0] = v63;
                    v81[1] = v61;
                    LODWORD(v81[6]) = 0x10000;
                    inserted = AlpcpDispatchMessage(v81);
                    v64 = inserted;
                    if ( inserted >= 0 )
                      v54 = 0LL;
                    Handle = v54;
                    v61 = 0LL;
                    v14 = 0;
                    v57 = PrimaryToken;
                    v40 = 0;
                    goto LABEL_139;
                  }
                }
                v14 = 0;
                v39 = 1;
                goto LABEL_85;
              }
            }
          }
        }
      }
    }
    else
    {
      inserted = -1073741281;
    }
  }
LABEL_84:
  v14 = 0;
  v39 = 0;
LABEL_85:
  v40 = 0;
LABEL_138:
  v57 = PrimaryToken;
LABEL_139:
  if ( v61 )
  {
    if ( v39 )
    {
      AlpcpReleaseAttributes(v80);
      v40 = 1;
    }
    if ( v14 )
      AlpcpCancelMessage((__int64)v59, v61, 0x10000);
    else
      AlpcpUnlockMessage(v61);
  }
  if ( v57 )
    PsDereferencePrimaryToken(v57);
  if ( v63 )
  {
    if ( v40 )
      AlpcpFlushResourcesPort((__int64)v63);
    PsDereferencePrimaryToken(v63);
  }
  if ( Handle )
    NtClose(Handle);
  return inserted;
}
