/*
 * XREFs of MmExtendSection @ 0x1405218EC
 * Callers:
 *     CcSetFileSizesEx @ 0x14007344C (CcSetFileSizesEx.c)
 *     CcInitializeCacheMapEx @ 0x1400E8440 (CcInitializeCacheMapEx.c)
 *     MiCreateSection @ 0x14042CD40 (MiCreateSection.c)
 *     MiAllocateVirtualMemory @ 0x140430E80 (MiAllocateVirtualMemory.c)
 *     NtExtendSection @ 0x140659D98 (NtExtendSection.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     MiDereferenceControlAreaFile @ 0x140026640 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140026690 (MiReferenceControlAreaFile.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     MiSectionControlArea @ 0x14002C4D0 (MiSectionControlArea.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     MiSubsectionUsingExtents @ 0x1400E7F14 (MiSubsectionUsingExtents.c)
 *     MiUpdateLastSubsectionSize @ 0x1400FCA18 (MiUpdateLastSubsectionSize.c)
 *     MiFindLastSubsection @ 0x1400FD130 (MiFindLastSubsection.c)
 *     MiUpdateActiveSubsection @ 0x1401EAC88 (MiUpdateActiveSubsection.c)
 *     FsRtlGetFileSize @ 0x14042C454 (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x1404ED434 (FsRtlSetFileSize.c)
 *     MiExtendSection @ 0x140521CB4 (MiExtendSection.c)
 */

__int64 __fastcall MmExtendSection(__int64 a1, LARGE_INTEGER *a2, int a3)
{
  __int64 v5; // rax
  _QWORD *v6; // rdx
  __int64 v7; // rsi
  struct _KTHREAD *CurrentThread; // r13
  __int64 v9; // r15
  unsigned __int64 v10; // r12
  _BYTE *v11; // rax
  _BYTE *v12; // rdi
  ULONG_PTR LastSubsection; // rbp
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r12
  unsigned int v16; // esi
  int v17; // eax
  int updated; // edi
  _QWORD *v20; // rcx
  ULONG_PTR v21; // rax
  struct _FILE_OBJECT *v22; // rbp
  _BYTE *v23; // rax
  _BYTE *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  _BYTE *v28; // rax
  signed __int8 v29; // cf
  _BYTE *v30; // rdi
  unsigned __int64 v31; // rax
  _BYTE *v32; // rax
  _BYTE *v33; // rdi
  LARGE_INTEGER *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  LARGE_INTEGER FileSize; // [rsp+78h] [rbp+20h] BYREF

  v5 = MiSectionControlArea(a1);
  v7 = v5;
  if ( (*(_DWORD *)(v5 + 56) & 0x420) != 0 || !*(_QWORD *)(v5 + 64) )
    return 3221225607LL;
  if ( *v6 <= 0x3FFFFFFFFFF000uLL )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = *(_QWORD *)v5;
    v10 = (unsigned __int64)(*v6 + 4095LL) >> 12;
    --CurrentThread->SpecialApcDisable;
    v11 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140326548, 0LL, 0);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140326548, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_140326548, v11, (ULONG_PTR)&qword_140326548);
    if ( v12 )
      v12[26] |= 1u;
    if ( (*(_DWORD *)(v7 + 56) & 0x8000) == 0 )
    {
      v31 = *(_QWORD *)(a1 + 48);
      if ( a2->QuadPart <= v31 )
      {
        a2->QuadPart = v31;
        goto LABEL_16;
      }
    }
    if ( a3 )
    {
LABEL_10:
      LastSubsection = MiFindLastSubsection(v7, 0);
      v14 = *(unsigned int *)(v9 + 8) | ((unsigned __int64)(*(_WORD *)(v9 + 12) & 0x3FF) << 32);
      if ( v10 <= v14 )
      {
        *(LARGE_INTEGER *)(a1 + 48) = *a2;
        if ( (unsigned __int64)_InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 24), -1LL, -1LL) < a2->QuadPart )
        {
          _InterlockedExchange64((volatile __int64 *)(v9 + 24), a2->QuadPart);
          MiUpdateLastSubsectionSize((unsigned __int8 *)LastSubsection, a2, 0);
        }
        goto LABEL_16;
      }
      v15 = v10 - v14;
      if ( v15 <= (*(_DWORD *)(LastSubsection + 52) & 0x7FFFFFFFu) )
      {
        v16 = v15;
      }
      else
      {
        v16 = *(_DWORD *)(LastSubsection + 52) & 0x7FFFFFFF;
        if ( v15 != v16 )
        {
          v17 = MiExtendSection(LastSubsection);
          goto LABEL_14;
        }
      }
      if ( (unsigned int)MiSubsectionUsingExtents((unsigned __int8 *)LastSubsection) )
      {
        if ( *(_QWORD *)(LastSubsection + 8) )
        {
          updated = MiUpdateActiveSubsection(v20);
          if ( updated < 0 )
            goto LABEL_17;
        }
      }
      v17 = MiUpdateLastSubsectionSize((unsigned __int8 *)LastSubsection, a2, v16);
LABEL_14:
      updated = v17;
      if ( v17 >= 0 )
      {
        _InterlockedExchange64((volatile __int64 *)(v9 + 24), a2->QuadPart);
        *(LARGE_INTEGER *)(a1 + 48) = *a2;
LABEL_16:
        updated = 0;
      }
LABEL_17:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140326548, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140326548);
      KeAbPostRelease((ULONG_PTR)&qword_140326548);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      return (unsigned int)updated;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140326548, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140326548);
    KeAbPostRelease((ULONG_PTR)&qword_140326548);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v21 = MiReferenceControlAreaFile(v7);
    --CurrentThread->KernelApcDisable;
    v22 = (struct _FILE_OBJECT *)v21;
    v23 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140326550, 0LL, 0);
    v24 = v23;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140326550, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_140326550, v23, (ULONG_PTR)&qword_140326550);
    if ( v24 )
      v24[26] |= 1u;
    updated = FsRtlGetFileSize(v22, &FileSize);
    if ( updated >= 0 )
    {
      if ( a2->QuadPart <= (unsigned __int64)FileSize.QuadPart )
      {
LABEL_36:
        if ( *(_QWORD *)(v9 + 32) )
        {
          --CurrentThread->SpecialApcDisable;
          v32 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140326560, 0LL, 0);
          v33 = v32;
          if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140326560, 0LL) )
            ExfAcquirePushLockExclusiveEx(&qword_140326560, v32, (ULONG_PTR)&qword_140326560);
          if ( v33 )
            v33[26] |= 1u;
          v34 = *(LARGE_INTEGER **)(v9 + 32);
          if ( v34 )
            *v34 = FileSize;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140326560, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140326560);
          KeAbPostRelease((ULONG_PTR)&qword_140326560);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140326550, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140326550);
        KeAbPostRelease((ULONG_PTR)&qword_140326550);
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v25, v26, v27);
        MiDereferenceControlAreaFile(v7, (unsigned __int64)v22);
        --CurrentThread->SpecialApcDisable;
        v28 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140326548, 0LL, 0);
        v29 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140326548, 0LL);
        v30 = v28;
        if ( v29 )
          ExfAcquirePushLockExclusiveEx(&qword_140326548, v28, (ULONG_PTR)&qword_140326548);
        if ( v30 )
          v30[26] |= 1u;
        goto LABEL_10;
      }
      if ( (*(_DWORD *)(a1 + 60) & 0x44) == 0 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140326550, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140326550);
        updated = -1073741689;
        goto LABEL_60;
      }
      FileSize = *a2;
      updated = FsRtlSetFileSize(v22, (__int64 *)&FileSize);
      if ( updated >= 0 )
        goto LABEL_36;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140326550, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140326550);
LABEL_60:
    KeAbPostRelease((ULONG_PTR)&qword_140326550);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v35, v36, v37);
    MiDereferenceControlAreaFile(v7, (unsigned __int64)v22);
    return (unsigned int)updated;
  }
  return 3221225536LL;
}
