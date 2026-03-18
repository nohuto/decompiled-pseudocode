/*
 * XREFs of HMDestroyObject @ 0x1C0066B70
 * Callers:
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00AB000 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?HMNullFnDestroy@@YAXPEAX@Z @ 0x1C00AF980 (-HMNullFnDestroy@@YAXPEAX@Z.c)
 * Callees:
 *     HMFreeObject @ 0x1C0041860 (HMFreeObject.c)
 *     HMMarkObjectDestroy @ 0x1C0066BA0 (HMMarkObjectDestroy.c)
 */

__int64 __fastcall HMDestroyObject(_QWORD *BaseAddress)
{
  if ( !(unsigned int)HMMarkObjectDestroy(BaseAddress) )
    return 0LL;
  HMFreeObject(BaseAddress);
  return 1LL;
}
