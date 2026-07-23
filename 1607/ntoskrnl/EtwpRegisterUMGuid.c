/*
 * XREFs of EtwpRegisterUMGuid @ 0x14040D4A0
 * Callers:
 *     NtTraceControl @ 0x14040CC00 (NtTraceControl.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     EtwpAddUmRegEntry @ 0x14040C99C (EtwpAddUmRegEntry.c)
 *     EtwpApplyScopeFilters @ 0x14040CB48 (EtwpApplyScopeFilters.c)
 *     EtwpFindGuidEntryByGuid @ 0x14040D350 (EtwpFindGuidEntryByGuid.c)
 *     EtwpGetSchematizedFilterSize @ 0x14040D870 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x14040DC0C (EtwpUnreferenceGuidEntry.c)
 *     EtwpAccessCheck @ 0x14040DE8C (EtwpAccessCheck.c)
 *     EtwpAddGuidEntry @ 0x14048E090 (EtwpAddGuidEntry.c)
 *     EtwpUpdateEnableMask @ 0x140490A88 (EtwpUpdateEnableMask.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140490B4C (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140490C10 (EtwpReleaseLoggerContext.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1404927B0 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpProviderArrivalCallback @ 0x1404B47FC (EtwpProviderArrivalCallback.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1406A4444 (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpCopySchematizedFilters @ 0x1406A8E68 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpRegisterUMGuid(__int64 a1, __int64 a2, unsigned int a3, char a4, unsigned int *a5)
{
  signed __int64 v5; // rbx
  int v6; // r15d
  bool v9; // zf
  __int64 v10; // rax
  _QWORD *GuidEntryByGuid; // rsi
  int v12; // r12d
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v14; // r14
  _BYTE *v15; // rax
  __int64 v16; // rdx
  _BYTE *v17; // rbp
  unsigned int *v18; // r13
  int SchematizedFilterSize; // eax
  __int64 v20; // r8
  _BYTE *v21; // rbp
  char v22; // dl
  unsigned __int8 v23; // r15
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  signed __int64 v28; // rax
  signed __int64 v29; // rtt
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r15
  int v37; // [rsp+30h] [rbp-68h]
  __int64 v38; // [rsp+30h] [rbp-68h]
  PVOID Object; // [rsp+38h] [rbp-60h] BYREF
  __int64 v40[3]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int8 v42; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v43; // [rsp+B0h] [rbp+18h]
  char v44; // [rsp+B8h] [rbp+20h]

  v44 = a4;
  v43 = a3;
  v5 = 0LL;
  v6 = *(_DWORD *)(a2 + 16);
  v37 = *(_DWORD *)(a2 + 20);
  v10 = *(_QWORD *)a2 - *(_QWORD *)&SecurityProviderGuid.Data1;
  v9 = *(_QWORD *)a2 == *(_QWORD *)&SecurityProviderGuid.Data1;
  v40[0] = 0LL;
  Object = 0LL;
  if ( v9 )
    v10 = *(_QWORD *)(a2 + 8) - *(_QWORD *)SecurityProviderGuid.Data4;
  if ( !v10 )
    return 3221225506LL;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, (_DWORD *)a2, (unsigned int)(v6 - 2) > 1);
  if ( GuidEntryByGuid || (GuidEntryByGuid = (_QWORD *)EtwpAddGuidEntry(a1, a2, (unsigned int)(v6 - 2) > 1)) != 0LL )
  {
    v12 = EtwpAccessCheck((PSECURITY_DESCRIPTOR)GuidEntryByGuid[7], 0x800u);
    if ( v12 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v14 = GuidEntryByGuid + 48;
      v15 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(GuidEntryByGuid + 48), 0LL, 0);
      v17 = v15;
      if ( _interlockedbittestandset64((volatile signed __int32 *)GuidEntryByGuid + 96, 0LL) )
        ExfAcquirePushLockExclusiveEx(GuidEntryByGuid + 48, v15, (ULONG_PTR)(GuidEntryByGuid + 48));
      if ( v17 )
        v17[26] |= 1u;
      LOBYTE(v16) = -1;
      v18 = a5;
      GuidEntryByGuid[49] = KeGetCurrentThread();
      *v18 = 160;
      SchematizedFilterSize = EtwpGetSchematizedFilterSize(GuidEntryByGuid, v16);
      if ( SchematizedFilterSize )
        *v18 = SchematizedFilterSize + 176;
      if ( *v18 > v43 )
      {
        v12 = -1073741789;
      }
      else
      {
        v12 = EtwpAddUmRegEntry(
                (ULONG_PTR)GuidEntryByGuid,
                v6,
                v37,
                *(_QWORD *)(a2 + 32),
                (volatile signed __int16 **)&Object,
                (__int64)v40);
        if ( v12 >= 0 )
        {
          if ( v44 )
            _InterlockedOr16((volatile signed __int16 *)Object + 49, 0x100u);
          v21 = Object;
          *(_QWORD *)(a2 + 24) = v40[0];
          if ( *((_DWORD *)GuidEntryByGuid + 20) )
          {
            LOBYTE(v20) = 1;
            EtwpUpdateEnableMask(GuidEntryByGuid, (v21[98] & 8) != 0, v20, v21 + 100);
          }
          v22 = (v21[98] & 8) != 0;
          v42 = v21[100];
          EtwpApplyScopeFilters((__int64)v21, v22, 0, &v42);
          if ( (v21[98] & 8) != 0 )
            v21[100] = v42;
          else
            v21[100] &= v42;
          v23 = v21[100];
          v42 = v23;
          if ( v23 )
          {
            EtwpComputeRegEntryEnableInfo(v21, a2 + 112);
            *(_DWORD *)(a2 + 152) = *((_BYTE *)GuidEntryByGuid + 75) & 1;
            LOWORD(v38) = *((_WORD *)GuidEntryByGuid + 36);
            WORD1(v38) = *((unsigned __int8 *)GuidEntryByGuid + 74);
            HIDWORD(v38) = *((_DWORD *)GuidEntryByGuid + 16);
            v24 = v38;
          }
          else
          {
            memset((void *)(a2 + 112), 0, 0x20uLL);
            v24 = 0LL;
            *(_DWORD *)(a2 + 152) = 0;
          }
          *(_QWORD *)(a2 + 144) = v24;
          *v18 = 160;
          v25 = EtwpGetSchematizedFilterSize(GuidEntryByGuid, v23);
          if ( v25 )
          {
            *v18 = v25 + 176;
            *(_DWORD *)(a2 + 168) = v25;
            *(_DWORD *)(a2 + 172) = 0x80000000;
            *(_QWORD *)(a2 + 160) = 136LL;
            EtwpCopySchematizedFilters((void *)(a2 + 176));
            *(_DWORD *)(a2 + 156) = 1;
          }
          else
          {
            *(_DWORD *)(a2 + 156) = 0;
          }
          *(_DWORD *)(a2 + 44) = *v18;
          if ( (v21[98] & 8) != 0 )
          {
            if ( v23 )
            {
              v34 = EtwpAcquireLoggerContextByLoggerId(a1, *((unsigned __int16 *)GuidEntryByGuid + 36), 0LL);
              v36 = v34;
              if ( v34 )
              {
                LOBYTE(v35) = 1;
                EtwpProviderArrivalCallback(v34, v35, v21);
                EtwpReleaseLoggerContext(v36, 0LL);
              }
            }
          }
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
            EtwpEventWriteTemplateSessAndProv(v26, &ETW_EVENT_PROVIDER_REGISTER, v27, 1LL, 0LL, a2);
        }
      }
      GuidEntryByGuid[49] = 0LL;
      _m_prefetchw(v14);
      v28 = *v14;
      if ( (*v14 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v5 = v28 - 16;
      if ( (v28 & 2) != 0 || (v29 = *v14, v29 != _InterlockedCompareExchange64(v14, v5, v28)) )
        ExfReleasePushLock(GuidEntryByGuid + 48);
      KeAbPostRelease((ULONG_PTR)(GuidEntryByGuid + 48));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v30, v31, v32);
      if ( Object )
        ObfDereferenceObject(Object);
    }
    EtwpUnreferenceGuidEntry((ULONG_PTR)GuidEntryByGuid);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v12;
}
