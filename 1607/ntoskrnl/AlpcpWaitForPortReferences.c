/*
 * XREFs of AlpcpWaitForPortReferences @ 0x1404CF5F4
 * Callers:
 *     NtAlpcQueryInformation @ 0x140475C40 (NtAlpcQueryInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpWaitForPortReferences(__int64 a1, unsigned __int64 a2, int a3, _DWORD *a4, char a5)
{
  volatile signed __int64 *v7; // rsi
  _BYTE *v8; // rax
  _BYTE *v9; // rbx
  unsigned int v10; // edi
  _BYTE *v11; // rax
  _BYTE *v12; // r15
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+48h] [rbp-10h]

  if ( !a1 || a3 != 4 )
    return 3221225485LL;
  if ( a5 )
  {
    if ( a2 >= 0x7FFFFFFF0000LL )
      a2 = 0x7FFFFFFF0000LL;
    v14 = *(_DWORD *)a2;
    if ( a4 )
      *a4 = 0;
  }
  else
  {
    v14 = *(_DWORD *)a2;
    if ( a4 )
      *a4 = 0;
  }
  if ( *(_DWORD *)(a1 + 404) == v14 )
    return 0LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v7 = (volatile signed __int64 *)(a1 + 352);
  v8 = (_BYTE *)KeAbPreAcquire(a1 + 352, 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 352), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), v8, a1 + 352);
  if ( v9 )
    v9[26] |= 1u;
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
      if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0 )
      {
        v10 = -1073741749;
        break;
      }
    }
    v11 = (_BYTE *)KeAbPreAcquire(a1 + 352, 0LL, 0);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), v11, a1 + 352);
    if ( v12 )
      v12[26] |= 1u;
    *(_QWORD *)(a1 + 408) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
  KeAbPostRelease(a1 + 352);
  return v10;
}
