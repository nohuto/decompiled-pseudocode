/*
 * XREFs of RtlpFindFirstActivationContextSection @ 0x180018EDC
 * Callers:
 *     RtlFindActivationContextSectionGuid @ 0x1800127A0 (RtlFindActivationContextSectionGuid.c)
 * Callees:
 *     RtlpFindNextActivationContextSection @ 0x1800160B4 (RtlpFindNextActivationContextSection.c)
 */

__int64 __fastcall RtlpFindFirstActivationContextSection(_DWORD *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax

  if ( a4 )
    *a4 = 0LL;
  if ( !a1 || *a1 < 0x20u || (a1[1] & 0xFFFFFFF8) != 0 || !a2 || !a3 )
    return 3221225485LL;
  a1[5] = 0;
  result = RtlpFindNextActivationContextSection((__int64)a1, a2, a3, a4);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
