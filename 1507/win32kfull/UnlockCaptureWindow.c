/*
 * XREFs of UnlockCaptureWindow @ 0x1C00ED560
 * Callers:
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C0008998 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     zzzAttachToQueue @ 0x1C0043EE8 (zzzAttachToQueue.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C0090674 (UpdateRawMouseMode.c)
 */

__int64 __fastcall UnlockCaptureWindow(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax

  v2 = (_QWORD *)(a1 + 64);
  if ( *v2 )
  {
    --*(_DWORD *)(gpsi + 4256LL);
    HMAssignmentUnlock(v2);
    return UpdateRawMouseMode(a1);
  }
  return result;
}
