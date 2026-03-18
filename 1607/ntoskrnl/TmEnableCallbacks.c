/*
 * XREFs of TmEnableCallbacks @ 0x140001168
 * Callers:
 *     CmpLoadKeyCommon @ 0x140087994 (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x14055D110 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x14055E464 (CmpMountPreloadedHives.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmEnableCallbacks(
        PKRESOURCEMANAGER ResourceManager,
        PTM_RM_NOTIFICATION CallbackRoutine,
        PVOID RMKey)
{
  return __imp_TmEnableCallbacks(ResourceManager, CallbackRoutine, RMKey);
}
