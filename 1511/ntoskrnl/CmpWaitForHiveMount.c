/*
 * XREFs of CmpWaitForHiveMount @ 0x14053FF80
 * Callers:
 *     CmpGetSymbolicLink @ 0x1403FBEB0 (CmpGetSymbolicLink.c)
 *     CmpBuildHashStackAndLookupCache @ 0x140408290 (CmpBuildHashStackAndLookupCache.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     CmpComputeHashKey @ 0x1403DA088 (CmpComputeHashKey.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 */

char __fastcall CmpWaitForHiveMount(__m128i *a1, unsigned int a2, char a3, _DWORD *a4)
{
  __m128i v4; // xmm0
  __int16 v8; // cx
  char v9; // di
  _WORD *v10; // rdx
  bool v11; // zf
  unsigned __int16 v13; // r8
  int v14; // r8d
  unsigned __int16 v15; // dx
  __int64 v16; // rbx
  __int64 v17; // rcx
  __m128i v18; // [rsp+30h] [rbp-10h] BYREF

  v4 = *a1;
  v8 = _mm_cvtsi128_si32(*a1);
  v9 = 0;
  v18 = v4;
  v10 = (_WORD *)v4.m128i_i64[1];
  v11 = v8 == 0;
  while ( 1 )
  {
    v18.m128i_i16[0] = v8;
    if ( v11 || *v10 != 92 )
      break;
    v18.m128i_i64[1] = (__int64)++v10;
    v11 = v8 == 2;
    v8 -= 2;
  }
  if ( a2 < 2 )
  {
    if ( !v8 )
      goto LABEL_9;
    do
    {
      if ( *v10 == 92 )
        break;
      ++v10;
      v11 = v8 == 2;
      v8 -= 2;
      v18.m128i_i16[0] = v8;
    }
    while ( !v11 );
    v18.m128i_i64[1] = (__int64)v10;
    if ( !v8 )
    {
LABEL_9:
      _interlockedbittestandset(dword_1402C7570, 0);
      return 0;
    }
    do
    {
      if ( *v10 != 92 )
        break;
      ++v10;
      v11 = v8 == 2;
      v8 -= 2;
      v18.m128i_i16[0] = v8;
    }
    while ( !v11 );
    v18.m128i_i64[1] = (__int64)v10;
  }
  if ( !v8 )
    goto LABEL_9;
  v13 = 0;
  do
  {
    if ( v10[v13] == 92 )
      break;
    ++v13;
    v8 -= 2;
  }
  while ( v8 );
  v18.m128i_i16[0] = 2 * v13;
  v14 = CmpComputeHashKey(0, (unsigned __int16 *)&v18);
  v15 = 0;
  while ( dword_1402C756C[6 * v15] != v14 )
  {
    if ( ++v15 >= 7u )
    {
      _interlockedbittestandset(dword_1402C7570, 2u);
      return 0;
    }
  }
  v16 = 3LL * v15;
  _interlockedbittestandset(&dword_1402C7570[6 * v15], 3u);
  _InterlockedAdd(&dword_1402C7574[6 * v15], 1u);
  KeSetEvent((struct _KEVENT *)((char *)&stru_1402C7650 + 152 * (unsigned int)dword_1402C7568[6 * v15]), 0, 0);
  v17 = (unsigned int)dword_1402C7568[2 * v16];
  if ( *(&stru_1402C7680.Header.SignalState + 38 * v17) )
  {
    _interlockedbittestandset(&dword_1402C7570[2 * v16], 1u);
  }
  else
  {
    v9 = 1;
    if ( a3 )
    {
      CmpUnlockRegistry();
      _interlockedbittestandset(&dword_1402C7570[2 * v16], 4u);
      KeWaitForSingleObject(
        (char *)&stru_1402C7680 + 152 * (unsigned int)dword_1402C7568[2 * v16],
        Executive,
        0,
        0,
        0LL);
      CmpLockRegistry();
    }
    else
    {
      *a4 = v17;
      _interlockedbittestandset(&dword_1402C7570[2 * v16], 5u);
    }
  }
  return v9;
}
