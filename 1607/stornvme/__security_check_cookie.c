/*
 * XREFs of __security_check_cookie @ 0x1C0002D40
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001000 (NVMeHwBuildIo.c)
 *     SrbAssignQueueId @ 0x1C0002B98 (SrbAssignQueueId.c)
 *     __GSHandlerCheckCommon @ 0x1C0002D90 (__GSHandlerCheckCommon.c)
 *     NVMeHwFindAdapter @ 0x1C00048B0 (NVMeHwFindAdapter.c)
 *     GetInterruptMessageInformation @ 0x1C0005448 (GetInterruptMessageInformation.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000753C (NVMeFreeHostMemoryBuffer.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C0007664 (NVMeInitHostMemoryBuffer.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0008FC4 (FormInquiryDeviceIdentifiersData.c)
 *     FormInquirySerialNumberData @ 0x1C0009214 (FormInquirySerialNumberData.c)
 *     FormInquiryStandardData @ 0x1C00093DC (FormInquiryStandardData.c)
 *     GetRegistrySettings @ 0x1C000EF68 (GetRegistrySettings.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
