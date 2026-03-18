/*
 * XREFs of PopSwitchForcedShutdownSettingCallback @ 0x14014C2E8
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopSwitchForcedShutdownSettingCallback(_QWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  v6 = -1073741811;
  PopAcquirePolicyLock();
  v10 = *(_QWORD *)&GUID_ENABLE_SWITCH_FORCED_SHUTDOWN.Data1 - *a1;
  if ( *(_QWORD *)&GUID_ENABLE_SWITCH_FORCED_SHUTDOWN.Data1 == *a1 )
    v10 = *(_QWORD *)GUID_ENABLE_SWITCH_FORCED_SHUTDOWN.Data4 - a1[1];
  if ( !v10 && a3 == 4 && a2 )
  {
    byte_140303E44 = *a2 != 0;
    v6 = 0;
  }
  PopReleasePolicyLock(v8, v7, v9);
  return v6;
}
