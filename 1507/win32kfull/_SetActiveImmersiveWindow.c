/*
 * XREFs of _SetActiveImmersiveWindow @ 0x1C01D12F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0082890 (IAMThreadAccessGranted.c)
 */

__int64 SetActiveImmersiveWindow()
{
  unsigned int v0; // ebx
  __int64 v1; // r8

  v0 = 1;
  if ( IAMThreadAccessGranted(gptiCurrent) )
  {
    HMAssignmentLock(*(_QWORD *)(*(_QWORD *)(v1 + 16) + 424LL) + 208LL, v1);
  }
  else
  {
    UserSetLastError(5);
    return 0;
  }
  return v0;
}
