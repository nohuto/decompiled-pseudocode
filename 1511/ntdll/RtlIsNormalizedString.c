/*
 * XREFs of RtlIsNormalizedString @ 0x1800026D0
 * Callers:
 *     RtlIdnToUnicode @ 0x18006A2A0 (RtlIdnToUnicode.c)
 * Callees:
 *     Normalization__IsNormalized @ 0x180002758 (Normalization__IsNormalized.c)
 *     RtlpGetNormalization @ 0x18006B6AC (RtlpGetNormalization.c)
 */

__int64 __fastcall RtlIsNormalizedString(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v5 = a3;
  if ( !a2 )
    return 3221225485LL;
  if ( !a4 )
    return 3221225485LL;
  v7 = -1LL;
  if ( a3 < -1 || !(_DWORD)a1 )
    return 3221225485LL;
  result = RtlpGetNormalization(a1, &v9);
  if ( (int)result >= 0 )
  {
    if ( v5 == -1 )
    {
      do
        ++v7;
      while ( *(_WORD *)(a2 + 2 * v7) );
      v5 = v7 + 1;
    }
    return Normalization__IsNormalized(v9, a2, v5, a4);
  }
  return result;
}
