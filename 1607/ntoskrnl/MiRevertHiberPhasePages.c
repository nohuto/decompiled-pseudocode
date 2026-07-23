/*
 * XREFs of MiRevertHiberPhasePages @ 0x1403D1190
 * Callers:
 *     <none>
 * Callees:
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiRevertHiberPhasePages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v4; // r10
  __int64 v5; // rax
  unsigned __int64 *v6; // r10
  unsigned __int64 v7; // r11
  __int64 v8; // rdx
  __int64 v9; // rcx

  v4 = a2;
  if ( !a4 && a2 <= a3 )
  {
    do
    {
      v5 = MI_READ_PTE_LOCK_FREE(v4);
      if ( (v5 & 1) == 0 && (v5 & 0x400) != 0 && (v5 & 4) != 0 )
      {
        *v6 = v5 & 0xFFFFFFFFFFFFFBFAuLL | 1;
        if ( MiPteInShadowRange((unsigned __int64)v6) )
          MiWritePteShadow(v9, v8);
      }
      v4 = (unsigned __int64)(v6 + 1);
    }
    while ( v4 <= v7 );
  }
}
