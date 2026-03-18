/*
 * XREFs of PopAllowAwayModeSettingCallback @ 0x140580DEC
 * Callers:
 *     <none>
 * Callees:
 *     PopSetSystemState @ 0x1400B4D8C (PopSetSystemState.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopAllowAwayModeSettingCallback(_QWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r9

  v6 = -1073741811;
  PopAcquirePolicyLock();
  v7 = *(_QWORD *)&GUID_ALLOW_AWAYMODE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_ALLOW_AWAYMODE.Data1 == *a1 )
    v7 = *(_QWORD *)GUID_ALLOW_AWAYMODE.Data4 - a1[1];
  if ( !v7 && a3 == 4 && a2 )
  {
    if ( *a2 )
    {
      byte_140303E12 = 1;
    }
    else
    {
      byte_140303E12 = 0;
      if ( byte_140303E11 )
        PopSetSystemState(4, 7u);
    }
    v6 = 0;
  }
  PopReleasePolicyLock();
  return v6;
}
