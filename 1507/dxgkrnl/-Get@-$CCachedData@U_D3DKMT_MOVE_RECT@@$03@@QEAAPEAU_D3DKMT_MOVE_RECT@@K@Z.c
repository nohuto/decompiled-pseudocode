/*
 * XREFs of ?Get@?$CCachedData@U_D3DKMT_MOVE_RECT@@$03@@QEAAPEAU_D3DKMT_MOVE_RECT@@K@Z @ 0x1C00174D0
 * Callers:
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@PEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C015A904 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@PEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3D.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void *__fastcall CCachedData<_D3DKMT_MOVE_RECT,4>::Get(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rdi
  void *result; // rax
  unsigned __int64 v5; // rax

  v2 = a2;
  if ( a2 <= 4 )
    return (void *)a1;
  if ( a2 <= *(_DWORD *)(a1 + 104) )
    return *(void **)(a1 + 96);
  operator delete(*(void **)(a1 + 96));
  v5 = 24 * v2;
  if ( !is_mul_ok(v2, 0x18uLL) )
    v5 = -1LL;
  result = operator new[](v5, 0x4B677844u, PagedPool);
  *(_QWORD *)(a1 + 96) = result;
  *(_DWORD *)(a1 + 104) = result != 0LL ? v2 : 0;
  return result;
}
