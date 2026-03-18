/*
 * XREFs of ?ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z @ 0x1C0058F8C
 * Callers:
 *     ?FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BLOCK@@2PEA_K3@Z @ 0x1C0058840 (-FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BL.c)
 *     ?GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z @ 0x1C0089F8C (-GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_LINEAR_POOL::ApplyBlockRunRestrictions(
        VIDMM_LINEAR_POOL *this,
        bool *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        unsigned __int64 a5,
        unsigned int a6,
        char a7,
        unsigned __int64 a8,
        unsigned __int64 a9)
{
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx

  if ( a8 )
  {
    if ( a8 >= *a4 )
    {
LABEL_3:
      *a2 = 1;
      return;
    }
    if ( a8 > *a3 )
      *a3 = a8;
  }
  if ( a9 )
  {
    if ( a9 <= *a3 )
      goto LABEL_3;
    if ( a9 < *a4 )
      *a4 = a9;
  }
  if ( a7 )
  {
    if ( !a6 )
      goto LABEL_15;
    v10 = *a3 % a6;
    if ( !v10 )
      goto LABEL_15;
    v11 = *a3 + a6 - v10;
    if ( v11 < *a4 )
    {
LABEL_14:
      *a3 = v11;
LABEL_15:
      *a2 = 0;
      return;
    }
  }
  else
  {
    v12 = 0LL;
    if ( a6 )
      v12 = (*a4 - a5) % a6;
    v11 = *a4 - v12 - a5;
    if ( v11 >= *a3 )
      goto LABEL_14;
  }
  *a2 = 1;
}
