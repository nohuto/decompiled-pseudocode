/*
 * XREFs of LockCaptureWindow @ 0x1C008E848
 * Callers:
 *     zzzAttachToQueue @ 0x1C008BC0C (zzzAttachToQueue.c)
 *     xxxCapture @ 0x1C008E5F8 (xxxCapture.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LockCaptureWindow(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx

  v3 = (_QWORD *)(a1 + 64);
  if ( *v3 )
    --*(_DWORD *)(gpsi + 4256LL);
  if ( a2 )
    ++*(_DWORD *)(gpsi + 4256LL);
  HMAssignmentLock(v3, a2);
  return UpdateRawMouseMode(a1);
}
