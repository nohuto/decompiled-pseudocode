/*
 * XREFs of UnlockCaptureWindow @ 0x1C0113840
 * Callers:
 *     zzzAttachToQueue @ 0x1C00DBFA0 (zzzAttachToQueue.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C00F96D4 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C005B7C4 (UpdateRawMouseMode.c)
 */

__int64 __fastcall UnlockCaptureWindow(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax

  v2 = (_QWORD *)(a1 + 72);
  if ( *v2 )
  {
    --*(_DWORD *)(gpsi + 5648LL);
    HMAssignmentUnlock(v2);
    return UpdateRawMouseMode(a1);
  }
  return result;
}
