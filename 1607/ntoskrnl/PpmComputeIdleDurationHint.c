/*
 * XREFs of PpmComputeIdleDurationHint @ 0x14013BF1C
 * Callers:
 *     PpmIdleSelectStates @ 0x14013BBF0 (PpmIdleSelectStates.c)
 * Callees:
 *     PpmEstimateIdleDuration @ 0x14013BFC0 (PpmEstimateIdleDuration.c)
 */

__int64 __fastcall PpmComputeIdleDurationHint(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // r9
  unsigned __int64 v6; // r8
  __int64 result; // rax
  signed __int64 v8; // rax
  __int64 v9; // [rsp+40h] [rbp-18h] BYREF
  __int64 v10; // [rsp+48h] [rbp-10h] BYREF
  __int16 v11; // [rsp+60h] [rbp+8h] BYREF
  char v12; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 23808);
  LODWORD(v4) = 0;
  if ( !*(_BYTE *)(a1 + 33) )
  {
    if ( KiSerializeTimerExpiration )
    {
      _m_prefetchw(&PpmPlatformIdleHint);
      v6 = PpmPlatformIdleHint;
      if ( (_WORD)PpmPlatformIdleHint )
      {
        while ( 1 )
        {
          v8 = _InterlockedCompareExchange64(&PpmPlatformIdleHint, v6 ^ (unsigned __int16)(v6 ^ (v6 - 1)), v6);
          if ( v6 == v8 )
            break;
          v6 = v8;
          _mm_pause();
          if ( !(_WORD)v8 )
            goto LABEL_4;
        }
        v4 = v6 >> 16;
      }
    }
  }
LABEL_4:
  PpmEstimateIdleDuration(a1, a2, a3, v4, (__int64)&v10, (__int64)&v9, (__int64)&v12, (__int64)&v11);
  *(_WORD *)(v3 + 36) |= v11;
  *(_QWORD *)(v3 + 504) = v9;
  *(_BYTE *)(v3 + 525) = v12;
  result = v10;
  *(_QWORD *)(v3 + 496) = v10;
  return result;
}
