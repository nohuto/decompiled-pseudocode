/*
 * XREFs of ExpAcquireFannedOutPushLockExclusive @ 0x140133AD0
 * Callers:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140097AA0 (ExAcquireAutoExpandPushLockExclusive.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140087824 (KeQueryMaximumProcessorCountEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 */

unsigned int __fastcall ExpAcquireFannedOutPushLockExclusive(unsigned __int64 a1, _BYTE *a2, ULONG_PTR a3)
{
  unsigned int v4; // esi
  __int64 v5; // rbp
  unsigned int v6; // ecx
  unsigned __int64 *v8; // rcx
  unsigned int v9; // ebx
  unsigned int result; // eax
  __int64 v11; // rdi
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned __int64 *v14; // rcx

  v4 = ((unsigned int)a1 >> 13) & 0x3FFFF;
  v5 = (a1 >> 4) & 0x1FF;
  _BitScanReverse(&v6, v4);
  v8 = (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)ExSaPageArrays + 8LL * (v6 - 2))
                                      + 8LL * (v4 ^ (1 << v6))
                                      + 8)
                          + 8 * v5);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, a2, a3);
  v9 = 1;
  result = KeQueryMaximumProcessorCountEx(0xFFFFu);
  LODWORD(v11) = result;
  if ( result > 1 )
  {
    do
    {
      _BitScanReverse(&v12, v4);
      if ( _interlockedbittestandset64(
             (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ExSaPageArrays + 8LL * v9) + 8LL * (v12 - 2))
                                                   + 8LL * (v4 ^ (1 << v12))
                                                   + 8)
                                       + 8 * v5),
             0LL) )
      {
        result = ExSaPageArrays;
        v11 = (unsigned int)(v11 - 1);
        _BitScanReverse(&v13, v4);
        v14 = (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ExSaPageArrays + 8 * v11) + 8LL * (v13 - 2))
                                             + 8LL * (v4 ^ (1 << v13))
                                             + 8)
                                 + 8 * v5);
        if ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
          result = ExfAcquirePushLockExclusiveEx(v14, a2, a3);
      }
      else
      {
        ++v9;
      }
    }
    while ( v9 < (unsigned int)v11 );
  }
  return result;
}
