/*
 * XREFs of MI_CLEAR_RESET_PTE @ 0x140225960
 * Callers:
 *     MiActOnPte @ 0x14007FD30 (MiActOnPte.c)
 *     MiRestoreTransitionPte @ 0x1400E5CA0 (MiRestoreTransitionPte.c)
 * Callees:
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiUpdatePageFileHighInPte @ 0x140225FFC (MiUpdatePageFileHighInPte.c)
 */

struct _KTHREAD *__fastcall MI_CLEAR_RESET_PTE(__int64 *a1)
{
  __int64 PteShadow; // rax
  struct _KTHREAD *result; // rax
  struct _KTHREAD **v3; // r9
  __int64 v4; // r11
  unsigned __int64 v5; // r10

  PteShadow = *a1;
  if ( (unsigned __int64)(a1 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow((__int64)a1, *a1);
  result = (struct _KTHREAD *)MiUpdatePageFileHighInPte(PteShadow, 0LL);
  *v3 = result;
  if ( (unsigned __int64)v3 + v4 <= v5 )
    return MiWritePteShadow((__int64)v3, (__int64)result);
  return result;
}
