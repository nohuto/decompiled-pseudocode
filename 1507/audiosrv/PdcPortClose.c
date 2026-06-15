/*
 * XREFs of PdcPortClose @ 0x1800AA040
 * Callers:
 *     PdcActivationClientUnregister @ 0x1800A9F98 (PdcActivationClientUnregister.c)
 * Callees:
 *     PdcAcquireRwLockExclusive @ 0x1800AA01C (PdcAcquireRwLockExclusive.c)
 *     PdcpAlpcReleaseResources @ 0x1800AA334 (PdcpAlpcReleaseResources.c)
 */

__int64 __fastcall PdcPortClose(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rcx
  void *v4; // rsi
  int v6; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+34h] [rbp-14h]
  int v8; // [rsp+3Ch] [rbp-Ch]
  int v9; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  v1 = a1 + 16;
  v7 = 0LL;
  v8 = 0;
  AcquireSRWLockShared((PSRWLOCK)(a1 + 16));
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    ZwAlpcDisconnectPort(v3, 1LL);
    ZwAlpcQueryInformation(*(_QWORD *)(a1 + 8), 0LL, &v6, 16LL, 0LL);
    ReleaseSRWLockShared((PSRWLOCK)v1);
    if ( *(_QWORD *)(a1 + 32) )
    {
      *(_DWORD *)(a1 + 40) = v7;
      while ( 1 )
      {
        v9 = *(_DWORD *)(a1 + 44);
        if ( v9 == *(_DWORD *)(a1 + 40) )
          break;
        RtlWaitOnAddress(a1 + 44, &v9, 4LL);
      }
    }
  }
  else
  {
    ReleaseSRWLockShared((PSRWLOCK)v1);
  }
  PdcAcquireRwLockExclusive(v1);
  v4 = *(void **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(v1 + 8) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)v1);
  if ( v4 )
    CloseHandle(v4);
  if ( *(_QWORD *)(a1 + 32) )
    TpWaitForAlpcCompletion();
  return PdcpAlpcReleaseResources(a1);
}
