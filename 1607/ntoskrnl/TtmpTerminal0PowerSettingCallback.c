/*
 * XREFs of TtmpTerminal0PowerSettingCallback @ 0x1406793B4
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x140677F44 (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpAcquireSessionLock @ 0x140678F44 (TtmpAcquireSessionLock.c)
 */

__int64 __fastcall TtmpTerminal0PowerSettingCallback(
        LPCGUID SettingGuid,
        int *Value,
        ULONG ValueLength,
        _DWORD *Context)
{
  __int64 v8; // rax
  bool v9; // zf
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9

  TtmpAcquireSessionLock();
  if ( ValueLength == 4 && (Context[1] & 4) == 0 )
  {
    v8 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1;
    if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 )
      v8 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_VIDEO_DIM_TIMEOUT.Data4;
    v9 = v8 == 0;
    v10 = *Value;
    if ( v9 )
      Context[46] = v10;
    else
      Context[47] = v10;
    TtmiTerminalSetDisplayTimeouts(Context, *((_QWORD *)Context + 4), Context[46], Context[47]);
  }
  ExReleaseResourceLite(&TtmpSessionLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v11, v12, v13);
  return 0LL;
}
