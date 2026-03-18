/*
 * XREFs of MiDeleteMergedPte @ 0x140005510
 * Callers:
 *     MiDecrementCloneBlockReference @ 0x14000539C (MiDecrementCloneBlockReference.c)
 *     MiDecrementCombinedPte @ 0x14022A0F0 (MiDecrementCombinedPte.c)
 * Callees:
 *     MiDeleteTransitionPte @ 0x140082E6C (MiDeleteTransitionPte.c)
 *     MiLockProtoPoolPage @ 0x1400B4A50 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MiReleasePageFileSpace @ 0x1400E31B4 (MiReleasePageFileSpace.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall MiDeleteMergedPte(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned int v7; // edi
  __int64 PteShadow; // rax
  char v9; // [rsp+48h] [rbp+10h] BYREF

  result = *a2;
  if ( (unsigned __int64)(a2 + 0x12090482600LL) <= 0x7F8 )
    result = MiReadPteShadow(a2, *a2);
  if ( result )
  {
    v5 = MiLockProtoPoolPage(a2, &v9);
    v7 = MiDeleteTransitionPte((ULONG_PTR)a2);
    if ( v7 == 1 )
    {
      PteShadow = *a2;
      if ( (unsigned __int64)(a2 + 0x12090482600LL) <= 0x7F8 )
        PteShadow = MiReadPteShadow(a2, *a2);
      MiReleasePageFileSpace(a1, PteShadow, 1LL);
    }
    LOBYTE(v6) = v9;
    MiUnlockProtoPoolPage(v5, v6);
    return v7;
  }
  return result;
}
