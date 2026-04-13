/*
 * XREFs of ?IsCallingProcessAppContainer@CallerIdentity@@YAJW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEA_N@Z @ 0x18003AFEC
 * Callers:
 *     ?IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z @ 0x180006C2C (-IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z.c)
 *     ?GetEventCacheIfNeeded@ContentManagement@@YAJPEAPEAUICreativeEventReportedCache@1@@Z @ 0x18001F310 (-GetEventCacheIfNeeded@ContentManagement@@YAJPEAPEAUICreativeEventReportedCache@1@@Z.c)
 *     ?GetOrCreateInstance@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@SA?AV?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@XZ @ 0x180036380 (-GetOrCreateInstance@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@SA-AV-$.c)
 * Callees:
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x18003AE54 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     ?IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z @ 0x18003B050 (-IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z.c)
 */

__int64 __fastcall CallerIdentity::IsCallingProcessAppContainer(__int64 a1, void *a2)
{
  int CallingProcessHandle; // ebx
  bool *v4; // r8
  char *v5; // rcx
  HANDLE hObject; // [rsp+40h] [rbp+18h] BYREF

  hObject = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(a1, a1, &hObject);
  if ( CallingProcessHandle >= 0 )
    CallingProcessHandle = CallerIdentity::IsProcessAppContainer(hObject, a2, v4);
  v5 = (char *)hObject;
  hObject = 0LL;
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
  return (unsigned int)CallingProcessHandle;
}
