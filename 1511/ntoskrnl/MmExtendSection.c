/*
 * XREFs of MmExtendSection @ 0x1403C7408
 * Callers:
 *     CcSetFileSizesEx @ 0x1400AED28 (CcSetFileSizesEx.c)
 *     CcInitializeCacheMap @ 0x1400AF300 (CcInitializeCacheMap.c)
 *     MiCreateSection @ 0x1403F80B0 (MiCreateSection.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     NtExtendSection @ 0x14062500C (NtExtendSection.c)
 * Callees:
 *     MiFindLastSubsection @ 0x1400081A0 (MiFindLastSubsection.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x14003AD10 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     MiSubsectionUsingExtents @ 0x1400A8E40 (MiSubsectionUsingExtents.c)
 *     MiUpdateLastSubsectionSize @ 0x1400ED09C (MiUpdateLastSubsectionSize.c)
 *     MiExtendSection @ 0x1403C7890 (MiExtendSection.c)
 *     FsRtlGetFileSize @ 0x1403F7C1C (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x1404A2234 (FsRtlSetFileSize.c)
 *     MiAllocateFileExtents @ 0x14062C488 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MmExtendSection(__int64 a1, LARGE_INTEGER *a2, int a3)
{
  __int64 v5; // rax
  _QWORD *v6; // rdx
  __int64 v7; // rbp
  struct _KTHREAD *CurrentThread; // r12
  __int64 v9; // r15
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  ULONG_PTR LastSubsection; // rbp
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  unsigned int v16; // edi
  int updated; // eax
  int FileExtents; // esi
  ULONG_PTR v20; // rax
  struct _FILE_OBJECT *v21; // r13
  __int64 v22; // rax
  __int64 v23; // rdi
  NTSTATUS v24; // edi
  __int64 v25; // rax
  __int64 v26; // rdi
  LARGE_INTEGER *v27; // rcx
  __int64 v28; // rax
  signed __int8 v29; // cf
  __int64 v30; // rdi
  unsigned __int64 v31; // rax
  LARGE_INTEGER FileSize; // [rsp+88h] [rbp+20h] BYREF

  v5 = MiSectionControlArea(a1);
  v7 = v5;
  if ( (*(_DWORD *)(v5 + 56) & 0x420) != 0 || !*(_QWORD *)(v5 + 64) )
    return 3221225607LL;
  if ( *v6 > 0x3FFFFFFFFFF000uLL )
    return 3221225536LL;
  CurrentThread = KeGetCurrentThread();
  v9 = *(_QWORD *)v5;
  v10 = (unsigned __int64)(*v6 + 4095LL) >> 12;
  --CurrentThread->SpecialApcDisable;
  v11 = KeAbPreAcquire((ULONG_PTR)&qword_1402FE288, 0LL, 0LL);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FE288, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_1402FE288, v11, (ULONG_PTR)&qword_1402FE288);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  if ( (*(_DWORD *)(v7 + 56) & 0x8000) == 0 )
  {
    v31 = *(_QWORD *)(a1 + 48);
    if ( a2->QuadPart <= v31 )
    {
      a2->QuadPart = v31;
      goto LABEL_16;
    }
  }
  if ( !a3 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FE288, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FE288);
    KeAbPostRelease((ULONG_PTR)&qword_1402FE288);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v20 = MI_REFERENCE_CONTROL_AREA_FILE(v7);
    --CurrentThread->KernelApcDisable;
    v21 = (struct _FILE_OBJECT *)v20;
    v22 = KeAbPreAcquire((ULONG_PTR)&qword_1402FE290, 0LL, 0LL);
    v23 = v22;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FE290, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_1402FE290, v22, (ULONG_PTR)&qword_1402FE290);
    if ( v23 )
      *(_BYTE *)(v23 + 26) |= 1u;
    v24 = FsRtlGetFileSize(v21, &FileSize);
    if ( v24 >= 0 )
    {
      if ( a2->QuadPart <= (unsigned __int64)FileSize.QuadPart )
      {
LABEL_35:
        if ( *(_QWORD *)(v9 + 32) )
        {
          --CurrentThread->SpecialApcDisable;
          v25 = KeAbPreAcquire((ULONG_PTR)&qword_1402FE2A0, 0LL, 0LL);
          v26 = v25;
          if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FE2A0, 0LL) )
            ExfAcquirePushLockExclusiveEx(&qword_1402FE2A0, v25, (ULONG_PTR)&qword_1402FE2A0);
          if ( v26 )
            *(_BYTE *)(v26 + 26) |= 1u;
          v27 = *(LARGE_INTEGER **)(v9 + 32);
          if ( v27 )
            *v27 = FileSize;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FE2A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FE2A0);
          KeAbPostRelease((ULONG_PTR)&qword_1402FE2A0);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FE290, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FE290);
        KeAbPostRelease((ULONG_PTR)&qword_1402FE290);
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
        MI_DEREFERENCE_CONTROL_AREA_FILE(v7, (unsigned __int64)v21);
        --CurrentThread->SpecialApcDisable;
        v28 = KeAbPreAcquire((ULONG_PTR)&qword_1402FE288, 0LL, 0LL);
        v29 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FE288, 0LL);
        v30 = v28;
        if ( v29 )
          ExfAcquirePushLockExclusiveEx(&qword_1402FE288, v28, (ULONG_PTR)&qword_1402FE288);
        if ( v30 )
          *(_BYTE *)(v30 + 26) |= 1u;
        goto LABEL_10;
      }
      if ( (*(_DWORD *)(a1 + 60) & 0x44) == 0 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FE290, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FE290);
        v24 = -1073741689;
        goto LABEL_59;
      }
      FileSize = *a2;
      v24 = FsRtlSetFileSize(v21);
      if ( v24 >= 0 )
        goto LABEL_35;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FE290, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FE290);
LABEL_59:
    KeAbPostRelease((ULONG_PTR)&qword_1402FE290);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    MI_DEREFERENCE_CONTROL_AREA_FILE(v7, (unsigned __int64)v21);
    return (unsigned int)v24;
  }
LABEL_10:
  LastSubsection = MiFindLastSubsection(v7, 0);
  v14 = *(unsigned int *)(v9 + 8) | ((unsigned __int64)(*(_WORD *)(v9 + 12) & 0x3FF) << 32);
  if ( v10 <= v14 )
  {
    *(LARGE_INTEGER *)(a1 + 48) = *a2;
    if ( (unsigned __int64)_InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 24), -1LL, -1LL) < a2->QuadPart )
    {
      _InterlockedExchange64((volatile __int64 *)(v9 + 24), a2->QuadPart);
      MiUpdateLastSubsectionSize((__int64 **)LastSubsection, a2, 0);
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
      updated = MiExtendSection(LastSubsection);
      goto LABEL_14;
    }
  }
  if ( (unsigned int)MiSubsectionUsingExtents((_BYTE *)LastSubsection) )
  {
    if ( *(_QWORD *)(LastSubsection + 8) )
    {
      FileExtents = MiAllocateFileExtents(LastSubsection, 0);
      if ( FileExtents < 0 )
        goto LABEL_17;
    }
  }
  updated = MiUpdateLastSubsectionSize((__int64 **)LastSubsection, a2, v16);
LABEL_14:
  FileExtents = updated;
  if ( updated >= 0 )
  {
    _InterlockedExchange64((volatile __int64 *)(v9 + 24), a2->QuadPart);
    *(LARGE_INTEGER *)(a1 + 48) = *a2;
LABEL_16:
    FileExtents = 0;
  }
LABEL_17:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FE288, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FE288);
  KeAbPostRelease((ULONG_PTR)&qword_1402FE288);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return (unsigned int)FileExtents;
}
