/*
 * XREFs of MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x14010D140
 * Callers:
 *     MiConvertPrivateToProto @ 0x1401F8908 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiPteHasShadow @ 0x1401EF38C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 */

__int64 __fastcall MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(_QWORD *a1, signed __int64 a2)
{
  signed __int64 v2; // rdx
  __int64 v3; // rcx
  volatile signed __int64 *v4; // r8
  int v5; // r9d

  v5 = MiPteInShadowRange(a1, *a1);
  if ( v5 && (unsigned int)MiPteHasShadow(v3, v2, v4) )
    v2 |= 0x20uLL;
  if ( (MiFlags & 0x800) != 0 )
  {
    v2 |= 0x20uLL;
  }
  else if ( (MiFlags & 0x1000000) != 0 )
  {
    _mm_lfence();
  }
  if ( (v2 & 0x20) == 0 && v2 == _InterlockedCompareExchange64(v4, a2, v2) )
    return 0LL;
  *v4 = a2;
  if ( v5 )
    MiWritePteShadow(v4, a2);
  return 1LL;
}
