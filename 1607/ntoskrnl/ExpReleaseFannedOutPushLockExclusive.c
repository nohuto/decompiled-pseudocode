/*
 * XREFs of ExpReleaseFannedOutPushLockExclusive @ 0x140133A2C
 * Callers:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140096C30 (ExReleaseAutoExpandPushLockExclusive.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140087824 (KeQueryMaximumProcessorCountEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

char __fastcall ExpReleaseFannedOutPushLockExclusive(unsigned __int64 a1)
{
  ULONG MaximumProcessorCount; // eax
  __int64 v3; // rdi
  __int64 v4; // rbp
  unsigned int v5; // esi
  unsigned int v6; // ebx
  unsigned int v7; // ecx
  volatile signed __int64 *v8; // rcx

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v3 = 0LL;
  if ( MaximumProcessorCount )
  {
    v4 = MaximumProcessorCount;
    v5 = ((unsigned int)a1 >> 13) & 0x3FFFF;
    v6 = (a1 >> 4) & 0x1FF;
    do
    {
      _BitScanReverse(&v7, v5);
      v8 = (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + ExSaPageArrays) + 8LL * (v7 - 2))
                                                 + 8LL * (v5 ^ (1 << v7))
                                                 + 8)
                                     + 8LL * v6);
      LOBYTE(MaximumProcessorCount) = _InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6;
      if ( (_BYTE)MaximumProcessorCount == 2 )
        LOBYTE(MaximumProcessorCount) = ExfTryToWakePushLock(v8);
      v3 += 8LL;
      --v4;
    }
    while ( v4 );
  }
  return MaximumProcessorCount;
}
