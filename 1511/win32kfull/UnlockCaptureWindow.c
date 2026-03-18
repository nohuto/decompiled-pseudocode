/*
 * XREFs of UnlockCaptureWindow @ 0x1C00F3380
 * Callers:
 *     zzzAttachToQueue @ 0x1C008BC0C (zzzAttachToQueue.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C00DB8C0 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C00537A0 (UpdateRawMouseMode.c)
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
