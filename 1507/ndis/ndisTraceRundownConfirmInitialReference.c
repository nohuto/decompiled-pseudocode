/*
 * XREFs of ndisTraceRundownConfirmInitialReference @ 0x1C00AD4EC
 * Callers:
 *     ndisTraceRundownDeviceControl @ 0x1C00AD174 (ndisTraceRundownDeviceControl.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 */

__int64 ndisTraceRundownConfirmInitialReference()
{
  unsigned int v0; // ebx

  ExAcquirePushLockExclusiveEx(&qword_1C00859C8, 0LL);
  if ( (dword_1C0100000 & 2) != 0 )
  {
    dword_1C0100000 = dword_1C0100000 & 0xFFFFFFF1 | 8;
    KeSetEvent(&Event, 0, 0);
    v0 = 0;
    if ( (unsigned __int8)byte_1C0085322 >= 5u )
      WPP_SF_(0x1Au, &WPP_98be5e8eac0fef6790683cac5c76438b_Traceguids);
  }
  else
  {
    if ( (unsigned __int8)byte_1C0085322 >= 2u )
      WPP_SF_(0x19u, &WPP_98be5e8eac0fef6790683cac5c76438b_Traceguids);
    v0 = -1073741808;
  }
  ExReleasePushLockExclusiveEx(&qword_1C00859C8, 0LL);
  return v0;
}
