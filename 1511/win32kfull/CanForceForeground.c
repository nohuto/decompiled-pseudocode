/*
 * XREFs of CanForceForeground @ 0x1C008B4E0
 * Callers:
 *     _AllowSetForegroundWindow @ 0x1C008B3E0 (_AllowSetForegroundWindow.c)
 *     ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C008D4BC (-CheckLegacyForegroundAccess@@YAHXZ.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C008E100 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?ForceForegroundChangeOnMinimize@@YAHPEAUtagWND@@0@Z @ 0x1C00C7708 (-ForceForegroundChangeOnMinimize@@YAHPEAUtagWND@@0@Z.c)
 *     _LockSetForegroundWindow @ 0x1C01D2EF0 (_LockSetForegroundWindow.c)
 *     xxxHardErrorControl @ 0x1C02268E8 (xxxHardErrorControl.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CanForceForeground(const struct tagPROCESSINFO *a1)
{
  return CanForceForeground2(a1);
}
