/*
 * XREFs of ?FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z @ 0x1C004162C
 * Callers:
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C00411F0 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 * Callees:
 *     ?CompareVadSizeGreaterOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C005F5E8 (-CompareVadSizeGreaterOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?CompareVadSizeLessOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C005F6EC (-CompareVadSizeLessOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

struct _RTL_BALANCED_NODE *__fastcall CVirtualAddressAllocator::FindNodeInFreeList(
        CVirtualAddressAllocator *this,
        struct _RTL_BALANCED_NODE **a2)
{
  struct _RTL_BALANCED_NODE *v2; // rbx
  int v5; // eax
  struct _RTL_BALANCED_NODE *v6; // r8
  struct _RTL_BALANCED_NODE *v7; // rdx
  struct _RTL_BALANCED_NODE *v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  struct _RTL_BALANCED_NODE *result; // rax
  struct _RTL_BALANCED_NODE *v12; // rdi
  int v13; // eax
  struct _RTL_BALANCED_NODE *i; // rax
  struct _RTL_BALANCED_NODE *v15; // r9
  struct _RTL_BALANCED_NODE *v16; // rdx
  struct _RTL_BALANCED_NODE *v17; // rax
  struct _RTL_BALANCED_NODE *v18; // rcx
  struct _RTL_BALANCED_NODE *v19; // r8
  struct _RTL_BALANCED_NODE *v20; // rax
  struct _RTL_BALANCED_NODE *v21; // rax
  struct _RTL_BALANCED_NODE *v22; // rcx
  struct _RTL_BALANCED_NODE *v23; // rax
  struct _RTL_BALANCED_NODE *v24; // rcx

  v2 = 0LL;
  if ( *a2 || a2[2] || a2[3] != *(struct _RTL_BALANCED_NODE **)this )
  {
    v12 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 3);
    while ( v12 )
    {
      v13 = CompareVadSizeLessOrEqualAvl(a2 + 4, v12);
      if ( v13 >= 0 )
      {
        if ( v13 <= 0 )
          break;
        v12 = v12->Children[1];
      }
      else
      {
        v12 = v12->Children[0];
      }
    }
    if ( v12 )
      goto LABEL_28;
    for ( i = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 3); i; i = i->Children[0] )
      v12 = i;
    if ( v12 )
    {
LABEL_28:
      v15 = *a2;
      do
      {
        if ( v15 )
        {
          if ( v15 >= v12[1].Children[0] && a2[1] <= v12[1].Children[1] )
          {
            v2 = v12;
            a2[7] = v15;
            break;
          }
        }
        else
        {
          v16 = v12[1].Children[0];
          v17 = a2[3];
          if ( v16 < v17 )
          {
            v18 = v12[1].Children[1];
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
              v10 = (unsigned __int64)a2[6] & (unsigned __int64)v20;
              if ( v10 < (unsigned __int64)v18
                && v10 >= (unsigned __int64)v16
                && (struct _RTL_BALANCED_NODE *)((char *)v18 - v10) >= a2[4] )
              {
                v2 = v12;
                goto LABEL_16;
              }
            }
          }
        }
        v21 = v12->Children[1];
        v22 = v12;
        if ( v21 )
        {
          do
          {
            v12 = v21;
            v21 = v21->Children[0];
          }
          while ( v21 );
        }
        else
        {
          while ( 1 )
          {
            v12 = (struct _RTL_BALANCED_NODE *)(v12->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v12 || v12->Children[0] == v22 )
              break;
            v22 = v12;
          }
        }
      }
      while ( v12 );
    }
  }
  else
  {
    v2 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 3);
    while ( v2 )
    {
      v5 = CompareVadSizeGreaterOrEqualAvl(a2 + 4, v2);
      if ( v5 < 0 )
      {
        v2 = v2->Children[0];
      }
      else
      {
        if ( v5 <= 0 )
          break;
        v2 = v2->Children[1];
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
        v23 = v2->Children[1];
        v24 = v2;
        if ( v23 )
        {
          do
          {
            v2 = v23;
            v23 = v23->Children[0];
          }
          while ( v23 );
        }
        else
        {
          while ( 1 )
          {
            v2 = (struct _RTL_BALANCED_NODE *)(v2->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v2 || v2->Children[0] == v24 )
              break;
            v24 = v2;
          }
        }
      }
      while ( v2 );
      if ( v2 )
      {
        if ( (*((_DWORD *)this + 30) & 2) != 0 )
        {
          a2[7] = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v7 & ((char *)v2[1].Children[1] - (char *)a2[4]));
        }
        else
        {
          v10 = (unsigned __int64)v7 & ((unsigned __int64)v6 + (unsigned __int64)v2[1].Children[0]);
LABEL_16:
          a2[7] = (struct _RTL_BALANCED_NODE *)v10;
        }
      }
    }
  }
  result = v2;
  *((_DWORD *)this + 30) ^= 2 * (*((_DWORD *)this + 30) & 1);
  return result;
}
