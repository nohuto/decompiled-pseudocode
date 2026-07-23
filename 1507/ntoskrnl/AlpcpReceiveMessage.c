/*
 * XREFs of AlpcpReceiveMessage @ 0x14047B8A0
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x14047B5F0 (NtAlpcSendWaitReceivePort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     AlpcpReceiveView @ 0x140474CA0 (AlpcpReceiveView.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpReadMessageData @ 0x14047A100 (AlpcpReadMessageData.c)
 *     AlpcpLookupMessage @ 0x14047A7B0 (AlpcpLookupMessage.c)
 *     AlpcpExposeHandleAttribute @ 0x14047CDC0 (AlpcpExposeHandleAttribute.c)
 *     AlpcpExposeTokenAttribute @ 0x14047F1D0 (AlpcpExposeTokenAttribute.c)
 *     AlpcpReceiveMessagePort @ 0x14047F3A0 (AlpcpReceiveMessagePort.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     AlpcpCancelMessage @ 0x14052BBC4 (AlpcpCancelMessage.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x14052F9E8 (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x14054F010 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpLogReceiveMessage @ 0x1406A0280 (AlpcpLogReceiveMessage.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpReceiveMessage(__int64 a1, ULONG64 a2, _QWORD *a3, _DWORD *a4, __int64 *a5)
{
  ULONG64 v5; // r10
  struct _KTHREAD *CurrentThread; // rcx
  int v9; // r11d
  unsigned __int8 v10; // r12
  __int64 *v11; // rcx
  unsigned int v12; // edx
  _BYTE *v13; // rcx
  _BYTE *v14; // rcx
  int v15; // esi
  int v16; // eax
  int *v17; // rcx
  int v18; // edi
  int v19; // eax
  __int64 v20; // r15
  __int64 v21; // rcx
  ULONG v22; // r8d
  __int64 v23; // rdx
  _BYTE *v24; // rcx
  unsigned __int64 *v25; // rcx
  _QWORD *v26; // rcx
  _DWORD *v27; // r12
  int v28; // eax
  __int64 v29; // r9
  ULONG_PTR v30; // rdi
  int v31; // esi
  char v32; // cl
  signed __int64 BugCheckParameter4; // rcx
  int v34; // esi
  char v35; // cl
  signed __int64 v36; // rcx
  signed __int64 *v37; // rsi
  __int64 v38; // r9
  __int64 v39; // r13
  int v40; // eax
  ULONG_PTR v41; // rdi
  int v42; // r12d
  char v43; // cl
  signed __int64 v44; // rcx
  ULONG_PTR v45; // rdi
  int v46; // r12d
  char v47; // cl
  signed __int64 v48; // rcx
  volatile signed __int64 *v49; // r13
  __int64 v50; // rax
  __int64 v51; // r9
  ULONG_PTR v52; // rcx
  ULONG_PTR v53; // r12
  unsigned int v54; // eax
  __int64 v55; // rax
  __int64 v56; // rcx
  unsigned __int64 *v57; // r9
  _DWORD *v58; // r8
  ULONG_PTR v59; // rcx
  ULONG_PTR v60; // rsi
  unsigned int v62; // ecx
  __int16 v63; // dx
  unsigned __int16 v64; // ax
  __int64 v65; // rdi
  __int16 v66; // ax
  char *v67; // rdx
  char *v68; // r12
  __int64 v69; // rdi
  size_t v70; // rdi
  size_t v71; // rax
  size_t v72; // r14
  const void *v73; // rdx
  char *v74; // rcx
  size_t v75; // r8
  _DWORD *v76; // rdi
  ULONG_PTR v77; // r14
  int v78; // r12d
  __int64 v79; // rcx
  _DWORD *v80; // rcx
  __int64 v81; // rax
  ULONG_PTR v82; // rdi
  __int64 v83; // rax
  __int64 v84; // rdx
  int v85; // esi
  signed __int64 v86; // rcx
  bool v87; // cc
  ULONG_PTR v88; // rcx
  __int64 v89; // rcx
  int v90; // eax
  __int64 v91; // rcx
  _DWORD *v92; // r10
  int v93; // eax
  int v94; // eax
  int v95; // eax
  __int64 v96; // rcx
  bool v97; // zf
  LONG *v98; // rcx
  signed int v99; // r12d
  unsigned int v100; // edx
  __int64 v101; // r12
  __int64 v102; // rax
  ULONG_PTR v103; // rdi
  __int64 v104; // rax
  __int64 v105; // rdx
  int v106; // esi
  signed __int64 v107; // rcx
  ULONG_PTR v108; // rcx
  __int64 v109; // rcx
  __int64 v110; // rcx
  _DWORD *v111; // r10
  __int64 v112; // rax
  int v113; // eax
  __int64 v114; // rax
  __int64 v115; // rcx
  signed int v116; // r12d
  _DWORD *v117; // r9
  int v118; // edi
  ULONG_PTR v119; // rsi
  char v120; // cl
  signed __int64 v121; // rcx
  __int64 v122; // rbx
  int (__fastcall *v123)(ULONG_PTR); // rax
  _SLIST_HEADER *v124; // r8
  unsigned int v125; // [rsp+30h] [rbp-148h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-140h] BYREF
  ULONG_PTR v127; // [rsp+40h] [rbp-138h] BYREF
  char v128[8]; // [rsp+48h] [rbp-130h] BYREF
  _QWORD *v129; // [rsp+50h] [rbp-128h]
  _DWORD *v130; // [rsp+58h] [rbp-120h]
  int v131; // [rsp+60h] [rbp-118h]
  int v132; // [rsp+64h] [rbp-114h]
  int v133; // [rsp+68h] [rbp-110h]
  char v134; // [rsp+70h] [rbp-108h]
  _DWORD *v135; // [rsp+78h] [rbp-100h]
  __int64 v136; // [rsp+80h] [rbp-F8h]
  ULONG_PTR v137; // [rsp+88h] [rbp-F0h]
  __int64 v138; // [rsp+90h] [rbp-E8h]
  __int64 v139; // [rsp+98h] [rbp-E0h]
  __int64 v140; // [rsp+A0h] [rbp-D8h]
  __int64 v141; // [rsp+A8h] [rbp-D0h]
  __int64 v142; // [rsp+B0h] [rbp-C8h]
  __int64 v143; // [rsp+B8h] [rbp-C0h]
  int v144; // [rsp+C0h] [rbp-B8h]
  __int64 v145; // [rsp+C8h] [rbp-B0h]
  __int64 v146; // [rsp+D0h] [rbp-A8h]
  _DWORD *v147; // [rsp+D8h] [rbp-A0h]
  unsigned __int64 v148; // [rsp+E0h] [rbp-98h]
  LONG *p_LockNV; // [rsp+E8h] [rbp-90h]
  __int64 v150; // [rsp+F0h] [rbp-88h] BYREF
  __int64 v151; // [rsp+F8h] [rbp-80h]
  __int64 v152; // [rsp+100h] [rbp-78h]
  __int64 v153; // [rsp+108h] [rbp-70h]
  __int64 v154; // [rsp+110h] [rbp-68h]
  _DWORD *v155; // [rsp+118h] [rbp-60h]
  int v156; // [rsp+120h] [rbp-58h]
  _DWORD v157[6]; // [rsp+128h] [rbp-50h] BYREF
  __int64 v158; // [rsp+140h] [rbp-38h]
  __int64 v159; // [rsp+148h] [rbp-30h]
  char v160; // [rsp+180h] [rbp+8h] BYREF

  v135 = a4;
  v5 = (ULONG64)a3;
  v129 = a3;
  CurrentThread = KeGetCurrentThread();
  p_LockNV = &CurrentThread->Header.LockNV;
  v9 = *(_DWORD *)(a1 + 48);
  v144 = v9;
  v130 = *(_DWORD **)a1;
  v155 = v130;
  v10 = CurrentThread->gap0[10];
  v150 = 0LL;
  v148 = -1LL;
  v132 = 0;
  v133 = 0;
  if ( v10 )
  {
    v11 = a5;
    if ( a5 )
    {
      if ( (unsigned __int64)a5 >= MmUserProbeAddress )
        v11 = (__int64 *)MmUserProbeAddress;
      v150 = *v11;
      a5 = &v150;
    }
    v12 = v9 & 0xC0000000;
    if ( (v9 & 0xC0000000) == 0x80000000 )
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = (_BYTE *)a2;
      if ( a2 >= MmUserProbeAddress )
        v13 = (_BYTE *)MmUserProbeAddress;
      *v13 = *v13;
      v13[23] = v13[23];
    }
    else
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = (_BYTE *)a2;
      if ( a2 >= MmUserProbeAddress )
        v14 = (_BYTE *)MmUserProbeAddress;
      *v14 = *v14;
      v14[39] = v14[39];
    }
    v15 = v9 & 0x1000000;
    if ( (v9 & 0x1000000) != 0 )
    {
      if ( v12 == 0x80000000 )
      {
        v132 = *(_DWORD *)(a2 + 16);
        v16 = *(_DWORD *)(a2 + 20);
      }
      else
      {
        v132 = *(_DWORD *)(a2 + 24);
        v16 = *(_DWORD *)(a2 + 32);
      }
      v133 = v16;
    }
    if ( a4 )
    {
      v134 = 1;
      v17 = a4;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        v17 = (int *)MmUserProbeAddress;
      v18 = *v17;
      v19 = *v17;
      v20 = 2LL;
      v21 = 8LL;
      if ( v12 == 0x80000000 )
      {
        if ( v19 < 0 )
          v21 = 20LL;
        if ( (v18 & 0x40000000) != 0 )
          v21 = (unsigned int)(v21 + 16);
        if ( (v18 & 0x20000000) != 0 )
          v21 = (unsigned int)(v21 + 20);
        if ( (v18 & 0x10000000) != 0 )
          v21 = (unsigned int)(v21 + 16);
        if ( (v18 & 0x8000000) != 0 )
          v21 = (unsigned int)(v21 + 24);
        v22 = 4;
      }
      else
      {
        if ( v19 < 0 )
          v21 = 32LL;
        if ( (v18 & 0x40000000) != 0 )
          v21 = (unsigned int)(v21 + 32);
        if ( (v18 & 0x20000000) != 0 )
          v21 = (unsigned int)(v21 + 32);
        if ( (v18 & 0x10000000) != 0 )
          v21 = (unsigned int)(v21 + 24);
        if ( (v18 & 0x8000000) != 0 )
          v21 = (unsigned int)(v21 + 24);
        if ( (v18 & 0x4000000) != 0 )
          v21 = (unsigned int)(v21 + 8);
        v22 = 8;
      }
      v23 = (unsigned int)v21;
      if ( (unsigned __int64)(v21 - 1) > 0xFFE )
      {
        ProbeForWrite(a4, (unsigned int)v21, v22);
        v5 = (ULONG64)v129;
      }
      else
      {
        if ( ((v22 - 1) & (unsigned int)a4) != 0 )
          ExRaiseDatatypeMisalignment();
        v24 = a4;
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          v24 = (_BYTE *)MmUserProbeAddress;
        *v24 = *v24;
        v24[v23 - 1] = v24[v23 - 1];
      }
      v131 = v18;
    }
    else
    {
      v18 = 0;
      v131 = 0;
      v20 = 2LL;
    }
    if ( v5 )
    {
      v25 = (unsigned __int64 *)v5;
      if ( v5 >= MmUserProbeAddress )
        v25 = (unsigned __int64 *)MmUserProbeAddress;
      v148 = *v25;
      v26 = (_QWORD *)v5;
      if ( v5 >= MmUserProbeAddress )
        v26 = (_QWORD *)MmUserProbeAddress;
      *v26 = *v26;
      v18 = v131;
    }
  }
  else
  {
    v15 = v9 & 0x1000000;
    if ( (v9 & 0x1000000) != 0 )
    {
      v132 = *(_DWORD *)(a2 + 24);
      v133 = *(_DWORD *)(a2 + 32);
    }
    if ( a4 )
    {
      v18 = *a4;
      v131 = *a4;
    }
    else
    {
      v18 = 0;
      v131 = 0;
    }
    if ( a3 )
      v148 = *a3;
    if ( (CurrentThread->MiscFlags & 0x400) != 0 )
      v10 = 1;
    v20 = 2LL;
  }
  if ( !v15 )
  {
    v28 = AlpcpReceiveMessagePort(a1, v10, (_DWORD)a5, (unsigned int)&v127, v18);
LABEL_167:
    v125 = v28;
LABEL_168:
    v5 = (ULONG64)v129;
    goto LABEL_169;
  }
  if ( !v132 )
  {
    v125 = -1073741811;
LABEL_169:
    v60 = v127;
    goto LABEL_170;
  }
  v27 = *(_DWORD **)a1;
  v147 = v27;
  v28 = AlpcpLookupMessage((__int64)v27, v132, v133, &BugCheckParameter2);
  if ( v28 < 0 )
    goto LABEL_167;
  v30 = BugCheckParameter2;
  if ( v27 != *(_DWORD **)(BugCheckParameter2 + 16) )
  {
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
    v31 = 0;
    v32 = *(_BYTE *)(v30 - 32);
    if ( (v32 & 1) != 0 )
    {
      v31 = 0x10000 - *(__int16 *)(v30 - 30);
      *(_BYTE *)(v30 - 32) = v32 & 0xFE;
      *(_WORD *)(v30 - 30) = 0;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v30 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v30 - 16));
    KeAbPostRelease(v30 - 16);
    if ( v31 > 0 )
    {
      BugCheckParameter4 = -v31 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v30 - 24), -v31);
      if ( BugCheckParameter4 <= 0 )
      {
        if ( BugCheckParameter4 )
          KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
        AlpcpDestroyBlob(BugCheckParameter2);
      }
    }
    v125 = -1073740030;
    goto LABEL_168;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 7) != 4 )
  {
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
    v34 = 0;
    v35 = *(_BYTE *)(v30 - 32);
    if ( (v35 & 1) != 0 )
    {
      v34 = 0x10000 - *(__int16 *)(v30 - 30);
      *(_BYTE *)(v30 - 32) = v35 & 0xFE;
      *(_WORD *)(v30 - 30) = 0;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v30 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v30 - 16));
    KeAbPostRelease(v30 - 16);
    if ( v34 > 0 )
    {
      v36 = -v34 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v30 - 24), -v34);
      if ( v36 <= 0 )
      {
        if ( v36 )
          KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v36);
        AlpcpDestroyBlob(BugCheckParameter2);
      }
    }
    v125 = -1073741811;
    goto LABEL_168;
  }
  v37 = (signed __int64 *)(v27 + 88);
  v39 = KeAbPreAcquire((ULONG_PTR)(v27 + 88), 0LL, 0LL, v29);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v27 + 44, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)v27 + 44, v39, (ULONG_PTR)(v27 + 88), v38);
  if ( v39 )
    *(_BYTE *)(v39 + 26) |= 1u;
  v40 = v27[104];
  if ( (v40 & 0x40) != 0 )
  {
    v41 = BugCheckParameter2;
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
    v42 = 0;
    v43 = *(_BYTE *)(v41 - 32);
    if ( (v43 & 1) != 0 )
    {
      v42 = 0x10000 - *(__int16 *)(v41 - 30);
      *(_BYTE *)(v41 - 32) = v43 & 0xFE;
      *(_WORD *)(v41 - 30) = 0;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v41 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v41 - 16));
    KeAbPostRelease(v41 - 16);
    if ( v42 > 0 )
    {
      v44 = -v42 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 - 24), -v42);
      if ( v44 <= 0 )
      {
        if ( v44 )
          KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v44);
        AlpcpDestroyBlob(BugCheckParameter2);
      }
    }
    if ( _InterlockedCompareExchange64(v37, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v37);
    KeAbPostRelease((ULONG_PTR)v37);
    v125 = -1073740032;
    v5 = (ULONG64)v129;
    goto LABEL_169;
  }
  if ( (v40 & 0x10) != 0 )
  {
    v45 = BugCheckParameter2;
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
    v46 = 0;
    v47 = *(_BYTE *)(v45 - 32);
    if ( (v47 & 1) != 0 )
    {
      v46 = 0x10000 - *(__int16 *)(v45 - 30);
      *(_BYTE *)(v45 - 32) = v47 & 0xFE;
      *(_WORD *)(v45 - 30) = 0;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v45 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v45 - 16));
    KeAbPostRelease(v45 - 16);
    if ( v46 > 0 )
    {
      v48 = -v46 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v45 - 24), -v46);
      if ( v48 <= 0 )
      {
        if ( v48 )
          KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v48);
        AlpcpDestroyBlob(BugCheckParameter2);
      }
    }
    if ( _InterlockedCompareExchange64(v37, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v37);
    KeAbPostRelease((ULONG_PTR)v37);
    v125 = -1073741759;
    v5 = (ULONG64)v129;
    goto LABEL_169;
  }
  v49 = (volatile signed __int64 *)(v27 + 50);
  v50 = KeAbPreAcquire((ULONG_PTR)(v27 + 50), 0LL, 0LL, v38);
  v52 = v50;
  v137 = v50;
  if ( _interlockedbittestandset64(v27 + 50, 0LL) )
  {
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v27 + 25, v50, (ULONG_PTR)(v27 + 50), v51);
    v52 = v137;
  }
  if ( v52 )
    *(_BYTE *)(v52 + 26) |= 1u;
  --v27[115];
  *(_DWORD *)(v30 + 40) &= 0xFFFFFFF8;
  *(_QWORD *)(v30 + 16) = 0LL;
  v53 = BugCheckParameter2;
  **(_QWORD **)(BugCheckParameter2 + 8) = *(_QWORD *)BugCheckParameter2;
  *(_QWORD *)(*(_QWORD *)v53 + 8LL) = *(_QWORD *)(v53 + 8);
  v54 = 0;
  if ( *(_QWORD *)(v53 + 136) )
    v54 = 0x80000000;
  if ( *(_QWORD *)(v53 + 144) )
    v54 |= 0x40000000u;
  if ( *(_QWORD *)(v53 + 152) )
    v54 |= 0x10000000u;
  if ( (v54 & v131) != 0 )
  {
    *(_WORD *)(v53 + 228) |= 0x2000u;
    v137 = (ULONG_PTR)(v147 + 44);
    v55 = KeAbPreAcquire((ULONG_PTR)(v147 + 44), 0LL, 0LL, v51);
    v56 = v55;
    v146 = v55;
    v57 = (unsigned __int64 *)v137;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v137, 0LL) )
    {
      ExfAcquirePushLockExclusiveEx(v57, v55, (ULONG_PTR)v57, (__int64)v57);
      v57 = (unsigned __int64 *)v137;
      v56 = v146;
    }
    if ( v56 )
      *(_BYTE *)(v56 + 26) |= 1u;
    v58 = v147;
    *(_QWORD *)(v30 + 16) = v147;
    *(_DWORD *)(v30 + 40) = *(_DWORD *)(v30 + 40) & 0xFFFFFF83 | (4 * (v58[104] & 6)) | 3;
    *(_QWORD *)(v53 + 8) = *((_QWORD *)v58 + 24);
    v59 = BugCheckParameter2;
    *(_QWORD *)BugCheckParameter2 = v58 + 46;
    **((_QWORD **)v58 + 24) = v59;
    *((_QWORD *)v58 + 24) = v59;
    ++v58[114];
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v57, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    {
      ExfTryToWakePushLock((volatile signed __int64 *)v57);
      v57 = (unsigned __int64 *)v137;
    }
    KeAbPostRelease((ULONG_PTR)v57);
  }
  else
  {
    *(_WORD *)(v53 + 228) &= ~0x2000u;
    --*(_WORD *)(v53 - 30);
  }
  if ( (_InterlockedExchangeAdd64(v49, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v49);
  KeAbPostRelease((ULONG_PTR)v49);
  if ( _InterlockedCompareExchange64(v37, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v37);
  KeAbPostRelease((ULONG_PTR)v37);
  v60 = BugCheckParameter2;
  if ( AlpcpLogEnabled )
    AlpcpLogReceiveMessage(BugCheckParameter2);
  v127 = v60;
  v125 = 0;
  v5 = (ULONG64)v129;
LABEL_170:
  if ( v125 )
    return v125;
  v62 = v144 & 0xC0000000;
  v63 = 40;
  if ( (v144 & 0xC0000000) == 0x80000000 )
    v63 = 24;
  v64 = v63 + *(_WORD *)(v60 + 224);
  v156 = v64;
  if ( v5 && (v65 = v64, v64 > v148) )
  {
    v125 = AlpcpReturnMessageOnInsufficientBuffer(v130, v60);
    if ( v125 == -1073741789 )
      *v129 = v65;
  }
  else
  {
    *(_QWORD *)(v60 + 192) = p_LockNV;
    if ( v62 == 0x80000000 )
    {
      *(_WORD *)a2 = *(_WORD *)(v60 + 224);
      LODWORD(v129) = *(unsigned __int16 *)(v60 + 224) + 24;
      *(_WORD *)(a2 + 2) = (_WORD)v129;
      v66 = *(_WORD *)(v60 + 230);
      if ( v66 )
        *(_WORD *)(a2 + 6) = v66 - 16;
      else
        *(_WORD *)(a2 + 6) = 0;
      *(_WORD *)(a2 + 4) = *(_WORD *)(v60 + 228) | 0x1000;
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(v60 + 232);
      *(_DWORD *)(a2 + 12) = *(_DWORD *)(v60 + 240);
      *(_DWORD *)(a2 + 16) = *(_DWORD *)(v60 + 248);
      *(_DWORD *)(a2 + 20) = *(_DWORD *)(v60 + 256);
      *(_DWORD *)(a2 + 20) = *(_DWORD *)(v60 + 256);
      if ( (v130[64] & 0x1000) != 0 )
        *(_WORD *)(a2 + 4) &= 0xC00Fu;
      v67 = (char *)(a2 + 24);
      if ( *(_QWORD *)(v60 + 168) )
        AlpcpGetDataFromUserVaSafe(v60, v67);
      else
        AlpcpReadMessageData(v60, v67);
    }
    else
    {
      *(_OWORD *)a2 = *(_OWORD *)(v60 + 224);
      *(_OWORD *)(a2 + 16) = *(_OWORD *)(v60 + 240);
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(v60 + 256);
      if ( (v130[64] & 0x1000) != 0 )
        *(_WORD *)(a2 + 4) &= 0xC00Fu;
      LODWORD(v129) = *(unsigned __int16 *)(v60 + 226);
      v68 = (char *)(a2 + 40);
      if ( *(_QWORD *)(v60 + 168) )
      {
        AlpcpGetDataFromUserVaSafe(v60, a2 + 40);
      }
      else
      {
        v69 = *(_QWORD *)(v60 + 96);
        if ( v69 )
          v70 = *(_QWORD *)(v69 + 32) - 40LL;
        else
          v70 = 512LL;
        v71 = *(unsigned __int16 *)(v60 + 224);
        v72 = v71;
        v73 = (const void *)(v60 + 264);
        v74 = v68;
        if ( v71 > v70 )
        {
          memmove(v68, v73, v70);
          v74 = &v68[v70];
          v75 = v72 - v70;
          v73 = *(const void **)(v60 + 208);
        }
        else
        {
          v75 = (unsigned int)v71;
        }
        memmove(v74, v73, v75);
      }
    }
    v76 = v135;
    if ( v135 )
    {
      v77 = v60;
      LODWORD(v129) = *v135;
      v78 = (int)v129;
      v135[1] = 0;
      if ( v144 >= 0 )
      {
        v100 = v78 & 0x80000000;
        if ( v78 < 0 )
        {
          v158 = 8LL;
          if ( *(_QWORD *)(v60 + 136) )
          {
            v76[2] = 0;
            *((_QWORD *)v76 + 3) = *(_QWORD *)(*(_QWORD *)(v60 + 136) + 8LL);
            v76[1] |= 0x80000000;
          }
        }
        if ( (v78 & 0x40000000) != 0 )
        {
          v138 = 8LL;
          v101 = 2LL;
          if ( (v100 & 0x80000000) != 0 )
            v101 = 8LL;
          v138 = v101 * 4;
          v102 = *(_QWORD *)(v60 + 144);
          if ( v102 )
          {
            v103 = *(_QWORD *)(v102 + 16);
            _m_prefetchw((const void *)(v103 - 24));
            v104 = *(_QWORD *)(v103 - 24);
            while ( v104 > 0 )
            {
              v105 = v104;
              v104 = _InterlockedCompareExchange64((volatile signed __int64 *)(v103 - 24), v104 + 1, v104);
              if ( v104 == v105 )
                goto LABEL_275;
            }
            if ( v104 )
              KeBugCheckEx(0x18u, 0LL, v103, 0x20uLL, v104);
LABEL_275:
            v106 = AlpcpReceiveView(v130, v60, v128, 0x80000000LL);
            v107 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v103 - 24), 0xFFFFFFFFFFFFFFFFuLL);
            v87 = v107 <= 1;
            v108 = v107 - 1;
            if ( v87 )
            {
              if ( v108 )
                KeBugCheckEx(0x18u, 0LL, v103, 0x21uLL, v108);
              AlpcpDestroyBlob(v103);
            }
            v76 = v135;
            if ( v106 >= 0 )
            {
              v109 = *(_QWORD *)(v77 + 144);
              *(_QWORD *)&v135[v101] = 0LL;
              *(_QWORD *)&v76[v101 + 2] = 0LL;
              *(_QWORD *)&v76[v101 + 4] = 0LL;
              *(_QWORD *)&v76[v101 + 6] = 0LL;
              *(_QWORD *)&v76[v101 + 4] = *(_QWORD *)(v109 + 40);
              *(_QWORD *)&v76[v101 + 6] = *(_QWORD *)(v109 + 48);
              if ( v128[0] )
                v76[v101] = 0x40000;
              v76[1] |= 0x40000000u;
            }
            v60 = v127;
          }
          v78 = (int)v129;
        }
        if ( (v78 & 0x20000000) != 0 )
        {
          v139 = 8LL;
          v110 = 2LL;
          if ( v78 < 0 )
            v110 = 8LL;
          v139 = v110 * 4;
          if ( (v78 & 0x40000000) != 0 )
          {
            v110 += 8LL;
            v139 = v110 * 4;
          }
          v111 = v130;
          if ( *(_DWORD **)(v77 + 56) == v130 || *(_DWORD **)(v77 + 64) == v130 )
            v112 = *(_QWORD *)(v77 + 128);
          else
            v112 = *(_QWORD *)(v77 + 120);
          *(_QWORD *)&v76[v110] = v112;
          if ( *(_DWORD **)(v77 + 56) == v111 || *(_DWORD **)(v77 + 64) == v111 )
            v113 = *(_DWORD *)(v77 + 72);
          else
            v113 = *(_DWORD *)(v77 + 44);
          v76[v110 + 4] = v113;
          if ( (v111[104] & 6) == 4 )
            v114 = *(_QWORD *)(v77 + 104);
          else
            v114 = *(_QWORD *)(v77 + 112);
          *(_QWORD *)&v76[v110 + 2] = v114;
          v76[v110 + 5] = *(_DWORD *)(v77 + 248);
          v76[v110 + 6] = *(_DWORD *)(v77 + 256);
          if ( *(_QWORD *)&v76[v110] )
            v76[1] |= 0x20000000u;
        }
        else
        {
          v111 = v130;
        }
        if ( (v78 & 0x10000000) != 0 )
        {
          v141 = 8LL;
          v115 = 2LL;
          if ( v78 < 0 )
            v115 = 8LL;
          v141 = v115 * 4;
          if ( (v78 & 0x40000000) != 0 )
          {
            v115 += 8LL;
            v141 = v115 * 4;
          }
          if ( (v78 & 0x20000000) != 0 )
          {
            v115 += 8LL;
            v141 = v115 * 4;
          }
          AlpcpExposeHandleAttribute(v111, v77, &v76[v115], v76 + 1);
        }
        if ( (v78 & 0x8000000) == 0 )
          goto LABEL_325;
        v143 = 8LL;
        v116 = v78 & 0xF0000000;
        if ( v116 < 0 )
          v20 = 8LL;
        v143 = v20 * 4;
        if ( (v116 & 0x40000000) != 0 )
        {
          v20 += 8LL;
          v143 = v20 * 4;
        }
        if ( (v116 & 0x20000000) != 0 )
        {
          v20 += 8LL;
          v143 = v20 * 4;
        }
        if ( (v116 & 0x10000000) != 0 )
        {
          v20 += 6LL;
          v143 = v20 * 4;
        }
        if ( (v116 & 0x8000000) != 0 )
        {
          v20 += 6LL;
          v143 = v20 * 4;
        }
      }
      else
      {
        if ( v78 < 0 )
        {
          v159 = 8LL;
          if ( *(_QWORD *)(v60 + 136) )
          {
            v76[2] = 0;
            v76[4] = *(_DWORD *)(*(_QWORD *)(v60 + 136) + 8LL);
            v76[1] |= 0x80000000;
          }
        }
        if ( (v78 & 0x40000000) != 0 )
        {
          v145 = 8LL;
          v79 = 2LL;
          if ( v78 < 0 )
            v79 = 5LL;
          v145 = v79 * 4;
          v80 = &v76[v79];
          v147 = v80;
          v81 = *(_QWORD *)(v60 + 144);
          if ( v81 )
          {
            v82 = *(_QWORD *)(v81 + 16);
            _m_prefetchw((const void *)(v82 - 24));
            v83 = *(_QWORD *)(v82 - 24);
            while ( v83 > 0 )
            {
              v84 = v83;
              v83 = _InterlockedCompareExchange64((volatile signed __int64 *)(v82 - 24), v83 + 1, v83);
              if ( v83 == v84 )
                goto LABEL_212;
            }
            if ( v83 )
              KeBugCheckEx(0x18u, 0LL, v82, 0x20uLL, v83);
LABEL_212:
            v85 = AlpcpReceiveView(v130, v60, &v160, 0x80000000LL);
            v86 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v82 - 24), 0xFFFFFFFFFFFFFFFFuLL);
            v87 = v86 <= 1;
            v88 = v86 - 1;
            if ( v87 )
            {
              if ( v88 )
                KeBugCheckEx(0x18u, 0LL, v82, 0x21uLL, v88);
              AlpcpDestroyBlob(v82);
            }
            v76 = v135;
            if ( v85 >= 0 )
            {
              v89 = *(_QWORD *)(v77 + 144);
              v151 = 0LL;
              v152 = 0LL;
              v153 = 0LL;
              v154 = 0LL;
              v153 = *(_QWORD *)(v89 + 40);
              v154 = *(_QWORD *)(v89 + 48);
              v90 = 0;
              if ( v160 )
                v90 = 0x40000;
              LODWORD(v151) = v90;
              v135[1] |= 0x40000000u;
            }
            v60 = v127;
            v80 = v147;
          }
          if ( (v76[1] & 0x40000000) != 0 )
          {
            *v80 = v151;
            v80[1] = v152;
            v80[2] = v153;
            v80[3] = v154;
          }
        }
        if ( (v78 & 0x20000000) != 0 )
        {
          v140 = 8LL;
          v91 = 2LL;
          if ( v78 < 0 )
            v91 = 5LL;
          v140 = v91 * 4;
          if ( (v78 & 0x40000000) != 0 )
          {
            v91 += 4LL;
            v140 = v91 * 4;
          }
          v92 = v130;
          if ( *(_DWORD **)(v77 + 56) == v130 || *(_DWORD **)(v77 + 64) == v130 )
            v93 = *(_DWORD *)(v77 + 128);
          else
            v93 = *(_DWORD *)(v77 + 120);
          v76[v91] = v93;
          if ( *(_DWORD **)(v77 + 56) == v92 || *(_DWORD **)(v77 + 64) == v92 )
            v94 = *(_DWORD *)(v77 + 72);
          else
            v94 = *(_DWORD *)(v77 + 44);
          v76[v91 + 2] = v94;
          if ( (v92[104] & 6) == 4 )
            v95 = *(_DWORD *)(v77 + 104);
          else
            v95 = *(_DWORD *)(v77 + 112);
          v76[v91 + 1] = v95;
          if ( v76[v91] )
            v76[1] |= 0x20000000u;
        }
        else
        {
          v92 = v130;
        }
        if ( (v78 & 0x10000000) != 0 )
        {
          v136 = 8LL;
          v96 = 2LL;
          if ( v78 < 0 )
            v96 = 5LL;
          v136 = v96 * 4;
          if ( (v78 & 0x40000000) != 0 )
          {
            v96 += 4LL;
            v136 = v96 * 4;
          }
          if ( (v78 & 0x20000000) != 0 )
          {
            v96 += 5LL;
            v136 = v96 * 4;
          }
          p_LockNV = &v76[v96];
          AlpcpExposeHandleAttribute(v92, v77, v157, v76 + 1);
          v97 = (v76[1] & 0x10000000) == 0;
          v76 = v135;
          if ( !v97 )
          {
            v98 = p_LockNV;
            *p_LockNV = v157[0];
            v98[1] = v157[2];
            v98[2] = v157[4];
            v98[3] = v157[5];
          }
        }
        if ( (v78 & 0x8000000) == 0 )
          goto LABEL_325;
        v142 = 8LL;
        v99 = v78 & 0xF0000000;
        if ( v99 < 0 )
          v20 = 5LL;
        v142 = v20 * 4;
        if ( (v99 & 0x40000000) != 0 )
        {
          v20 += 4LL;
          v142 = v20 * 4;
        }
        if ( (v99 & 0x20000000) != 0 )
        {
          v20 += 5LL;
          v142 = v20 * 4;
        }
        if ( (v99 & 0x10000000) != 0 )
        {
          v20 += 4LL;
          v142 = v20 * 4;
        }
        if ( (v99 & 0x8000000) != 0 )
        {
          v20 += 6LL;
          v142 = v20 * 4;
        }
      }
      AlpcpExposeTokenAttribute(v130, v77, &v76[v20], v76 + 1);
    }
  }
LABEL_325:
  v117 = v130;
  if ( v125 != -1073741789 && *(_DWORD **)(v60 + 64) == v130 )
  {
    *(_QWORD *)(v60 + 64) = 0LL;
    *(_QWORD *)(v60 + 56) = 0LL;
  }
  if ( ((v125 + 0x80000000) & 0x80000000) != 0 || v125 == -1073741789 )
  {
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(v60);
    v118 = 0;
    v119 = v60 - 48;
    v120 = *(_BYTE *)(v119 + 16);
    if ( (v120 & 1) != 0 )
    {
      v118 = 0x10000 - *(__int16 *)(v119 + 18);
      *(_BYTE *)(v119 + 16) = v120 & 0xFE;
      *(_WORD *)(v119 + 18) = 0;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v119 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v119 + 32));
    KeAbPostRelease(v119 + 32);
    if ( v118 > 0 )
    {
      v121 = -v118 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v119 + 24), -v118);
      if ( v121 <= 0 )
      {
        if ( v121 )
          KeBugCheckEx(0x18u, 0LL, v127, 0x28uLL, v121);
        v122 = AlpcpRegisteredTypes[*(unsigned __int8 *)(v119 + 17)];
        v123 = *(int (__fastcall **)(ULONG_PTR))(v122 + 32);
        if ( !v123 || v123(v127) >= 0 )
        {
          if ( (*(_BYTE *)(v119 + 16) & 2) != 0 )
          {
            v124 = &AlpcpLookasides + 8 * (unsigned __int64)*(unsigned int *)(v122 + 8);
            ++*((_DWORD *)&v124[1].HeaderX64 + 3);
            if ( LOWORD(v124->Alignment) < LOWORD(v124[1].Alignment) )
            {
              RtlpInterlockedPushEntrySList(v124, (PSLIST_ENTRY)v119);
            }
            else
            {
              ++LODWORD(v124[2].Alignment);
              ((void (__fastcall *)(ULONG_PTR))v124[3].Region)(v119);
            }
          }
          else if ( *(_QWORD *)(v122 + 40) )
          {
            (*((void (__fastcall **)(ULONG_PTR))&AlpcpLookasides + 16 * (unsigned __int64)*(unsigned int *)(v122 + 8)
                                                                 + 7))(v119);
          }
          else
          {
            ExFreePoolWithTag((PVOID)v119, *(_DWORD *)(v122 + 4));
          }
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(v60 + 192) = 0LL;
    AlpcpCancelMessage(v117, v60, 0x10000LL);
  }
  return v125;
}
