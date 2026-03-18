/*
 * XREFs of RemoveListEntryPte @ 0x1400EA358
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1400AE7E8 (MiReleaseSystemCacheView.c)
 *     MiRemoveSpecialPoolRange @ 0x1401DAB40 (MiRemoveSpecialPoolRange.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall RemoveListEntryPte(unsigned __int64 a1, __int64 *a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  __int64 result; // rax

  v2 = a1;
  v4 = (a1 >> 9) & 0x7FFFFFFFF8LL;
  v5 = (unsigned __int64)a2[1] >> 28;
  v6 = *(_QWORD *)(v2 + 16);
  v7 = (_QWORD *)v2;
  if ( v5 != (__int64)(((v2 >> 9) & 0x7FFFFFFFF8LL) - v6 - 0x98000000000LL) >> 3 )
    v7 = (_QWORD *)(v6 + 8 * v5);
  v8 = *a2;
  *v7 = *a2;
  if ( (unsigned int)MiPteInShadowRange(v7) )
    MiWritePteShadow(v7, v8);
  v9 = *(_QWORD *)(v2 + 16);
  v10 = (unsigned __int64)*a2 >> 28;
  if ( v10 != (v4 - v9 - 0x98000000000LL) >> 3 )
    v2 = v9 + 8 * v10;
  v11 = a2[1];
  *(_QWORD *)(v2 + 8) = v11;
  result = MiPteInShadowRange(v2 + 8);
  if ( (_DWORD)result )
    return MiWritePteShadow(v2 + 8, v11);
  return result;
}
