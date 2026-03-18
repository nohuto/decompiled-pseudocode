/*
 * XREFs of _SetCancelRotationDelayHintWindow @ 0x1C01D2F70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C00789B0 (IAMThreadAccessGranted.c)
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
    UserSetLastError(5);
    return 0;
  }
  return v0;
}
