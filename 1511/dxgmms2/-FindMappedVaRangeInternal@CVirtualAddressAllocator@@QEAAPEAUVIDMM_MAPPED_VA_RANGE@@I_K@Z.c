/*
 * XREFs of ?FindMappedVaRangeInternal@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_K@Z @ 0x1C0063160
 * Callers:
 *     ?RestoreMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0062950 (-RestoreMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     ?CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C005FC88 (-CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

union _RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E *__fastcall CVirtualAddressAllocator::FindMappedVaRangeInternal(
        CVirtualAddressAllocator *this,
        unsigned int a2,
        struct _RTL_BALANCED_NODE *a3)
{
  struct _RTL_BALANCED_NODE *v3; // rbx
  __int64 v5; // rsi
  int started; // eax
  struct _RTL_BALANCED_NODE **v7; // rdx
  struct _RTL_BALANCED_NODE *i; // rax
  struct _RTL_BALANCED_NODE *v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 4);
  v5 = a2;
  v10 = a3;
  if ( !v3 )
    return 0LL;
  while ( 1 )
  {
    started = CompareVadByStartAddressAvl(&v10, v3);
    if ( started >= 0 )
      break;
    v3 = v3->Children[0];
LABEL_4:
    if ( !v3 )
      goto LABEL_5;
  }
  if ( started > 0 )
  {
    v3 = v3->Children[1];
    goto LABEL_4;
  }
LABEL_5:
  if ( v3 )
  {
    v7 = &v3[4].Children[2 * v5];
    for ( i = *v7; i != (struct _RTL_BALANCED_NODE *)v7; i = i->Children[0] )
    {
      if ( (struct _RTL_BALANCED_NODE *)i[3].ParentValue == a3 )
        return &i[-1].16;
    }
  }
  return 0LL;
}
