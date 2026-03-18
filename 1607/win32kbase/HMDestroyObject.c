/*
 * XREFs of HMDestroyObject @ 0x1C0076190
 * Callers:
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00B4200 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?HMNullFnDestroy@@YAXPEAX@Z @ 0x1C00B9680 (-HMNullFnDestroy@@YAXPEAX@Z.c)
 * Callees:
 *     HMFreeObject @ 0x1C0038B10 (HMFreeObject.c)
 *     HMMarkObjectDestroy @ 0x1C00761C0 (HMMarkObjectDestroy.c)
 */

__int64 __fastcall HMDestroyObject(_QWORD *BaseAddress)
{
  if ( !(unsigned int)HMMarkObjectDestroy(BaseAddress) )
    return 0LL;
  HMFreeObject(BaseAddress);
  return 1LL;
}
