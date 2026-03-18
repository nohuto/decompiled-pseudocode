/*
 * XREFs of IopCancelAlertedRequest @ 0x1404C5FBC
 * Callers:
 *     IopWaitForSynchronousIo @ 0x14008E3A0 (IopWaitForSynchronousIo.c)
 *     NtSetInformationFile @ 0x14008E8E0 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x14040F570 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x140410C30 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     IopSynchronousApiServiceTail @ 0x140490974 (IopSynchronousApiServiceTail.c)
 *     IoSetInformation @ 0x1404C362C (IoSetInformation.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     IoCancelIrp @ 0x1400C97FC (IoCancelIrp.c)
 */

char __fastcall IopCancelAlertedRequest(_DWORD *Object, PIRP Irp)
{
  unsigned __int8 CurrentIrql; // di
  char result; // al
  LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( Object[1] )
  {
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  else
  {
    result = IoCancelIrp(Irp);
    __writecr8(CurrentIrql);
    if ( result )
    {
      Interval.QuadPart = -100000LL;
      while ( !Object[1] )
        result = KeDelayExecutionThread(0, 0, &Interval);
    }
    else
    {
      return KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
    }
  }
  return result;
}
