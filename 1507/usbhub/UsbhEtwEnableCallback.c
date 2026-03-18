/*
 * XREFs of UsbhEtwEnableCallback @ 0x1C00287D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UsbhEtwEnableCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode )
  {
    dword_1C0066650 = 1;
    UsbhEtwRundown();
  }
  else
  {
    dword_1C0066650 = 0;
  }
}
