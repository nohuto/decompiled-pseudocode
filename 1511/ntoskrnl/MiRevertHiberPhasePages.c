/*
 * XREFs of MiRevertHiberPhasePages @ 0x14039CEA0
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

void __fastcall MiRevertHiberPhasePages(__int64 a1, __int64 *a2, unsigned __int64 a3, int a4)
{
  __int64 *i; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rbx

  if ( !a4 )
  {
    for ( i = a2; (unsigned __int64)i <= a3; ++i )
    {
      v6 = MI_READ_PTE_LOCK_FREE(i);
      if ( (v6 & 1) == 0 && (v6 & 0x400) != 0 && (v6 & 4) != 0 )
      {
        v7 = v6 & 0xFFFFFFFFFFFFFBFAuLL | 1;
        *i = v7;
        if ( MiPteInShadowRange((__int64)i) )
          MiWritePteShadow((__int64)i, v7);
      }
    }
  }
}
