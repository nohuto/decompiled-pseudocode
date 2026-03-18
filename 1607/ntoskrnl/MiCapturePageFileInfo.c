/*
 * XREFs of MiCapturePageFileInfo @ 0x1401593D0
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x14003B6F0 (MiCompletePrivateZeroFault.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MiCapturePageFileInfo(_QWORD *a1, int a2, int a3)
{
  return MiCapturePageFileInfoInline(a1, a2, a3);
}
