/*
 * XREFs of ObCloseHandleTableEntry @ 0x1404946D0
 * Callers:
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     ObpCloseHandle @ 0x1404A4DA0 (ObpCloseHandle.c)
 *     ExSweepHandleTable @ 0x140508B40 (ExSweepHandleTable.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x1402008EC (KeRaiseUserException.c)
 *     ObpReleaseHandleInfo @ 0x140521FA0 (ObpReleaseHandleInfo.c)
 *     ObpDeleteDirectoryEntry @ 0x14053BE00 (ObpDeleteDirectoryEntry.c)
 *     ObpDeleteSymbolicLinkName @ 0x14055B27C (ObpDeleteSymbolicLinkName.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406AB994 (ObpLookupDirectoryEntryEx.c)
 *     SeCloseObjectAuditAlarm @ 0x1406D471C (SeCloseObjectAuditAlarm.c)
 *     EtwpTraceHandle @ 0x1406E52FC (EtwpTraceHandle.c)
 *     ExpGetHandleExtraInfo @ 0x1406F01F4 (ExpGetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x1406F051C (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ObCloseHandleTableEntry(
        __int64 a1,
        volatile signed __int64 *a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        unsigned __int8 a5,
        char a6)
{
  char v8; // bl
  unsigned __int64 v9; // rdx
  _KPROCESS *v11; // r9
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // r15
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v16; // ax
  __int64 v18; // r12
  char v19; // r12
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax
  __int64 v22; // rdx
  signed __int64 v23; // rbx
  _DWORD *HandleExtraInfo; // rax
  unsigned int v25; // edx
  ULONG_PTR v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 v33; // r14
  __int64 v34; // rax
  struct _KTHREAD *v35; // rcx
  __int16 v36; // ax
  unsigned __int64 v37; // r13
  __int64 v38; // r12
  signed __int64 v39; // r15
  _KPROCESS *v40; // r12
  signed __int64 v41; // rsi
  struct _KTHREAD *v42; // rax
  signed __int64 *v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r9
  __int64 v47; // rsi
  bool v48; // zf
  signed __int64 v49; // rax
  signed __int64 v50; // rcx
  signed __int64 v51; // rtt
  struct _KTHREAD *v52; // rcx
  __int16 v53; // ax
  unsigned __int64 v54; // r14
  char v55; // di
  __int64 v56; // rax
  __int64 v57; // r12
  struct _KTHREAD *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r9
  __int64 v62; // rsi
  unsigned __int64 *v63; // r15
  __int64 v64; // rdx
  signed __int64 v65; // rax
  signed __int64 v66; // rcx
  __int64 v67; // rtt
  __int64 v68; // r9
  struct _KTHREAD *v69; // rcx
  __int16 v70; // ax
  struct _KTHREAD *v71; // rax
  signed __int64 *v72; // rsi
  __int64 v73; // rax
  __int64 v74; // r9
  __int64 v75; // r14
  struct _KTHREAD *v76; // rax
  __int64 v77; // r9
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // r9
  __int64 v81; // r14
  signed __int64 v82; // rax
  signed __int64 v83; // rcx
  signed __int64 v84; // rtt
  __int64 v85; // rdx
  struct _KTHREAD *v86; // rcx
  __int16 v87; // ax
  signed __int64 v88; // rax
  signed __int64 v89; // rcx
  __int64 v90; // rtt
  struct _KTHREAD *v91; // rdx
  __int16 v92; // ax
  struct _KTHREAD *v93; // rax
  signed __int64 *v94; // rsi
  signed __int64 v95; // rax
  signed __int64 v96; // rcx
  signed __int64 v97; // rtt
  struct _KTHREAD *v98; // rcx
  __int16 v99; // ax
  signed __int64 v100; // rax
  __int64 v101; // rtt
  struct _KTHREAD *v102; // rcx
  __int16 v103; // ax
  signed __int64 v104; // rax
  __int64 v105; // rtt
  struct _KTHREAD *v106; // rcx
  __int16 v107; // ax
  signed __int64 v108; // rax
  __int64 v109; // rtt
  __int16 v110; // ax
  signed __int32 v111[8]; // [rsp+0h] [rbp-100h] BYREF
  char v112; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v113; // [rsp+38h] [rbp-C8h]
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-C0h]
  unsigned int v115; // [rsp+48h] [rbp-B8h] BYREF
  int v116; // [rsp+4Ch] [rbp-B4h]
  unsigned __int64 v117; // [rsp+50h] [rbp-B0h]
  __int64 v118; // [rsp+58h] [rbp-A8h]
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v120; // [rsp+68h] [rbp-98h]
  __int16 v121; // [rsp+7Eh] [rbp-82h]
  int v122; // [rsp+80h] [rbp-80h]
  unsigned __int64 v123; // [rsp+88h] [rbp-78h]
  _BYTE v124[48]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v125[48]; // [rsp+C0h] [rbp-40h] BYREF

  v8 = 0;
  v9 = (*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  BugCheckParameter1 = a3;
  v123 = v9;
  v11 = (_KPROCESS *)a3;
  v112 = 0;
  v12 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)*(unsigned __int8 *)(v9 + 24);
  v118 = BYTE1(v9);
  v13 = v9 + 48;
  v117 = v9 + 48;
  v14 = ObTypeIndexTable[BYTE1(v9) ^ v12];
  if ( *(_QWORD *)(v14 + 168) )
  {
    if ( KeGetCurrentThread()->ApcState.Process != v11 )
    {
      KiStackAttachProcess(v11, 0, (__int64)v124);
      v8 = 1;
      v112 = 1;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(ULONG_PTR, unsigned __int64, ULONG_PTR, _QWORD))(v14 + 168))(
            BugCheckParameter1,
            v117,
            a4,
            a5) )
    {
      _InterlockedExchangeAdd64(a2, 1uLL);
      _InterlockedOr(v111, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
      CurrentThread = KeGetCurrentThread();
      v16 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v16;
      if ( !v16
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( v8 )
        KiUnstackDetachProcess((struct _KTHREAD *)v124, 0);
      return 3221226037LL;
    }
    v11 = (_KPROCESS *)BugCheckParameter1;
    v13 = v117;
  }
  v18 = ((__int64)*(unsigned int *)a2 >> 17) & 7;
  if ( (a2[1] & 0x2000000) != 0 )
    LOBYTE(v18) = v18 | 8;
  v19 = v18 & 5;
  if ( (v19 & 1) == 0 || a6 )
  {
    if ( (xmmword_1403D1290 & 0x40) != 0 )
    {
      v22 = a4;
      if ( v11 == PsInitialSystemProcess )
        v22 = a4 | 0x80000000;
      EtwpTraceHandle(4385LL, v22, v13, v14);
    }
    if ( a6 )
    {
      v23 = 0LL;
      v116 = (unsigned __int16)((unsigned __int64)*(unsigned int *)a2 >> 1);
      *a2 = 0LL;
      _InterlockedOr(v111, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
    }
    else
    {
      if ( *(_QWORD *)(a1 + 96) )
        ExpUpdateDebugInfo(a1, KeGetCurrentThread(), a4, 2LL);
      v23 = 0LL;
      v116 = (unsigned __int16)((unsigned __int64)*(unsigned int *)a2 >> 1);
      *a2 = 0LL;
      _InterlockedOr(v111, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
      v113 = a4 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(_DWORD *)(a1 + 4) )
      {
        HandleExtraInfo = (_DWORD *)ExpGetHandleExtraInfo(a1, v113);
        if ( HandleExtraInfo )
          *HandleExtraInfo = 0;
      }
      if ( (*(_BYTE *)(a1 + 44) & 1) != 0 )
        v25 = 0;
      else
        v25 = KeGetPcr()->Prcb.Number % dword_14077E03C;
      *((_QWORD *)a2 + 1) = 0LL;
      v26 = a1 + ((v25 + 1LL) << 6);
      if ( (*(_BYTE *)(a1 + 44) & 1) != 0 )
      {
        v27 = KeAbPreAcquire(v26, 0LL, 0LL, (__int64)v11);
        v29 = v27;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v26, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v26, v27, v26, v28);
        if ( v29 )
          *(_BYTE *)(v29 + 26) |= 1u;
        v30 = *(_QWORD *)(v26 + 16);
        if ( v30 )
          *(_QWORD *)(v30 + 8) = a2;
        else
          *(_QWORD *)(v26 + 8) = a2;
        *(_QWORD *)(v26 + 16) = a2;
      }
      else
      {
        v31 = KeAbPreAcquire(v26, 0LL, 0LL, (__int64)v11);
        v33 = v31;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v26, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v26, v31, v26, v32);
        if ( v33 )
          *(_BYTE *)(v33 + 26) |= 1u;
        v34 = *(_QWORD *)(v26 + 8);
        *((_QWORD *)a2 + 1) = v34;
        if ( !v34 )
          *(_QWORD *)(v26 + 16) = a2;
        *(_QWORD *)(v26 + 8) = a2;
      }
      --*(_DWORD *)(v26 + 24);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v26);
      KeAbPostRelease(v26);
    }
    v35 = KeGetCurrentThread();
    v36 = v35->KernelApcDisable + 1;
    v35->KernelApcDisable = v36;
    if ( !v36
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v35->ApcState.ApcListHead[0].Flink != &v35->152
      && !v35->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( (v19 & 4) != 0 )
    {
      LOBYTE(v13) = 1;
      SeCloseObjectAuditAlarm(v117, a4 & 0xFFFFFFFFFFFFFFFCuLL, v13);
    }
    v37 = v123;
    v115 = 0;
    v38 = ObTypeIndexTable[v118 ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)*(unsigned __int8 *)(v123 + 24)];
    v113 = v38;
    if ( (*(_BYTE *)(v38 + 66) & 0x10) != 0 || (*(_BYTE *)(v123 + 27) & 8) != 0 )
    {
      v42 = KeGetCurrentThread();
      --v42->KernelApcDisable;
      v43 = (signed __int64 *)(v37 + 16);
      v44 = KeAbPreAcquire(v37 + 16, 0LL, 0LL, (__int64)v11);
      v47 = v44;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 16), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v37 + 16), v44, v37 + 16, v46);
      if ( v47 )
        *(_BYTE *)(v47 + 26) |= 1u;
      v41 = *(_QWORD *)(v37 + 8);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1
        && (*(_BYTE *)(v37 + 27) & 8) != 0 )
      {
        *(_QWORD *)(v37 - ObpInfoMaskToOffset[*(_BYTE *)(v37 + 26) & 0x1F]) = 0LL;
      }
      v48 = (*(_BYTE *)(v38 + 66) & 0x10) == 0;
      v40 = (_KPROCESS *)BugCheckParameter1;
      if ( !v48 )
        ObpReleaseHandleInfo(v37, BugCheckParameter1, &v115);
      _m_prefetchw(v43);
      v49 = *v43;
      v50 = *v43 - 16;
      if ( (*v43 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v50 = 0LL;
      if ( (v49 & 2) != 0 || (v51 = *v43, v51 != _InterlockedCompareExchange64(v43, v50, v49)) )
        ExfReleasePushLock((_QWORD *)(v37 + 16), v45);
      KeAbPostRelease(v37 + 16);
      v52 = KeGetCurrentThread();
      v53 = v52->KernelApcDisable + 1;
      v52->KernelApcDisable = v53;
      if ( !v53
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v52->ApcState.ApcListHead[0].Flink != &v52->152
        && !v52->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    else
    {
      v39 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v123 + 8), 0xFFFFFFFFFFFFFFFFuLL);
      v40 = (_KPROCESS *)BugCheckParameter1;
      v41 = v39;
    }
    v54 = v113;
    if ( *(_QWORD *)(v113 + 128) )
    {
      v55 = 0;
      if ( KeGetCurrentThread()->ApcState.Process != v40 )
      {
        v55 = 1;
        KiStackAttachProcess(v40, 0, (__int64)v125);
      }
      (*(void (__fastcall **)(_KPROCESS *, unsigned __int64, _QWORD, signed __int64))(v54 + 128))(
        v40,
        v37 + 48,
        v115,
        v41);
      if ( v55 )
        KiUnstackDetachProcess((struct _KTHREAD *)v125, 0);
    }
    if ( v41 == 1 && (*(_BYTE *)(v37 + 26) & 2) != 0 )
    {
      v56 = ObpInfoMaskToOffset[*(_BYTE *)(v37 + 26) & 3];
      v57 = v37 - v56;
      if ( v37 != v56 )
      {
        v58 = KeGetCurrentThread();
        --v58->KernelApcDisable;
        while ( 1 )
        {
          v59 = KeAbPreAcquire(v37 + 16, 0LL, 0LL, (__int64)v11);
          v62 = v59;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 16), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v37 + 16), v59, v37 + 16, v61);
          if ( v62 )
            *(_BYTE *)(v62 + 26) |= 1u;
          v63 = *(unsigned __int64 **)v57;
          if ( !*(_QWORD *)v57 )
          {
            _m_prefetchw((const void *)(v37 + 16));
            v108 = *(_QWORD *)(v37 + 16);
            if ( (v108 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
              v23 = v108 - 16;
            if ( (v108 & 2) != 0
              || (v109 = *(_QWORD *)(v37 + 16),
                  v109 != _InterlockedCompareExchange64((volatile signed __int64 *)(v37 + 16), v23, v108)) )
            {
              ExfReleasePushLock((_QWORD *)(v37 + 16), v60);
            }
            KeAbPostRelease(v37 + 16);
            v106 = KeGetCurrentThread();
            v110 = v106->KernelApcDisable + 1;
            v106->KernelApcDisable = v110;
            if ( !v110 )
              goto LABEL_189;
            goto LABEL_192;
          }
          if ( (*(_BYTE *)(v37 + 27) & 0x10) != 0 || *(_QWORD *)(v37 + 8) )
            break;
          ObfReferenceObject(*(PVOID *)v57);
          _m_prefetchw((const void *)(v37 + 16));
          v65 = *(_QWORD *)(v37 + 16);
          v66 = v65 - 16;
          if ( (v65 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v66 = 0LL;
          if ( (v65 & 2) != 0
            || (v67 = *(_QWORD *)(v37 + 16),
                v67 != _InterlockedCompareExchange64((volatile signed __int64 *)(v37 + 16), v66, v65)) )
          {
            ExfReleasePushLock((_QWORD *)(v37 + 16), v64);
          }
          KeAbPostRelease(v37 + 16);
          v69 = KeGetCurrentThread();
          v70 = v69->KernelApcDisable + 1;
          v69->KernelApcDisable = v70;
          if ( !v70
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v69->ApcState.ApcListHead[0].Flink != &v69->152
            && !v69->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          v71 = KeGetCurrentThread();
          v120 = 0LL;
          --v71->KernelApcDisable;
          v72 = (signed __int64 *)(v63 + 37);
          v73 = KeAbPreAcquire((ULONG_PTR)(v63 + 37), 0LL, 0LL, v68);
          v75 = v73;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v63 + 74, 0LL) )
            ExfAcquirePushLockExclusiveEx(v63 + 37, v73, (ULONG_PTR)(v63 + 37), v74);
          if ( v75 )
            *(_BYTE *)(v75 + 26) |= 1u;
          v122 = -859041228;
          ObfReferenceObject(v63);
          v76 = KeGetCurrentThread();
          Object = v63;
          v121 = 257;
          --v76->KernelApcDisable;
          v78 = KeAbPreAcquire(v37 + 16, 0LL, 0LL, v77);
          v81 = v78;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 16), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v37 + 16), v78, v37 + 16, v80);
          if ( v81 )
            *(_BYTE *)(v81 + 26) |= 1u;
          if ( *(unsigned __int64 **)v57 == v63 && (*(_BYTE *)(v37 + 27) & 0x10) == 0 && !*(_QWORD *)(v37 + 8) )
          {
            if ( *(_DWORD *)(v57 + 24) )
              goto LABEL_155;
            if ( (POBJECT_TYPE)ObTypeIndexTable[v118 ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)*(unsigned __int8 *)(v37 + 24)] == ObpSymbolicLinkObjectType )
              ObpDeleteSymbolicLinkName(v37 + 48);
            ObpLookupDirectoryEntryEx(*(PVOID *)v57, 0, (__int64)&Object);
            ObpDeleteDirectoryEntry(&Object);
            if ( (_BYTE)v121 )
            {
LABEL_155:
              v94 = (signed __int64 *)((char *)Object + 296);
              _m_prefetchw((char *)Object + 296);
              v95 = *v94;
              v96 = *v94 - 16;
              if ( (*v94 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                v96 = 0LL;
              if ( (v95 & 2) != 0 || (v97 = *v94, v97 != _InterlockedCompareExchange64(v94, v96, v95)) )
                ExfReleasePushLock(v94, v79);
              KeAbPostRelease((ULONG_PTR)v94);
              ObfDereferenceObject(Object);
              v98 = KeGetCurrentThread();
              v99 = v98->KernelApcDisable + 1;
              v98->KernelApcDisable = v99;
              if ( !v99
                && ($CD287064E7C9F7953DE243E927CFCB99 *)v98->ApcState.ApcListHead[0].Flink != &v98->152
                && !v98->SpecialApcDisable )
              {
                KiCheckForKernelApcDelivery();
              }
            }
            if ( v120 )
              ObfDereferenceObject(v120);
            _m_prefetchw((const void *)(v37 + 16));
            v100 = *(_QWORD *)(v37 + 16);
            if ( (v100 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
              v23 = v100 - 16;
            if ( (v100 & 2) != 0
              || (v101 = *(_QWORD *)(v37 + 16),
                  v101 != _InterlockedCompareExchange64((volatile signed __int64 *)(v37 + 16), v23, v100)) )
            {
              ExfReleasePushLock((_QWORD *)(v37 + 16), v79);
            }
            KeAbPostRelease(v37 + 16);
            v102 = KeGetCurrentThread();
            v103 = v102->KernelApcDisable + 1;
            v102->KernelApcDisable = v103;
            if ( !v103
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v102->ApcState.ApcListHead[0].Flink != &v102->152
              && !v102->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
            PspDereferenceSiloObject(v63);
            goto LABEL_192;
          }
          _m_prefetchw(v72);
          v82 = *v72;
          v83 = *v72 - 16;
          if ( (*v72 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v83 = 0LL;
          if ( (v82 & 2) != 0 || (v84 = *v72, v84 != _InterlockedCompareExchange64(v72, v83, v82)) )
            ExfReleasePushLock(v63 + 37, v79);
          KeAbPostRelease((ULONG_PTR)(v63 + 37));
          v122 = -286387660;
          ObfDereferenceObject(v63);
          v86 = KeGetCurrentThread();
          Object = 0LL;
          v121 = 0;
          v87 = v86->KernelApcDisable + 1;
          v86->KernelApcDisable = v87;
          if ( !v87
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v86->ApcState.ApcListHead[0].Flink != &v86->152
            && !v86->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          _m_prefetchw((const void *)(v37 + 16));
          v88 = *(_QWORD *)(v37 + 16);
          v89 = v88 - 16;
          if ( (v88 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v89 = 0LL;
          if ( (v88 & 2) != 0
            || (v90 = *(_QWORD *)(v37 + 16),
                v90 != _InterlockedCompareExchange64((volatile signed __int64 *)(v37 + 16), v89, v88)) )
          {
            ExfReleasePushLock((_QWORD *)(v37 + 16), v85);
          }
          KeAbPostRelease(v37 + 16);
          v91 = KeGetCurrentThread();
          v92 = v91->KernelApcDisable + 1;
          v91->KernelApcDisable = v92;
          if ( !v92
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v91->ApcState.ApcListHead[0].Flink != &v91->152
            && !v91->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          PspDereferenceSiloObject(v63);
          v93 = KeGetCurrentThread();
          --v93->KernelApcDisable;
        }
        _m_prefetchw((const void *)(v37 + 16));
        v104 = *(_QWORD *)(v37 + 16);
        if ( (v104 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v23 = v104 - 16;
        if ( (v104 & 2) != 0
          || (v105 = *(_QWORD *)(v37 + 16),
              v105 != _InterlockedCompareExchange64((volatile signed __int64 *)(v37 + 16), v23, v104)) )
        {
          ExfReleasePushLock((_QWORD *)(v37 + 16), v60);
        }
        KeAbPostRelease(v37 + 16);
        v106 = KeGetCurrentThread();
        v107 = v106->KernelApcDisable + 1;
        v106->KernelApcDisable = v107;
        if ( !v107 )
        {
LABEL_189:
          if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v106->ApcState.ApcListHead[0].Flink != &v106->152
            && !v106->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
        }
      }
    }
LABEL_192:
    _InterlockedDecrement((volatile signed __int32 *)(v113 + 48));
    if ( v112 )
      KiUnstackDetachProcess((struct _KTHREAD *)v124, 0);
    if ( v116 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)v37, -v116);
    ObfDereferenceObjectWithTag((PVOID)(v37 + 48), 0x6E48624Fu);
    return 0LL;
  }
  else
  {
    if ( !a5 )
      KeBugCheckEx(0x93u, a4, 0LL, 0LL, 0LL);
    _InterlockedExchangeAdd64(a2, 1uLL);
    _InterlockedOr(v111, 0);
    if ( *(_QWORD *)(a1 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
    v20 = KeGetCurrentThread();
    v21 = v20->KernelApcDisable + 1;
    v20->KernelApcDisable = v21;
    if ( !v21
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
      && !v20->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( v112 )
      KiUnstackDetachProcess((struct _KTHREAD *)v124, 0);
    if ( KeGetCurrentThread()->ApcStateIndex == 1
      || (NtGlobalFlag & 0x400000) == 0
      && !KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[6]
      && !*(_QWORD *)(a1 + 96) )
    {
      return 3221226037LL;
    }
    return KeRaiseUserException(0xC0000235);
  }
}
