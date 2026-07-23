/*
 * XREFs of EtwpRegisterProvider @ 0x14054C6A8
 * Callers:
 *     EtwRegister @ 0x14054C680 (EtwRegister.c)
 *     EtwRegisterClassicProvider @ 0x1405817D4 (EtwRegisterClassicProvider.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140437A78 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpProviderArrivalCallback @ 0x1404660B8 (EtwpProviderArrivalCallback.c)
 *     EtwpGetSchematizedFilterSize @ 0x1404CDFBC (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x1404CE13C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1404CE270 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUpdateEnableMask @ 0x1404D315C (EtwpUpdateEnableMask.c)
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1404D345C (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpAddGuidEntry @ 0x1404D4348 (EtwpAddGuidEntry.c)
 *     EtwpAddKmRegEntry @ 0x14054C94C (EtwpAddKmRegEntry.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1406E6A9C (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpCopySchematizedFilters @ 0x1406E9FD4 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpRegisterProvider(
        __int64 a1,
        int a2,
        void (__fastcall *a3)(char *, __int64, __int128 *, __int64),
        __int64 a4,
        __int64 a5,
        __int64 *a6)
{
  __int64 v9; // rax
  char *GuidEntryByGuid; // rbx
  int v11; // r13d
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // rax
  unsigned int *v21; // rsi
  __int16 v22; // ax
  unsigned __int8 v23; // dl
  PVOID PoolWithTag; // rsi
  unsigned int SchematizedFilterSize; // eax
  __int64 v26; // r8
  unsigned int v27; // r12d
  __int64 v28; // [rsp+40h] [rbp-39h] BYREF
  __int128 v29; // [rsp+48h] [rbp-31h]
  int v30; // [rsp+58h] [rbp-21h] BYREF
  char v31; // [rsp+5Ch] [rbp-1Dh]
  __int64 v32; // [rsp+68h] [rbp-11h]
  __int64 v33; // [rsp+70h] [rbp-9h]
  __int128 v34; // [rsp+78h] [rbp-1h] BYREF

  *(_QWORD *)&v29 = a4;
  v28 = 0LL;
  *a6 = 0LL;
  v9 = *(_QWORD *)a1 - *(_QWORD *)&SecurityProviderGuid.Data1;
  if ( *(_QWORD *)a1 == *(_QWORD *)&SecurityProviderGuid.Data1 )
    v9 = *(_QWORD *)(a1 + 8) - *(_QWORD *)SecurityProviderGuid.Data4;
  if ( !v9 )
    return 3221225506LL;
  if ( !a3 && a4 || a2 != 3 && (a2 != 2 || !a3) )
    return 3221225485LL;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid((_DWORD *)a1, 0);
  if ( GuidEntryByGuid || (GuidEntryByGuid = EtwpAddGuidEntry((unsigned int *)a1, 0)) != 0LL )
  {
    KeWaitForSingleObject(&EtwpNotificationMutex, Executive, 0, 0, 0LL);
    v11 = EtwpAddKmRegEntry((ULONG_PTR)GuidEntryByGuid, (__int64)&v28);
    if ( v11 >= 0 )
    {
      v12 = v28;
      *(_QWORD *)(v28 + 48) = a5;
      *a6 = v12;
      if ( *((_DWORD *)GuidEntryByGuid + 20) )
        EtwpUpdateEnableMask((__int64)GuidEntryByGuid, (*(_BYTE *)(v12 + 98) & 8) != 0, 0, (_BYTE *)(v12 + 99));
      EtwpComputeRegEntryEnableInfo(v12, (unsigned __int8 *)&v30);
      if ( (*(_BYTE *)(v12 + 98) & 8) != 0 && (GuidEntryByGuid[75] & 1) != 0 )
      {
        v20 = EtwpAcquireLoggerContextByLoggerId(*((unsigned __int16 *)GuidEntryByGuid + 36), 0);
        v21 = (unsigned int *)v20;
        if ( v20 )
        {
          EtwpProviderArrivalCallback(v20, 0, v12);
          EtwpReleaseLoggerContext(v21, 0);
        }
      }
      if ( a3 )
      {
        if ( (*(_BYTE *)(v12 + 98) & 8) != 0 )
        {
          if ( (GuidEntryByGuid[75] & 1) != 0 )
          {
            v22 = *((_WORD *)GuidEntryByGuid + 36);
            HIDWORD(v29) = 0;
            LOWORD(v29) = v22;
            LOBYTE(v13) = 1;
            WORD1(v29) = (unsigned __int8)GuidEntryByGuid[74];
            *(_QWORD *)((char *)&v29 + 4) = *((_QWORD *)GuidEntryByGuid + 8);
            v34 = v29;
            a3(GuidEntryByGuid + 24, v13, &v34, a4);
          }
        }
        else if ( v30 )
        {
          v23 = *(_BYTE *)(v12 + 99);
          PoolWithTag = 0LL;
          v28 = 0LL;
          SchematizedFilterSize = EtwpGetSchematizedFilterSize((__int64)GuidEntryByGuid, v23);
          v27 = SchematizedFilterSize;
          if ( SchematizedFilterSize )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, SchematizedFilterSize, 0x46777445u);
            if ( PoolWithTag )
            {
              *(_QWORD *)&v34 = PoolWithTag;
              *((_QWORD *)&v34 + 1) = v27 | 0x8000000000000000uLL;
              v28 = (__int64)&v34;
              EtwpCopySchematizedFilters(PoolWithTag);
            }
          }
          LOBYTE(v26) = v31;
          ((void (__fastcall *)(GUID *, __int64, __int64, __int64, __int64, __int64, _QWORD))a3)(
            &NullGuid,
            1LL,
            v26,
            v32,
            v33,
            v28,
            v29);
          if ( PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0);
        }
      }
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
        EtwpEventWriteTemplateSessAndProv(v14, &ETW_EVENT_PROVIDER_REGISTER, v15, 1LL, 0LL, a1);
    }
    KeReleaseMutex(&EtwpNotificationMutex, 0);
    EtwpUnreferenceGuidEntry((__int64 *)GuidEntryByGuid, v16, v17, v18);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v11;
}
