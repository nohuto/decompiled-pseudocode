/*
 * XREFs of EtwpRegisterUMGuid @ 0x1404CDCF0
 * Callers:
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     memset @ 0x140195A80 (memset.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140437A78 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpProviderArrivalCallback @ 0x1404660B8 (EtwpProviderArrivalCallback.c)
 *     EtwpAccessCheck @ 0x1404CDBE0 (EtwpAccessCheck.c)
 *     EtwpGetSchematizedFilterSize @ 0x1404CDFBC (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x1404CE13C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1404CE270 (EtwpFindGuidEntryByGuid.c)
 *     EtwpAddUmRegEntry @ 0x1404CEB68 (EtwpAddUmRegEntry.c)
 *     EtwpApplyScopeFilters @ 0x1404CECE4 (EtwpApplyScopeFilters.c)
 *     EtwpUpdateEnableMask @ 0x1404D315C (EtwpUpdateEnableMask.c)
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1404D345C (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpAddGuidEntry @ 0x1404D4348 (EtwpAddGuidEntry.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1406E6A9C (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpCopySchematizedFilters @ 0x1406E9FD4 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpRegisterUMGuid(__int64 a1, unsigned int a2, unsigned int *a3)
{
  _BYTE *v3; // rdi
  bool v4; // zf
  __int64 v5; // rax
  int v7; // r14d
  ULONG_PTR GuidEntryByGuid; // rsi
  int v11; // ebp
  __int64 v12; // rdx
  int SchematizedFilterSize; // eax
  int v14; // eax
  __int64 v15; // r8
  _BOOL8 v16; // rdx
  unsigned __int8 v17; // r14
  PVOID v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rax
  __int64 v24; // r14
  int v25; // eax
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF
  __int64 v27; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  v5 = *(_QWORD *)a1 - *(_QWORD *)&SecurityProviderGuid.Data1;
  v4 = *(_QWORD *)a1 == *(_QWORD *)&SecurityProviderGuid.Data1;
  v7 = *(_DWORD *)(a1 + 16);
  v27 = 0LL;
  Object = 0LL;
  if ( v4 )
    v5 = *(_QWORD *)(a1 + 8) - *(_QWORD *)SecurityProviderGuid.Data4;
  if ( !v5 )
    return 3221225506LL;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, (unsigned int)(v7 - 2) > 1);
  if ( GuidEntryByGuid || (GuidEntryByGuid = EtwpAddGuidEntry(a1, (unsigned int)(v7 - 2) > 1)) != 0 )
  {
    v11 = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(GuidEntryByGuid + 56), 0x800u, 0LL);
    if ( v11 >= 0 )
    {
      KeWaitForSingleObject(&EtwpNotificationMutex, Executive, 0, 0, 0LL);
      LOBYTE(v12) = -1;
      *a3 = 160;
      SchematizedFilterSize = EtwpGetSchematizedFilterSize(GuidEntryByGuid, v12);
      if ( SchematizedFilterSize )
        *a3 = SchematizedFilterSize + 176;
      if ( *a3 > a2 )
      {
        v11 = -1073741789;
      }
      else
      {
        v14 = EtwpAddUmRegEntry(GuidEntryByGuid, (__int64)&Object, (__int64)&v27);
        v3 = Object;
        v11 = v14;
        if ( v14 >= 0 )
        {
          *(_QWORD *)(a1 + 24) = v27;
          if ( *(_DWORD *)(GuidEntryByGuid + 80) )
          {
            LOBYTE(v15) = 1;
            EtwpUpdateEnableMask(GuidEntryByGuid, (v3[98] & 8) != 0, v15, v3 + 99);
          }
          v16 = (v3[98] & 8) != 0;
          LOBYTE(Object) = v3[99];
          EtwpApplyScopeFilters(v3, v16, 0LL, &Object);
          if ( (v3[98] & 8) != 0 )
            v3[99] = (_BYTE)Object;
          else
            v3[99] &= (unsigned __int8)Object;
          v17 = v3[99];
          if ( v17 )
          {
            EtwpComputeRegEntryEnableInfo(v3, a1 + 112);
            v25 = *(_BYTE *)(GuidEntryByGuid + 75) & 1;
            BYTE3(Object) = 0;
            *(_DWORD *)(a1 + 152) = v25;
            LOWORD(Object) = *(_WORD *)(GuidEntryByGuid + 72);
            BYTE2(Object) = *(_BYTE *)(GuidEntryByGuid + 74);
            HIDWORD(Object) = *(_DWORD *)(GuidEntryByGuid + 64);
            v18 = Object;
          }
          else
          {
            memset((void *)(a1 + 112), 0, 0x20uLL);
            *(_DWORD *)(a1 + 152) = 0;
            v18 = 0LL;
          }
          *(_QWORD *)(a1 + 144) = v18;
          *a3 = 160;
          v19 = EtwpGetSchematizedFilterSize(GuidEntryByGuid, v17);
          if ( v19 )
          {
            *a3 = v19 + 176;
            *(_DWORD *)(a1 + 168) = v19;
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
          if ( (v3[98] & 8) != 0 )
          {
            if ( v17 )
            {
              v23 = EtwpAcquireLoggerContextByLoggerId(*(unsigned __int16 *)(GuidEntryByGuid + 72), 0);
              v24 = v23;
              if ( v23 )
              {
                EtwpProviderArrivalCallback(v23, 1, (__int64)v3);
                EtwpReleaseLoggerContext(v24, 0LL);
              }
            }
          }
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
            EtwpEventWriteTemplateSessAndProv(v20, &ETW_EVENT_PROVIDER_REGISTER, v21, 1LL, 0LL, a1);
        }
      }
      KeReleaseMutex(&EtwpNotificationMutex, 0);
      if ( v3 )
        ObfDereferenceObject(v3);
    }
    EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v11;
}
