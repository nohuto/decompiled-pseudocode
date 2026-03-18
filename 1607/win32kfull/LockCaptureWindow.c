/*
 * XREFs of LockCaptureWindow @ 0x1C00AAF40
 * Callers:
 *     xxxCapture @ 0x1C00AACF4 (xxxCapture.c)
 *     zzzAttachToQueue @ 0x1C00DBFA0 (zzzAttachToQueue.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C005B7C4 (UpdateRawMouseMode.c)
 */

__int64 __fastcall LockCaptureWindow(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rbx

  v3 = (_QWORD *)(a1 + 72);
  if ( *v3 )
    --*(_DWORD *)(gpsi + 5648LL);
  if ( a2 )
    ++*(_DWORD *)(gpsi + 5648LL);
  v4 = HMAssignmentLock(v3, a2);
  UpdateRawMouseMode(a1);
  return v4;
}
