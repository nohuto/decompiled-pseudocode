/*
 * XREFs of EtwpAddRegEntryToGroup @ 0x14046CBFC
 * Callers:
 *     EtwpSetProviderTraitsUm @ 0x14046C820 (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsKm @ 0x14050D1D0 (EtwpSetProviderTraitsKm.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     EtwpGetSchematizedFilterSize @ 0x1404359EC (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x140435D70 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140435E90 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReferenceGuidEntry @ 0x140435FC0 (EtwpReferenceGuidEntry.c)
 *     EtwpApplyScopeFilters @ 0x1404382E0 (EtwpApplyScopeFilters.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14046C714 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14046D240 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpIsGuidAllowed @ 0x14046D428 (EtwpIsGuidAllowed.c)
 *     EtwpAccessCheckFromState @ 0x14046D4E8 (EtwpAccessCheckFromState.c)
 *     EtwpAddGuidEntry @ 0x1404CED18 (EtwpAddGuidEntry.c)
 *     EtwpProviderArrivalCallback @ 0x1404CEF74 (EtwpProviderArrivalCallback.c)
 *     EtwpCopySchematizedFilters @ 0x140666DEC (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpAddRegEntryToGroup(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  signed __int64 v6; // rbx
  ULONG_PTR v9; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  struct _KTHREAD *v13; // rax
  unsigned __int64 *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r14
  int SchematizedFilterSize; // eax
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int16 *v20; // r12
  __int64 v21; // r8
  __int64 v22; // rsi
  unsigned __int8 v23; // r15
  unsigned __int8 i; // r14
  unsigned int v25; // r14d
  _DWORD *v26; // r12
  bool v27; // zf
  __int64 v28; // rsi
  int v29; // eax
  signed __int64 *v30; // rsi
  signed __int64 v31; // rax
  signed __int64 v32; // rcx
  signed __int64 v33; // rtt
  signed __int64 *v34; // rdi
  signed __int64 v35; // rax
  signed __int64 v36; // rtt
  __int64 v38; // r13
  __int64 v39; // r14
  int v40; // r14d
  void (__fastcall *v41)(GUID *, __int64, __int64, _QWORD, _QWORD, PVOID *, _QWORD); // r12
  PVOID PoolWithTag; // rsi
  __int64 v43; // r8
  int v44; // r13d
  __int64 v45; // r14
  unsigned __int8 v46; // si
  __int64 v47; // r13
  __int64 v48; // rax
  __int64 v49; // rdx
  unsigned __int8 v50; // [rsp+40h] [rbp-91h]
  char v51[7]; // [rsp+41h] [rbp-90h] BYREF
  _DWORD *v52; // [rsp+48h] [rbp-89h]
  __int64 SiloDriverState; // [rsp+50h] [rbp-81h]
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp-79h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-69h]
  PVOID *v56; // [rsp+70h] [rbp-61h]
  int v57; // [rsp+78h] [rbp-59h] BYREF
  __int64 v58; // [rsp+7Ch] [rbp-55h]
  _BYTE v59[20]; // [rsp+84h] [rbp-4Dh] BYREF
  __int64 v60; // [rsp+98h] [rbp-39h]
  PVOID v61; // [rsp+A0h] [rbp-31h] BYREF
  int v62; // [rsp+A8h] [rbp-29h]
  unsigned int v63; // [rsp+ACh] [rbp-25h]
  $D4FCF91253F76F57393CBFE908971F67 v64; // [rsp+B0h] [rbp-21h] BYREF

  v6 = 0LL;
  v60 = a3;
  v52 = a5;
  v56 = 0LL;
  BugCheckParameter2 = (ULONG_PTR)EtwpFindGuidEntryByGuid(a2, 2);
  v9 = BugCheckParameter2;
  if ( !BugCheckParameter2 )
  {
    BugCheckParameter2 = EtwpAddGuidEntry(a2, 2LL);
    v9 = BugCheckParameter2;
    if ( !BugCheckParameter2 )
      return (unsigned int)-1073741801;
  }
  *a5 = 120;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = KeAbPreAcquire(v9 + 384, 0LL, 0LL);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 384), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v9 + 384), v11, v9 + 384);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  *(_QWORD *)(v9 + 392) = KeGetCurrentThread();
  v13 = KeGetCurrentThread();
  --v13->KernelApcDisable;
  v14 = (unsigned __int64 *)(*(_QWORD *)(a1 + 32) + 384LL);
  v15 = KeAbPreAcquire((ULONG_PTR)v14, 0LL, 0LL);
  v16 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
    ExfAcquirePushLockExclusiveEx(v14, v15, (ULONG_PTR)v14);
  if ( v16 )
    *(_BYTE *)(v16 + 26) |= 1u;
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 392LL) = KeGetCurrentThread();
  if ( *(_QWORD *)(a1 + 40) )
  {
LABEL_50:
    v25 = 0;
    goto LABEL_27;
  }
  SchematizedFilterSize = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), *(_BYTE *)(a1 + 99));
  LODWORD(NumberOfBytes) = SchematizedFilterSize;
  if ( SchematizedFilterSize )
    *a5 += SchematizedFilterSize + 16;
  if ( (*(_BYTE *)(a1 + 98) & 2) != 0 && *a5 > a4 )
  {
    v25 = -1073741789;
    goto LABEL_27;
  }
  EtwpReferenceGuidEntry(v9);
  *(_QWORD *)(a1 + 40) = v9;
  v18 = *(_QWORD *)(v9 + 40);
  v19 = a1 + 16;
  *(_QWORD *)(a1 + 16) = v18;
  *(_QWORD *)(a1 + 24) = v9 + 40;
  if ( *(_QWORD *)(v18 + 8) != v9 + 40 )
    __fastfail(3u);
  *(_QWORD *)(v18 + 8) = v19;
  *(_QWORD *)(v9 + 40) = v19;
  if ( !*(_DWORD *)(v9 + 80) )
  {
    *a5 = 0;
    goto LABEL_50;
  }
  v20 = (unsigned __int16 *)(v9 + 118);
  SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
  v22 = SiloDriverState;
  v50 = 0;
  v23 = 0;
  for ( i = 0; i < 8u; v50 = i )
  {
    if ( !*(_DWORD *)(v20 - 3) )
      goto LABEL_19;
    v38 = EtwpAcquireLoggerContextByLoggerId(v22, *v20, 0LL);
    if ( !(unsigned __int8)EtwpIsGuidAllowed(v38, *(_QWORD *)(a1 + 32) + 24LL) )
      goto LABEL_48;
    v39 = KeAbPreAcquire(v38 + 704, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v38 + 704), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)(v38 + 704), v39, v38 + 704);
    if ( v39 )
      *(_BYTE *)(v39 + 26) |= 1u;
    if ( *(_QWORD *)(v38 + 792) )
      v40 = EtwpAccessCheckFromState(*(_QWORD *)(a1 + 32) + 24LL);
    else
      v40 = -1073741790;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v38 + 704), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v38 + 704));
    KeAbPostRelease(v38 + 704);
    v22 = SiloDriverState;
    if ( v40 >= 0 )
    {
      i = v50;
      v23 += 1 << v50;
LABEL_48:
      EtwpReleaseLoggerContext(v22, v38, 0LL);
      goto LABEL_19;
    }
    EtwpReleaseLoggerContext(SiloDriverState, v38, 0LL);
    i = v50;
LABEL_19:
    ++i;
    v20 += 16;
  }
  v51[0] = v23;
  LOBYTE(v21) = 2;
  v25 = 0;
  EtwpApplyScopeFilters(a1, 0, v21, v51);
  v26 = v52;
  v27 = (v23 & v51[0]) == 0;
  *(_BYTE *)(a1 + 100) = v23 & v51[0];
  if ( v27 )
  {
    *v26 = 0;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 98) & 0x20) != 0 )
    {
      v45 = SiloDriverState;
      v46 = 0;
      v47 = 0LL;
      do
      {
        if ( ((unsigned __int8)(1 << v46) & *(_BYTE *)(a1 + 100)) != 0 )
        {
          v48 = EtwpAcquireLoggerContextByLoggerId(v45, *(unsigned __int16 *)(v47 + *(_QWORD *)(a1 + 40) + 118), 0LL);
          v52 = (_DWORD *)v48;
          if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
          {
            EtwpProviderArrivalCallback(v48, 0LL, a1);
          }
          else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 736LL)) )
          {
            KiStackAttachProcess(*(_KPROCESS **)(a1 + 80), 0LL, (__int64)&v64);
            LOBYTE(v49) = 1;
            EtwpProviderArrivalCallback(v52, v49, a1);
            KiUnstackDetachProcess(&v64, 0LL);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 736LL));
          }
          EtwpReleaseLoggerContext(v45, v52, 0LL);
        }
        ++v46;
        v47 += 32LL;
      }
      while ( v46 < 8u );
      v25 = 0;
    }
    if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
    {
      v41 = *(void (__fastcall **)(GUID *, __int64, __int64, _QWORD, _QWORD, PVOID *, _QWORD))(a1 + 88);
      if ( v41 )
      {
        v57 = 0;
        v58 = 0LL;
        memset(v59, 0, sizeof(v59));
        PoolWithTag = 0LL;
        EtwpComputeRegEntryEnableInfo(a1, (unsigned __int8 *)&v57);
        v44 = NumberOfBytes;
        if ( (_DWORD)NumberOfBytes )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x46777445u);
          if ( PoolWithTag )
          {
            v56 = &v61;
            v61 = PoolWithTag;
            v62 = v44;
            v63 = 0x80000000;
            EtwpCopySchematizedFilters(PoolWithTag);
          }
        }
        LOBYTE(v43) = v58;
        v41(&NullGuid, 1LL, v43, *(_QWORD *)&v59[4], *(_QWORD *)&v59[12], v56, *(_QWORD *)(a1 + 80));
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
      }
    }
    else
    {
      v28 = v60;
      EtwpComputeRegEntryEnableInfo(a1, (unsigned __int8 *)(v60 + 72));
      *v26 = 120;
      v29 = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), *(_BYTE *)(a1 + 99));
      if ( v29 )
      {
        *v26 = v29 + 136;
        *(_DWORD *)(v28 + 128) = v29;
        *(_DWORD *)(v28 + 132) = 0x80000000;
        *(_QWORD *)(v28 + 120) = 136LL;
        EtwpCopySchematizedFilters((void *)(v28 + 136));
        *(_DWORD *)(v28 + 116) = 1;
      }
      else
      {
        *(_DWORD *)(v28 + 116) = 0;
      }
    }
  }
  v9 = BugCheckParameter2;
  if ( SiloDriverState )
    PsDereferenceMonitorContextServerSilo(SiloDriverState);
LABEL_27:
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 392LL) = 0LL;
  v30 = (signed __int64 *)(*(_QWORD *)(a1 + 32) + 384LL);
  _m_prefetchw(v30);
  v31 = *v30;
  v32 = *v30 - 16;
  if ( (*v30 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v32 = 0LL;
  if ( (v31 & 2) != 0 || (v33 = *v30, v33 != _InterlockedCompareExchange64(v30, v32, v31)) )
    ExfReleasePushLock(v30);
  KeAbPostRelease((ULONG_PTR)v30);
  KeLeaveCriticalRegion();
  *(_QWORD *)(*(_QWORD *)(a1 + 40) + 392LL) = 0LL;
  v34 = (signed __int64 *)(*(_QWORD *)(a1 + 40) + 384LL);
  _m_prefetchw(v34);
  v35 = *v34;
  if ( (*v34 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v6 = v35 - 16;
  if ( (v35 & 2) != 0 || (v36 = *v34, v36 != _InterlockedCompareExchange64(v34, v6, v35)) )
    ExfReleasePushLock(v34);
  KeAbPostRelease((ULONG_PTR)v34);
  KeLeaveCriticalRegion();
  EtwpUnreferenceGuidEntry((__int64 *)v9);
  return v25;
}
