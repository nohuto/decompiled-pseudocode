/*
 * XREFs of ?PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z @ 0x1C009F580
 * Callers:
 *     ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6AXPEAU_VIDMM_GLOBAL_ALLOC@@0@ZP6A_N2@Z4P6AK2@ZPEA_K@Z @ 0x1C009EDFC (-DefragmentRange@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6AXPEAU_VIDMM_GLOBAL_.c)
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z@Z @ 0x1C009F8AC (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 * Callees:
 *     ?AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ @ 0x1C0065310 (-AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ.c)
 */

void __fastcall VIDMM_LINEAR_POOL::PatchGapsWithFreeBlocks(
        VIDMM_LINEAR_POOL *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rbx
  char *v4; // rsi
  char *v5; // r15
  struct _VIDMM_POOL_BLOCK *v6; // rdi
  struct _VIDMM_POOL_BLOCK *v9; // r14
  char v10; // cl
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rdx
  struct _VIDMM_POOL_BLOCK *Block; // rax
  struct _VIDMM_POOL_BLOCK *v16; // rcx
  struct _VIDMM_POOL_BLOCK **v17; // r8
  struct _VIDMM_POOL_BLOCK *v18; // rax
  struct _VIDMM_POOL_BLOCK **v19; // rdx
  _QWORD *v20; // rcx
  char *v21; // rdi
  __int64 v22; // rdx
  _QWORD *v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rax
  struct _VIDMM_POOL_BLOCK *v26; // rax
  char *v27; // rcx
  char **v28; // rdx
  VIDMM_LINEAR_POOL *v29; // rax
  VIDMM_LINEAR_POOL **v30; // rdx
  unsigned __int64 v31; // [rsp+58h] [rbp+10h]

  v31 = a2;
  v3 = 0LL;
  v4 = (char *)this + 72;
  v5 = (char *)*((_QWORD *)this + 9);
  v6 = 0LL;
  while ( v5 != v4 )
  {
    v9 = (struct _VIDMM_POOL_BLOCK *)(v5 - 40);
    v5 = *(char **)v5;
    v10 = *((_BYTE *)v9 + 56);
    v11 = *(_QWORD *)v9;
    v12 = *((_QWORD *)v9 + 1);
    if ( ((v10 - 2) & 0xFD) == 0 )
      v6 = v9;
    v13 = v11 + v12;
    if ( v11 + v12 > a2 )
    {
      if ( v3 != v11 )
      {
        if ( v10 == 2 )
        {
          *(_QWORD *)v9 = v3;
          *((_QWORD *)v9 + 1) = v12 + v11 - v3;
        }
        else
        {
          if ( v6 && (v14 = *((_QWORD *)v6 + 1), v14 + *(_QWORD *)v6 == v3) && *((_BYTE *)v6 + 56) == 2 )
          {
            *((_QWORD *)v6 + 1) = v11 + v14 - v3;
          }
          else
          {
            Block = VIDMM_LINEAR_POOL::AllocateBlock(this);
            *((_QWORD *)Block + 2) = 0LL;
            *((_BYTE *)Block + 56) = 2;
            *(_QWORD *)Block = v3;
            *((_QWORD *)Block + 1) = *(_QWORD *)v9 - v3;
            v16 = (struct _VIDMM_POOL_BLOCK *)((char *)Block + 40);
            v17 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)v9 + 6);
            if ( *v17 != (struct _VIDMM_POOL_BLOCK *)((char *)v9 + 40) )
              __fastfail(3u);
            *(_QWORD *)v16 = (char *)v9 + 40;
            *((_QWORD *)Block + 6) = v17;
            *v17 = v16;
            *((_QWORD *)v9 + 6) = v16;
            if ( v6 == v9 )
            {
              v18 = (struct _VIDMM_POOL_BLOCK *)((char *)Block + 24);
              v19 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)v9 + 4);
              if ( *v19 != (struct _VIDMM_POOL_BLOCK *)((char *)v9 + 24) )
                __fastfail(3u);
              *(_QWORD *)v18 = (char *)v9 + 24;
              *((_QWORD *)v18 + 1) = v19;
              *v19 = v18;
              *((_QWORD *)v9 + 4) = v18;
            }
            else
            {
              v20 = (_QWORD *)((char *)Block + 24);
              if ( v6 )
              {
                v21 = (char *)v6 + 24;
                v22 = *(_QWORD *)v21;
                if ( *(char **)(*(_QWORD *)v21 + 8LL) != v21 )
                  __fastfail(3u);
                *v20 = v22;
                *((_QWORD *)Block + 4) = v21;
                *(_QWORD *)(v22 + 8) = v20;
                *(_QWORD *)v21 = v20;
              }
              else
              {
                v23 = (_QWORD *)((char *)this + 40);
                v24 = *((_QWORD *)this + 5);
                if ( *(VIDMM_LINEAR_POOL **)(v24 + 8) != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
                  __fastfail(3u);
                *v20 = v24;
                *((_QWORD *)Block + 4) = v23;
                *(_QWORD *)(v24 + 8) = v20;
                *v23 = v20;
              }
              v6 = Block;
            }
          }
          a2 = v31;
        }
      }
      v3 = v13;
      if ( *(_QWORD *)v9 >= a3 )
        break;
    }
    else
    {
      v3 = v11 + v12;
    }
  }
  v25 = *((_QWORD *)this + 1);
  if ( a3 == v25 && v3 != v25 )
  {
    v26 = VIDMM_LINEAR_POOL::AllocateBlock(this);
    *((_QWORD *)v26 + 2) = 0LL;
    *((_BYTE *)v26 + 56) = 2;
    *(_QWORD *)v26 = v3;
    *((_QWORD *)v26 + 1) = *((_QWORD *)this + 1) - v3;
    v27 = (char *)v26 + 40;
    v28 = (char **)*((_QWORD *)v4 + 1);
    if ( *v28 != v4 )
      __fastfail(3u);
    *(_QWORD *)v27 = v4;
    v29 = (struct _VIDMM_POOL_BLOCK *)((char *)v26 + 24);
    *((_QWORD *)v27 + 1) = v28;
    *v28 = v27;
    *((_QWORD *)v4 + 1) = v27;
    v30 = (VIDMM_LINEAR_POOL **)*((_QWORD *)this + 6);
    if ( *v30 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
      __fastfail(3u);
    *(_QWORD *)v29 = (char *)this + 40;
    *((_QWORD *)v29 + 1) = v30;
    *v30 = v29;
    *((_QWORD *)this + 6) = v29;
  }
}
