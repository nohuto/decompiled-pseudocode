/*
 * XREFs of MI_MAKE_PROTECT_WRITE_COPY @ 0x1400BBC2C
 * Callers:
 *     MiBuildForkPte @ 0x1400BAB30 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1401F701C (MiHandleForkTransitionPte.c)
 *     MiConvertPrivateToProto @ 0x1401F8734 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
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
