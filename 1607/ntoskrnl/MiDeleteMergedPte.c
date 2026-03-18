/*
 * XREFs of MiDeleteMergedPte @ 0x1400B8E10
 * Callers:
 *     MiDecrementCloneBlockReference @ 0x1400B8CA0 (MiDecrementCloneBlockReference.c)
 *     MiDecrementCombinedPte @ 0x1401F972C (MiDecrementCombinedPte.c)
 * Callees:
 *     MiReleasePageFileSpace @ 0x140022238 (MiReleasePageFileSpace.c)
 *     MiUnlockProtoPoolPage @ 0x14004C4E0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x14004ED80 (MiLockProtoPoolPage.c)
 *     MiTryDeleteTransitionPte @ 0x1400B8F70 (MiTryDeleteTransitionPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDeleteMergedPte(struct _KEVENT *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  unsigned int v6; // edi
  unsigned __int64 v7; // rax
  unsigned __int8 v8; // [rsp+40h] [rbp+18h] BYREF

  result = MI_READ_PTE_LOCK_FREE(a2);
  if ( result )
  {
    v5 = MiLockProtoPoolPage(a2, &v8);
    v6 = MiTryDeleteTransitionPte(a2);
    if ( v6 == 1 )
    {
      v7 = MI_READ_PTE_LOCK_FREE(a2);
      MiReleasePageFileSpace(a1, v7, 1LL);
    }
    MiUnlockProtoPoolPage(v5, v8);
    return v6;
  }
  return result;
}
