/*
 * XREFs of MiPopulateCfgBitMap @ 0x1404215A8
 * Callers:
 *     MiMarkPrivateOpenCfgBits @ 0x140421578 (MiMarkPrivateOpenCfgBits.c)
 *     MiCfgMarkValidEntries @ 0x1404FBBC8 (MiCfgMarkValidEntries.c)
 *     MiMarkPrivateImageCfgBits @ 0x14054886C (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiVadDeleted @ 0x14008964C (MiVadDeleted.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiCopyToCfgBitMap @ 0x1404B88E0 (MiCopyToCfgBitMap.c)
 */

__int64 __fastcall MiPopulateCfgBitMap(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, int a5)
{
  unsigned __int64 v5; // r14
  void *v6; // r15
  __int64 *v7; // rbp
  __int64 v8; // rsi
  volatile signed __int64 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdi
  unsigned int v13; // edi
  __int64 v15; // [rsp+40h] [rbp-58h] BYREF
  int v16; // [rsp+48h] [rbp-50h]

  v5 = 2 * ((a4 - a3) >> 4);
  v6 = (void *)(*a1 + ((2 * (a3 >> 4)) >> 3));
  if ( a2 > 1 )
  {
    v7 = &v15;
    v15 = 0LL;
    v16 = 0;
  }
  else
  {
    v7 = 0LL;
  }
  v8 = a1[2];
  v9 = (volatile signed __int64 *)(v8 + 40);
  v10 = KeAbPreAcquire(v8 + 40, 0LL, 0LL, a4);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 40), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 40), v10, v8 + 40, v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  if ( (unsigned int)MiVadDeleted(v8) )
  {
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 40));
    KeAbPostRelease(v8 + 40);
    return 3221225738LL;
  }
  else
  {
    v13 = MiCopyToCfgBitMap(v6, (__int64)v7, v5 >> 3, a5);
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 40));
    KeAbPostRelease(v8 + 40);
    return v13;
  }
}
