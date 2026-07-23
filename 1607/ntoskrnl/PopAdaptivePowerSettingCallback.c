/*
 * XREFs of PopAdaptivePowerSettingCallback @ 0x14056D950
 * Callers:
 *     PopVideoPowerSettingCallback @ 0x14014566C (PopVideoPowerSettingCallback.c)
 * Callees:
 *     PopAcquireAdaptiveLock @ 0x1404D1254 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1404D2038 (PopReleaseAdaptiveLock.c)
 *     PopDiagTracePolicyChange @ 0x14056DA4C (PopDiagTracePolicyChange.c)
 *     PopCheckConsoleTimeouts @ 0x140674A84 (PopCheckConsoleTimeouts.c)
 *     PopInputDisabled @ 0x140674BC4 (PopInputDisabled.c)
 */

__int64 __fastcall PopAdaptivePowerSettingCallback(__int64 *a1, int *a2, int a3)
{
  unsigned int v5; // ebx
  char v6; // bp
  char v7; // al
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // eax

  if ( a3 != 4 )
    return (unsigned int)-1073741811;
  v5 = 0;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( PopConsoleSession )
  {
    v6 = 1;
    v7 = 0;
  }
  else
  {
    v6 = 0;
    v7 = 1;
  }
  PopAcquireAdaptiveLock(v7);
  v9 = *a1;
  v10 = *(_QWORD *)&GUID_NON_ADAPTIVE_INPUT_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_NON_ADAPTIVE_INPUT_TIMEOUT.Data1 == *a1 )
    v10 = *(_QWORD *)GUID_NON_ADAPTIVE_INPUT_TIMEOUT.Data4 - a1[1];
  if ( !v10 )
  {
    v13 = *a2;
    PopInputTimeout = *a2;
    if ( v6 )
    {
      BYTE3(qword_140302430) = 1;
      DWORD2(PopLazyContext) = v13;
      if ( !v13 )
      {
        LOBYTE(v8) = 1;
        PopInputDisabled((unsigned int)PopConsoleContext, 0LL, v8);
      }
    }
    goto LABEL_16;
  }
  v11 = *(_QWORD *)&GUID_VIDEO_POWERDOWN_TIMEOUT.Data1 - v9;
  if ( *(_QWORD *)&GUID_VIDEO_POWERDOWN_TIMEOUT.Data1 == v9 )
    v11 = *(_QWORD *)GUID_VIDEO_POWERDOWN_TIMEOUT.Data4 - a1[1];
  if ( !v11 )
  {
    PopDisplayTimeout = *a2;
LABEL_16:
    PopDiagTracePolicyChange();
    if ( v6 )
      PopCheckConsoleTimeouts();
    goto LABEL_18;
  }
  v12 = *(_QWORD *)&GUID_VIDEO_CONSOLE_LOCK_TIMEOUT.Data1 - v9;
  if ( *(_QWORD *)&GUID_VIDEO_CONSOLE_LOCK_TIMEOUT.Data1 == v9 )
    v12 = *(_QWORD *)GUID_VIDEO_CONSOLE_LOCK_TIMEOUT.Data4 - a1[1];
  if ( !v12 )
  {
    PopAdaptiveLockConsoleTimeout = *a2;
    goto LABEL_16;
  }
  v5 = -1073741811;
LABEL_18:
  PopReleaseAdaptiveLock();
  return v5;
}
