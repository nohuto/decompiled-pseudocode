/*
 * XREFs of EtwpAddRegEntryToGroup @ 0x1404D1618
 * Callers:
 *     EtwpSetProviderTraitsUm @ 0x1404D2CA0 (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsKm @ 0x14057E810 (EtwpSetProviderTraitsKm.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140437A78 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpProviderArrivalCallback @ 0x1404660B8 (EtwpProviderArrivalCallback.c)
 *     EtwpGetSchematizedFilterSize @ 0x1404CDFBC (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x1404CE13C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1404CE270 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReferenceGuidEntry @ 0x1404CE3DC (EtwpReferenceGuidEntry.c)
 *     EtwpApplyScopeFilters @ 0x1404CECE4 (EtwpApplyScopeFilters.c)
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 *     EtwpIsGuidAllowed @ 0x1404D3364 (EtwpIsGuidAllowed.c)
 *     EtwpAccessCheckFromState @ 0x1404D33A8 (EtwpAccessCheckFromState.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1404D345C (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpAddGuidEntry @ 0x1404D4348 (EtwpAddGuidEntry.c)
 *     EtwpCopySchematizedFilters @ 0x1406E9FD4 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpAddRegEntryToGroup(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  char *GuidEntryByGuid; // rsi
  unsigned int SchematizedFilterSize; // eax
  SIZE_T v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int8 v13; // r15
  unsigned __int16 *v14; // r12
  unsigned __int8 v15; // di
  __int64 v16; // r12
  unsigned int v17; // r14d
  bool v18; // zf
  char v19; // al
  _DWORD *v20; // rdi
  __int64 v21; // r15
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v27; // r14
  int v28; // eax
  void (__fastcall *v29)(GUID *, __int64, __int64, _QWORD, _QWORD, PVOID *, _QWORD); // r15
  PVOID PoolWithTag; // rdi
  __int64 v31; // r8
  unsigned __int8 i; // r15
  __int64 v33; // rax
  struct _EX_RUNDOWN_REF *v34; // rdx
  unsigned __int64 v35; // rtt
  BOOLEAN v36; // al
  struct _EX_RUNDOWN_REF *v37; // rcx
  unsigned __int64 v38; // rtt
  char v39[8]; // [rsp+40h] [rbp-71h] BYREF
  _DWORD *v40; // [rsp+48h] [rbp-69h]
  PVOID *v41; // [rsp+50h] [rbp-61h]
  int v42; // [rsp+58h] [rbp-59h] BYREF
  __int64 v43; // [rsp+5Ch] [rbp-55h]
  _BYTE v44[20]; // [rsp+64h] [rbp-4Dh] BYREF
  __int64 v45; // [rsp+78h] [rbp-39h]
  PVOID v46; // [rsp+88h] [rbp-29h] BYREF
  int v47; // [rsp+90h] [rbp-21h]
  unsigned int v48; // [rsp+94h] [rbp-1Dh]
  _BYTE v49[48]; // [rsp+98h] [rbp-19h] BYREF

  v45 = a3;
  v40 = a5;
  v41 = 0LL;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a2, 2);
  if ( !GuidEntryByGuid )
  {
    GuidEntryByGuid = (char *)EtwpAddGuidEntry(a2, 2LL);
    if ( !GuidEntryByGuid )
      return (unsigned int)-1073741801;
  }
  *a5 = 120;
  KeWaitForSingleObject(&EtwpNotificationMutex, Executive, 0, 0, 0LL);
  if ( *(_QWORD *)(a1 + 40) )
  {
LABEL_27:
    v17 = 0;
    goto LABEL_17;
  }
  SchematizedFilterSize = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), *(_BYTE *)(a1 + 99));
  v10 = SchematizedFilterSize;
  if ( SchematizedFilterSize )
    *a5 += SchematizedFilterSize + 16;
  if ( (*(_BYTE *)(a1 + 98) & 2) == 0 || *a5 <= a4 )
  {
    EtwpReferenceGuidEntry((ULONG_PTR)GuidEntryByGuid);
    *(_QWORD *)(a1 + 40) = GuidEntryByGuid;
    v11 = *((_QWORD *)GuidEntryByGuid + 5);
    v12 = a1 + 16;
    *(_QWORD *)(a1 + 16) = v11;
    *(_QWORD *)(a1 + 24) = GuidEntryByGuid + 40;
    if ( *(char **)(v11 + 8) != GuidEntryByGuid + 40 )
      __fastfail(3u);
    *(_QWORD *)(v11 + 8) = v12;
    *((_QWORD *)GuidEntryByGuid + 5) = v12;
    if ( *((_DWORD *)GuidEntryByGuid + 20) )
    {
      v13 = 0;
      v14 = (unsigned __int16 *)(GuidEntryByGuid + 118);
      v15 = 0;
      do
      {
        if ( *(_DWORD *)(v14 - 3) )
        {
          v27 = EtwpAcquireLoggerContextByLoggerId(*v14, 0);
          if ( (unsigned __int8)EtwpIsGuidAllowed(v27 + 896, *(_QWORD *)(a1 + 32) + 24LL) )
          {
            v28 = *(_QWORD *)(v27 + 792) ? EtwpAccessCheckFromState(*(_QWORD *)(a1 + 32) + 24LL) : -1073741790;
            if ( v28 >= 0 )
              v15 += 1 << v13;
          }
          EtwpReleaseLoggerContext(v27, 0LL);
        }
        ++v13;
        v14 += 16;
      }
      while ( v13 < 8u );
      v16 = 0LL;
      v39[0] = v15;
      v17 = 0;
      EtwpApplyScopeFilters(a1, 0, 2, v39);
      v19 = v15 & v39[0];
      v18 = (v15 & v39[0]) == 0;
      v20 = v40;
      *(_BYTE *)(a1 + 100) = v19;
      if ( v18 )
      {
        *v20 = 0;
      }
      else
      {
        if ( (*(_BYTE *)(a1 + 98) & 0x20) != 0 )
        {
          for ( i = 0; i < 8u; ++i )
          {
            if ( ((unsigned __int8)(1 << i) & *(_BYTE *)(a1 + 100)) != 0 )
            {
              v33 = EtwpAcquireLoggerContextByLoggerId(*(unsigned __int16 *)(v16 + *(_QWORD *)(a1 + 40) + 118), 0);
              v18 = (*(_BYTE *)(a1 + 98) & 1) == 0;
              v40 = (_DWORD *)v33;
              if ( v18 )
              {
                v34 = *(struct _EX_RUNDOWN_REF **)(a1 + 80);
                _m_prefetchw(&v34[92]);
                v35 = v34[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
                if ( v35 == _InterlockedCompareExchange64((volatile signed __int64 *)&v34[92], v35 + 2, v35) )
                  v36 = 1;
                else
                  v36 = ExfAcquireRundownProtection(v34 + 92);
                if ( v36 )
                {
                  KiStackAttachProcess(*(_KPROCESS **)(a1 + 80), 0, (__int64)v49);
                  EtwpProviderArrivalCallback((__int64)v40, 1, a1);
                  KiUnstackDetachProcess((struct _KTHREAD *)v49, 0);
                  v37 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(a1 + 80) + 736LL);
                  _m_prefetchw(v37);
                  v38 = v37->Count & 0xFFFFFFFFFFFFFFFEuLL;
                  if ( v38 != _InterlockedCompareExchange64((volatile signed __int64 *)v37, v38 - 2, v38) )
                    ExfReleaseRundownProtection(v37);
                }
              }
              else
              {
                EtwpProviderArrivalCallback(v33, 0, a1);
              }
              EtwpReleaseLoggerContext(v40, 0LL);
            }
            v16 += 32LL;
          }
        }
        if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
        {
          v29 = *(void (__fastcall **)(GUID *, __int64, __int64, _QWORD, _QWORD, PVOID *, _QWORD))(a1 + 88);
          if ( v29 )
          {
            v42 = 0;
            v43 = 0LL;
            memset(v44, 0, sizeof(v44));
            PoolWithTag = 0LL;
            EtwpComputeRegEntryEnableInfo(a1, &v42);
            if ( (_DWORD)v10 )
            {
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x46777445u);
              if ( PoolWithTag )
              {
                v41 = &v46;
                v46 = PoolWithTag;
                v47 = v10;
                v48 = 0x80000000;
                EtwpCopySchematizedFilters(PoolWithTag);
              }
            }
            LOBYTE(v31) = v43;
            v29(&NullGuid, 1LL, v31, *(_QWORD *)&v44[4], *(_QWORD *)&v44[12], v41, *(_QWORD *)(a1 + 80));
            if ( PoolWithTag )
              ExFreePoolWithTag(PoolWithTag, 0);
          }
        }
        else
        {
          v21 = v45;
          EtwpComputeRegEntryEnableInfo(a1, v45 + 72);
          *v20 = 120;
          v22 = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), *(_BYTE *)(a1 + 99));
          if ( v22 )
          {
            *v20 = v22 + 136;
            *(_DWORD *)(v21 + 128) = v22;
            *(_DWORD *)(v21 + 132) = 0x80000000;
            *(_QWORD *)(v21 + 120) = 136LL;
            EtwpCopySchematizedFilters((void *)(v21 + 136));
            *(_DWORD *)(v21 + 116) = 1;
          }
          else
          {
            *(_DWORD *)(v21 + 116) = 0;
          }
        }
      }
      goto LABEL_17;
    }
    *a5 = 0;
    goto LABEL_27;
  }
  v17 = -1073741789;
LABEL_17:
  KeReleaseMutex(&EtwpNotificationMutex, 0);
  EtwpUnreferenceGuidEntry((__int64 *)GuidEntryByGuid, v23, v24, v25);
  return v17;
}
