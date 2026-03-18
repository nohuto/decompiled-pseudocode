/*
 * XREFs of ValidateHwndIAM @ 0x1401A2C8C
 * Callers:
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1401A2C28 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     NtUserSetBridgeWindowChild @ 0x1402BBB10 (NtUserSetBridgeWindowChild.c)
 *     NtUserShellMigrateWindow @ 0x1402BED70 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1402BF280 (NtUserShellSetWindowPos.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 *     ??0CDisableILCheckAuto@@QEAA@XZ @ 0x1401BEF8C (--0CDisableILCheckAuto@@QEAA@XZ.c)
 */

__int64 __fastcall ValidateHwndIAM(__int64 a1)
{
  struct tagTHREADINFO *v2; // rax
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  v2 = PtiCurrent(a1);
  if ( !(unsigned int)IAMThreadAccessGranted(v2) )
    return ValidateHwnd(a1);
  CDisableILCheckAuto::CDisableILCheckAuto((CDisableILCheckAuto *)&v4);
  result = ValidateHwnd(a1);
  if ( v5 )
    *(_BYTE *)(v4 + 1708) = 1;
  return result;
}
