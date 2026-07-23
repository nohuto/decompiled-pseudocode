/*
 * XREFs of MiPopulateCfgBitMap @ 0x1404D7414
 * Callers:
 *     MiCfgMarkValidEntries @ 0x1404D7248 (MiCfgMarkValidEntries.c)
 *     MiMarkPrivateOpenCfgBits @ 0x1404D73D8 (MiMarkPrivateOpenCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x1404D7548 (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     MiVadDeleted @ 0x14002BEF0 (MiVadDeleted.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MiCopyToCfgBitMap @ 0x14042E0B0 (MiCopyToCfgBitMap.c)
 */

__int64 __fastcall MiPopulateCfgBitMap(
        _QWORD *a1,
        ULONG_PTR a2,
        unsigned int a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6)
{
  unsigned __int64 v6; // rbp
  char *v7; // rsi
  _QWORD *v10; // r15
  __int64 v11; // r14
  volatile signed __int64 *v12; // rbx
  _BYTE *v13; // rax
  _BYTE *v14; // rdi
  unsigned int v15; // edi
  _QWORD v17[4]; // [rsp+50h] [rbp-48h] BYREF

  v6 = 2 * ((a5 - a4) >> 4);
  v7 = (char *)(*a1 + ((2 * (a4 >> 4)) >> 3));
  if ( a2 > 1 )
  {
    v10 = v17;
    memset(v17, 0, 24);
  }
  else
  {
    v10 = 0LL;
  }
  v11 = a1[2];
  v12 = (volatile signed __int64 *)(v11 + 40);
  v13 = (_BYTE *)KeAbPreAcquire(v11 + 40, 0LL, 0);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 40), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v11 + 40), v13, v11 + 40);
  if ( v14 )
    v14[26] |= 1u;
  if ( (unsigned int)MiVadDeleted(v11) )
  {
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v11 + 40));
    KeAbPostRelease(v11 + 40);
    return 3221225738LL;
  }
  else
  {
    v15 = MiCopyToCfgBitMap(v7, v11, a2, a3, 0, (__int64)v10, v6 >> 3, a6);
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v11 + 40));
    KeAbPostRelease(v11 + 40);
    return v15;
  }
}
