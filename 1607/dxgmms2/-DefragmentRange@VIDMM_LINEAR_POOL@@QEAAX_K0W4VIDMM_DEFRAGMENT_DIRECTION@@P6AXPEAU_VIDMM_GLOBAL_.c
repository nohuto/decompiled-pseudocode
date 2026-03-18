/*
 * XREFs of ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6AXPEAU_VIDMM_GLOBAL_ALLOC@@0@ZP6A_N2@Z4P6AK2@ZPEA_K@Z @ 0x1C009EDFC
 * Callers:
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0098748 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C0099EEC (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 * Callees:
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C00652DC (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 *     ?IsMovableResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0098E10 (-IsMovableResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0098E64 (-IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UpdatePendingResourceReserveCB@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@_K@Z @ 0x1C009AB80 (-UpdatePendingResourceReserveCB@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@_K@Z.c)
 *     ?PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z @ 0x1C009F580 (-PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::DefragmentRange(
        VIDMM_LINEAR_POOL *a1,
        unsigned __int64 a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9)
{
  char v9; // r14
  int v10; // ebp
  unsigned __int64 v11; // r12
  _QWORD *v13; // rsi
  __int64 v14; // rbx
  _QWORD *i; // rax
  unsigned __int64 *v16; // rdi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r15
  unsigned __int8 v19; // al
  int v20; // ecx
  bool IsMovableResourceCB; // al
  _QWORD *v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 *v27; // rcx
  _QWORD *v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 *v30; // rcx
  __int64 v31; // rcx
  unsigned __int64 v32; // [rsp+68h] [rbp+10h]
  int v33; // [rsp+78h] [rbp+20h]

  v32 = a2;
  v9 = 0;
  v10 = a4;
  v11 = (unsigned __int64)a3;
  if ( (_DWORD)a4 )
  {
    v13 = (_QWORD *)*((_QWORD *)a1 + 10);
    v14 = (__int64)a3;
  }
  else
  {
    v13 = (_QWORD *)*((_QWORD *)a1 + 9);
    v14 = a2;
  }
  for ( i = (_QWORD *)((char *)a1 + 72); v13 != i; i = (_QWORD *)((char *)a1 + 72) )
  {
    v16 = v13 - 5;
    if ( v10 )
      v13 = (_QWORD *)v13[1];
    else
      v13 = (_QWORD *)*v13;
    v17 = *v16;
    v18 = *v16 + v16[1];
    if ( v18 <= a2 )
    {
      if ( v10 )
        break;
      goto LABEL_62;
    }
    if ( v17 >= v11 )
    {
      if ( !v10 )
        break;
      goto LABEL_62;
    }
    v19 = *((_BYTE *)v16 + 56);
    if ( v19 == 2 )
    {
      v20 = 2;
    }
    else
    {
      if ( v19 <= 2u )
        goto LABEL_25;
      if ( v19 <= 4u )
      {
        IsMovableResourceCB = VIDMM_SEGMENT::IsMovableResourceCB((struct _VIDMM_GLOBAL_ALLOC *)v16[2]);
        a2 = v32;
        v20 = !IsMovableResourceCB;
        v33 = v20;
        goto LABEL_28;
      }
      if ( v19 > 6u )
      {
LABEL_25:
        if ( g_IsInternalRelease )
        {
          v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, a2, a3, a4);
          v22[3] = 270LL;
          v22[4] = 9LL;
          v22[5] = 0LL;
          v22[6] = 0LL;
          v22[7] = 0LL;
          WdLogEvent5_WdCriticalError(v22);
          a2 = v32;
        }
        v20 = v33;
        goto LABEL_28;
      }
      v20 = 1;
    }
    v33 = v20;
LABEL_28:
    if ( !v20 )
    {
      if ( VIDMM_SEGMENT::IsNonOverlappingResourceCB((struct _VIDMM_GLOBAL_ALLOC *)v16[2]) )
      {
        if ( v10 )
        {
          if ( v14 - v16[1] < v18 )
            v14 = v18;
        }
        else if ( v14 + v16[1] > *v16 )
        {
          v14 = *v16;
        }
      }
      a3 = (unsigned int *)v16[2];
      v31 = a3[8] - 1LL;
      if ( a3[8] )
      {
        if ( !v10 )
        {
          v14 = ~v31 & (v31 + v14);
          goto LABEL_54;
        }
        v14 &= ~v31;
      }
      if ( v10 )
      {
        v14 -= v16[1];
        if ( *v16 != v14 )
        {
          *v16 = v14;
          v9 = 1;
        }
      }
      else
      {
LABEL_54:
        if ( *v16 != v14 )
        {
          *v16 = v14;
          v9 = 1;
        }
        v14 += v16[1];
      }
      if ( v9 )
        VIDMM_SEGMENT::UpdatePendingResourceReserveCB((struct _VIDMM_GLOBAL_ALLOC *)a3, *v16);
      v9 = 0;
      goto LABEL_62;
    }
    v23 = (unsigned int)(v20 - 1);
    if ( (_DWORD)v23 )
    {
      if ( (_DWORD)v23 == 1 )
      {
        if ( *v16 == a2 && v18 == v11 )
          return;
        v25 = v16 + 5;
        v26 = v16[5];
        v27 = (unsigned __int64 *)v16[6];
        if ( *(unsigned __int64 **)(v26 + 8) != v16 + 5 || (_QWORD *)*v27 != v25 )
          __fastfail(3u);
        *v27 = v26;
        *(_QWORD *)(v26 + 8) = v27;
        *v25 = 0LL;
        v28 = v16 + 3;
        v16[6] = 0LL;
        v29 = v16[3];
        v30 = (unsigned __int64 *)v16[4];
        if ( *(unsigned __int64 **)(v29 + 8) != v16 + 3 || (_QWORD *)*v30 != v28 )
          __fastfail(3u);
        *v30 = v29;
        *(_QWORD *)(v29 + 8) = v30;
        *v28 = 0LL;
        v16[4] = 0LL;
        VIDMM_LINEAR_POOL::FreeBlock(a1, (struct _VIDMM_POOL_BLOCK *)v16);
      }
      else if ( g_IsInternalRelease )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, a2, a3, a4);
        v24[3] = 270LL;
        v24[4] = 9LL;
        v24[5] = 0LL;
        v24[6] = 0LL;
        v24[7] = 0LL;
        WdLogEvent5_WdCriticalError(v24);
      }
    }
    else
    {
      v14 = *v16;
      if ( !v10 )
        v14 += v16[1];
    }
LABEL_62:
    a2 = v32;
  }
  if ( a9 )
    *a9 = v14;
  VIDMM_LINEAR_POOL::PatchGapsWithFreeBlocks(a1, a2, v11);
}
