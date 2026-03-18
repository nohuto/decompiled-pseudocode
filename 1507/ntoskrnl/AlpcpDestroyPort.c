/*
 * XREFs of AlpcpDestroyPort @ 0x1404A3360
 * Callers:
 *     AlpcpDeletePort @ 0x1404A30E4 (AlpcpDeletePort.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

void __fastcall AlpcpDestroyPort(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rdi
  __int64 *v9; // rdx
  __int64 **v10; // rax
  void *v11; // rdx

  if ( *a1 )
  {
    v5 = KeAbPreAcquire((ULONG_PTR)&AlpcpPortListLock, 0LL, 0LL, a4);
    v7 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpPortListLock, 0LL);
    v8 = v5;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(&AlpcpPortListLock, v5, (ULONG_PTR)&AlpcpPortListLock, v6);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    v9 = (__int64 *)*a1;
    v10 = (__int64 **)a1[1];
    if ( *(__int64 **)(*a1 + 8) != a1 || *v10 != a1 )
      __fastfail(3u);
    *v10 = v9;
    v9[1] = (__int64)v10;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpPortListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpPortListLock);
    KeAbPostRelease((ULONG_PTR)&AlpcpPortListLock);
  }
  if ( (a1[52] & 0x200) != 0 )
  {
    v11 = (void *)a1[31];
    if ( v11 )
      ExFreeToNPagedLookasideList(&AlpcpNPLookasides, v11);
  }
}
