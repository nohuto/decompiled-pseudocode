/*
 * XREFs of MiInvalidateHiberPhasePages @ 0x14039CF20
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

void __fastcall MiInvalidateHiberPhasePages(__int64 a1, __int64 *a2, unsigned __int64 a3, int a4)
{
  __int64 *i; // rdi
  __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  __int64 *PteAddress; // rax
  unsigned __int64 v10; // rbx
  __int64 v11[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a4 )
  {
    for ( i = a2; (unsigned __int64)i <= a3; ++i )
    {
      v11[0] = MI_READ_PTE_LOCK_FREE(i);
      v7 = v11[0];
      if ( (v11[0] & 1) != 0 )
      {
        v8 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v11) >> 12) & 0xFFFFFFFFFLL;
        if ( MI_IS_PFN(v8) )
        {
          if ( v8 != qword_1402FF250 && v8 != qword_1402FF238
            || (PteAddress = (__int64 *)MiGetPteAddress((unsigned __int64)i),
                (MI_READ_PTE_LOCK_FREE(PteAddress) & 0x800) != 0) )
          {
            if ( _bittest64(*(const signed __int64 **)(a1 + 8), (unsigned int)v8) )
              return;
            v10 = v7 & 0xFFFFFFFFFFFFFBFAuLL | 0x404;
            v11[0] = v10;
            *i = v10;
            if ( MiPteInShadowRange((__int64)i) )
              MiWritePteShadow((__int64)i, v10);
          }
        }
      }
    }
  }
}
