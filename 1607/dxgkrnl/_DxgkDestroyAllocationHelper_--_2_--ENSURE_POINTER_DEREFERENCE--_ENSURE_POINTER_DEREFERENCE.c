/*
 * XREFs of _DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE::_ENSURE_POINTER_DEREFERENCE @ 0x1C007553C
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0074C00 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE::_ENSURE_POINTER_DEREFERENCE(void ***a1)
{
  void *v1; // rcx

  v1 = **a1;
  if ( v1 )
    operator delete(v1);
}
