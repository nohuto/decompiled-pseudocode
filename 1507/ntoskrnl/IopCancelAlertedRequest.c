/*
 * XREFs of IopCancelAlertedRequest @ 0x14058EC70
 * Callers:
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     IopQueryXxxInformation @ 0x14042A8D8 (IopQueryXxxInformation.c)
 *     IopSynchronousApiServiceTail @ 0x140457B28 (IopSynchronousApiServiceTail.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140490C50 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x1404BDDC0 (IopSynchronousServiceTail.c)
 *     IoSetInformation @ 0x14055B32C (IoSetInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     IoCancelIrp @ 0x140073FAC (IoCancelIrp.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
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
