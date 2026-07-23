/*
 * XREFs of EtwpAddRegEntryToGroup @ 0x14040B73C
 * Callers:
 *     EtwpSetProviderTraitsUm @ 0x14040851C (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsKm @ 0x140549074 (EtwpSetProviderTraitsKm.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwpAccessCheckFromState @ 0x140406EDC (EtwpAccessCheckFromState.c)
 *     EtwpApplyScopeFilters @ 0x14040CB48 (EtwpApplyScopeFilters.c)
 *     EtwpFindGuidEntryByGuid @ 0x14040D350 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReferenceGuidEntry @ 0x14040D460 (EtwpReferenceGuidEntry.c)
 *     EtwpGetSchematizedFilterSize @ 0x14040D870 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x14040DC0C (EtwpUnreferenceGuidEntry.c)
 *     EtwpAccessCheck @ 0x14040DE8C (EtwpAccessCheck.c)
 *     EtwpAddGuidEntry @ 0x14048E090 (EtwpAddGuidEntry.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140490B4C (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140490C10 (EtwpReleaseLoggerContext.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1404927B0 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpIsGuidAllowed @ 0x1404929F4 (EtwpIsGuidAllowed.c)
 *     EtwpProviderArrivalCallback @ 0x1404B47FC (EtwpProviderArrivalCallback.c)
 *     EtwpCopySchematizedFilters @ 0x1406A8E68 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpAddRegEntryToGroup(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  __int64 v5; // rax
  signed __int64 v6; // rbx
  __int64 v9; // r14
  ULONG_PTR v10; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v12; // r15
  _BYTE *v13; // rax
  _BYTE *v14; // rsi
  struct _KTHREAD *v15; // rax
  unsigned __int64 *v16; // r14
  _BYTE *v17; // rax
  _BYTE *v18; // rsi
  __int64 v19; // rdx
  int v20; // esi
  int SchematizedFilterSize; // eax
  __int64 v22; // r8
  _QWORD *v23; // rcx
  __int64 v24; // rdx
  _QWORD *v25; // rax
  unsigned __int16 *v26; // r15
  __int64 v27; // r13
  unsigned __int8 v28; // r14
  unsigned __int8 v29; // r12
  bool v30; // zf
  char v31; // al
  _DWORD *v32; // r12
  __int64 v33; // r14
  __int64 v34; // rdx
  int v35; // eax
  __int64 *v36; // rdi
  signed __int64 v37; // rax
  signed __int64 v38; // rcx
  __int64 v39; // rtt
  signed __int64 v40; // rax
  __int64 v41; // rtt
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rsi
  unsigned __int64 *v46; // r14
  NTSTATUS v47; // edx
  __int64 v48; // rsi
  _TOKEN_ACCESS_INFORMATION *v49; // r8
  void (__fastcall *v50)(GUID *, __int64, __int64, _QWORD, _QWORD, PVOID *, _QWORD); // r12
  void *v51; // r14
  __int64 v52; // r8
  __int64 v53; // r12
  unsigned __int8 v54; // r14
  __int64 v55; // r15
  __int64 v56; // rax
  __int64 v57; // rdx
  PVOID PoolWithTag; // rax
  unsigned __int8 v59; // [rsp+40h] [rbp-91h]
  char v60[7]; // [rsp+41h] [rbp-90h] BYREF
  __int64 v61; // [rsp+48h] [rbp-89h]
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-81h]
  __int64 v63; // [rsp+58h] [rbp-79h]
  __int64 GuidEntryByGuid; // [rsp+60h] [rbp-71h]
  _DWORD *v65; // [rsp+68h] [rbp-69h]
  PVOID *v66; // [rsp+70h] [rbp-61h]
  int v67; // [rsp+78h] [rbp-59h] BYREF
  __int64 v68; // [rsp+7Ch] [rbp-55h]
  _BYTE v69[20]; // [rsp+84h] [rbp-4Dh] BYREF
  __int64 v70; // [rsp+98h] [rbp-39h]
  PVOID v71; // [rsp+A8h] [rbp-29h] BYREF
  int v72; // [rsp+B0h] [rbp-21h]
  unsigned int v73; // [rsp+B4h] [rbp-1Dh]
  _BYTE v74[48]; // [rsp+B8h] [rbp-19h] BYREF

  v5 = *(_QWORD *)(a1 + 32);
  v6 = 0LL;
  v70 = a3;
  LODWORD(v61) = a4;
  v9 = *(_QWORD *)(v5 + 376);
  v65 = a5;
  v66 = 0LL;
  v63 = v9;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(v9, a2, 2LL);
  v10 = GuidEntryByGuid;
  if ( !GuidEntryByGuid )
  {
    GuidEntryByGuid = EtwpAddGuidEntry(v9, a2, 2LL);
    v10 = GuidEntryByGuid;
    if ( !GuidEntryByGuid )
      return (unsigned int)-1073741801;
  }
  *a5 = 120;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = (__int64 *)(v10 + 384);
  v13 = (_BYTE *)KeAbPreAcquire(v10 + 384, 0LL, 0);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 384), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v10 + 384), v13, v10 + 384);
  if ( v14 )
    v14[26] |= 1u;
  *(_QWORD *)(v10 + 392) = KeGetCurrentThread();
  v15 = KeGetCurrentThread();
  --v15->KernelApcDisable;
  v16 = (unsigned __int64 *)(*(_QWORD *)(a1 + 32) + 384LL);
  v17 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v16, 0LL, 0);
  v18 = v17;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0LL) )
    ExfAcquirePushLockExclusiveEx(v16, v17, (ULONG_PTR)v16);
  if ( v18 )
    v18[26] |= 1u;
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 392LL) = KeGetCurrentThread();
  if ( *(_QWORD *)(a1 + 40) )
  {
LABEL_49:
    v20 = 0;
    goto LABEL_26;
  }
  v20 = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(v10 + 56), 0x1000u);
  if ( v20 < 0 )
    goto LABEL_26;
  LOBYTE(v19) = *(_BYTE *)(a1 + 100);
  SchematizedFilterSize = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), v19);
  LODWORD(NumberOfBytes) = SchematizedFilterSize;
  if ( SchematizedFilterSize )
    *a5 += SchematizedFilterSize + 16;
  if ( (*(_BYTE *)(a1 + 98) & 2) != 0 && *a5 > (unsigned int)v61 )
  {
    v20 = -1073741789;
    goto LABEL_26;
  }
  EtwpReferenceGuidEntry(v10);
  v23 = (_QWORD *)(v10 + 40);
  *(_QWORD *)(a1 + 40) = v10;
  v24 = *(_QWORD *)(v10 + 40);
  v25 = (_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v24 + 8) != v10 + 40 )
    __fastfail(3u);
  *v25 = v24;
  *(_QWORD *)(a1 + 24) = v23;
  *(_QWORD *)(v24 + 8) = v25;
  *v23 = v25;
  if ( !*(_DWORD *)(v10 + 80) )
  {
    *a5 = 0;
    goto LABEL_49;
  }
  v26 = (unsigned __int16 *)(v10 + 118);
  v59 = 0;
  v27 = v63;
  v28 = 0;
  v29 = 0;
  do
  {
    if ( !*(_DWORD *)(v26 - 3) )
      goto LABEL_20;
    v43 = EtwpAcquireLoggerContextByLoggerId(v27, *v26, 0LL);
    v44 = *(_QWORD *)(a1 + 32) + 24LL;
    v61 = v43;
    v45 = v43;
    if ( !(unsigned __int8)EtwpIsGuidAllowed(v43, v44) )
      goto LABEL_47;
    v46 = (unsigned __int64 *)(v45 + 688);
    v48 = KeAbPreAcquire(v45 + 688, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v46, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v46, v48, (ULONG_PTR)v46);
    if ( v48 )
      *(_BYTE *)(v48 + 26) |= 1u;
    v45 = v61;
    v49 = *(_TOKEN_ACCESS_INFORMATION **)(v61 + 776);
    if ( v49 )
      LODWORD(v61) = EtwpAccessCheckFromState((unsigned int *)(*(_QWORD *)(a1 + 32) + 24LL), v47, v49);
    else
      LODWORD(v61) = -1073741790;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v46, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v46);
    KeAbPostRelease((ULONG_PTR)v46);
    if ( (int)v61 >= 0 )
    {
      v28 = v59;
      v29 += 1 << v59;
LABEL_47:
      EtwpReleaseLoggerContext(v45, 0LL);
      goto LABEL_20;
    }
    EtwpReleaseLoggerContext(v45, 0LL);
    v28 = v59;
LABEL_20:
    ++v28;
    v26 += 16;
    v59 = v28;
  }
  while ( v28 < 8u );
  v60[0] = v29;
  LOBYTE(v22) = 2;
  v20 = 0;
  EtwpApplyScopeFilters(a1, 0LL, v22, v60);
  v10 = GuidEntryByGuid;
  v31 = v29 & v60[0];
  v30 = (v29 & v60[0]) == 0;
  v32 = v65;
  *(_BYTE *)(a1 + 101) = v31;
  v12 = (__int64 *)(v10 + 384);
  if ( v30 )
  {
    *v32 = 0;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 98) & 0x20) != 0 )
    {
      v53 = v63;
      v54 = 0;
      v55 = 0LL;
      do
      {
        if ( ((unsigned __int8)(1 << v54) & *(_BYTE *)(a1 + 101)) != 0 )
        {
          v56 = EtwpAcquireLoggerContextByLoggerId(v53, *(unsigned __int16 *)(*(_QWORD *)(a1 + 40) + v55 + 118), 0LL);
          v30 = (*(_BYTE *)(a1 + 98) & 1) == 0;
          v63 = v56;
          if ( v30 )
          {
            if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 736LL)) )
            {
              KiStackAttachProcess(*(_KPROCESS **)(a1 + 80), 0, (__int64)v74);
              LOBYTE(v57) = 1;
              EtwpProviderArrivalCallback(v63, v57, a1);
              KiUnstackDetachProcess((struct _KTHREAD *)v74, 0);
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 736LL));
            }
          }
          else
          {
            EtwpProviderArrivalCallback(v56, 0LL, a1);
          }
          EtwpReleaseLoggerContext(v63, 0LL);
        }
        ++v54;
        v55 += 32LL;
      }
      while ( v54 < 8u );
      v32 = v65;
      v12 = (__int64 *)(v10 + 384);
    }
    if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
    {
      v50 = *(void (__fastcall **)(GUID *, __int64, __int64, _QWORD, _QWORD, PVOID *, _QWORD))(a1 + 88);
      if ( v50 )
      {
        v67 = 0;
        v68 = 0LL;
        memset(v69, 0, sizeof(v69));
        v51 = 0LL;
        EtwpComputeRegEntryEnableInfo(a1, &v67);
        if ( (_DWORD)NumberOfBytes )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x46777445u);
          v51 = PoolWithTag;
          if ( PoolWithTag )
          {
            v66 = &v71;
            v72 = NumberOfBytes;
            v71 = PoolWithTag;
            v73 = 0x80000000;
            EtwpCopySchematizedFilters(PoolWithTag);
          }
        }
        LOBYTE(v52) = v68;
        v50(&NullGuid, 1LL, v52, *(_QWORD *)&v69[4], *(_QWORD *)&v69[12], v66, *(_QWORD *)(a1 + 80));
        if ( v51 )
          ExFreePoolWithTag(v51, 0);
      }
    }
    else
    {
      v33 = v70;
      EtwpComputeRegEntryEnableInfo(a1, v70 + 72);
      *v32 = 120;
      LOBYTE(v34) = *(_BYTE *)(a1 + 100);
      v35 = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), v34);
      if ( v35 )
      {
        *v32 = v35 + 136;
        *(_DWORD *)(v33 + 128) = v35;
        *(_DWORD *)(v33 + 132) = 0x80000000;
        *(_QWORD *)(v33 + 120) = 136LL;
        EtwpCopySchematizedFilters((void *)(v33 + 136));
        *(_DWORD *)(v33 + 116) = 1;
      }
      else
      {
        *(_DWORD *)(v33 + 116) = 0;
      }
    }
  }
LABEL_26:
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 392LL) = 0LL;
  v36 = (__int64 *)(*(_QWORD *)(a1 + 32) + 384LL);
  _m_prefetchw(v36);
  v37 = *v36;
  v38 = *v36 - 16;
  if ( (*v36 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v38 = 0LL;
  if ( (v37 & 2) != 0 || (v39 = *v36, v39 != _InterlockedCompareExchange64(v36, v38, v37)) )
    ExfReleasePushLock(v36);
  KeAbPostRelease((ULONG_PTR)v36);
  KeLeaveCriticalRegion();
  *(_QWORD *)(v10 + 392) = 0LL;
  _m_prefetchw(v12);
  v40 = *v12;
  if ( (*v12 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v6 = v40 - 16;
  if ( (v40 & 2) != 0 || (v41 = *v12, v41 != _InterlockedCompareExchange64(v12, v6, v40)) )
    ExfReleasePushLock(v12);
  KeAbPostRelease((ULONG_PTR)v12);
  KeLeaveCriticalRegion();
  EtwpUnreferenceGuidEntry(v10);
  return (unsigned int)v20;
}
