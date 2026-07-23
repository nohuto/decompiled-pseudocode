/*
 * XREFs of ObCloseHandleTableEntry @ 0x14044D250
 * Callers:
 *     ExSweepHandleTable @ 0x14045E200 (ExSweepHandleTable.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     ObpCloseHandle @ 0x1404EF704 (ObpCloseHandle.c)
 * Callees:
 *     PsDereferenceSiloContext @ 0x1400019C0 (PsDereferenceSiloContext.c)
 *     PsDetachSiloFromCurrentThread @ 0x1400098A0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1400098C0 (PsAttachSiloToCurrentThread.c)
 *     ObpReleaseLookupContext @ 0x14000BB50 (ObpReleaseLookupContext.c)
 *     PsGetProcessServerSilo @ 0x140013220 (PsGetProcessServerSilo.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     ObpLockDirectoryExclusive @ 0x1400CF410 (ObpLockDirectoryExclusive.c)
 *     KeIsAttachedProcess @ 0x1400E5D20 (KeIsAttachedProcess.c)
 *     ExSweepSingleHandle @ 0x14010D03C (ExSweepSingleHandle.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x140159E30 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x1401D3654 (KeRaiseUserException.c)
 *     ObpLookupDirectoryEntryEx @ 0x14040BDB0 (ObpLookupDirectoryEntryEx.c)
 *     ExUnlockHandleTableEntry @ 0x14045DCA4 (ExUnlockHandleTableEntry.c)
 *     ObpReleaseHandleInfo @ 0x1404A5780 (ObpReleaseHandleInfo.c)
 *     ObpDeleteDirectoryEntry @ 0x1404B3390 (ObpDeleteDirectoryEntry.c)
 *     ObpDeleteSymbolicLinkName @ 0x1404D1CA4 (ObpDeleteSymbolicLinkName.c)
 *     SeCloseObjectAuditAlarm @ 0x140691430 (SeCloseObjectAuditAlarm.c)
 *     EtwpTraceHandle @ 0x1406A2CC0 (EtwpTraceHandle.c)
 *     ExpGetHandleExtraInfo @ 0x1406AD68C (ExpGetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x1406AD94C (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ObCloseHandleTableEntry(
        __int64 a1,
        unsigned int *a2,
        _KPROCESS *a3,
        ULONG_PTR a4,
        unsigned __int8 a5,
        char a6)
{
  char v7; // di
  unsigned __int64 v9; // r14
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // r12
  char v17; // r12
  __int64 v18; // rdx
  signed __int64 v19; // rbx
  _QWORD *HandleExtraInfo; // rax
  unsigned int Number; // eax
  ULONG_PTR v22; // rdi
  _BYTE *v23; // rax
  _BYTE *v24; // rbp
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r8
  unsigned __int64 v28; // rcx
  __int64 v29; // r13
  signed __int64 v30; // rbp
  _KPROCESS *v31; // r15
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v33; // rax
  _BYTE *v34; // rsi
  signed __int64 v35; // rax
  signed __int64 v36; // rcx
  __int64 v37; // rtt
  char v38; // si
  __int64 v39; // rdi
  __int64 ProcessServerSilo; // rax
  __int64 v41; // rax
  __int64 v42; // r15
  struct _KTHREAD *v43; // rax
  _BYTE *v44; // rax
  _BYTE *v45; // rsi
  PVOID v46; // rbp
  signed __int64 v47; // rax
  signed __int64 v48; // rcx
  __int64 v49; // rtt
  struct _KTHREAD *v50; // rax
  _BYTE *v51; // rax
  _BYTE *v52; // rsi
  signed __int64 v53; // rax
  signed __int64 v54; // rcx
  __int64 v55; // rtt
  struct _KTHREAD *v56; // rax
  signed __int64 v57; // rax
  __int64 v58; // rtt
  signed __int64 v59; // rax
  __int64 v60; // rtt
  signed __int32 v61[8]; // [rsp+0h] [rbp-138h] BYREF
  char v62; // [rsp+30h] [rbp-108h]
  char v63; // [rsp+31h] [rbp-107h]
  unsigned int v64; // [rsp+34h] [rbp-104h] BYREF
  __int64 v65; // [rsp+38h] [rbp-100h]
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-F8h]
  unsigned __int64 v67; // [rsp+48h] [rbp-F0h]
  __int64 v68; // [rsp+50h] [rbp-E8h]
  __int128 v69; // [rsp+58h] [rbp-E0h] BYREF
  __int16 v70; // [rsp+76h] [rbp-C2h]
  int v71; // [rsp+78h] [rbp-C0h]
  _BYTE v72[48]; // [rsp+80h] [rbp-B8h] BYREF
  _BYTE v73[48]; // [rsp+B0h] [rbp-88h] BYREF

  v7 = 0;
  v9 = (*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  BugCheckParameter1 = (ULONG_PTR)a3;
  v62 = 0;
  v12 = v9 + 48;
  v13 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)*(unsigned __int8 *)(v9 + 24);
  v68 = BYTE1(v9);
  v14 = ObTypeIndexTable[BYTE1(v9) ^ v13];
  v65 = v14;
  if ( *(_QWORD *)(v14 + 168) )
  {
    if ( KeGetCurrentThread()->ApcState.Process != a3 )
    {
      KiStackAttachProcess(a3, 0, (__int64)v72);
      v7 = 1;
      v12 = v9 + 48;
      v62 = 1;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_KPROCESS *, unsigned __int64, ULONG_PTR, _QWORD))(v65 + 168))(
            a3,
            v12,
            a4,
            a5) )
    {
      ExUnlockHandleTableEntry(a1, a2);
      KeLeaveCriticalRegion();
      if ( v7 )
        KiUnstackDetachProcess((struct _KTHREAD *)v72, 0);
      return 3221226037LL;
    }
    v14 = v65;
    v12 = v9 + 48;
  }
  v16 = ((__int64)*a2 >> 17) & 7;
  if ( (a2[2] & 0x2000000) != 0 )
    LOBYTE(v16) = v16 | 8;
  v17 = v16 & 5;
  if ( (v17 & 1) == 0 || a6 )
  {
    if ( (xmmword_1403AA2D0 & 0x40) != 0 )
    {
      v18 = a4;
      if ( a3 == PsInitialSystemProcess )
        v18 = a4 | 0x80000000;
      EtwpTraceHandle(4385LL, v18, v12, v14);
    }
    v19 = 0LL;
    if ( a6 )
    {
      LODWORD(v65) = ExSweepSingleHandle(a1, a2);
    }
    else
    {
      if ( *(_QWORD *)(a1 + 96) )
        ExpUpdateDebugInfo(a1, KeGetCurrentThread(), a4, 2LL);
      LODWORD(v65) = (unsigned __int16)((unsigned __int64)*a2 >> 1);
      *(_QWORD *)a2 = 0LL;
      _InterlockedOr(v61, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
      v67 = a4 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(_DWORD *)(a1 + 4) )
      {
        HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(a1, v67, v14);
        if ( HandleExtraInfo )
          *HandleExtraInfo = 0LL;
      }
      *((_QWORD *)a2 + 1) = 0LL;
      v63 = *(_BYTE *)(a1 + 44) & 1;
      if ( v63 )
        Number = 0;
      else
        Number = KeGetPcr()->Prcb.Number;
      v22 = a1 + ((Number + 1LL) << 6);
      v23 = (_BYTE *)KeAbPreAcquire(v22, 0LL, 0);
      v24 = v23;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v22, v23, v22);
      if ( v24 )
        v24[26] |= 1u;
      if ( v63 )
      {
        v25 = *(_QWORD *)(v22 + 16);
        if ( v25 )
          *(_QWORD *)(v25 + 8) = a2;
        else
          *(_QWORD *)(v22 + 8) = a2;
        *(_QWORD *)(v22 + 16) = a2;
      }
      else
      {
        v26 = *(_QWORD *)(v22 + 8);
        *((_QWORD *)a2 + 1) = v26;
        if ( !v26 )
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
      LOBYTE(v27) = 1;
      SeCloseObjectAuditAlarm(v9 + 48, a4 & 0xFFFFFFFFFFFFFFFCuLL, v27);
    }
    v28 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)*(unsigned __int8 *)(v9 + 24);
    v64 = 0;
    v29 = ObTypeIndexTable[v68 ^ v28];
    if ( (*(_BYTE *)(v29 + 66) & 0x10) != 0 || (*(_BYTE *)(v9 + 27) & 8) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v33 = (_BYTE *)KeAbPreAcquire(v9 + 16, 0LL, 0);
      v34 = v33;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 16), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v9 + 16), v33, v9 + 16);
      if ( v34 )
        v34[26] |= 1u;
      v30 = *(_QWORD *)(v9 + 8);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1
        && (*(_BYTE *)(v9 + 27) & 8) != 0 )
      {
        *(_QWORD *)(v9 - ObpInfoMaskToOffset[*(_BYTE *)(v9 + 26) & 0x1F]) = 0LL;
      }
      v31 = (_KPROCESS *)BugCheckParameter1;
      if ( (*(_BYTE *)(v29 + 66) & 0x10) != 0 )
        ObpReleaseHandleInfo(v9, BugCheckParameter1, &v64);
      _m_prefetchw((const void *)(v9 + 16));
      v35 = *(_QWORD *)(v9 + 16);
      v36 = v35 - 16;
      if ( (v35 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v36 = 0LL;
      if ( (v35 & 2) != 0
        || (v37 = *(_QWORD *)(v9 + 16),
            v37 != _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 16), v36, v35)) )
      {
        ExfReleasePushLock((_QWORD *)(v9 + 16));
      }
      KeAbPostRelease(v9 + 16);
      KeLeaveCriticalRegion();
    }
    else
    {
      v30 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 8), 0xFFFFFFFFFFFFFFFFuLL);
      v31 = (_KPROCESS *)BugCheckParameter1;
    }
    if ( *(_QWORD *)(v29 + 128) )
    {
      v38 = 0;
      v39 = 0LL;
      if ( KeGetCurrentThread()->ApcState.Process != v31 )
      {
        v38 = 1;
        ProcessServerSilo = PsGetProcessServerSilo((__int64)v31);
        v39 = PsAttachSiloToCurrentThread(ProcessServerSilo);
        KiStackAttachProcess(v31, 0, (__int64)v73);
      }
      (*(void (__fastcall **)(_KPROCESS *, unsigned __int64, _QWORD, signed __int64))(v29 + 128))(
        v31,
        v9 + 48,
        v64,
        v30);
      if ( v38 )
      {
        KiUnstackDetachProcess((struct _KTHREAD *)v73, 0);
        PsDetachSiloFromCurrentThread(v39);
      }
    }
    if ( v30 == 1 && (*(_BYTE *)(v9 + 26) & 2) != 0 )
    {
      v41 = ObpInfoMaskToOffset[*(_BYTE *)(v9 + 26) & 3];
      v42 = v9 - v41;
      if ( v9 != v41 )
      {
        v43 = KeGetCurrentThread();
        --v43->KernelApcDisable;
        while ( 1 )
        {
          v44 = (_BYTE *)KeAbPreAcquire(v9 + 16, 0LL, 0);
          v45 = v44;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 16), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v9 + 16), v44, v9 + 16);
          if ( v45 )
            v45[26] |= 1u;
          v46 = *(PVOID *)v42;
          if ( !*(_QWORD *)v42 || (*(_BYTE *)(v9 + 27) & 0x10) != 0 || *(_QWORD *)(v9 + 8) )
            break;
          ObfReferenceObject(*(PVOID *)v42);
          _m_prefetchw((const void *)(v9 + 16));
          v47 = *(_QWORD *)(v9 + 16);
          v48 = v47 - 16;
          if ( (v47 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v48 = 0LL;
          if ( (v47 & 2) != 0
            || (v49 = *(_QWORD *)(v9 + 16),
                v49 != _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 16), v48, v47)) )
          {
            ExfReleasePushLock((_QWORD *)(v9 + 16));
          }
          KeAbPostRelease(v9 + 16);
          KeLeaveCriticalRegion();
          v70 = 0;
          v71 = -60876;
          v69 = 0LL;
          ObpLockDirectoryExclusive((__int64)&v69, (__int64)v46);
          v50 = KeGetCurrentThread();
          --v50->KernelApcDisable;
          v51 = (_BYTE *)KeAbPreAcquire(v9 + 16, 0LL, 0);
          v52 = v51;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 16), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v9 + 16), v51, v9 + 16);
          if ( v52 )
            v52[26] |= 1u;
          if ( *(PVOID *)v42 == v46 && (*(_BYTE *)(v9 + 27) & 0x10) == 0 && !*(_QWORD *)(v9 + 8) )
          {
            if ( !*(_DWORD *)(v42 + 24) )
            {
              if ( (POBJECT_TYPE)ObTypeIndexTable[v68 ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)*(unsigned __int8 *)(v9 + 24)] == ObpSymbolicLinkObjectType )
                ObpDeleteSymbolicLinkName(v9 + 48);
              ObpLookupDirectoryEntryEx(
                *(unsigned __int64 **)v42,
                (unsigned __int16 *)(v42 + 8),
                0,
                0,
                0,
                (__int64)&v69);
              ObpDeleteDirectoryEntry(&v69);
            }
            ObpReleaseLookupContext((__int64)&v69);
            _m_prefetchw((const void *)(v9 + 16));
            v57 = *(_QWORD *)(v9 + 16);
            if ( (v57 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
              v19 = v57 - 16;
            if ( (v57 & 2) != 0
              || (v58 = *(_QWORD *)(v9 + 16),
                  v58 != _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 16), v19, v57)) )
            {
              ExfReleasePushLock((_QWORD *)(v9 + 16));
            }
            KeAbPostRelease(v9 + 16);
            KeLeaveCriticalRegion();
            PsDereferenceSiloContext(v46);
            goto LABEL_123;
          }
          ObpReleaseLookupContext((__int64)&v69);
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
          PsDereferenceSiloContext(v46);
          v56 = KeGetCurrentThread();
          --v56->KernelApcDisable;
        }
        v59 = *(_QWORD *)(v9 + 16);
        _m_prefetchw((const void *)(v9 + 16));
        if ( (v59 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v19 = v59 - 16;
        if ( (v59 & 2) != 0
          || (v60 = *(_QWORD *)(v9 + 16),
              v60 != _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 16), v19, v59)) )
        {
          ExfReleasePushLock((_QWORD *)(v9 + 16));
        }
        KeAbPostRelease(v9 + 16);
        KeLeaveCriticalRegion();
      }
    }
LABEL_123:
    _InterlockedDecrement((volatile signed __int32 *)(v29 + 48));
    if ( v62 )
      KiUnstackDetachProcess((struct _KTHREAD *)v72, 0);
    if ( (_DWORD)v65 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)v9, -(int)v65);
    ObfDereferenceObjectWithTag((PVOID)(v9 + 48), 0x6E48624Fu);
    return 0LL;
  }
  else
  {
    if ( !a5 )
      KeBugCheckEx(0x93u, a4, 0LL, 0LL, 0LL);
    ExUnlockHandleTableEntry(a1, a2);
    KeLeaveCriticalRegion();
    if ( v62 )
      KiUnstackDetachProcess((struct _KTHREAD *)v72, 0);
    if ( !KeIsAttachedProcess()
      && ((NtGlobalFlag & 0x400000) != 0
       || KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[6]
       || *(_QWORD *)(a1 + 96)) )
    {
      return KeRaiseUserException(0xC0000235);
    }
    else
    {
      return 3221226037LL;
    }
  }
}
