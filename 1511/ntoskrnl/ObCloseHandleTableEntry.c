/*
 * XREFs of ObCloseHandleTableEntry @ 0x14040C6C0
 * Callers:
 *     ObpCloseHandle @ 0x1403F6F6C (ObpCloseHandle.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeIsAttachedProcess @ 0x1400701C0 (KeIsAttachedProcess.c)
 *     ObpReleaseLookupContext @ 0x14009C320 (ObpReleaseLookupContext.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     ObpLockDirectoryExclusive @ 0x1400CF104 (ObpLockDirectoryExclusive.c)
 *     ObDereferenceObject @ 0x1400D2B58 (ObDereferenceObject.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x140150264 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x1401C4670 (KeRaiseUserException.c)
 *     ExUnlockHandleTableEntry @ 0x1403F7084 (ExUnlockHandleTableEntry.c)
 *     ObpDeleteDirectoryEntry @ 0x1404ABE68 (ObpDeleteDirectoryEntry.c)
 *     ObpDeleteSymbolicLinkName @ 0x1404C4630 (ObpDeleteSymbolicLinkName.c)
 *     ObpLookupDirectoryEntryEx @ 0x14062DD54 (ObpLookupDirectoryEntryEx.c)
 *     SeCloseObjectAuditAlarm @ 0x14065206C (SeCloseObjectAuditAlarm.c)
 *     EtwpTraceHandle @ 0x140662228 (EtwpTraceHandle.c)
 *     ExpGetHandleExtraInfo @ 0x14066C9D8 (ExpGetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x14066CC94 (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ObCloseHandleTableEntry(
        __int64 a1,
        volatile signed __int64 *a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        unsigned __int8 a5,
        char a6)
{
  char v7; // bl
  unsigned __int64 v9; // r14
  _KPROCESS *v11; // r9
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v16; // r12
  char v17; // r12
  __int64 v18; // rdx
  signed __int64 v19; // rbx
  _DWORD *HandleExtraInfo; // rax
  unsigned int v21; // edx
  ULONG_PTR v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbp
  __int64 v28; // rax
  __int64 v29; // r8
  unsigned int v30; // ebp
  __int64 v31; // r12
  signed __int64 v32; // r15
  _KPROCESS *v33; // r12
  signed __int64 v34; // r13
  struct _KTHREAD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rdx
  int v39; // ecx
  int v40; // eax
  signed __int64 v41; // rax
  signed __int64 v42; // rcx
  __int64 v43; // rtt
  char v44; // di
  signed __int64 v45; // r9
  unsigned __int64 v46; // r13
  __int64 v47; // rax
  __int64 v48; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v50; // rax
  __int64 v51; // rsi
  PVOID v52; // rbp
  signed __int64 v53; // rax
  signed __int64 v54; // rcx
  __int64 v55; // rtt
  struct _KTHREAD *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rsi
  signed __int64 v59; // rax
  signed __int64 v60; // rcx
  __int64 v61; // rtt
  struct _KTHREAD *v62; // rax
  signed __int64 v63; // rax
  __int64 v64; // rtt
  signed __int64 v65; // rax
  __int64 v66; // rtt
  signed __int32 v67[8]; // [rsp+0h] [rbp-138h] BYREF
  char v68; // [rsp+30h] [rbp-108h]
  ULONG_PTR BugCheckParameter1; // [rsp+38h] [rbp-100h]
  unsigned __int64 v70; // [rsp+40h] [rbp-F8h]
  int v71; // [rsp+48h] [rbp-F0h]
  __int64 v72; // [rsp+50h] [rbp-E8h]
  __int64 v73[2]; // [rsp+58h] [rbp-E0h] BYREF
  __int16 v74; // [rsp+76h] [rbp-C2h]
  int v75; // [rsp+78h] [rbp-C0h]
  $D4FCF91253F76F57393CBFE908971F67 v76; // [rsp+80h] [rbp-B8h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v77; // [rsp+B0h] [rbp-88h] BYREF

  v7 = 0;
  v9 = (*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  BugCheckParameter1 = a3;
  v68 = 0;
  v11 = (_KPROCESS *)a3;
  v12 = v9 + 48;
  v13 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)*(unsigned __int8 *)(v9 + 24);
  v72 = BYTE1(v9);
  v14 = ObTypeIndexTable[BYTE1(v9) ^ v13];
  if ( *(_QWORD *)(v14 + 168) )
  {
    if ( KeGetCurrentThread()->ApcState.Process != v11 )
    {
      KiStackAttachProcess(v11, 0LL, (__int64)&v76);
      v7 = 1;
      v68 = 1;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(ULONG_PTR, unsigned __int64, ULONG_PTR, _QWORD))(v14 + 168))(
            BugCheckParameter1,
            v9 + 48,
            a4,
            a5) )
    {
      ExUnlockHandleTableEntry(a1, a2);
      KeLeaveCriticalRegion();
      if ( v7 )
        KiUnstackDetachProcess(&v76, 0LL);
      return 3221226037LL;
    }
    v11 = (_KPROCESS *)BugCheckParameter1;
    v12 = v9 + 48;
  }
  v16 = ((__int64)*(unsigned int *)a2 >> 17) & 7;
  if ( (a2[1] & 0x2000000) != 0 )
    LOBYTE(v16) = v16 | 8;
  v17 = v16 & 5;
  if ( (v17 & 1) == 0 || a6 )
  {
    if ( (xmmword_140382290 & 0x40) != 0 )
    {
      v18 = a4;
      if ( v11 == PsInitialSystemProcess )
        v18 = a4 | 0x80000000;
      EtwpTraceHandle(4385LL, v18, v12, v14);
    }
    if ( a6 )
    {
      v19 = 0LL;
      v71 = (unsigned __int16)((unsigned __int64)*(unsigned int *)a2 >> 1);
      *a2 = 0LL;
      _InterlockedOr(v67, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
    }
    else
    {
      if ( *(_QWORD *)(a1 + 96) )
        ExpUpdateDebugInfo(a1, KeGetCurrentThread(), a4, 2LL);
      v19 = 0LL;
      v71 = (unsigned __int16)((unsigned __int64)*(unsigned int *)a2 >> 1);
      *a2 = 0LL;
      _InterlockedOr(v67, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
      v70 = a4 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(_DWORD *)(a1 + 4) )
      {
        HandleExtraInfo = (_DWORD *)ExpGetHandleExtraInfo(a1, v70);
        if ( HandleExtraInfo )
          *HandleExtraInfo = 0;
      }
      if ( (*(_BYTE *)(a1 + 44) & 1) != 0 )
        v21 = 0;
      else
        v21 = KeGetPcr()->Prcb.Number % dword_1406FB03C;
      *((_QWORD *)a2 + 1) = 0LL;
      v22 = a1 + ((v21 + 1LL) << 6);
      if ( (*(_BYTE *)(a1 + 44) & 1) != 0 )
      {
        v23 = KeAbPreAcquire(v22, 0LL, 0LL);
        v24 = v23;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v22, v23, v22);
        if ( v24 )
          *(_BYTE *)(v24 + 26) |= 1u;
        v25 = *(_QWORD *)(v22 + 16);
        if ( v25 )
          *(_QWORD *)(v25 + 8) = a2;
        else
          *(_QWORD *)(v22 + 8) = a2;
        *(_QWORD *)(v22 + 16) = a2;
      }
      else
      {
        v26 = KeAbPreAcquire(v22, 0LL, 0LL);
        v27 = v26;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v22, v26, v22);
        if ( v27 )
          *(_BYTE *)(v27 + 26) |= 1u;
        v28 = *(_QWORD *)(v22 + 8);
        *((_QWORD *)a2 + 1) = v28;
        if ( !v28 )
          *(_QWORD *)(v22 + 16) = a2;
        *(_QWORD *)(v22 + 8) = a2;
      }
      --*(_DWORD *)(v22 + 24);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v22);
      KeAbPostRelease(v22);
    }
    KeLeaveCriticalRegion();
    if ( (v17 & 4) != 0 )
    {
      LOBYTE(v29) = 1;
      SeCloseObjectAuditAlarm(v9 + 48, a4 & 0xFFFFFFFFFFFFFFFCuLL, v29);
    }
    v30 = 0;
    v31 = ObTypeIndexTable[v72 ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)*(unsigned __int8 *)(v9 + 24)];
    v70 = v31;
    if ( (*(_BYTE *)(v31 + 66) & 0x10) == 0 && (*(_BYTE *)(v9 + 27) & 8) == 0 )
    {
      v32 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 8), 0xFFFFFFFFFFFFFFFFuLL);
      v33 = (_KPROCESS *)BugCheckParameter1;
      v34 = v32;
LABEL_93:
      if ( *(_QWORD *)(v70 + 128) )
      {
        v44 = 0;
        if ( KeGetCurrentThread()->ApcState.Process != v33 )
        {
          v44 = 1;
          KiStackAttachProcess(v33, 0LL, (__int64)&v77);
        }
        v45 = v34;
        v46 = v70;
        (*(void (__fastcall **)(_KPROCESS *, unsigned __int64, _QWORD, signed __int64))(v70 + 128))(
          v33,
          v9 + 48,
          v30,
          v45);
        if ( v44 )
          KiUnstackDetachProcess(&v77, 0LL);
      }
      else
      {
        v46 = v70;
      }
      if ( (*(_BYTE *)(v9 + 26) & 2) != 0 )
      {
        v47 = ObpInfoMaskToOffset[*(_BYTE *)(v9 + 26) & 3];
        v48 = v9 - v47;
        if ( v9 != v47 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          while ( 1 )
          {
            v50 = KeAbPreAcquire(v9 + 16, 0LL, 0LL);
            v51 = v50;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 16), 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v9 + 16), v50, v9 + 16);
            if ( v51 )
              *(_BYTE *)(v51 + 26) |= 1u;
            v52 = *(PVOID *)v48;
            if ( !*(_QWORD *)v48 || (*(_BYTE *)(v9 + 27) & 0x10) != 0 || *(_QWORD *)(v9 + 8) )
              break;
            ObfReferenceObject(*(PVOID *)v48);
            _m_prefetchw((const void *)(v9 + 16));
            v53 = *(_QWORD *)(v9 + 16);
            v54 = v53 - 16;
            if ( (v53 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v54 = 0LL;
            if ( (v53 & 2) != 0
              || (v55 = *(_QWORD *)(v9 + 16),
                  v55 != _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 16), v54, v53)) )
            {
              ExfReleasePushLock((_QWORD *)(v9 + 16));
            }
            KeAbPostRelease(v9 + 16);
            KeLeaveCriticalRegion();
            v74 = 0;
            v75 = -60876;
            *(_OWORD *)v73 = 0LL;
            ObpLockDirectoryExclusive((__int64)v73, (__int64)v52);
            v56 = KeGetCurrentThread();
            --v56->KernelApcDisable;
            v57 = KeAbPreAcquire(v9 + 16, 0LL, 0LL);
            v58 = v57;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 16), 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v9 + 16), v57, v9 + 16);
            if ( v58 )
              *(_BYTE *)(v58 + 26) |= 1u;
            if ( *(PVOID *)v48 == v52 && (*(_BYTE *)(v9 + 27) & 0x10) == 0 && !*(_QWORD *)(v9 + 8) )
            {
              if ( !*(_DWORD *)(v48 + 24) )
              {
                if ( (POBJECT_TYPE)ObTypeIndexTable[v72 ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)*(unsigned __int8 *)(v9 + 24)] == ObpSymbolicLinkObjectType )
                  ObpDeleteSymbolicLinkName(v9 + 48);
                ObpLookupDirectoryEntryEx(*(PVOID *)v48, 0, (__int64)v73);
                ObpDeleteDirectoryEntry(v73);
              }
              ObpReleaseLookupContext((__int64)v73);
              _m_prefetchw((const void *)(v9 + 16));
              v63 = *(_QWORD *)(v9 + 16);
              if ( (v63 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
                v19 = v63 - 16;
              if ( (v63 & 2) != 0
                || (v64 = *(_QWORD *)(v9 + 16),
                    v64 != _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 16), v19, v63)) )
              {
                ExfReleasePushLock((_QWORD *)(v9 + 16));
              }
              KeAbPostRelease(v9 + 16);
              KeLeaveCriticalRegion();
              ObDereferenceObject(v52);
              goto LABEL_143;
            }
            ObpReleaseLookupContext((__int64)v73);
            _m_prefetchw((const void *)(v9 + 16));
            v59 = *(_QWORD *)(v9 + 16);
            v60 = v59 - 16;
            if ( (v59 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v60 = 0LL;
            if ( (v59 & 2) != 0
              || (v61 = *(_QWORD *)(v9 + 16),
                  v61 != _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 16), v60, v59)) )
            {
              ExfReleasePushLock((_QWORD *)(v9 + 16));
            }
            KeAbPostRelease(v9 + 16);
            KeLeaveCriticalRegion();
            ObDereferenceObject(v52);
            v62 = KeGetCurrentThread();
            --v62->KernelApcDisable;
          }
          v65 = *(_QWORD *)(v9 + 16);
          _m_prefetchw((const void *)(v9 + 16));
          if ( (v65 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
            v19 = v65 - 16;
          if ( (v65 & 2) != 0
            || (v66 = *(_QWORD *)(v9 + 16),
                v66 != _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 16), v19, v65)) )
          {
            ExfReleasePushLock((_QWORD *)(v9 + 16));
          }
          KeAbPostRelease(v9 + 16);
          KeLeaveCriticalRegion();
        }
      }
LABEL_143:
      _InterlockedDecrement((volatile signed __int32 *)(v46 + 48));
      if ( v68 )
        KiUnstackDetachProcess(&v76, 0LL);
      if ( v71 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)v9, -v71);
      ObfDereferenceObjectWithTag((PVOID)(v9 + 48), 0x6E48624Fu);
      return 0LL;
    }
    v35 = KeGetCurrentThread();
    --v35->KernelApcDisable;
    v36 = KeAbPreAcquire(v9 + 16, 0LL, 0LL);
    v37 = v36;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v9 + 16), v36, v9 + 16);
    if ( v37 )
      *(_BYTE *)(v37 + 26) |= 1u;
    v34 = *(_QWORD *)(v9 + 8);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1
      && (*(_BYTE *)(v9 + 27) & 8) != 0 )
    {
      *(_QWORD *)(v9 - ObpInfoMaskToOffset[*(_BYTE *)(v9 + 26) & 0x1F]) = 0LL;
    }
    if ( (*(_BYTE *)(v31 + 66) & 0x10) == 0 )
    {
      v33 = (_KPROCESS *)BugCheckParameter1;
LABEL_87:
      _m_prefetchw((const void *)(v9 + 16));
      v41 = *(_QWORD *)(v9 + 16);
      v42 = v41 - 16;
      if ( (v41 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v42 = 0LL;
      if ( (v41 & 2) != 0
        || (v43 = *(_QWORD *)(v9 + 16),
            v43 != _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 16), v42, v41)) )
      {
        ExfReleasePushLock((_QWORD *)(v9 + 16));
      }
      KeAbPostRelease(v9 + 16);
      KeLeaveCriticalRegion();
      goto LABEL_93;
    }
    if ( (*(_BYTE *)(v9 + 26) & 4) != 0 )
      v38 = v9 - ObpInfoMaskToOffset[*(_BYTE *)(v9 + 26) & 7];
    else
      v38 = 0LL;
    if ( (*(_BYTE *)(v9 + 27) & 0x40) != 0 )
    {
      v30 = *(_DWORD *)(v38 + 8) & 0xFFFFFF;
      *(_DWORD *)(v38 + 8) ^= (*(_DWORD *)(v38 + 8) ^ (*(_DWORD *)(v38 + 8) - 1)) & 0xFFFFFF;
    }
    else
    {
      v39 = **(_DWORD **)v38;
      v38 = *(_QWORD *)v38 + 8LL;
      if ( v39 )
      {
        v33 = (_KPROCESS *)BugCheckParameter1;
        while ( 1 )
        {
          v40 = *(_DWORD *)(v38 + 8);
          if ( (v40 & 0xFFFFFF) != 0 && *(_QWORD *)v38 == BugCheckParameter1 )
            break;
          v38 += 16LL;
          if ( !--v39 )
            goto LABEL_76;
        }
        v30 = v40 & 0xFFFFFF;
        *(_DWORD *)(v38 + 8) = v40 ^ (v40 ^ (v40 - 1)) & 0xFFFFFF;
        goto LABEL_76;
      }
    }
    v33 = (_KPROCESS *)BugCheckParameter1;
LABEL_76:
    if ( !*(_BYTE *)(v38 + 11) && (*(_DWORD *)(v38 + 8) & 0xFFFFFF) == 0 )
      *(_QWORD *)v38 = 0LL;
    goto LABEL_87;
  }
  if ( !a5 )
    KeBugCheckEx(0x93u, a4, 0LL, 0LL, 0LL);
  ExUnlockHandleTableEntry(a1, a2);
  KeLeaveCriticalRegion();
  if ( v68 )
    KiUnstackDetachProcess(&v76, 0LL);
  if ( KeIsAttachedProcess()
    || (NtGlobalFlag & 0x400000) == 0
    && !KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[6]
    && !*(_QWORD *)(a1 + 96) )
  {
    return 3221226037LL;
  }
  return KeRaiseUserException(0xC0000235);
}
