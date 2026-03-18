/*
 * XREFs of IsShellParticipatesInSizing @ 0x1C009E8F0
 * Callers:
 *     ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C009E30C (-xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C0201088 (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1C021BB40 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     IsShellWndManagementBehaviorEnabled @ 0x1C009E988 (IsShellWndManagementBehaviorEnabled.c)
 */

__int64 __fastcall IsShellParticipatesInSizing(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  unsigned int v3; // r9d
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // rax

  v1 = IsShellWndManagementBehaviorEnabled(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL), 64LL);
  v3 = 0;
  if ( v1 )
  {
    if ( !(unsigned int)IsShellWndManagementBehaviorEnabled(v2, 8LL) )
    {
      v6 = *(_QWORD *)(v5 + 592);
      if ( v6 )
      {
        if ( *(_QWORD *)v6 == v4 && (*(_DWORD *)(v6 + 256) & 4) != 0 )
          return 1;
      }
    }
  }
  return v3;
}
