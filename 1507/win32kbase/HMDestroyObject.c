/*
 * XREFs of HMDestroyObject @ 0x1C000D440
 * Callers:
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00A6820 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?HMNullFnDestroy@@YAXPEAX@Z @ 0x1C00AB480 (-HMNullFnDestroy@@YAXPEAX@Z.c)
 * Callees:
 *     HMMarkObjectDestroy @ 0x1C000D470 (HMMarkObjectDestroy.c)
 *     HMFreeObject @ 0x1C004F9B0 (HMFreeObject.c)
 */

__int64 __fastcall HMDestroyObject(PVOID BaseAddress)
{
  if ( !(unsigned int)HMMarkObjectDestroy() )
    return 0LL;
  HMFreeObject(BaseAddress);
  return 1LL;
}
