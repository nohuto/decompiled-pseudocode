/*
 * XREFs of MmSessionGetWin32Callouts @ 0x140013A80
 * Callers:
 *     NtFindAtom @ 0x140427B30 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x140427EE0 (PsInvokeWin32Callout.c)
 *     PsConvertToGuiThread @ 0x14045BF90 (PsConvertToGuiThread.c)
 *     ExCallSessionCallBack @ 0x140462BD4 (ExCallSessionCallBack.c)
 *     NtQueryInformationAtom @ 0x1404B1934 (NtQueryInformationAtom.c)
 *     NtAddAtomEx @ 0x1404B2CE4 (NtAddAtomEx.c)
 *     KeUserModeCallback @ 0x1404F9110 (KeUserModeCallback.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 *     NtDeleteAtom @ 0x14051B920 (NtDeleteAtom.c)
 * Callees:
 *     <none>
 */

_RTL_RUN_ONCE *MmSessionGetWin32Callouts()
{
  if ( *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3360) == 1LL )
    return &PsWin32NullCallBack;
  else
    return &PsWin32CallBack;
}
