/*
 * XREFs of NtUserTrackMouseEvent @ 0x1C010A640
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     QueryTrackMouseEvent @ 0x1C010A718 (QueryTrackMouseEvent.c)
 *     TrackMouseEvent @ 0x1C010A7AC (TrackMouseEvent.c)
 */

__int64 __fastcall NtUserTrackMouseEvent(__m128i *a1)
{
  int v2; // ebx
  __m128i *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __m128i v7; // [rsp+38h] [rbp-40h] BYREF
  __int64 v8; // [rsp+48h] [rbp-30h]

  v2 = 0;
  EnterCrit(0LL, 1LL);
  v3 = a1;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v3 = (__m128i *)W32UserProbeAddress;
  v7 = *v3;
  v8 = v3[1].m128i_i64[0];
  if ( _mm_cvtsi128_si32(v7) == 24 )
  {
    if ( (v7.m128i_i32[1] & 0x3FFFFFEC) != 0 )
    {
      UserSetLastError(1004LL);
    }
    else if ( (v7.m128i_i32[1] & 0x40000000) != 0 )
    {
      v2 = QueryTrackMouseEvent(&v7);
      *a1 = v7;
      a1[1].m128i_i64[0] = v8;
    }
    else
    {
      v2 = TrackMouseEvent(&v7);
    }
  }
  else
  {
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v2;
}
