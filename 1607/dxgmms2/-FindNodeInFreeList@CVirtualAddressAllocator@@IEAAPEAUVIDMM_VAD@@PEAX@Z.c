/*
 * XREFs of ?FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z @ 0x1C00479B4
 * Callers:
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C00472A0 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 * Callees:
 *     ?CompareVadSizeLessOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C004548C (-CompareVadSizeLessOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?CompareVadSizeGreaterOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0046E90 (-CompareVadSizeGreaterOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

struct _RTL_BALANCED_NODE *__fastcall CVirtualAddressAllocator::FindNodeInFreeList(
        CVirtualAddressAllocator *this,
        struct _RTL_BALANCED_NODE **a2)
{
  struct _RTL_BALANCED_NODE *v2; // r12
  struct _RTL_BALANCED_NODE *v3; // rbx
  BOOL v6; // eax
  struct _RTL_BALANCED_NODE *v7; // r8
  struct _RTL_BALANCED_NODE *v8; // rdx
  struct _RTL_BALANCED_NODE *v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  struct _RTL_BALANCED_NODE *result; // rax
  struct _RTL_BALANCED_NODE *v13; // r14
  struct _RTL_BALANCED_NODE *v14; // rdi
  int v15; // eax
  struct _RTL_BALANCED_NODE *v16; // rdx
  struct _RTL_BALANCED_NODE *v17; // rax
  struct _RTL_BALANCED_NODE *v18; // rcx
  struct _RTL_BALANCED_NODE *v19; // r8
  struct _RTL_BALANCED_NODE *v20; // rax
  struct _RTL_BALANCED_NODE *v21; // rax
  struct _RTL_BALANCED_NODE *v22; // rcx
  struct _RTL_BALANCED_NODE *v23; // rax
  struct _RTL_BALANCED_NODE *v24; // rcx

  v2 = *a2;
  v3 = 0LL;
  if ( *a2 || a2[2] || a2[3] != *(struct _RTL_BALANCED_NODE **)this )
  {
    v13 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 3);
    v14 = v13;
    while ( v14 )
    {
      v15 = CompareVadSizeLessOrEqualAvl(a2 + 4, v14);
      if ( v15 >= 0 )
      {
        if ( v15 <= 0 )
          break;
        v14 = v14->Children[1];
      }
      else
      {
        v14 = v14->Children[0];
      }
    }
    if ( v14 )
      goto LABEL_27;
    while ( v13 )
    {
      v14 = v13;
      v13 = v13->Children[0];
    }
    while ( v14 )
    {
LABEL_27:
      if ( v2 )
      {
        if ( v2 >= v14[1].Children[0] && a2[1] <= v14[1].Children[1] )
        {
          v3 = v14;
          a2[7] = v2;
          break;
        }
      }
      else
      {
        v16 = v14[1].Children[0];
        v17 = a2[3];
        if ( v16 < v17 )
        {
          v18 = v14[1].Children[1];
          v19 = a2[2];
          if ( v18 > v19 )
          {
            if ( v16 <= v19 )
              v16 = a2[2];
            if ( v18 >= v17 )
              v18 = a2[3];
            v20 = (*((_DWORD *)this + 30) & 2) != 0
                ? (struct _RTL_BALANCED_NODE *)((char *)v18 - (char *)a2[4])
                : (struct _RTL_BALANCED_NODE *)((char *)a2[5] + (_QWORD)v16);
            v11 = (unsigned __int64)a2[6] & (unsigned __int64)v20;
            if ( v11 < (unsigned __int64)v18
              && v11 >= (unsigned __int64)v16
              && (struct _RTL_BALANCED_NODE *)((char *)v18 - v11) >= a2[4] )
            {
              v3 = v14;
              goto LABEL_16;
            }
          }
        }
      }
      v21 = v14->Children[1];
      v22 = v14;
      if ( v21 )
      {
        do
        {
          v14 = v21;
          v21 = v21->Children[0];
        }
        while ( v21 );
      }
      else
      {
        while ( 1 )
        {
          v14 = (struct _RTL_BALANCED_NODE *)(v14->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v14 || v14->Children[0] == v22 )
            break;
          v22 = v14;
        }
      }
    }
  }
  else
  {
    v3 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 3);
    while ( v3 )
    {
      v6 = CompareVadSizeGreaterOrEqualAvl(a2 + 4, v3);
      if ( v6 < 0 )
      {
        v3 = v3->Children[0];
      }
      else
      {
        if ( v6 <= 0 )
          break;
        v3 = v3->Children[1];
      }
    }
    if ( v3 )
    {
      v7 = a2[5];
      v8 = a2[6];
      do
      {
        v9 = v3[1].Children[1];
        v10 = (unsigned __int64)v8 & ((unsigned __int64)v7 + (unsigned __int64)v3[1].Children[0]);
        if ( v10 < (unsigned __int64)v9 && (struct _RTL_BALANCED_NODE *)((char *)v9 - v10) >= a2[4] )
          break;
        v23 = v3->Children[1];
        v24 = v3;
        if ( v23 )
        {
          do
          {
            v3 = v23;
            v23 = v23->Children[0];
          }
          while ( v23 );
        }
        else
        {
          while ( 1 )
          {
            v3 = (struct _RTL_BALANCED_NODE *)(v3->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v3 || v3->Children[0] == v24 )
              break;
            v24 = v3;
          }
        }
      }
      while ( v3 );
      if ( v3 )
      {
        if ( (*((_DWORD *)this + 30) & 2) != 0 )
        {
          a2[7] = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v8 & ((char *)v3[1].Children[1] - (char *)a2[4]));
        }
        else
        {
          v11 = (unsigned __int64)v8 & ((unsigned __int64)v7 + (unsigned __int64)v3[1].Children[0]);
LABEL_16:
          a2[7] = (struct _RTL_BALANCED_NODE *)v11;
        }
      }
    }
  }
  result = v3;
  *((_DWORD *)this + 30) ^= 2 * (*((_DWORD *)this + 30) & 1);
  return result;
}
