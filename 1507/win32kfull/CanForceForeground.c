/*
 * XREFs of CanForceForeground @ 0x1C0080A70
 * Callers:
 *     ?ForceForegroundChangeOnMinimize@@YAHPEAUtagWND@@0@Z @ 0x1C003E5C4 (-ForceForegroundChangeOnMinimize@@YAHPEAUtagWND@@0@Z.c)
 *     ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C00455E8 (-CheckLegacyForegroundAccess@@YAHXZ.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C004E3B8 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     _AllowSetForegroundWindow @ 0x1C007DD60 (_AllowSetForegroundWindow.c)
 *     CheckAllowForeground @ 0x1C0080810 (CheckAllowForeground.c)
 *     _LockSetForegroundWindow @ 0x1C01D1270 (_LockSetForegroundWindow.c)
 *     xxxHardErrorControl @ 0x1C0226550 (xxxHardErrorControl.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CanForceForeground(const struct tagPROCESSINFO *a1)
{
  return CanForceForeground2(a1);
}
