/*
 * XREFs of EtwpTrackProviderBinary @ 0x140558080
 * Callers:
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140437A78 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpProviderArrivalCallback @ 0x1404660B8 (EtwpProviderArrivalCallback.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 */

NTSTATUS __fastcall EtwpTrackProviderBinary(HANDLE *a1)
{
  NTSTATUS result; // eax
  NTSTATUS v2; // ebx
  _QWORD *v3; // rdi
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int *v9; // r14
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  result = ObReferenceObjectByHandle(*a1, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
  v2 = result;
  if ( result >= 0 )
  {
    KeWaitForSingleObject(&EtwpNotificationMutex, Executive, 0, 0, 0LL);
    v3 = Object;
    v4 = *((_BYTE *)Object + 98);
    if ( (v4 & 0x20) != 0 )
    {
      v2 = 0;
    }
    else
    {
      v5 = 0LL;
      *((_BYTE *)Object + 98) = v4 | 0x20;
      v6 = 8LL;
      do
      {
        v7 = v3[4];
        if ( *(_DWORD *)(v5 + v7 + 112) )
        {
          v8 = EtwpAcquireLoggerContextByLoggerId(*(unsigned __int16 *)(v5 + v7 + 118), 0);
          v9 = (unsigned int *)v8;
          if ( v8 )
          {
            EtwpProviderArrivalCallback(v8, 1, (__int64)v3);
            EtwpReleaseLoggerContext(v9, 0);
          }
        }
        v5 += 32LL;
        --v6;
      }
      while ( v6 );
    }
    KeReleaseMutex(&EtwpNotificationMutex, 0);
    ObfDereferenceObject(v3);
    return v2;
  }
  return result;
}
