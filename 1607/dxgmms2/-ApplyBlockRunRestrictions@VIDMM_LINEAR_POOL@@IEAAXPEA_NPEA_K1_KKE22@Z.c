/*
 * XREFs of ?ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z @ 0x1C0065698
 * Callers:
 *     ?FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BLOCK@@2PEA_K3@Z @ 0x1C0064E00 (-FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BL.c)
 *     ?GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z @ 0x1C009F2B0 (-GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_LINEAR_POOL::ApplyBlockRunRestrictions(
        VIDMM_LINEAR_POOL *this,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        unsigned __int64 a5,
        unsigned int a6,
        char a7,
        unsigned __int64 a8,
        unsigned __int64 a9)
{
  unsigned __int64 *v9; // rdi
  unsigned __int64 *v10; // rbx
  bool *v11; // rsi
  __int64 v12; // rax
  char *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rax
  bool v18; // zf
  __int64 v19; // rax

  v9 = a4;
  v10 = a3;
  v11 = (bool *)a2;
  if ( !a8 )
    goto LABEL_2;
  if ( a8 < *a4 )
  {
    if ( a8 > *a3 )
    {
      *a3 = a8;
      a3 = *(unsigned __int64 **)&g_IsInternalReleaseOrDbg;
      if ( !g_IsInternalReleaseOrDbg )
      {
LABEL_3:
        if ( a9 )
        {
          if ( a9 <= *v10 )
            goto LABEL_23;
          if ( a9 < *v9 )
          {
            *v9 = a9;
            if ( *(_BYTE *)a3 )
            {
              WdLogNewEntry5_WdTrace(this, a2, a3, a4);
              a3 = *(unsigned __int64 **)&g_IsInternalReleaseOrDbg;
              if ( g_IsInternalReleaseOrDbg )
              {
                v19 = WdLogNewEntry5_WdTrace(this, a2, *(_QWORD *)&g_IsInternalReleaseOrDbg, a4);
                a3 = *(unsigned __int64 **)&g_IsInternalReleaseOrDbg;
                *(_QWORD *)(v19 + 24) = *v10;
                this = (VIDMM_LINEAR_POOL *)*v9;
                *(_QWORD *)(v19 + 32) = *v9;
              }
            }
          }
        }
        if ( a7 )
        {
          if ( !a6 || (a4 = (unsigned __int64 *)*v10, this = (VIDMM_LINEAR_POOL *)a6, (a2 = *v10 % a6) == 0) )
          {
LABEL_9:
            if ( *(_BYTE *)a3 )
            {
              v12 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
              *(_QWORD *)(v12 + 24) = *v10;
              *(_QWORD *)(v12 + 32) = *v9;
            }
            *v11 = 0;
            return;
          }
          this = (VIDMM_LINEAR_POOL *)(a6 - a2);
          v13 = (char *)this + (_QWORD)a4;
          if ( (VIDMM_LINEAR_POOL *)((char *)this + (_QWORD)a4) >= (VIDMM_LINEAR_POOL *)*v9 )
            goto LABEL_23;
LABEL_15:
          *v10 = (unsigned __int64)v13;
          goto LABEL_9;
        }
        this = (VIDMM_LINEAR_POOL *)a6;
        a2 = 0LL;
        if ( a6 )
          a2 = (*v9 - a5) % a6;
        v13 = (char *)(*v9 - a2 - a5);
        if ( (unsigned __int64)v13 >= *v10 )
          goto LABEL_15;
LABEL_23:
        v18 = *(_BYTE *)a3 == 0;
        goto LABEL_24;
      }
      WdLogNewEntry5_WdTrace(this, a2, *(_QWORD *)&g_IsInternalReleaseOrDbg, a4);
      v17 = WdLogNewEntry5_WdTrace(v15, v14, *(_QWORD *)&g_IsInternalReleaseOrDbg, v16);
      *(_QWORD *)(v17 + 24) = *v10;
      this = (VIDMM_LINEAR_POOL *)*v9;
      *(_QWORD *)(v17 + 32) = *v9;
    }
LABEL_2:
    a3 = *(unsigned __int64 **)&g_IsInternalReleaseOrDbg;
    goto LABEL_3;
  }
  v18 = g_IsInternalReleaseOrDbg == 0;
LABEL_24:
  if ( !v18 )
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *v11 = 1;
}
