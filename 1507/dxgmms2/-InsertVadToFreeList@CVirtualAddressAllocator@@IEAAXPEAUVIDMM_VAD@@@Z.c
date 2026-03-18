/*
 * XREFs of ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0060BFC
 * Callers:
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C005C988 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C005FC14 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0060960 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     ?CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C005E714 (-CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::InsertVadToFreeList(CVirtualAddressAllocator *this, struct VIDMM_VAD *a2)
{
  char *v2; // r14
  unsigned __int64 v3; // r8
  char v4; // bl
  struct _RTL_BALANCED_NODE *v5; // rdi
  struct _RTL_BALANCED_NODE *v7; // rax
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this + 24;
  v3 = *((_QWORD *)a2 + 4) - *((_QWORD *)a2 + 3);
  v4 = 0;
  v5 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 3);
  v8 = v3;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( (int)CompareVadSizeAvl(&v8, v5) < 0 )
      {
        v7 = v5->Children[0];
        if ( !v5->Children[0] )
          break;
      }
      else
      {
        v7 = v5->Children[1];
        if ( !v7 )
        {
          v4 = 1;
          break;
        }
      }
      v5 = v7;
    }
  }
  LOBYTE(v3) = v4;
  RtlAvlInsertNodeEx(v2, v5, v3, a2);
  *((_DWORD *)a2 + 18) = *((_DWORD *)a2 + 18) & 0xFFFFE7F0 | 1;
}
