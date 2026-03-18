/*
 * XREFs of ?GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z @ 0x1C0089F8C
 * Callers:
 *     ?GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C008499C (-GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z.c)
 * Callees:
 *     ?ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z @ 0x1C0058F8C (-ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z.c)
 */

unsigned __int64 __fastcall VIDMM_LINEAR_POOL::GetLargestGap(
        VIDMM_LINEAR_POOL *this,
        unsigned __int64 a2,
        unsigned int a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  char *v6; // r15
  char *v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  char *v12; // r14
  unsigned __int64 v13; // rsi
  unsigned __int64 v15; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-8h] BYREF
  bool v17; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int64 v18; // [rsp+A8h] [rbp+48h]

  v18 = a2;
  v16 = 0LL;
  v6 = (char *)this + 40;
  v7 = (char *)*((_QWORD *)this + 5);
  v8 = 0LL;
  v9 = 0LL;
  while ( 1 )
  {
    v15 = v8;
    if ( v7 == v6 )
      break;
    v12 = v7 - 32;
    v7 = *(char **)v7;
    v13 = *((_QWORD *)v12 + 1);
    if ( v13 != v8 )
    {
      VIDMM_LINEAR_POOL::ApplyBlockRunRestrictions(this, &v17, &v16, &v15, a2, a3, a4, a5, a6);
      if ( !v17 && v9 <= v15 - v16 )
        v9 = v15 - v16;
      a2 = v18;
      v8 = v13;
      v16 = v13;
    }
    v8 += *((_QWORD *)v12 + 2);
  }
  VIDMM_LINEAR_POOL::ApplyBlockRunRestrictions(this, &v17, &v16, &v15, a2, a3, a4, a5, a6);
  if ( !v17 && v9 <= v15 - v16 )
    return v15 - v16;
  return v9;
}
