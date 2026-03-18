/*
 * XREFs of MI_MAKE_PROTECT_WRITE_COPY @ 0x1400BDD9C
 * Callers:
 *     MiBuildForkPte @ 0x1400BCCA0 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1401F71F0 (MiHandleForkTransitionPte.c)
 *     MiConvertPrivateToProto @ 0x1401F8908 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MI_MAKE_PROTECT_WRITE_COPY(__int64 a1)
{
  __int64 result; // rax
  __int64 *v2; // r9
  __int64 v3; // rdx
  __int64 v4; // rcx

  result = MI_READ_PTE_LOCK_FREE(a1);
  if ( (result & 0x80u) != 0LL )
  {
    *v2 = result | 0x20;
    result = MiPteInShadowRange(v2, result | 0x20);
    if ( (_DWORD)result )
      return MiWritePteShadow(v4, v3);
  }
  return result;
}
