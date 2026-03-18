/*
 * XREFs of EtwpRegisterProvider @ 0x140492024
 * Callers:
 *     EtwRegisterClassicProvider @ 0x140492C2C (EtwRegisterClassicProvider.c)
 *     EtwRegister @ 0x140549F44 (EtwRegister.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
 *     EtwEventEnabled @ 0x1400D54D0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwpFindGuidEntryByGuid @ 0x14040E490 (EtwpFindGuidEntryByGuid.c)
 *     EtwpGetSchematizedFilterSize @ 0x14040E9B0 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x14040ED4C (EtwpUnreferenceGuidEntry.c)
 *     EtwpAddGuidEntry @ 0x14048D600 (EtwpAddGuidEntry.c)
 *     EtwpUpdateEnableMask @ 0x14048FFF8 (EtwpUpdateEnableMask.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404900BC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140490180 (EtwpReleaseLoggerContext.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x140491D20 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpAddKmRegEntry @ 0x140492360 (EtwpAddKmRegEntry.c)
 *     EtwpProviderArrivalCallback @ 0x1404D0D5C (EtwpProviderArrivalCallback.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1406A430C (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpCopySchematizedFilters @ 0x1406A8D30 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpRegisterProvider(
        __int64 a1,
        __int64 a2,
        int a3,
        void (__fastcall *a4)(__int64, __int64, __int128 *, __int64),
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  signed __int64 v7; // rbx
  _DWORD *v10; // r13
  bool v11; // zf
  __int64 v12; // rax
  __int64 GuidEntryByGuid; // rdi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v15; // rsi
  _BYTE *v16; // rax
  _BYTE *v17; // r14
  unsigned int v18; // r14d
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  __int64 v26; // rax
  unsigned int *v27; // r15
  PVOID PoolWithTag; // r15
  unsigned int SchematizedFilterSize; // eax
  __int64 v30; // r8
  unsigned int v31; // r13d
  int v32; // [rsp+40h] [rbp-81h]
  PVOID *v33; // [rsp+48h] [rbp-79h]
  __int128 v34; // [rsp+58h] [rbp-69h]
  __int64 v35; // [rsp+68h] [rbp-59h] BYREF
  _DWORD *v36; // [rsp+70h] [rbp-51h]
  __int64 v37; // [rsp+78h] [rbp-49h]
  int v38; // [rsp+80h] [rbp-41h] BYREF
  char v39; // [rsp+84h] [rbp-3Dh]
  __int64 v40; // [rsp+90h] [rbp-31h]
  __int64 v41; // [rsp+98h] [rbp-29h]
  PVOID v42; // [rsp+A0h] [rbp-21h] BYREF
  unsigned int v43; // [rsp+A8h] [rbp-19h]
  unsigned int v44; // [rsp+ACh] [rbp-15h]
  __int128 v45; // [rsp+B0h] [rbp-11h] BYREF

  v7 = 0LL;
  v37 = a1;
  *a7 = 0LL;
  v10 = (_DWORD *)a2;
  v12 = *(_QWORD *)a2 - SecurityProviderGuid;
  v11 = *(_QWORD *)a2 == (_QWORD)SecurityProviderGuid;
  v36 = (_DWORD *)a2;
  v35 = 0LL;
  if ( v11 )
    v12 = *(_QWORD *)(a2 + 8) - *((_QWORD *)&SecurityProviderGuid + 1);
  if ( !v12 )
    return 3221225506LL;
  if ( !a4 && a5 || a3 != 3 && (a3 != 2 || !a4) )
    return 3221225485LL;
  GuidEntryByGuid = (__int64)EtwpFindGuidEntryByGuid(a1, (_DWORD *)a2, 0);
  if ( GuidEntryByGuid || (GuidEntryByGuid = EtwpAddGuidEntry(a1, v10, 0)) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v15 = (signed __int64 *)(GuidEntryByGuid + 384);
    v16 = (_BYTE *)KeAbPreAcquire(GuidEntryByGuid + 384, 0LL, 0);
    v17 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(GuidEntryByGuid + 384), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(GuidEntryByGuid + 384), v16, GuidEntryByGuid + 384);
    if ( v17 )
      v17[26] |= 1u;
    *(_QWORD *)(GuidEntryByGuid + 392) = KeGetCurrentThread();
    v32 = EtwpAddKmRegEntry(GuidEntryByGuid, (__int64)&v35);
    v18 = v32;
    if ( v32 >= 0 )
    {
      v19 = v35;
      *(_QWORD *)(v35 + 48) = a6;
      *a7 = v19;
      if ( *(_DWORD *)(GuidEntryByGuid + 80) )
        EtwpUpdateEnableMask(GuidEntryByGuid, (*(_BYTE *)(v19 + 98) & 8) != 0, 0, (_BYTE *)(v19 + 100));
      EtwpComputeRegEntryEnableInfo(v19, (unsigned __int8 *)&v38);
      if ( (*(_BYTE *)(v19 + 98) & 8) != 0 && (*(_BYTE *)(GuidEntryByGuid + 75) & 1) != 0 )
      {
        v26 = EtwpAcquireLoggerContextByLoggerId(v37, *(unsigned __int16 *)(GuidEntryByGuid + 72), 0);
        v27 = (unsigned int *)v26;
        if ( v26 )
        {
          EtwpProviderArrivalCallback(v26, 0LL, v19);
          EtwpReleaseLoggerContext(v27, 0);
        }
      }
      if ( a4 )
      {
        if ( (*(_BYTE *)(v19 + 98) & 8) != 0 )
        {
          if ( (*(_BYTE *)(GuidEntryByGuid + 75) & 1) != 0 )
          {
            LOWORD(v34) = *(_WORD *)(GuidEntryByGuid + 72);
            LOBYTE(v20) = 1;
            WORD1(v34) = *(unsigned __int8 *)(GuidEntryByGuid + 74);
            DWORD1(v34) = *(_DWORD *)(GuidEntryByGuid + 64);
            *((_QWORD *)&v34 + 1) = *(unsigned int *)(GuidEntryByGuid + 68);
            v45 = v34;
            a4(GuidEntryByGuid + 24, v20, &v45, a5);
          }
        }
        else if ( v38 )
        {
          PoolWithTag = 0LL;
          v33 = 0LL;
          SchematizedFilterSize = EtwpGetSchematizedFilterSize(GuidEntryByGuid, *(_BYTE *)(v19 + 100));
          v31 = SchematizedFilterSize;
          if ( SchematizedFilterSize )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, SchematizedFilterSize, 0x46777445u);
            if ( PoolWithTag )
            {
              v42 = PoolWithTag;
              v43 = v31;
              v44 = 0x80000000;
              v33 = &v42;
              EtwpCopySchematizedFilters(PoolWithTag);
            }
          }
          LOBYTE(v30) = v39;
          ((void (__fastcall *)(GUID *, __int64, __int64, __int64, __int64, PVOID *, __int64))a4)(
            &NullGuid,
            1LL,
            v30,
            v40,
            v41,
            v33,
            a5);
          if ( PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0);
          v10 = v36;
        }
      }
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
        EtwpEventWriteTemplateSessAndProv(v21, &ETW_EVENT_PROVIDER_REGISTER, v22, 1LL, 0LL, v10);
      v18 = v32;
    }
    *(_QWORD *)(GuidEntryByGuid + 392) = 0LL;
    _m_prefetchw(v15);
    v23 = *v15;
    if ( (*v15 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v7 = v23 - 16;
    if ( (v23 & 2) != 0 || (v24 = *v15, v24 != _InterlockedCompareExchange64(v15, v7, v23)) )
      ExfReleasePushLock((_QWORD *)(GuidEntryByGuid + 384));
    KeAbPostRelease(GuidEntryByGuid + 384);
    KeLeaveCriticalRegion();
    EtwpUnreferenceGuidEntry((__int64 *)GuidEntryByGuid);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v18;
}
