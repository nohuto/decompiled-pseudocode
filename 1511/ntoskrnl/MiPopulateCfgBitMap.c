/*
 * XREFs of MiPopulateCfgBitMap @ 0x1403CAE30
 * Callers:
 *     MiMarkPrivateImageCfgBits @ 0x1403CA63C (MiMarkPrivateImageCfgBits.c)
 *     MiCfgMarkValidEntries @ 0x1403CAC70 (MiCfgMarkValidEntries.c)
 *     MiMarkPrivateOpenCfgBits @ 0x1403CAE00 (MiMarkPrivateOpenCfgBits.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     MiVadDeleted @ 0x140063AA0 (MiVadDeleted.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiCopyToCfgBitMap @ 0x1404163B0 (MiCopyToCfgBitMap.c)
 */

__int64 __fastcall MiPopulateCfgBitMap(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, int a5)
{
  unsigned __int64 v5; // r14
  ULONG_PTR v6; // r15
  __int64 *v7; // rbp
  __int64 v8; // rsi
  volatile signed __int64 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned int v12; // edi
  __int64 v14; // [rsp+40h] [rbp-58h] BYREF
  int v15; // [rsp+48h] [rbp-50h]

  v5 = 2 * ((a4 - a3) >> 4);
  v6 = *a1 + ((2 * (a3 >> 4)) >> 3);
  if ( a2 > 1 )
  {
    v7 = &v14;
    v14 = 0LL;
    v15 = 0;
  }
  else
  {
    v7 = 0LL;
  }
  v8 = a1[2];
  v9 = (volatile signed __int64 *)(v8 + 40);
  v10 = KeAbPreAcquire(v8 + 40, 0LL, 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 40), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 40), v10, v8 + 40);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  if ( MiVadDeleted(v8) )
  {
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 40));
    KeAbPostRelease(v8 + 40);
    return 3221225738LL;
  }
  else
  {
    v12 = MiCopyToCfgBitMap(v6, (__int64)v7, v5 >> 3, a5);
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 40));
    KeAbPostRelease(v8 + 40);
    return v12;
  }
}
