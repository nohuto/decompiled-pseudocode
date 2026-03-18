/*
 * XREFs of ?AllocateElements@?$PagedPoolArray@I$03@@QEAAPEAII@Z @ 0x1C0155470
 * Callers:
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z @ 0x1C008DAA0 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z.c)
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z @ 0x1C00CFE10 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B4048 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

PVOID __fastcall PagedPoolArray<unsigned int,4>::AllocateElements(PVOID *a1, unsigned int a2)
{
  PVOID result; // rax
  SIZE_T v5; // rax

  if ( a2 <= 4 )
  {
    *a1 = a1 + 1;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 4 )
      return 0LL;
    v5 = 4LL * a2;
    if ( !is_mul_ok(a2, 4uLL) )
      v5 = -1LL;
    *a1 = operator new[](v5, 0x4B677844u, PagedPool);
  }
  result = *a1;
  *((_DWORD *)a1 + 6) = a2;
  return result;
}
