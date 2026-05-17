/*
 * XREFs of RtlRunOnceComplete @ 0x18006CC70
 * Callers:
 *     RtlpSubSegmentInitialize @ 0x180032E50 (RtlpSubSegmentInitialize.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x180034CA8 (RtlpHeapGenerateRandomValue32.c)
 *     RtlRunOnceExecuteOnce @ 0x180034E70 (RtlRunOnceExecuteOnce.c)
 * Callees:
 *     NtReleaseKeyedEvent @ 0x180094E40 (NtReleaseKeyedEvent.c)
 */

__int64 __fastcall RtlRunOnceComplete(signed __int64 *a1, int a2, __int64 a3)
{
  char v5; // r8
  char v6; // al
  signed __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r10
  __int64 v10; // r10
  _QWORD *v11; // r10
  _QWORD *v13; // rbx
  char v14; // [rsp+38h] [rbp+10h]

  if ( ((a2 - 1) & a2) != 0 || (a2 & 0xFFFFFFF9) != 0 )
    return 3221225712LL;
  v5 = (v14 ^ ((~(_BYTE)a2 & 2) != 0)) & 1;
  v6 = (v5 ^ v14 ^ (2 * ((~(_BYTE)a2 & 4) != 0))) & 2 ^ v5 ^ v14;
  if ( a3 && ((a3 & 3) != 0 || (v6 & 2) == 0) )
    return 3221225713LL;
  _m_prefetchw(a1);
  v7 = *a1;
  v8 = *a1 & 3;
  v9 = a3 ^ ((unsigned __int8)a3 ^ v6 & 2) & 3;
  if ( v8 == 1 )
  {
    if ( (v6 & 1) != 0 )
    {
      v10 = _InterlockedExchange64(a1, v9);
      if ( (v10 & 3) == 1 )
      {
        v11 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( v11 )
        {
          do
          {
            v13 = (_QWORD *)*v11;
            NtReleaseKeyedEvent(0LL, v11, 0LL, 0LL);
            v11 = v13;
          }
          while ( v13 );
        }
        return 0LL;
      }
      return 3221225562LL;
    }
    return 3221225712LL;
  }
  if ( v8 != 3 )
    return 3221225473LL;
  if ( (v6 & 1) != 0 )
    return 3221225712LL;
  if ( v7 == _InterlockedCompareExchange64(a1, v9, v7) )
    return 0LL;
  return 3221225525LL;
}
