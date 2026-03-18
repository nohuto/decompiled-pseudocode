/*
 * XREFs of InsertTailListPte @ 0x1400B2424
 * Callers:
 *     MiExpandSystemCache @ 0x1400162A8 (MiExpandSystemCache.c)
 *     MiReleaseSystemCacheView @ 0x1400AE7E8 (MiReleaseSystemCacheView.c)
 *     MiExpandSpecialPool @ 0x1401DA974 (MiExpandSpecialPool.c)
 *     MiRemoveSpecialPoolRange @ 0x1401DAB40 (MiRemoveSpecialPoolRange.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall InsertTailListPte(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // r14
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 *v10; // rdi
  __int64 result; // rax

  v2 = ((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL;
  v3 = (unsigned __int64)a1[1] >> 28;
  v6 = (v2 - a1[2] - 0x98000000000LL) >> 3 << 28;
  *a2 = v6;
  if ( (unsigned int)MiPteInShadowRange(a2) )
    MiWritePteShadow(a2, v6);
  v7 = (v3 << 28) | v6 & 0xFFFFFFF;
  a2[1] = v7;
  if ( (unsigned int)MiPteInShadowRange(a2 + 1) )
    MiWritePteShadow(a2 + 1, v7);
  v8 = a1[2];
  v9 = ((__int64)a2 - v8) >> 3 << 28;
  if ( v3 == (v2 - v8 - 0x98000000000LL) >> 3 )
  {
    *a1 = v9 | *(_DWORD *)a1 & 0xFFFFFFF;
  }
  else
  {
    v10 = (__int64 *)(v8 + 8 * v3);
    *v10 = v9;
    if ( (unsigned int)MiPteInShadowRange(v10) )
      MiWritePteShadow(v10, v9);
  }
  result = v9 | a1[1] & 0xFFFFFFF;
  a1[1] = result;
  return result;
}
