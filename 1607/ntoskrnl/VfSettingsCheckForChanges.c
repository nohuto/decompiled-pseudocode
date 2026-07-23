/*
 * XREFs of VfSettingsCheckForChanges @ 0x140716730
 * Callers:
 *     VfSetVerifierInformation @ 0x140721060 (VfSetVerifierInformation.c)
 * Callees:
 *     ViHalApplySettings @ 0x1407099E8 (ViHalApplySettings.c)
 *     VfKeCheckForChanges @ 0x140712BB0 (VfKeCheckForChanges.c)
 *     ViDeadlockDetectionApplySettings @ 0x140715140 (ViDeadlockDetectionApplySettings.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x140716718 (VfSettingsApplyMiscellaneousChecks.c)
 *     ViSettingsEnableKernelHandleChecking @ 0x140716830 (ViSettingsEnableKernelHandleChecking.c)
 *     ViSettingsIoCheckForChanges @ 0x140716890 (ViSettingsIoCheckForChanges.c)
 */

void __fastcall VfSettingsCheckForChanges(int a1, __int16 a2, int a3, unsigned int a4)
{
  unsigned int v8; // ebp

  VfKeCheckForChanges(a4);
  v8 = 1;
  if ( (a2 & 8) != 0 )
  {
    if ( (a1 & 8) == 0 )
      MmTrackLockedPages = 1;
  }
  else if ( ((unsigned __int8)a3 & (unsigned __int8)a1 & 8) != 0 )
  {
    MmTrackLockedPages |= 0x10000000u;
  }
  ViSettingsIoCheckForChanges(a4);
  if ( (a2 & 0x20) != 0 )
  {
    if ( (a1 & 0x20) != 0 )
      goto LABEL_11;
  }
  else if ( ((unsigned __int8)a3 & (unsigned __int8)a1 & 0x20) == 0 )
  {
    goto LABEL_11;
  }
  ViDeadlockDetectionApplySettings();
LABEL_11:
  if ( (a2 & 0x80u) == 0 )
  {
    if ( ((unsigned __int8)a3 & (unsigned __int8)a1 & 0x80) == 0 )
      goto LABEL_16;
  }
  else if ( (a1 & 0x80) != 0 )
  {
    goto LABEL_16;
  }
  ViHalApplySettings();
LABEL_16:
  if ( (a2 & 0x800) != 0 )
  {
    if ( (a1 & 0x800) == 0 )
      goto LABEL_21;
  }
  else if ( (a3 & a1 & 0x800) != 0 )
  {
    v8 = 0;
LABEL_21:
    ViSettingsEnableKernelHandleChecking(v8);
    VfSettingsApplyMiscellaneousChecks(~(_WORD)a3 & (a2 | a1));
  }
  VfPendingCheckForChanges(a4);
}
