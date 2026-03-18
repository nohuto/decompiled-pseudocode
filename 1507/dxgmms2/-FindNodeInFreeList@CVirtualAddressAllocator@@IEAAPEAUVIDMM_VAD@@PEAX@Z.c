/*
 * XREFs of ?FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z @ 0x1C005F734
 * Callers:
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C005C988 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 * Callees:
 *     ?CompareVadSizeGreaterOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C005E730 (-CompareVadSizeGreaterOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?CompareVadSizeLessOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C005E744 (-CompareVadSizeLessOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

struct _RTL_BALANCED_NODE *__fastcall CVirtualAddressAllocator::FindNodeInFreeList(
        CVirtualAddressAllocator *this,
        struct _RTL_BALANCED_NODE **a2)
{
  struct _RTL_BALANCED_NODE *v2; // rbx
  BOOL v5; // eax
  struct _RTL_BALANCED_NODE *v6; // r8
  struct _RTL_BALANCED_NODE *v7; // rdx
  struct _RTL_BALANCED_NODE *v8; // rcx
  unsigned __int64 v9; // rax
  struct _RTL_BALANCED_NODE *v10; // rax
  struct _RTL_BALANCED_NODE *v11; // rcx
  unsigned __int64 v12; // rax
  struct _RTL_BALANCED_NODE *v13; // rdi
  int v14; // eax
  struct _RTL_BALANCED_NODE *i; // rax
  struct _RTL_BALANCED_NODE *v16; // r9
  struct _RTL_BALANCED_NODE *v17; // rdx
  struct _RTL_BALANCED_NODE *v18; // rax
  struct _RTL_BALANCED_NODE *v19; // rcx
  struct _RTL_BALANCED_NODE *v20; // r8
  struct _RTL_BALANCED_NODE *v21; // rax
  struct _RTL_BALANCED_NODE *v22; // rax
  struct _RTL_BALANCED_NODE *v23; // rcx
  struct _RTL_BALANCED_NODE *result; // rax

  v2 = 0LL;
  if ( *a2 || a2[2] || a2[3] != *(struct _RTL_BALANCED_NODE **)this )
  {
    v13 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 3);
    while ( v13 )
    {
      v14 = CompareVadSizeLessOrEqualAvl(a2 + 4, v13);
      if ( v14 >= 0 )
      {
        if ( v14 <= 0 )
          break;
        v13 = v13->Children[1];
      }
      else
      {
        v13 = v13->Children[0];
      }
    }
    if ( !v13 )
    {
      for ( i = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 3); i; i = i->Children[0] )
        v13 = i;
      if ( !v13 )
        goto LABEL_63;
    }
    v16 = *a2;
    while ( 1 )
    {
      if ( v16 )
      {
        if ( v16 >= v13[1].Children[0] && a2[1] <= v13[1].Children[1] )
        {
          v2 = v13;
          a2[7] = v16;
          goto LABEL_63;
        }
      }
      else
      {
        v17 = v13[1].Children[0];
        v18 = a2[3];
        if ( v17 < v18 )
        {
          v19 = v13[1].Children[1];
          v20 = a2[2];
          if ( v19 > v20 )
          {
            if ( v17 <= v20 )
              v17 = a2[2];
            if ( v19 >= v18 )
              v19 = a2[3];
            v21 = (*((_DWORD *)this + 30) & 2) != 0
                ? (struct _RTL_BALANCED_NODE *)((char *)v19 - (char *)a2[4])
                : (struct _RTL_BALANCED_NODE *)((char *)a2[5] + (_QWORD)v17);
            v12 = (unsigned __int64)a2[6] & (unsigned __int64)v21;
            if ( v12 >= (unsigned __int64)v17
              && v12 < (unsigned __int64)v19
              && (struct _RTL_BALANCED_NODE *)((char *)v19 - v12) >= a2[4] )
            {
              v2 = v13;
LABEL_62:
              a2[7] = (struct _RTL_BALANCED_NODE *)v12;
              goto LABEL_63;
            }
          }
        }
      }
      v22 = v13->Children[1];
      v23 = v13;
      if ( v22 )
      {
        do
        {
          v13 = v22;
          v22 = v22->Children[0];
        }
        while ( v22 );
      }
      else
      {
        while ( 1 )
        {
          v13 = (struct _RTL_BALANCED_NODE *)(v13->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v13 || v13->Children[0] == v23 )
            break;
          v23 = v13;
        }
      }
      if ( !v13 )
        goto LABEL_63;
    }
  }
  v2 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 3);
  while ( v2 )
  {
    v5 = CompareVadSizeGreaterOrEqualAvl(a2 + 4, v2);
    if ( v5 >= 0 )
    {
      if ( v5 <= 0 )
        break;
      v2 = v2->Children[1];
    }
    else
    {
      v2 = v2->Children[0];
    }
  }
  if ( v2 )
  {
    v6 = a2[5];
    v7 = a2[6];
    do
    {
      v8 = v2[1].Children[1];
      v9 = (unsigned __int64)v7 & ((unsigned __int64)v6 + (unsigned __int64)v2[1].Children[0]);
      if ( v9 < (unsigned __int64)v8 && (struct _RTL_BALANCED_NODE *)((char *)v8 - v9) >= a2[4] )
        break;
      v10 = v2->Children[1];
      v11 = v2;
      if ( v10 )
      {
        do
        {
          v2 = v10;
          v10 = v10->Children[0];
        }
        while ( v10 );
      }
      else
      {
        while ( 1 )
        {
          v2 = (struct _RTL_BALANCED_NODE *)(v2->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v2 || v2->Children[0] == v11 )
            break;
          v11 = v2;
        }
      }
    }
    while ( v2 );
    if ( v2 )
    {
      if ( (*((_DWORD *)this + 30) & 2) == 0 )
      {
        v12 = (unsigned __int64)v7 & ((unsigned __int64)v6 + (unsigned __int64)v2[1].Children[0]);
        goto LABEL_62;
      }
      a2[7] = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v7 & ((char *)v2[1].Children[1] - (char *)a2[4]));
    }
  }
LABEL_63:
  result = v2;
  *((_DWORD *)this + 30) ^= 2 * (*((_DWORD *)this + 30) & 1);
  return result;
}
