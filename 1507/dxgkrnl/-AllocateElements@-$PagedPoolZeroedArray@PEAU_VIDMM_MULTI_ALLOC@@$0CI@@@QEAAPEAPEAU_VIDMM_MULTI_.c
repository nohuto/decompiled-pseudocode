/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDMM_MULTI_ALLOC@@$0CI@@@QEAAPEAPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C01444E0
 * Callers:
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C0145110 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<_VIDMM_MULTI_ALLOC *,40>::AllocateElements(_DWORD *a1, unsigned int a2)
{
  __int64 v2; // rdi
  void *v5; // rcx

  v2 = a2;
  if ( a2 <= 0x28 )
  {
    *(_QWORD *)a1 = a1 + 2;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 8 )
      return 0LL;
    *(_QWORD *)a1 = ExAllocatePoolWithTag(PagedPool, 8LL * a2, 0x4B677844u);
  }
  v5 = *(void **)a1;
  a1[82] = v2;
  if ( v5 )
    memset(v5, 0, 8 * v2);
  return *(_QWORD *)a1;
}
