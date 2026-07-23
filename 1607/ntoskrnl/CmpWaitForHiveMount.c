/*
 * XREFs of CmpWaitForHiveMount @ 0x14057581C
 * Callers:
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140518418 (CmpPerformCompleteKcbCacheLookup.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     CmpHashUnicodeComponent @ 0x14049B720 (CmpHashUnicodeComponent.c)
 */

char __fastcall CmpWaitForHiveMount(__m128i *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __m128i v4; // xmm0
  char v5; // bl
  __int16 v7; // cx
  _WORD *v8; // r8
  unsigned __int16 v9; // dx
  int v10; // eax
  unsigned __int16 v11; // r8
  __int64 v13; // rdi
  __int64 v14; // rcx
  bool v15; // zf
  __m128i v16; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  v5 = 0;
  v7 = _mm_cvtsi128_si32(*a1);
  v16 = v4;
  v16.m128i_i16[0] = v7;
  if ( !v7 )
    goto LABEL_19;
  v8 = (_WORD *)v16.m128i_i64[1];
  do
  {
    if ( *v8 != 92 )
      break;
    ++v8;
    v15 = v7 == 2;
    v7 -= 2;
    v16.m128i_i16[0] = v7;
  }
  while ( !v15 );
  v16.m128i_i64[1] = (__int64)v8;
  if ( v7 )
  {
    v9 = 0;
    do
    {
      if ( v8[v9] == 92 )
        break;
      ++v9;
      v7 -= 2;
    }
    while ( v7 );
    v16.m128i_i16[0] = 2 * v9;
    v10 = CmpHashUnicodeComponent(&v16);
    v11 = 0;
    while ( dword_1402F30BC[6 * v11] != v10 )
    {
      if ( ++v11 >= 7u )
      {
        _interlockedbittestandset(dword_1402F30C0, 2u);
        return 0;
      }
    }
    v13 = 3LL * v11;
    _interlockedbittestandset(&dword_1402F30C0[6 * v11], 3u);
    _InterlockedAdd(&dword_1402F30C4[6 * v11], 1u);
    KeSetEvent((struct _KEVENT *)((char *)&stru_1402F2CC0 + 152 * (unsigned int)dword_1402F30B8[6 * v11]), 0, 0);
    v14 = (unsigned int)dword_1402F30B8[2 * v13];
    if ( *(&stru_1402F2CF0.Header.SignalState + 38 * v14) )
    {
      _interlockedbittestandset(&dword_1402F30C0[2 * v13], 1u);
    }
    else
    {
      *a4 = v14;
      v5 = 1;
      _interlockedbittestandset(&dword_1402F30C0[2 * v13], 5u);
    }
    return v5;
  }
  else
  {
LABEL_19:
    _interlockedbittestandset(dword_1402F30C0, 0);
    return 0;
  }
}
