/*
 * XREFs of _ResWaitForSingleObject @ 0x1800FA4A0
 * Callers:
 *     ResCRequestInitMutex @ 0x1800F89E0 (ResCRequestInitMutex.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     NtWaitForSingleObject @ 0x1800A5140 (NtWaitForSingleObject.c)
 */

__int64 __fastcall ResWaitForSingleObject(void *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  LONG v4; // eax
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp+8h] BYREF

  if ( ((unsigned int)a1 & 0x10000003) == 3LL )
    return 0LL;
  Timeout.QuadPart = -50000000LL;
  v2 = NtWaitForSingleObject(a1, 0, &Timeout);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = RtlNtStatusToDosError(v2);
    RtlSetLastWin32Error(v4);
  }
  return v3;
}
