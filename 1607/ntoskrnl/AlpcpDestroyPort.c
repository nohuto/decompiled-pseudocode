/*
 * XREFs of AlpcpDestroyPort @ 0x140409C54
 * Callers:
 *     AlpcpDeletePort @ 0x14040A488 (AlpcpDeletePort.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

void __fastcall AlpcpDestroyPort(__int64 *a1)
{
  _BYTE *v2; // rax
  signed __int8 v3; // cf
  _BYTE *v4; // rdi
  __int64 *v5; // rdx
  __int64 **v6; // rax
  void *v7; // rdx

  if ( *a1 )
  {
    v2 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&AlpcpPortListLock, 0LL, 0);
    v3 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpPortListLock, 0LL);
    v4 = v2;
    if ( v3 )
      ExfAcquirePushLockExclusiveEx(&AlpcpPortListLock, v2, (ULONG_PTR)&AlpcpPortListLock);
    if ( v4 )
      v4[26] |= 1u;
    v5 = (__int64 *)*a1;
    v6 = (__int64 **)a1[1];
    if ( *(__int64 **)(*a1 + 8) != a1 || *v6 != a1 )
      __fastfail(3u);
    *v6 = v5;
    v5[1] = (__int64)v6;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpPortListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpPortListLock);
    KeAbPostRelease((ULONG_PTR)&AlpcpPortListLock);
  }
  if ( (a1[52] & 0x200) != 0 )
  {
    v7 = (void *)a1[31];
    if ( v7 )
      ExFreeToNPagedLookasideList(&AlpcpNPLookasides, v7);
  }
}
