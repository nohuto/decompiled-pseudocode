/*
 * XREFs of LockCaptureWindow @ 0x1C004F78C
 * Callers:
 *     zzzAttachToQueue @ 0x1C0043EE8 (zzzAttachToQueue.c)
 *     xxxCapture @ 0x1C004F540 (xxxCapture.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C0090674 (UpdateRawMouseMode.c)
 */

__int64 __fastcall LockCaptureWindow(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rbx

  v3 = (_QWORD *)(a1 + 64);
  if ( *v3 )
    --*(_DWORD *)(gpsi + 4256LL);
  if ( a2 )
    ++*(_DWORD *)(gpsi + 4256LL);
  v4 = HMAssignmentLock(v3, a2);
  UpdateRawMouseMode(a1);
  return v4;
}
