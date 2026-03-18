/*
 * XREFs of PspStorageInsertObject @ 0x14055FA90
 * Callers:
 *     PsInsertPermanentSiloContext @ 0x14055FA14 (PsInsertPermanentSiloContext.c)
 *     PsInsertSiloContext @ 0x14067DF24 (PsInsertSiloContext.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 *     PspGetStorageArray @ 0x14055FB58 (PspGetStorageArray.c)
 */

__int64 __fastcall PspStorageInsertObject(__int64 a1, __int64 a2, char a3, signed __int64 a4)
{
  __int64 result; // rax
  ULONG_PTR v7; // rbx
  __int64 v8; // rdi
  signed __int64 v9; // rcx
  signed __int64 v10; // rdi
  unsigned int v11; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v12[6]; // [rsp+28h] [rbp-30h] BYREF

  result = PspGetStorageArray(a1, a2, &v11, v12);
  if ( (int)result >= 0 )
  {
    ObfReferenceObject((PVOID)a4);
    v7 = v12[0] + 16LL * v11;
    v8 = KeAbPreAcquire(v7, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)v7, v8, v7);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    v9 = a4;
    if ( a3 )
      v9 = a4 | 1;
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 8), v9, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v7);
    KeAbPostRelease(v7);
    if ( v10 )
    {
      ObfDereferenceObject((PVOID)a4);
      return 3221225659LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
