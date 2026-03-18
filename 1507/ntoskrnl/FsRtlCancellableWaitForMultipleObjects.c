/*
 * XREFs of FsRtlCancellableWaitForMultipleObjects @ 0x14051F530
 * Callers:
 *     FsRtlCancellableWaitForSingleObject @ 0x14051D328 (FsRtlCancellableWaitForSingleObject.c)
 *     VerifierFsRtlCancellableWaitForMultipleObjects @ 0x140741C74 (VerifierFsRtlCancellableWaitForMultipleObjects.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     KeQueryTimeIncrement @ 0x1401011C0 (KeQueryTimeIncrement.c)
 */

NTSTATUS __stdcall FsRtlCancellableWaitForMultipleObjects(
        ULONG Count,
        PVOID ObjectArray[],
        WAIT_TYPE WaitType,
        PLARGE_INTEGER Timeout,
        PKWAIT_BLOCK WaitBlockArray,
        PIRP Irp)
{
  LONGLONG QuadPart; // rbx
  __int64 v11; // rbx
  NTSTATUS result; // eax
  __int64 v13; // rdi

  QuadPart = 0LL;
  if ( Timeout )
  {
    QuadPart = Timeout->QuadPart;
    if ( Timeout->QuadPart < 0 )
    {
      v11 = MEMORY[0xFFFFF78000000320];
      QuadPart = v11 - Timeout->QuadPart / KeQueryTimeIncrement();
    }
  }
  while ( 1 )
  {
    result = Count == 1
           ? KeWaitForSingleObject(*ObjectArray, Executive, 0, 1u, Timeout)
           : KeWaitForMultipleObjects(Count, ObjectArray, WaitType, Executive, 0, 1u, Timeout, WaitBlockArray);
    if ( result != 257 )
      break;
    if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 1) != 0 )
      return -1073741749;
    if ( Irp && Irp->Cancel )
      return -1073741536;
    if ( Timeout )
    {
      if ( Timeout->QuadPart >= 0 )
      {
        if ( MEMORY[0xFFFFF78000000014] >= QuadPart )
          return 258;
      }
      else
      {
        v13 = MEMORY[0xFFFFF78000000320];
        if ( MEMORY[0xFFFFF78000000320] >= QuadPart )
          return 258;
        Timeout->QuadPart = -((QuadPart - v13) * KeQueryTimeIncrement());
      }
    }
  }
  return result;
}
