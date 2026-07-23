/*
 * XREFs of MiInvalidateHiberPhasePages @ 0x1403D11F0
 * Callers:
 *     <none>
 * Callees:
 *     MiIsPfn @ 0x14000F720 (MiIsPfn.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiInvalidateHiberPhasePages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 i; // r10
  unsigned __int64 *v7; // r10
  unsigned __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // r11
  unsigned __int64 PteAddress; // rax
  __int64 v12; // rcx
  __int64 v13; // r9
  unsigned __int64 v14[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !a4 )
  {
    for ( i = a2; i <= a3; i = (unsigned __int64)(v7 + 1) )
    {
      v14[0] = MI_READ_PTE_LOCK_FREE(i);
      if ( (v14[0] & 1) != 0 )
      {
        v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v14);
        if ( MiIsPfn((v8 >> 12) & 0xFFFFFFFFFLL) )
        {
          if ( v10 != qword_1403276E0 && v10 != qword_1403276C8
            || (PteAddress = MiGetPteAddress((unsigned __int64)v7), (MI_READ_PTE_LOCK_FREE(PteAddress) & 0x800) != 0) )
          {
            if ( _bittest64(*(const signed __int64 **)(a1 + 8), (unsigned int)v10) )
              return;
            v14[0] = v9 & 0xFFFFFFFFFFFFFBFAuLL | 0x404;
            *v7 = v14[0];
            if ( MiPteInShadowRange((unsigned __int64)v7) )
              MiWritePteShadow(v12, v13);
          }
        }
      }
    }
  }
}
