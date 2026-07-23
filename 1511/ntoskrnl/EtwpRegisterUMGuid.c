/*
 * XREFs of EtwpRegisterUMGuid @ 0x140435640
 * Callers:
 *     NtTraceControl @ 0x140436E10 (NtTraceControl.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     EtwpAccessCheck @ 0x140435590 (EtwpAccessCheck.c)
 *     EtwpGetSchematizedFilterSize @ 0x1404359EC (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x140435D70 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140435E90 (EtwpFindGuidEntryByGuid.c)
 *     EtwpAddUmRegEntry @ 0x140438150 (EtwpAddUmRegEntry.c)
 *     EtwpApplyScopeFilters @ 0x1404382E0 (EtwpApplyScopeFilters.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14046C714 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpUpdateEnableMask @ 0x14046D0E0 (EtwpUpdateEnableMask.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14046D240 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpAddGuidEntry @ 0x1404CED18 (EtwpAddGuidEntry.c)
 *     EtwpProviderArrivalCallback @ 0x1404CEF74 (EtwpProviderArrivalCallback.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1406639BC (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpCopySchematizedFilters @ 0x140666DEC (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpRegisterUMGuid(__int64 a1, unsigned int a2, unsigned int *a3)
{
  signed __int64 v3; // rbx
  int v4; // r15d
  bool v7; // zf
  __int64 v8; // rax
  ULONG_PTR GuidEntryByGuid; // rsi
  int v10; // r12d
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbp
  int SchematizedFilterSize; // eax
  __int64 v17; // r8
  _BYTE *v18; // rbp
  _BOOL8 v19; // rdx
  unsigned __int8 v20; // r15
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r8
  signed __int64 v25; // rax
  signed __int64 v26; // rtt
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r15
  int v31; // eax
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  __int64 v33; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int8 v34; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v35; // [rsp+88h] [rbp+10h]
  __int64 v36; // [rsp+98h] [rbp+20h]

  v35 = a2;
  v3 = 0LL;
  v4 = *(_DWORD *)(a1 + 16);
  LODWORD(v36) = *(_DWORD *)(a1 + 20);
  v8 = *(_QWORD *)a1 - *(_QWORD *)&SecurityProviderGuid.Data1;
  v7 = *(_QWORD *)a1 == *(_QWORD *)&SecurityProviderGuid.Data1;
  v33 = 0LL;
  Object = 0LL;
  if ( v7 )
    v8 = *(_QWORD *)(a1 + 8) - *(_QWORD *)SecurityProviderGuid.Data4;
  if ( !v8 )
    return 3221225506LL;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, (unsigned int)(v4 - 2) > 1);
  if ( GuidEntryByGuid || (GuidEntryByGuid = EtwpAddGuidEntry(a1, (unsigned int)(v4 - 2) > 1)) != 0 )
  {
    v10 = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(GuidEntryByGuid + 56), 0x800u, 0LL);
    if ( v10 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v12 = (signed __int64 *)(GuidEntryByGuid + 384);
      v13 = KeAbPreAcquire(GuidEntryByGuid + 384, 0LL, 0LL);
      v15 = v13;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(GuidEntryByGuid + 384), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(GuidEntryByGuid + 384), v13, GuidEntryByGuid + 384);
      if ( v15 )
        *(_BYTE *)(v15 + 26) |= 1u;
      LOBYTE(v14) = -1;
      *(_QWORD *)(GuidEntryByGuid + 392) = KeGetCurrentThread();
      *a3 = 160;
      SchematizedFilterSize = EtwpGetSchematizedFilterSize(GuidEntryByGuid, v14);
      if ( SchematizedFilterSize )
        *a3 = SchematizedFilterSize + 176;
      if ( *a3 > v35 )
      {
        v10 = -1073741789;
      }
      else
      {
        v10 = EtwpAddUmRegEntry(GuidEntryByGuid, (__int64)&Object, (__int64)&v33);
        if ( v10 >= 0 )
        {
          v18 = Object;
          *(_QWORD *)(a1 + 24) = v33;
          if ( *(_DWORD *)(GuidEntryByGuid + 80) )
          {
            LOBYTE(v17) = 1;
            EtwpUpdateEnableMask(GuidEntryByGuid, (v18[98] & 8) != 0, v17, v18 + 99);
          }
          v19 = (v18[98] & 8) != 0;
          v34 = v18[99];
          EtwpApplyScopeFilters(v18, v19, 0LL, &v34);
          if ( (v18[98] & 8) != 0 )
            v18[99] = v34;
          else
            v18[99] &= v34;
          v20 = v18[99];
          v34 = v20;
          if ( v20 )
          {
            EtwpComputeRegEntryEnableInfo(v18, a1 + 112);
            v31 = *(_BYTE *)(GuidEntryByGuid + 75) & 1;
            BYTE3(v36) = 0;
            *(_DWORD *)(a1 + 152) = v31;
            LOWORD(v36) = *(_WORD *)(GuidEntryByGuid + 72);
            BYTE2(v36) = *(_BYTE *)(GuidEntryByGuid + 74);
            HIDWORD(v36) = *(_DWORD *)(GuidEntryByGuid + 64);
            v21 = v36;
          }
          else
          {
            memset((void *)(a1 + 112), 0, 0x20uLL);
            v21 = 0LL;
            *(_DWORD *)(a1 + 152) = 0;
          }
          *(_QWORD *)(a1 + 144) = v21;
          *a3 = 160;
          v22 = EtwpGetSchematizedFilterSize(GuidEntryByGuid, v20);
          if ( v22 )
          {
            *a3 = v22 + 176;
            *(_DWORD *)(a1 + 168) = v22;
            *(_DWORD *)(a1 + 172) = 0x80000000;
            *(_QWORD *)(a1 + 160) = 136LL;
            EtwpCopySchematizedFilters((void *)(a1 + 176));
            *(_DWORD *)(a1 + 156) = 1;
          }
          else
          {
            *(_DWORD *)(a1 + 156) = 0;
          }
          *(_DWORD *)(a1 + 44) = *a3;
          if ( (v18[98] & 8) != 0 )
          {
            if ( v20 )
            {
              v28 = EtwpAcquireLoggerContextByLoggerId(0LL, *(unsigned __int16 *)(GuidEntryByGuid + 72), 0LL);
              v30 = v28;
              if ( v28 )
              {
                LOBYTE(v29) = 1;
                EtwpProviderArrivalCallback(v28, v29, v18);
                EtwpReleaseLoggerContext(0LL, v30, 0LL);
              }
            }
          }
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
            EtwpEventWriteTemplateSessAndProv(v23, &ETW_EVENT_PROVIDER_REGISTER, v24, 1LL, 0LL, a1);
        }
      }
      *(_QWORD *)(GuidEntryByGuid + 392) = 0LL;
      _m_prefetchw(v12);
      v25 = *v12;
      if ( (*v12 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v3 = v25 - 16;
      if ( (v25 & 2) != 0 || (v26 = *v12, v26 != _InterlockedCompareExchange64(v12, v3, v25)) )
        ExfReleasePushLock((_QWORD *)(GuidEntryByGuid + 384));
      KeAbPostRelease(GuidEntryByGuid + 384);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( Object )
        ObfDereferenceObject(Object);
    }
    EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v10;
}
