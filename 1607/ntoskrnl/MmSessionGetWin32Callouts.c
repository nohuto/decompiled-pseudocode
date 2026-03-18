/*
 * XREFs of MmSessionGetWin32Callouts @ 0x140013F00
 * Callers:
 *     NtFindAtom @ 0x140428C60 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x140429010 (PsInvokeWin32Callout.c)
 *     PsConvertToGuiThread @ 0x14045D0C0 (PsConvertToGuiThread.c)
 *     ExCallSessionCallBack @ 0x140463D04 (ExCallSessionCallBack.c)
 *     NtDeleteAtom @ 0x1404A3520 (NtDeleteAtom.c)
 *     NtQueryInformationAtom @ 0x1404CBF08 (NtQueryInformationAtom.c)
 *     NtAddAtomEx @ 0x1404CD2B8 (NtAddAtomEx.c)
 *     KeUserModeCallback @ 0x140515D20 (KeUserModeCallback.c)
 *     PspExitThread @ 0x14051611C (PspExitThread.c)
 * Callees:
 *     <none>
 */

union _RTL_RUN_ONCE *MmSessionGetWin32Callouts()
{
  if ( *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3360) == 1LL )
    return &PsWin32NullCallBack;
  else
    return &PsWin32CallBack;
}
