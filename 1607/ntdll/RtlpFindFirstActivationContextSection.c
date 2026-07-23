/*
 * XREFs of RtlpFindFirstActivationContextSection @ 0x1800193BC
 * Callers:
 *     RtlFindActivationContextSectionGuid @ 0x180019EE0 (RtlFindActivationContextSectionGuid.c)
 * Callees:
 *     RtlpFindNextActivationContextSection @ 0x18001AFCC (RtlpFindNextActivationContextSection.c)
 */

__int64 __fastcall RtlpFindFirstActivationContextSection(_DWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax

  if ( a4 )
    *a4 = 0LL;
  if ( !a1 || *a1 < 0x20u || (a1[1] & 0xFFFFFFF8) != 0 || !a2 || !a3 )
    return 3221225485LL;
  a1[5] = 0;
  result = RtlpFindNextActivationContextSection();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
