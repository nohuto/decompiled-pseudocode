/*
 * XREFs of MiDeleteMergedPte @ 0x14000E9A8
 * Callers:
 *     MiDecrementCloneBlockReference @ 0x140011D94 (MiDecrementCloneBlockReference.c)
 *     MiDecrementCombinedPte @ 0x14012B580 (MiDecrementCombinedPte.c)
 * Callees:
 *     MiDeleteTransitionPte @ 0x140010618 (MiDeleteTransitionPte.c)
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     MiReleasePageFileSpace @ 0x1400E5464 (MiReleasePageFileSpace.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDeleteMergedPte(__int64 a1, ULONG_PTR a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned int v7; // edi
  __int64 v8; // rax
  char v9; // [rsp+40h] [rbp+18h] BYREF

  result = MI_READ_PTE_LOCK_FREE(a2);
  if ( result )
  {
    v5 = MiLockProtoPoolPage(a2, &v9);
    v7 = MiDeleteTransitionPte(a2);
    if ( v7 == 1 )
    {
      v8 = MI_READ_PTE_LOCK_FREE(a2);
      MiReleasePageFileSpace(a1, v8, 1LL);
    }
    LOBYTE(v6) = v9;
    MiUnlockProtoPoolPage(v5, v6);
    return v7;
  }
  return result;
}
