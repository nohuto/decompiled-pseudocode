/*
 * XREFs of NtUserTrackMouseEvent @ 0x1401CFD70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     TrackMouseEvent @ 0x1401CFE54 (TrackMouseEvent.c)
 *     QueryTrackMouseEvent @ 0x1401CFFCC (QueryTrackMouseEvent.c)
 */

__int64 __fastcall NtUserTrackMouseEvent(__m128i *a1)
{
  __m128i *v1; // rcx
  __m128i *v2; // rcx
  int v3; // ebx
  __m128i v5; // [rsp+48h] [rbp-20h] BYREF
  __int64 v6; // [rsp+58h] [rbp-10h]

  EnterCrit(0LL, 0LL);
  v1 = (__m128i *)MmUserProbeAddress;
  if ( (unsigned __int64)a1 < MmUserProbeAddress )
    v1 = a1;
  v5 = *v1;
  v6 = v1[1].m128i_i64[0];
  if ( _mm_cvtsi128_si32(v5) == 24 )
  {
    if ( (v5.m128i_i32[1] & 0x3FFFFFEC) != 0 )
    {
      UserSetLastError(1004);
      v3 = 0;
    }
    else if ( (v5.m128i_i32[1] & 0x40000000) != 0 )
    {
      v3 = QueryTrackMouseEvent(&v5);
      v2 = a1;
      *a1 = v5;
      a1[1].m128i_i64[0] = v6;
    }
    else
    {
      v3 = TrackMouseEvent(&v5);
    }
  }
  else
  {
    UserSetLastError(87);
    v3 = 0;
  }
  UserSessionSwitchLeaveCrit(v2);
  return v3;
}
