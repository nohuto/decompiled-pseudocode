/*
 * XREFs of AlpcpAcceptConnectPort @ 0x140471474
 * Callers:
 *     NtAlpcAcceptConnectPort @ 0x140470E24 (NtAlpcAcceptConnectPort.c)
 *     NtAcceptConnectPort @ 0x1405510A0 (NtAcceptConnectPort.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PspChargeJobWakeCounter @ 0x140417810 (PspChargeJobWakeCounter.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x140471338 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpReleaseAttributes @ 0x1404713BC (AlpcpReleaseAttributes.c)
 *     AlpcpInitializePort @ 0x140472328 (AlpcpInitializePort.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x140472674 (AlpcpValidateAndSetPortAttributes.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 *     AlpcpSetOwnerProcessPort @ 0x14047324C (AlpcpSetOwnerProcessPort.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpLookupMessage @ 0x14047A7B0 (AlpcpLookupMessage.c)
 *     AlpcpDispatchNewMessage @ 0x14047E410 (AlpcpDispatchNewMessage.c)
 *     AlpcpCaptureAttributes @ 0x14047EB30 (AlpcpCaptureAttributes.c)
 *     AlpcpDispatchReplyToPort @ 0x1404807F0 (AlpcpDispatchReplyToPort.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140480E50 (AlpcpDispatchReplyToWaitingThread.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     AlpcpFlushResourcesPort @ 0x1404A36CC (AlpcpFlushResourcesPort.c)
 *     AlpcpMapLegacyPortView @ 0x14052ABD8 (AlpcpMapLegacyPortView.c)
 *     AlpcpCancelMessage @ 0x14052BBC4 (AlpcpCancelMessage.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x1405820A8 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall AlpcpAcceptConnectPort(
        HANDLE *a1,
        int a2,
        void *a3,
        __int64 a4,
        ULONG64 a5,
        void *a6,
        ULONG64 a7,
        __int64 a8,
        char a9,
        ULONG64 a10,
        ULONG64 a11,
        char a12)
{
  KPROCESSOR_MODE PreviousMode; // al
  char v14; // r12
  int v15; // r8d
  _QWORD *v16; // rcx
  __m128i *v17; // rcx
  ULONG64 v18; // rcx
  __m128i *v19; // rcx
  NTSTATUS result; // eax
  _BYTE *v21; // rcx
  _DWORD *v22; // rcx
  _BYTE *v23; // rcx
  int v24; // r15d
  __int64 v25; // rdx
  signed int inserted; // edi
  __int64 v27; // r8
  __int64 v28; // r9
  ULONG_PTR v29; // r14
  int v30; // ecx
  int v31; // eax
  __int64 v32; // r13
  PVOID *v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // r9
  bool v36; // bl
  _QWORD *v37; // rax
  __int64 v38; // r13
  ULONG_PTR v39; // rbx
  _KPROCESS *Process; // rcx
  __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // rbx
  int v44; // eax
  _DWORD *v45; // r15
  bool v46; // cf
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // r9
  __int64 v52; // rdi
  _QWORD *v53; // rcx
  int v54; // edx
  volatile signed __int64 *v55; // rdi
  unsigned int v56; // r15d
  __int64 v57; // rdi
  __int64 v58; // r8
  _QWORD *v59; // rdi
  char v60; // al
  HANDLE v61; // rax
  HANDLE v62; // rcx
  __m128i *v63; // rax
  _OWORD *v64; // rax
  signed int v65; // eax
  HANDLE v66; // rax
  void *v67; // r13
  int v68; // edi
  char v69; // cl
  signed __int64 v70; // rcx
  int v71; // [rsp+50h] [rbp-268h]
  KPROCESSOR_MODE AccessMode; // [rsp+54h] [rbp-264h]
  _BYTE *v73; // [rsp+60h] [rbp-258h]
  PVOID v74; // [rsp+68h] [rbp-250h]
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-248h] BYREF
  PVOID v76; // [rsp+78h] [rbp-240h] BYREF
  int v77; // [rsp+80h] [rbp-238h]
  int v78; // [rsp+84h] [rbp-234h]
  HANDLE Handle; // [rsp+88h] [rbp-230h] BYREF
  ULONG64 v80; // [rsp+90h] [rbp-228h]
  __m128i v81; // [rsp+98h] [rbp-220h]
  __m128i v82; // [rsp+A8h] [rbp-210h]
  __int64 v83; // [rsp+B8h] [rbp-200h]
  HANDLE *v84; // [rsp+C0h] [rbp-1F8h]
  PVOID v85; // [rsp+D0h] [rbp-1E8h]
  __m128i *v86; // [rsp+D8h] [rbp-1E0h]
  __int128 v87; // [rsp+E0h] [rbp-1D8h]
  __int64 v88; // [rsp+F0h] [rbp-1C8h]
  PVOID Object; // [rsp+100h] [rbp-1B8h] BYREF
  __int64 v90; // [rsp+108h] [rbp-1B0h]
  ULONG64 v91; // [rsp+110h] [rbp-1A8h]
  _OWORD *v92; // [rsp+118h] [rbp-1A0h]
  __int64 v93; // [rsp+120h] [rbp-198h]
  __m128i v94[3]; // [rsp+128h] [rbp-190h] BYREF
  _QWORD v95[8]; // [rsp+160h] [rbp-158h] BYREF
  __m128i v96; // [rsp+1A0h] [rbp-118h]
  __int64 v97; // [rsp+1B0h] [rbp-108h]
  _OWORD v98[4]; // [rsp+1C0h] [rbp-F8h] BYREF
  __int64 v100; // [rsp+218h] [rbp-A0h]
  _OWORD v101[5]; // [rsp+220h] [rbp-98h] BYREF

  v93 = a4;
  v77 = a2;
  v84 = a1;
  v80 = a5;
  v91 = a7;
  v90 = a8;
  v86 = (__m128i *)a10;
  v92 = (_OWORD *)a11;
  memset(v95, 0, sizeof(v95));
  memset(v101, 0, 72);
  memset(v94, 0, sizeof(v94));
  v87 = 0uLL;
  v88 = 0LL;
  v76 = 0LL;
  v74 = 0LL;
  v85 = 0LL;
  v78 = 0;
  BugCheckParameter2 = 0LL;
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AccessMode = PreviousMode;
  if ( PreviousMode )
  {
    v14 = a12;
    if ( a12 || a9 )
    {
      v15 = v77;
      v16 = v84;
      if ( v77 >= 0 )
      {
        if ( (unsigned __int64)v84 >= MmUserProbeAddress )
          v16 = (_QWORD *)MmUserProbeAddress;
        *v16 = *v16;
      }
      else
      {
        if ( (unsigned __int64)v84 >= MmUserProbeAddress )
          v16 = (_QWORD *)MmUserProbeAddress;
        *(_DWORD *)v16 = *(_DWORD *)v16;
      }
    }
    else
    {
      v15 = v77;
    }
    v17 = (__m128i *)a7;
    if ( (v15 & 0xC0000000) == 0x80000000 )
    {
      if ( a7 >= MmUserProbeAddress )
        v17 = (__m128i *)MmUserProbeAddress;
      v96 = *v17;
      v97 = v17[1].m128i_i64[0];
      v81.m128i_i16[0] = _mm_cvtsi128_si32(v96);
      v81.m128i_i16[1] = v96.m128i_i16[0] + 40;
      v81.m128i_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v96, 4));
      v81.m128i_i64[1] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v96, 8));
      v82.m128i_i64[0] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v96, 12));
      v82.m128i_i32[2] = v97;
      v83 = HIDWORD(v97);
    }
    else
    {
      if ( a7 >= MmUserProbeAddress )
        v17 = (__m128i *)MmUserProbeAddress;
      v81 = *v17;
      v82 = v17[1];
      v83 = v17[2].m128i_i64[0];
    }
    if ( a5 )
    {
      v18 = a5;
      if ( a5 >= MmUserProbeAddress )
        v18 = MmUserProbeAddress;
      v101[0] = *(_OWORD *)v18;
      v101[1] = *(_OWORD *)(v18 + 16);
      v101[2] = *(_OWORD *)(v18 + 32);
      v101[3] = *(_OWORD *)(v18 + 48);
      *(_QWORD *)&v101[4] = *(_QWORD *)(v18 + 64);
    }
    if ( a10 )
    {
      v19 = (__m128i *)a10;
      if ( a10 >= MmUserProbeAddress )
        v19 = (__m128i *)MmUserProbeAddress;
      v94[0] = *v19;
      v94[1] = v19[1];
      v94[2] = v19[2];
      if ( _mm_cvtsi128_si32(v94[0]) != 48 )
        return -1073741811;
      if ( (a10 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v21 = (_BYTE *)a10;
      if ( a10 >= MmUserProbeAddress )
        v21 = (_BYTE *)MmUserProbeAddress;
      *v21 = *v21;
      v21[47] = v21[47];
    }
    if ( a11 )
    {
      v22 = (_DWORD *)a11;
      if ( a11 >= MmUserProbeAddress )
        v22 = (_DWORD *)MmUserProbeAddress;
      if ( *v22 != 24 )
        return -1073741811;
      if ( (a11 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v23 = (_BYTE *)a11;
      if ( a11 >= MmUserProbeAddress )
        v23 = (_BYTE *)MmUserProbeAddress;
      *v23 = *v23;
      v23[23] = v23[23];
    }
  }
  else
  {
    if ( a5 )
    {
      v101[0] = *(_OWORD *)a5;
      v101[1] = *(_OWORD *)(a5 + 16);
      v101[2] = *(_OWORD *)(a5 + 32);
      v101[3] = *(_OWORD *)(a5 + 48);
      *(_QWORD *)&v101[4] = *(_QWORD *)(a5 + 64);
    }
    v81 = *(__m128i *)a7;
    v82 = *(__m128i *)(a7 + 16);
    v83 = *(_QWORD *)(a7 + 32);
    v14 = a12;
  }
  if ( !v82.m128i_i32[2] )
    return -1073741281;
  v73 = 0LL;
  if ( a3 )
  {
    v24 = 1;
    result = ObReferenceObjectByHandle(a3, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    v74 = Object;
    v73 = Object;
    if ( result < 0 )
      return result;
    v85 = Object;
  }
  else
  {
    if ( !v14 )
      return -1073741504;
    LODWORD(v83) = 0;
    v24 = 1;
  }
  inserted = AlpcpLookupMessage(v73, v82.m128i_u32[2], (unsigned int)v83, &BugCheckParameter2);
  v71 = inserted;
  v29 = BugCheckParameter2;
  if ( inserted < 0 )
    goto LABEL_167;
  if ( !v73 )
    v73 = *(_BYTE **)(BugCheckParameter2 + 16);
  v30 = *(_DWORD *)(BugCheckParameter2 + 40);
  if ( (v30 & 0x80u) != 0 )
  {
    inserted = -1073740029;
    v71 = -1073740029;
    v31 = 0;
    goto LABEL_168;
  }
  if ( (*(unsigned __int16 *)(BugCheckParameter2 + 228) & 0xFFFF00FF) != 0xA )
  {
    inserted = -1073741281;
LABEL_166:
    v71 = inserted;
LABEL_167:
    v24 = 0;
    v31 = 0;
    goto LABEL_168;
  }
  v25 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( v25 != *(_QWORD *)(BugCheckParameter2 + 184) )
    goto LABEL_165;
  if ( (_BYTE *)v25 != v73 )
  {
    if ( (v30 & 7) == 0 )
    {
      v32 = *(_QWORD *)(BugCheckParameter2 + 24);
      if ( v32 )
      {
        v33 = *(PVOID **)(v32 + 16);
        v34 = KeAbPreAcquire((ULONG_PTR)(v33 - 2), 0LL, 0LL, v28);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v33 - 2, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((unsigned __int64 *)v33 - 2, v34, (ULONG_PTR)(v33 - 2), v35);
        if ( v34 )
          *(_BYTE *)(v34 + 26) |= 1u;
        if ( ((*(_DWORD *)(v32 + 416) >> 1) & 3) == 2 )
          v36 = *v33 == v73 || v33[1] == v73;
        else
          v36 = v33[2] == v73;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v33 - 2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v33 - 2);
        KeAbPostRelease((ULONG_PTR)(v33 - 2));
        v29 = BugCheckParameter2;
        goto LABEL_84;
      }
LABEL_165:
      inserted = -1073740030;
      goto LABEL_166;
    }
    if ( (v73[416] & 6) != 6 )
      goto LABEL_165;
    v37 = (_QWORD *)*((_QWORD *)v73 + 2);
    if ( !v37 || *v37 != v25 )
      goto LABEL_165;
  }
  if ( (v30 & 7) != 3 || (v30 & 0x4000) != 0 )
    goto LABEL_165;
  v36 = 1;
LABEL_84:
  if ( !v36 )
    goto LABEL_165;
  if ( v14 )
  {
    v25 = (__int64)v73;
    if ( v81.m128i_u16[0] > (unsigned __int64)(*((_QWORD *)v73 + 34) - 40LL) )
      v81.m128i_i16[0] = *((_WORD *)v73 + 136) - 40;
    inserted = 0;
    v71 = 0;
  }
  else
  {
    inserted = -1073741811;
    if ( (unsigned int)v81.m128i_i16[0] < (unsigned __int16)(v81.m128i_i16[0] + 40) )
      inserted = v81.m128i_u16[1] != v81.m128i_u16[0] + 40LL ? 0xC000000D : 0;
    v71 = inserted;
  }
  if ( inserted < 0 )
    goto LABEL_98;
  v38 = *(_QWORD *)(v29 + 24);
  v39 = *(_QWORD *)(v38 + 16);
  if ( (*(_DWORD *)(v38 + 416) & 0x20) != 0 )
  {
    inserted = -1073741769;
    v71 = -1073741769;
    v31 = 0;
    goto LABEL_168;
  }
  LODWORD(Process) = *((_DWORD *)v73 + 64);
  if ( ((unsigned int)Process & 0x100000) == 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v29 = BugCheckParameter2;
    if ( Process != *((_KPROCESS **)v73 + 3) )
    {
      inserted = -1073741281;
      v71 = -1073741281;
LABEL_98:
      v24 = 0;
      v31 = 0;
      goto LABEL_168;
    }
  }
  if ( !a9 )
  {
    v41 = KeAbPreAcquire(v38 + 352, 0LL, 0LL, v28);
    v43 = v41;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 352), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v38 + 352), v41, v38 + 352, v42);
    if ( v43 )
      *(_BYTE *)(v43 + 26) |= 1u;
    v44 = *(_DWORD *)(v38 + 416) | 0x10;
    *(_DWORD *)(v38 + 416) = v44;
    if ( (v44 & 0x100) != 0 )
      *(_QWORD *)(v38 + 56) = a6;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v38 + 352));
    KeAbPostRelease(v38 + 352);
    inserted = 0;
    v71 = 0;
    v29 = BugCheckParameter2;
    v31 = 0;
    goto LABEL_168;
  }
  LOBYTE(v28) = AccessMode;
  LOBYTE(Process) = AccessMode;
  inserted = ObCreateObject((_DWORD)Process, (_DWORD)AlpcPortObjectType, v93, v28, 0, 472, 0, 0, (__int64)&v76);
  if ( inserted >= 0 )
    memset(v76, 0, 0x1D8uLL);
  v71 = inserted;
  if ( inserted < 0 )
    goto LABEL_98;
  v45 = v76;
  inserted = AlpcpInitializePort(v76, 3LL);
  v71 = inserted;
  if ( inserted < 0 )
    goto LABEL_98;
  inserted = AlpcpValidateAndSetPortAttributes(
               (_DWORD)v45,
               (unsigned __int64)v101 & ((unsigned __int128)-(__int128)v80 >> 64),
               (_DWORD)v73,
               0,
               0,
               0,
               a12);
  v71 = inserted;
  if ( inserted < 0 )
    goto LABEL_98;
  v46 = v80 != 0;
  v80 = -(__int64)v80;
  AlpcpSetOwnerProcessPort(v45, (unsigned __int64)v101 & -(__int64)v46);
  if ( a12 )
    v45[104] |= 0x1000u;
  _m_prefetchw((const void *)(v39 - 24));
  v48 = *(_QWORD *)(v39 - 24);
  while ( v48 > 0 )
  {
    v49 = v48;
    v48 = _InterlockedCompareExchange64((volatile signed __int64 *)(v39 - 24), v48 + 1, v48);
    if ( v48 == v49 )
      goto LABEL_122;
  }
  if ( v48 )
    KeBugCheckEx(0x18u, 0LL, v39, 0x20uLL, v48);
LABEL_122:
  v50 = KeAbPreAcquire(v39 - 16, 0LL, 0LL, v47);
  v52 = v50;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v39 - 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v39 - 16), v50, v39 - 16, v51);
  if ( v52 )
    *(_BYTE *)(v52 + 26) |= 1u;
  v53 = v76;
  *((_QWORD *)v76 + 2) = v39;
  *(_QWORD *)(v39 + 8) = v53;
  *(_QWORD *)(v38 + 424) = v73;
  *(_QWORD *)(v38 + 432) = v53;
  v53[53] = v38;
  v53[54] = v38;
  v54 = *(_DWORD *)(v38 + 416);
  if ( (v54 & 0x1000) != 0 && (v53[52] & 0x1000) != 0 )
  {
    *(_DWORD *)(v38 + 416) = v54 | 0x2000;
    *((_DWORD *)v53 + 104) |= 0x2000u;
  }
  v55 = (volatile signed __int64 *)(v39 - 16);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v39 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v55);
  KeAbPostRelease((ULONG_PTR)v55);
  WORD2(v95[6]) = v81.m128i_i16[0] + 40;
  *(_DWORD *)((char *)&v95[6] + 6) = 11;
  v56 = v77;
  v29 = BugCheckParameter2;
  inserted = AlpcpSetupMessageDataForDeferredCopy(BugCheckParameter2, v91, v77, v81.m128i_u16[0], 0, AccessMode);
  v71 = inserted;
  if ( inserted < 0
    || a12 && *(_QWORD *)(v29 + 144) && (inserted = AlpcpMapLegacyPortRemoteView(v76), v71 = inserted, inserted < 0) )
  {
    v24 = 0;
    v31 = 0;
  }
  else
  {
    if ( v86 )
    {
      memset(v98, 0, sizeof(v98));
      inserted = AlpcpMapLegacyPortView(v76);
      v71 = inserted;
      if ( inserted >= 0 )
      {
        inserted = AlpcpMapLegacyPortRemoteView((PVOID)v38);
        v71 = inserted;
        if ( inserted >= 0 )
          v94[2].m128i_i64[1] = v100;
      }
    }
    else
    {
      inserted = AlpcpCaptureAttributes(v73, v56, v90, v29, v98);
      v71 = inserted;
    }
    if ( inserted >= 0 )
    {
      ObfReferenceObject(v76);
      inserted = ObInsertObject(v76, 0LL, 0x1F0001u, 0, 0LL, &Handle);
      v71 = inserted;
      if ( inserted >= 0 )
      {
        AlpcpReleaseAttributes((_QWORD *)(v29 + 104), v25, v27, v28);
        *(_OWORD *)(v29 + 104) = v98[0];
        *(_OWORD *)(v29 + 120) = v98[1];
        *(_OWORD *)(v29 + 136) = v98[2];
        *(_OWORD *)(v29 + 152) = v98[3];
        v57 = *(_QWORD *)(v29 + 200);
        if ( v57 )
        {
          v58 = *(_QWORD *)(v29 + 200) & 7LL;
          v59 = (_QWORD *)(v57 & 0xFFFFFFFFFFFFFFF8uLL);
          v60 = 1;
          if ( (_DWORD)v58 == 5 )
          {
            v60 = 5;
            LODWORD(v58) = 0;
          }
          PspChargeJobWakeCounter(v59, 0LL, v58, -1LL, v60, 0LL, *(unsigned int *)(v29 + 248));
          ObDereferenceObjectDeferDeleteWithTag(v59, 0x6B577350u);
          *(_QWORD *)(v29 + 200) = 0LL;
        }
        v61 = Handle;
        if ( v77 >= 0 )
          *v84 = Handle;
        else
          *(_DWORD *)v84 = (_DWORD)Handle;
        v62 = a6;
        if ( !a6 )
          v62 = v61;
        *((_QWORD *)v76 + 7) = v62;
        v63 = v86;
        if ( v86 )
        {
          *v86 = v94[0];
          v63[1] = v94[1];
          v63[2] = v94[2];
        }
        v64 = v92;
        if ( v92 )
        {
          *v92 = v87;
          *((_QWORD *)v64 + 2) = v88;
        }
        v95[0] = v76;
        v95[1] = v29;
        LODWORD(v95[6]) = 0x10000;
        if ( *(_QWORD *)(v29 + 24) )
        {
          if ( *(_QWORD *)(v29 + 32) )
            v65 = AlpcpDispatchReplyToWaitingThread(v95);
          else
            v65 = AlpcpDispatchReplyToPort(v95);
        }
        else
        {
          v65 = AlpcpDispatchNewMessage(v95);
        }
        inserted = v65;
        v71 = v65;
        v66 = Handle;
        if ( inserted >= 0 )
          v66 = 0LL;
        Handle = v66;
        v29 = 0LL;
        BugCheckParameter2 = 0LL;
        v24 = 0;
        v67 = v74;
        v31 = 0;
        goto LABEL_169;
      }
    }
    v24 = 0;
    v31 = 1;
  }
LABEL_168:
  v67 = v74;
LABEL_169:
  if ( v29 )
  {
    if ( v31 )
    {
      AlpcpReleaseAttributes(v98, v25, v27, v28);
      v78 = 1;
    }
    if ( v24 )
    {
      AlpcpCancelMessage(v73, v29, 0x10000LL);
    }
    else
    {
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v29);
      v68 = 0;
      v69 = *(_BYTE *)(v29 - 32);
      if ( (v69 & 1) != 0 )
      {
        v68 = 0x10000 - *(__int16 *)(v29 - 30);
        *(_BYTE *)(v29 - 32) = v69 & 0xFE;
        *(_WORD *)(v29 - 30) = 0;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v29 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v29 - 16));
      KeAbPostRelease(v29 - 16);
      if ( v68 > 0 )
      {
        v70 = -v68 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 - 24), -v68);
        if ( v70 <= 0 )
        {
          if ( v70 )
            KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v70);
          AlpcpDestroyBlob(BugCheckParameter2);
        }
      }
      inserted = v71;
    }
  }
  if ( v67 )
    ObfDereferenceObject(v67);
  if ( v76 )
  {
    if ( v78 )
      AlpcpFlushResourcesPort(v76);
    ObfDereferenceObject(v76);
  }
  if ( Handle )
    NtClose(Handle);
  return inserted;
}
