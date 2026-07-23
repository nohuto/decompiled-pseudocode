/*
 * XREFs of PspStorageRemoveObject @ 0x140682CD0
 * Callers:
 *     PsRemoveSiloContext @ 0x14067E0C4 (PsRemoveSiloContext.c)
 *     PsUnregisterSiloMonitor @ 0x140681148 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     PspGetStorageArrayIfPossible @ 0x14013E758 (PspGetStorageArrayIfPossible.c)
 */

__int64 __fastcall PspStorageRemoveObject(__int64 a1, unsigned int a2, char a3, unsigned __int64 *a4)
{
  __int64 result; // rax
  int v7; // esi
  unsigned __int64 *v8; // rdi
  _BYTE *v9; // rax
  _BYTE *v10; // rbx
  unsigned __int64 v11; // rbx
  unsigned int v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h] BYREF

  result = PspGetStorageArrayIfPossible(a1, a2, &v12, &v13);
  v7 = result;
  if ( (int)result >= 0 )
  {
    v8 = (unsigned __int64 *)(v13 + 16LL * v12);
    v9 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v8, 0LL, 0);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8);
    if ( v10 )
      v10[26] |= 1u;
    v11 = v8[1];
    if ( v11 )
    {
      if ( a3 || (v11 & 1) == 0 )
      {
        v8[1] = 0LL;
        v11 &= ~1uLL;
      }
      else
      {
        v11 = 0LL;
        v7 = -1073741637;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v8);
    KeAbPostRelease((ULONG_PTR)v8);
    if ( v7 >= 0 )
    {
      if ( !v11 )
        return 3221226021LL;
      if ( a4 )
        *a4 = v11;
      else
        ObfDereferenceObject((PVOID)v11);
    }
    return (unsigned int)v7;
  }
  return result;
}
