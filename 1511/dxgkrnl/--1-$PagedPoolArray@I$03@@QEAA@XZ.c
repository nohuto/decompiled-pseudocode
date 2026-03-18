/*
 * XREFs of ??1?$PagedPoolArray@I$03@@QEAA@XZ @ 0x1C00B40D8
 * Callers:
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z @ 0x1C00B3FE0 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z.c)
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z @ 0x1C00B4060 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

void __fastcall PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(void **a1)
{
  if ( *a1 != a1 + 1 )
    operator delete(*a1);
}
