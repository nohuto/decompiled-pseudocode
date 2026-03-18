/*
 * XREFs of ExpAcquireFannedOutPushLockExclusive @ 0x14015B770
 * Callers:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14010FFE0 (ExAcquireAutoExpandPushLockExclusive.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140014408 (KeQueryMaximumProcessorCountEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 */

unsigned int __fastcall ExpAcquireFannedOutPushLockExclusive(unsigned __int64 a1, __int64 a2, ULONG_PTR a3)
{
  unsigned int v4; // esi
  __int64 v5; // r9
  __int64 v6; // rbp
  unsigned int v7; // ecx
  unsigned __int64 *v9; // rcx
  unsigned int v10; // ebx
  unsigned int result; // eax
  __int64 v12; // r9
  __int64 v13; // rdi
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned __int64 *v16; // rcx

  v4 = ((unsigned int)a1 >> 13) & 0x3FFFF;
  v5 = *(_QWORD *)ExSaPageArrays;
  v6 = (a1 >> 4) & 0x1FF;
  _BitScanReverse(&v7, v4);
  v9 = (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)ExSaPageArrays + 8LL * (v7 - 2))
                                      + 8LL * (v4 ^ (1 << v7))
                                      + 8)
                          + 8 * v6);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx(v9, a2, a3, v5);
  v10 = 1;
  result = KeQueryMaximumProcessorCountEx(0xFFFFu);
  LODWORD(v13) = result;
  if ( result > 1 )
  {
    do
    {
      _BitScanReverse(&v14, v4);
      if ( _interlockedbittestandset64(
             (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ExSaPageArrays + 8LL * v10)
                                                               + 8LL * (v14 - 2))
                                                   + 8LL * (v4 ^ (1 << v14))
                                                   + 8)
                                       + 8 * v6),
             0LL) )
      {
        result = ExSaPageArrays;
        v13 = (unsigned int)(v13 - 1);
        _BitScanReverse(&v15, v4);
        v16 = (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ExSaPageArrays + 8 * v13) + 8LL * (v15 - 2))
                                             + 8LL * (v4 ^ (1 << v15))
                                             + 8)
                                 + 8 * v6);
        if ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0LL) )
          result = ExfAcquirePushLockExclusiveEx(v16, a2, a3, v12);
      }
      else
      {
        ++v10;
      }
    }
    while ( v10 < (unsigned int)v13 );
  }
  return result;
}
