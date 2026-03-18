/*
 * XREFs of Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline @ 0x1401A5D0C
 * Callers:
 *     ?xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z @ 0x1401A5930 (-xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z.c)
 *     NtUserNotifyProcessCreate @ 0x1401A5C20 (NtUserNotifyProcessCreate.c)
 * Callees:
 *     Feature_NotifyProcessCreateAlways__private_IsEnabledFallback @ 0x1402970B4 (Feature_NotifyProcessCreateAlways__private_IsEnabledFallback.c)
 */

__int64 Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NotifyProcessCreateAlways__private_featureState & 0x10) != 0 )
    return Feature_NotifyProcessCreateAlways__private_featureState & 1;
  else
    return Feature_NotifyProcessCreateAlways__private_IsEnabledFallback(
             (unsigned int)Feature_NotifyProcessCreateAlways__private_featureState,
             3LL);
}
