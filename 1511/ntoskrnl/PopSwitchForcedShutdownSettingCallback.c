/*
 * XREFs of PopSwitchForcedShutdownSettingCallback @ 0x140142590
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopSwitchForcedShutdownSettingCallback(_QWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r9

  v6 = -1073741811;
  PopAcquirePolicyLock();
  v7 = *(_QWORD *)&GUID_ENABLE_SWITCH_FORCED_SHUTDOWN.Data1 - *a1;
  if ( *(_QWORD *)&GUID_ENABLE_SWITCH_FORCED_SHUTDOWN.Data1 == *a1 )
    v7 = *(_QWORD *)GUID_ENABLE_SWITCH_FORCED_SHUTDOWN.Data4 - a1[1];
  if ( !v7 && a3 == 4 && a2 )
  {
    byte_1402DE2C4 = *a2 != 0;
    v6 = 0;
  }
  PopReleasePolicyLock();
  return v6;
}
