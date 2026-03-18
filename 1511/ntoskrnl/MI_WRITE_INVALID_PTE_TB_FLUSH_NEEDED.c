/*
 * XREFs of MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x14012B400
 * Callers:
 *     MiConvertPrivateToProto @ 0x14012A57C (MiConvertPrivateToProto.c)
 * Callees:
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1401D1940 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiPteHasShadow @ 0x1401DE8C4 (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // r8d

  v2 = *a1;
  v4 = MiPteInShadowRange(a1);
  v7 = v4;
  if ( v4 && (unsigned int)MiPteHasShadow(v6, v5, v4) )
    LOBYTE(v2) = v2 | 0x20;
  if ( (v2 & 0x20) != 0 )
  {
    *a1 = a2;
    if ( v7 )
      MiWritePteShadow(a1, a2);
  }
  else if ( (MI_INTERLOCKED_EXCHANGE_PTE(a1, a2) & 0x20) == 0 )
  {
    return 0LL;
  }
  return 1LL;
}
