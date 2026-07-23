/*
 * XREFs of EtwpRegisterProvider @ 0x1404CC76C
 * Callers:
 *     EtwRegisterClassicProvider @ 0x1404CC708 (EtwRegisterClassicProvider.c)
 *     EtwRegister @ 0x1404CC744 (EtwRegister.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     EtwpGetSchematizedFilterSize @ 0x1404359EC (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x140435D70 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140435E90 (EtwpFindGuidEntryByGuid.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14046C714 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpUpdateEnableMask @ 0x14046D0E0 (EtwpUpdateEnableMask.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14046D240 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpAddKmRegEntry @ 0x1404CCAA4 (EtwpAddKmRegEntry.c)
 *     EtwpAddGuidEntry @ 0x1404CED18 (EtwpAddGuidEntry.c)
 *     EtwpProviderArrivalCallback @ 0x1404CEF74 (EtwpProviderArrivalCallback.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1406639BC (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpCopySchematizedFilters @ 0x140666DEC (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpRegisterProvider(
        __int64 a1,
        int a2,
        void (__fastcall *a3)(GUID *, __int64, __int64, __int64, __int64, PVOID *, __int64),
        __int64 a4,
        __int64 a5,
        __int64 *a6)
{
  signed __int64 v6; // rbx
  __int64 v8; // r13
  bool v9; // zf
  __int64 v10; // rax
  _QWORD *GuidEntryByGuid; // rdi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r14
  unsigned int v16; // r14d
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  unsigned int *v24; // rax
  unsigned int *v25; // r15
  PVOID PoolWithTag; // r15
  unsigned int SchematizedFilterSize; // eax
  __int64 v28; // r8
  unsigned int v29; // r13d
  int v30; // [rsp+40h] [rbp-69h]
  PVOID *v31; // [rsp+48h] [rbp-61h]
  __int128 v33; // [rsp+58h] [rbp-51h]
  __int64 v35; // [rsp+70h] [rbp-39h] BYREF
  int v36; // [rsp+78h] [rbp-31h] BYREF
  char v37; // [rsp+7Ch] [rbp-2Dh]
  __int64 v38; // [rsp+88h] [rbp-21h]
  __int64 v39; // [rsp+90h] [rbp-19h]
  PVOID v40; // [rsp+98h] [rbp-11h] BYREF
  unsigned int v41; // [rsp+A0h] [rbp-9h]
  unsigned int v42; // [rsp+A4h] [rbp-5h]
  __int128 v43; // [rsp+A8h] [rbp-1h] BYREF

  v6 = 0LL;
  v8 = a1;
  *a6 = 0LL;
  v10 = *(_QWORD *)a1 - *(_QWORD *)&SecurityProviderGuid.Data1;
  v9 = *(_QWORD *)a1 == *(_QWORD *)&SecurityProviderGuid.Data1;
  v35 = 0LL;
  if ( v9 )
    v10 = *(_QWORD *)(a1 + 8) - *(_QWORD *)SecurityProviderGuid.Data4;
  if ( !v10 )
    return 3221225506LL;
  if ( !a3 && a4 || a2 != 3 && (a2 != 2 || !a3) )
    return 3221225485LL;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid((_DWORD *)a1, 0);
  if ( GuidEntryByGuid || (GuidEntryByGuid = (_QWORD *)EtwpAddGuidEntry(v8, 0LL)) != 0LL )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v13 = GuidEntryByGuid + 48;
    v14 = KeAbPreAcquire((ULONG_PTR)(GuidEntryByGuid + 48), 0LL, 0LL);
    v15 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)GuidEntryByGuid + 96, 0LL) )
      ExfAcquirePushLockExclusiveEx(GuidEntryByGuid + 48, v14, (ULONG_PTR)(GuidEntryByGuid + 48));
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    GuidEntryByGuid[49] = KeGetCurrentThread();
    v30 = EtwpAddKmRegEntry((ULONG_PTR)GuidEntryByGuid, (__int64)&v35);
    v16 = v30;
    if ( v30 >= 0 )
    {
      v17 = v35;
      *(_QWORD *)(v35 + 48) = a5;
      *a6 = v17;
      if ( *((_DWORD *)GuidEntryByGuid + 20) )
        EtwpUpdateEnableMask((__int64)GuidEntryByGuid, (*(_BYTE *)(v17 + 98) & 8) != 0, 0, (_BYTE *)(v17 + 99));
      EtwpComputeRegEntryEnableInfo(v17, (unsigned __int8 *)&v36);
      if ( (*(_BYTE *)(v17 + 98) & 8) != 0 && (*((_BYTE *)GuidEntryByGuid + 75) & 1) != 0 )
      {
        v24 = EtwpAcquireLoggerContextByLoggerId(0LL, *((unsigned __int16 *)GuidEntryByGuid + 36), 0);
        v25 = v24;
        if ( v24 )
        {
          EtwpProviderArrivalCallback(v24, 0LL, v17);
          EtwpReleaseLoggerContext(0LL, v25, 0);
        }
      }
      if ( a3 )
      {
        if ( (*(_BYTE *)(v17 + 98) & 8) != 0 )
        {
          if ( (*((_BYTE *)GuidEntryByGuid + 75) & 1) != 0 )
          {
            LOWORD(v33) = *((_WORD *)GuidEntryByGuid + 36);
            LOBYTE(v18) = 1;
            WORD1(v33) = *((unsigned __int8 *)GuidEntryByGuid + 74);
            DWORD1(v33) = *((_DWORD *)GuidEntryByGuid + 16);
            *((_QWORD *)&v33 + 1) = *((unsigned int *)GuidEntryByGuid + 17);
            v43 = v33;
            ((void (__fastcall *)(_QWORD *, __int64, __int128 *, __int64))a3)(GuidEntryByGuid + 3, v18, &v43, a4);
          }
        }
        else if ( v36 )
        {
          PoolWithTag = 0LL;
          v31 = 0LL;
          SchematizedFilterSize = EtwpGetSchematizedFilterSize((__int64)GuidEntryByGuid, *(_BYTE *)(v17 + 99));
          v29 = SchematizedFilterSize;
          if ( SchematizedFilterSize )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, SchematizedFilterSize, 0x46777445u);
            if ( PoolWithTag )
            {
              v40 = PoolWithTag;
              v41 = v29;
              v42 = 0x80000000;
              v31 = &v40;
              EtwpCopySchematizedFilters(PoolWithTag);
            }
          }
          LOBYTE(v28) = v37;
          a3(&NullGuid, 1LL, v28, v38, v39, v31, a4);
          if ( PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0);
          v8 = a1;
        }
      }
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
        EtwpEventWriteTemplateSessAndProv(v19, &ETW_EVENT_PROVIDER_REGISTER, v20, 1LL, 0LL, v8);
      v16 = v30;
    }
    GuidEntryByGuid[49] = 0LL;
    _m_prefetchw(v13);
    v21 = *v13;
    if ( (*v13 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v6 = v21 - 16;
    if ( (v21 & 2) != 0 || (v22 = *v13, v22 != _InterlockedCompareExchange64(v13, v6, v21)) )
      ExfReleasePushLock(GuidEntryByGuid + 48);
    KeAbPostRelease((ULONG_PTR)(GuidEntryByGuid + 48));
    KeLeaveCriticalRegion();
    EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v16;
}
