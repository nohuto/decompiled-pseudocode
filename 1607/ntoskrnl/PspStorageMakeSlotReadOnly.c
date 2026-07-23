/*
 * XREFs of PspStorageMakeSlotReadOnly @ 0x140682C20
 * Callers:
 *     PsMakeSiloContextPermanent @ 0x14067E0A8 (PsMakeSiloContextPermanent.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     PspGetStorageArray @ 0x140560098 (PspGetStorageArray.c)
 */

__int64 __fastcall PspStorageMakeSlotReadOnly(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v3; // esi
  unsigned __int64 *v4; // rbx
  _BYTE *v5; // rax
  _BYTE *v6; // rdi
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  result = PspGetStorageArray(a1, a2, &v7, &v8);
  v3 = result;
  if ( (int)result >= 0 )
  {
    v4 = (unsigned __int64 *)(v8 + 16LL * v7);
    v5 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v4, 0LL, 0);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      ExfAcquirePushLockExclusiveEx(v4, v5, (ULONG_PTR)v4);
    if ( v6 )
      v6[26] |= 1u;
    if ( (v4[1] & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      v4[1] = v4[1] & 0xFFFFFFFFFFFFFFFEuLL | 1;
    else
      v3 = -1073741811;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4);
    KeAbPostRelease((ULONG_PTR)v4);
    return v3;
  }
  return result;
}
