/*
 * XREFs of NtUserDefSetText @ 0x1C00F9CE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     DefSetText @ 0x1C0072B08 (DefSetText.c)
 */

__int64 __fastcall NtUserDefSetText(__int64 a1, __m128i *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r9
  unsigned int v7; // ebx
  unsigned __int64 v8; // xmm0_8
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  __m128i v12; // [rsp+38h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v7 = 0;
  if ( v6 )
  {
    if ( a2 )
    {
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        a2 = (__m128i *)W32UserProbeAddress;
      v12 = *a2;
      v8 = _mm_srli_si128(v12, 8).m128i_u64[0];
      if ( v8 )
      {
        if ( v12.m128i_i32[0] > (v12.m128i_i32[1] & 0x7FFFFFFFu) )
          ExRaiseAccessViolation();
        if ( v12.m128i_i32[1] < 0 )
        {
          v10 = v8 + v12.m128i_u32[0] + 1LL;
          if ( v10 < v8 || v10 > W32UserProbeAddress )
            ExRaiseAccessViolation();
        }
        else
        {
          if ( (v12.m128i_i8[8] & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v9 = v8 + v12.m128i_u32[0] + 2LL;
          if ( v9 < v8 || v9 > W32UserProbeAddress )
            ExRaiseAccessViolation();
        }
      }
      else
      {
        v12.m128i_i32[0] = 0;
      }
      a2 = &v12;
    }
    v7 = DefSetText(v6, (__int64)a2);
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v7;
}
