/*
 * XREFs of NtUserDefSetText @ 0x1C0120280
 * Callers:
 *     <none>
 * Callees:
 *     DefSetText @ 0x1C006AF9C (DefSetText.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserDefSetText(__int64 a1, const CHAR **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  unsigned __int64 v9; // xmm0_8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  __m128i v13; // [rsp+38h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  v8 = 0;
  if ( v7 )
  {
    if ( a2 )
    {
      v6 = W32UserProbeAddress;
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        a2 = (const CHAR **)W32UserProbeAddress;
      v13 = *(__m128i *)a2;
      v9 = _mm_srli_si128(v13, 8).m128i_u64[0];
      if ( v9 )
      {
        if ( v13.m128i_i32[0] > (v13.m128i_i32[1] & 0x7FFFFFFFu) )
          ExRaiseAccessViolation();
        if ( v13.m128i_i32[1] < 0 )
        {
          v11 = v9 + v13.m128i_u32[0] + 1LL;
          if ( v11 < v9 || v11 > W32UserProbeAddress )
            ExRaiseAccessViolation();
        }
        else
        {
          if ( (v13.m128i_i8[8] & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v10 = v9 + v13.m128i_u32[0] + 2LL;
          if ( v10 < v9 || v10 > W32UserProbeAddress )
            ExRaiseAccessViolation();
        }
      }
      else
      {
        v13.m128i_i32[0] = 0;
      }
      a2 = (const CHAR **)&v13;
    }
    v8 = DefSetText(v7, a2, v6);
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v8;
}
