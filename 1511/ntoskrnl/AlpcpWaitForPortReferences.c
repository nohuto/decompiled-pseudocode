/*
 * XREFs of AlpcpWaitForPortReferences @ 0x14048C354
 * Callers:
 *     NtAlpcQueryInformation @ 0x14048BF30 (NtAlpcQueryInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 */

__int64 __fastcall AlpcpWaitForPortReferences(__int64 a1, int *a2, int a3, _DWORD *a4, char a5)
{
  volatile signed __int64 *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v12; // r15
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+48h] [rbp-10h]

  if ( !a1 || a3 != 4 )
    return 3221225485LL;
  if ( a5 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (int *)MmUserProbeAddress;
    v14 = *a2;
    if ( a4 )
      *a4 = 0;
  }
  else
  {
    v14 = *a2;
    if ( a4 )
      *a4 = 0;
  }
  if ( *(_DWORD *)(a1 + 404) == v14 )
    return 0LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v7 = (volatile signed __int64 *)(a1 + 352);
  v8 = KeAbPreAcquire(a1 + 352, 0LL, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 352), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), v8, a1 + 352);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( *(_QWORD *)(a1 + 408) )
  {
    v10 = -1073741811;
  }
  else if ( *(_DWORD *)(a1 + 404) == v14 )
  {
    v10 = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 408) = &Event;
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
    KeAbPostRelease(a1 + 352);
    while ( 1 )
    {
      v10 = KeWaitForSingleObject(&Event, WrUserRequest, 0, 1u, 0LL);
      if ( !v10 )
        break;
      if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 1) != 0 )
      {
        v10 = -1073741749;
        break;
      }
    }
    v11 = KeAbPreAcquire(a1 + 352, 0LL, 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), v11, a1 + 352);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    *(_QWORD *)(a1 + 408) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
  KeAbPostRelease(a1 + 352);
  return v10;
}
