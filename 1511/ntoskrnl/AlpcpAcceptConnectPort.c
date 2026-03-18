/*
 * XREFs of AlpcpAcceptConnectPort @ 0x14047D9CC
 * Callers:
 *     NtAlpcAcceptConnectPort @ 0x14047FD80 (NtAlpcAcceptConnectPort.c)
 *     NtAcceptConnectPort @ 0x1404B8D48 (NtAcceptConnectPort.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PsReleaseProcessWakeCounter @ 0x1403E967C (PsReleaseProcessWakeCounter.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     AlpcpUnlockMessage @ 0x140423364 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x140426D80 (AlpcpLookupMessage.c)
 *     AlpcpCaptureAttributes @ 0x14042A430 (AlpcpCaptureAttributes.c)
 *     ObInsertObjectEx @ 0x14042D940 (ObInsertObjectEx.c)
 *     AlpcpMapLegacyPortView @ 0x14044FC24 (AlpcpMapLegacyPortView.c)
 *     AlpcpCreatePort @ 0x14046C4A4 (AlpcpCreatePort.c)
 *     AlpcpInitializePort @ 0x14046C500 (AlpcpInitializePort.c)
 *     AlpcpSetOwnerProcessPort @ 0x14046C6C4 (AlpcpSetOwnerProcessPort.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x140479824 (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcpReferenceBlob @ 0x14047CD18 (AlpcpReferenceBlob.c)
 *     AlpcpValidateConnectionMessage @ 0x14047E2FC (AlpcpValidateConnectionMessage.c)
 *     AlpcpDispatchMessage @ 0x14047E334 (AlpcpDispatchMessage.c)
 *     AlpcpReleaseAttributes @ 0x14047E354 (AlpcpReleaseAttributes.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x14047E3AC (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14047E410 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpFlushResourcesPort @ 0x14047ED3C (AlpcpFlushResourcesPort.c)
 *     AlpcpCancelMessage @ 0x1404815E0 (AlpcpCancelMessage.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x14050C27C (AlpcpMapLegacyPortRemoteView.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall AlpcpAcceptConnectPort(
        ULONG64 a1,
        int a2,
        void *a3,
        __int64 a4,
        ULONG64 a5,
        void *a6,
        __int128 *a7,
        int *a8,
        char a9,
        __m128i *a10,
        ULONG64 a11,
        char a12)
{
  int v14; // edi
  KPROCESSOR_MODE PreviousMode; // al
  char v16; // r15
  _DWORD *v17; // rcx
  ULONG64 v18; // rcx
  _DWORD *v19; // rcx
  _BYTE *v20; // rcx
  __m128i *v21; // rcx
  NTSTATUS result; // eax
  _BYTE *v23; // rcx
  _DWORD *v24; // rbx
  int v25; // esi
  __int64 v26; // r8
  __int64 v27; // r15
  _QWORD *v28; // rsi
  int v29; // r13d
  int inserted; // ebx
  ULONG_PTR v31; // r13
  __int64 v32; // rax
  __int64 v33; // rbx
  _QWORD *v34; // rcx
  int v35; // edx
  int v36; // r13d
  ULONG_PTR v37; // r14
  __int64 v38; // rcx
  HANDLE v39; // rcx
  HANDLE v40; // rax
  _OWORD *v41; // rax
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rsi
  int v45; // eax
  ULONG_PTR v46; // rcx
  PVOID v47; // rcx
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-218h]
  ULONG_PTR v49; // [rsp+48h] [rbp-210h] BYREF
  int v50; // [rsp+50h] [rbp-208h]
  int v51; // [rsp+54h] [rbp-204h]
  _QWORD *v52; // [rsp+58h] [rbp-200h]
  PVOID v53; // [rsp+60h] [rbp-1F8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-1F0h] BYREF
  __int128 *v55; // [rsp+70h] [rbp-1E8h]
  _DWORD *v56; // [rsp+78h] [rbp-1E0h]
  __int64 v57; // [rsp+80h] [rbp-1D8h]
  __int128 v58; // [rsp+88h] [rbp-1D0h]
  __int64 v59; // [rsp+98h] [rbp-1C0h]
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp-1B8h]
  int *v61; // [rsp+A8h] [rbp-1B0h]
  _OWORD *v62; // [rsp+B0h] [rbp-1A8h]
  __int128 v63; // [rsp+B8h] [rbp-1A0h] BYREF
  __int128 v64; // [rsp+C8h] [rbp-190h]
  __int64 v65; // [rsp+D8h] [rbp-180h]
  PVOID Object; // [rsp+E0h] [rbp-178h] BYREF
  __m128i v67[3]; // [rsp+E8h] [rbp-170h] BYREF
  _OWORD v68[4]; // [rsp+120h] [rbp-138h] BYREF
  _QWORD v69[12]; // [rsp+160h] [rbp-F8h] BYREF
  _OWORD v70[5]; // [rsp+1C0h] [rbp-98h] BYREF

  v57 = a4;
  v50 = a2;
  v56 = (_DWORD *)a1;
  v55 = a7;
  v61 = a8;
  v62 = (_OWORD *)a11;
  v14 = 0;
  memset(v69, 0, 64);
  memset(v70, 0, 72);
  v67[0].m128i_i32[0] = 0;
  memset(&v67[0].m128i_u64[1], 0, 0x28uLL);
  LODWORD(v58) = 0;
  *((_QWORD *)&v58 + 1) = 0LL;
  v59 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AccessMode = PreviousMode;
  if ( PreviousMode )
  {
    v16 = a12;
    if ( a12 || a9 )
    {
      v17 = (_DWORD *)a1;
      if ( v50 < 0 )
      {
        if ( a1 >= MmUserProbeAddress )
          v17 = (_DWORD *)MmUserProbeAddress;
        *v17 = *v17;
      }
      else
      {
        if ( a1 >= MmUserProbeAddress )
          v17 = (_DWORD *)MmUserProbeAddress;
        *(_QWORD *)v17 = *(_QWORD *)v17;
      }
    }
    AlpcpProbeAndCaptureMessageHeader(v55, &v63);
    if ( a5 )
    {
      v18 = a5;
      if ( a5 >= MmUserProbeAddress )
        v18 = MmUserProbeAddress;
      v70[0] = *(_OWORD *)v18;
      v70[1] = *(_OWORD *)(v18 + 16);
      v70[2] = *(_OWORD *)(v18 + 32);
      v70[3] = *(_OWORD *)(v18 + 48);
      *(_QWORD *)&v70[4] = *(_QWORD *)(v18 + 64);
    }
    if ( a10 )
    {
      v21 = a10;
      if ( (unsigned __int64)a10 >= MmUserProbeAddress )
        v21 = (__m128i *)MmUserProbeAddress;
      v67[0] = *v21;
      v67[1] = v21[1];
      v67[2] = v21[2];
      if ( _mm_cvtsi128_si32(v67[0]) != 48 )
        return -1073741811;
      if ( ((unsigned __int8)a10 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v23 = a10;
      if ( (unsigned __int64)a10 >= MmUserProbeAddress )
        v23 = (_BYTE *)MmUserProbeAddress;
      *v23 = *v23;
      v23[47] = v23[47];
    }
    if ( a11 )
    {
      v19 = (_DWORD *)a11;
      if ( a11 >= MmUserProbeAddress )
        v19 = (_DWORD *)MmUserProbeAddress;
      if ( *v19 != 24 )
        return -1073741811;
      if ( (a11 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v20 = (_BYTE *)a11;
      if ( a11 >= MmUserProbeAddress )
        v20 = (_BYTE *)MmUserProbeAddress;
      *v20 = *v20;
      v20[23] = v20[23];
    }
    PreviousMode = AccessMode;
  }
  else
  {
    if ( a5 )
    {
      v70[0] = *(_OWORD *)a5;
      v70[1] = *(_OWORD *)(a5 + 16);
      v70[2] = *(_OWORD *)(a5 + 32);
      v70[3] = *(_OWORD *)(a5 + 48);
      *(_QWORD *)&v70[4] = *(_QWORD *)(a5 + 64);
    }
    v63 = *a7;
    v64 = a7[1];
    v65 = *((_QWORD *)a7 + 4);
    v16 = a12;
  }
  if ( !DWORD2(v64) )
    return -1073741281;
  v24 = 0LL;
  v52 = 0LL;
  if ( a3 )
  {
    result = ObReferenceObjectByHandle(a3, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    v24 = Object;
    v52 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    if ( !v16 )
      return -1073741504;
    LODWORD(v65) = 0;
  }
  v25 = AlpcpLookupMessage((__int64)v24, DWORD2(v64), v65, &v49);
  if ( v25 < 0 )
  {
    if ( v24 )
      ObfDereferenceObject(v24);
    return v25;
  }
  if ( v24 )
  {
    ObfDereferenceObject(v24);
  }
  else
  {
    v24 = *(_DWORD **)(v49 + 16);
    v52 = v24;
  }
  if ( (*(_DWORD *)(v49 + 40) & 0x80u) != 0 )
  {
    v14 = -1073740029;
LABEL_106:
    AlpcpCancelMessage(v24, v49, 0x10000LL);
    return v14;
  }
  if ( (*(unsigned __int16 *)(v49 + 228) & 0xFFFF00FF) != 0xA )
  {
LABEL_110:
    v25 = -1073741281;
    goto LABEL_111;
  }
  LOBYTE(v26) = v16;
  v25 = AlpcpValidateConnectionMessage(v24, &v63, v26);
  v51 = v25;
  if ( v25 < 0 )
  {
LABEL_111:
    AlpcpUnlockMessage(v49);
    return v25;
  }
  v27 = *(_QWORD *)(v49 + 24);
  BugCheckParameter2 = *(_QWORD *)(v27 + 16);
  if ( (*(_DWORD *)(v27 + 416) & 0x20) != 0 )
  {
    v14 = -1073741769;
    goto LABEL_106;
  }
  if ( (v24[64] & 0x100000) == 0 )
  {
    v24 = v52;
    if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)v52[3] )
      goto LABEL_110;
  }
  if ( !a9 )
  {
    v43 = KeAbPreAcquire(v27 + 352, 0LL, 0LL);
    v44 = v43;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 352), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v27 + 352), v43, v27 + 352);
    if ( v44 )
      *(_BYTE *)(v44 + 26) |= 1u;
    v45 = *(_DWORD *)(v27 + 416) | 0x10;
    *(_DWORD *)(v27 + 416) = v45;
    if ( (v45 & 0x100) != 0 )
      *(_QWORD *)(v27 + 56) = a6;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v27 + 352));
    KeAbPostRelease(v27 + 352);
    v24 = v52;
    goto LABEL_106;
  }
  v25 = AlpcpCreatePort(AccessMode, v57, &v53);
  if ( v25 < 0 )
    goto LABEL_111;
  v28 = v53;
  v29 = AlpcpInitializePort((__int64)v53, 3, 0);
  if ( v29 < 0 )
  {
    AlpcpUnlockMessage(v49);
    ObfDereferenceObject(v28);
    return v29;
  }
  inserted = AlpcpValidateAndSetPortAttributes(
               (__int64)v28,
               (int *)((unsigned __int64)v70 & ((unsigned __int128)-(__int128)a5 >> 64)),
               (__int64)v24,
               0LL,
               0,
               0,
               a12);
  v51 = inserted;
  if ( inserted < 0 )
  {
    v46 = v49;
    goto LABEL_117;
  }
  AlpcpSetOwnerProcessPort((__int64)v28, (_DWORD *)((unsigned __int64)v70 & -(__int64)(a5 != 0)));
  if ( a12 )
    *((_DWORD *)v28 + 104) |= 0x1000u;
  v31 = BugCheckParameter2;
  AlpcpReferenceBlob(BugCheckParameter2);
  v32 = KeAbPreAcquire(v31 - 16, 0LL, 0LL);
  v33 = v32;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v31 - 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v31 - 16), v32, v31 - 16);
  if ( v33 )
    *(_BYTE *)(v33 + 26) |= 1u;
  v34 = v53;
  *((_QWORD *)v53 + 2) = v31;
  *(_QWORD *)(v31 + 8) = v34;
  *(_QWORD *)(v27 + 424) = v52;
  *(_QWORD *)(v27 + 432) = v34;
  v34[53] = v27;
  v34[54] = v27;
  v35 = *(_DWORD *)(v27 + 416);
  if ( (v35 & 0x1000) != 0 && (v34[52] & 0x1000) != 0 )
  {
    *(_DWORD *)(v27 + 416) = v35 | 0x2000;
    *((_DWORD *)v34 + 104) |= 0x2000u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v31 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v31 - 16));
  KeAbPostRelease(v31 - 16);
  WORD2(v69[6]) = v63 + 40;
  *(_DWORD *)((char *)&v69[6] + 6) = 11;
  v36 = v50;
  v37 = v49;
  inserted = AlpcpSetupMessageDataForDeferredCopy(v49, (_DWORD)v55, v50, (unsigned __int16)v63, 0, AccessMode);
  if ( inserted < 0 )
  {
    AlpcpUnlockMessage(v37);
    v47 = v53;
    goto LABEL_121;
  }
  if ( !a12 || !*(_QWORD *)(v37 + 144) )
  {
    v28 = v53;
LABEL_66:
    if ( a10 )
    {
      memset(v68, 0, sizeof(v68));
      inserted = AlpcpMapLegacyPortView((char *)v28, (__int64)v67, (__int64)v68);
      if ( inserted >= 0 )
      {
        inserted = AlpcpMapLegacyPortRemoteView((PVOID)v27);
        if ( inserted >= 0 )
          v67[2].m128i_i64[1] = v69[10];
      }
    }
    else
    {
      inserted = AlpcpCaptureAttributes(v52, v36, v61, v37, v68);
    }
    if ( inserted >= 0 )
    {
      ObfReferenceObject(v28);
      inserted = ObInsertObjectEx(v28, 0LL, 2031617LL, 0, 0, 0LL, (__int64 *)&Handle);
      if ( inserted >= 0 )
      {
        AlpcpReleaseAttributes(v37 + 104);
        *(_OWORD *)(v37 + 104) = v68[0];
        *(_OWORD *)(v37 + 120) = v68[1];
        *(_OWORD *)(v37 + 136) = v68[2];
        *(_OWORD *)(v37 + 152) = v68[3];
        v38 = *(_QWORD *)(v37 + 200);
        if ( v38 )
        {
          PsReleaseProcessWakeCounter(v38, *(unsigned int *)(v37 + 248));
          *(_QWORD *)(v37 + 200) = 0LL;
        }
        v39 = Handle;
        if ( v36 < 0 )
          *v56 = (_DWORD)Handle;
        else
          *(_QWORD *)v56 = Handle;
        v40 = a6;
        if ( !a6 )
          v40 = v39;
        v28[7] = v40;
        if ( a10 )
        {
          *a10 = v67[0];
          a10[1] = v67[1];
          a10[2] = v67[2];
        }
        v41 = v62;
        if ( v62 )
        {
          *v62 = v58;
          *((_QWORD *)v41 + 2) = v59;
        }
        v69[0] = v28;
        v69[1] = v37;
        LODWORD(v69[6]) = 0x10000;
        inserted = AlpcpDispatchMessage(v69);
        v51 = inserted;
        v49 = 0LL;
        ObfDereferenceObject(v28);
        if ( inserted < 0 )
          NtClose(Handle);
        return inserted;
      }
    }
    AlpcpReleaseAttributes(v68);
    AlpcpUnlockMessage(v37);
    AlpcpFlushResourcesPort(v28);
    goto LABEL_119;
  }
  v28 = v53;
  v42 = AlpcpMapLegacyPortRemoteView(v53);
  inserted = v42;
  if ( v42 >= 0 )
    goto LABEL_66;
  v46 = v37;
LABEL_117:
  AlpcpUnlockMessage(v46);
LABEL_119:
  v47 = v28;
LABEL_121:
  ObfDereferenceObject(v47);
  return inserted;
}
