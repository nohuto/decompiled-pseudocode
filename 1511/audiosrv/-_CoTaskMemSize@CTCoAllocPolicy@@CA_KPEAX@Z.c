/*
 * XREFs of ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x180069CA4
 * Callers:
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ @ 0x180030BAC (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180067A94 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CTCoAllocPolicy::_CoTaskMemSize(void *a1)
{
  __int64 v2; // rsi
  LPMALLOC v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( CoGetMalloc(1u, &v4) >= 0 )
  {
    v2 = ((__int64 (__fastcall *)(LPMALLOC, void *))v4->lpVtbl->GetSize)(v4, a1);
    ((void (__fastcall *)(LPMALLOC))v4->lpVtbl->Release)(v4);
  }
  return v2;
}
