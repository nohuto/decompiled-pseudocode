/*
 * XREFs of AlpcpWaitForPortReferences @ 0x14051FDBC
 * Callers:
 *     NtAlpcQueryInformation @ 0x14051F860 (NtAlpcQueryInformation.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpWaitForPortReferences(__int64 a1, int *a2, int a3, _DWORD *a4, char a5)
{
  volatile signed __int64 *v7; // rsi
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // r15
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  int v18; // [rsp+48h] [rbp-10h]

  if ( !a1 || a3 != 4 )
    return 3221225485LL;
  if ( a5 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (int *)MmUserProbeAddress;
    v18 = *a2;
    if ( a4 )
      *a4 = 0;
  }
  else
  {
    v18 = *a2;
    if ( a4 )
      *a4 = 0;
  }
  if ( *(_DWORD *)(a1 + 404) == v18 )
    return 0LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v7 = (volatile signed __int64 *)(a1 + 352);
  v9 = KeAbPreAcquire(a1 + 352, 0LL, 0LL, v8);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 352), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), v9, a1 + 352, v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  if ( *(_QWORD *)(a1 + 408) )
  {
    v12 = -1073741811;
  }
  else if ( *(_DWORD *)(a1 + 404) == v18 )
  {
    v12 = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 408) = &Event;
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
    KeAbPostRelease(a1 + 352);
    while ( 1 )
    {
      v12 = KeWaitForSingleObject(&Event, WrUserRequest, 0, 1u, 0LL);
      if ( !v12 )
        break;
      if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 1) != 0 )
      {
        v12 = -1073741749;
        break;
      }
    }
    v14 = KeAbPreAcquire(a1 + 352, 0LL, 0LL, v13);
    v16 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), v14, a1 + 352, v15);
    if ( v16 )
      *(_BYTE *)(v16 + 26) |= 1u;
    *(_QWORD *)(a1 + 408) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
  KeAbPostRelease(a1 + 352);
  return v12;
}
