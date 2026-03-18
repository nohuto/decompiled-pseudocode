/*
 * XREFs of ??1?$PagedPoolArray@I$03@@QEAA@XZ @ 0x1C008DDC4
 * Callers:
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z @ 0x1C008DAA0 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z.c)
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z @ 0x1C00CFE10 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

void __fastcall PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(void **a1)
{
  if ( *a1 != a1 + 1 )
    operator delete(*a1);
}
