/*
 * XREFs of UsbhEtwEnableCallback @ 0x1C0027E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UsbhEtwEnableCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode )
  {
    dword_1C0067650 = 1;
    UsbhEtwRundown();
  }
  else
  {
    dword_1C0067650 = 0;
  }
}
