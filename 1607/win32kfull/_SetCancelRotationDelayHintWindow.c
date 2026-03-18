/*
 * XREFs of _SetCancelRotationDelayHintWindow @ 0x1C01CABE0
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C00A6F0C (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 SetCancelRotationDelayHintWindow()
{
  unsigned int v0; // ebx
  __int64 v1; // r8

  v0 = 1;
  if ( IAMThreadAccessGranted(gptiCurrent) )
  {
    HMAssignmentLock(*(_QWORD *)(v1 + 24) + 296LL, v1);
  }
  else
  {
    UserSetLastError(5LL);
    return 0;
  }
  return v0;
}
