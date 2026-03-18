/*
 * XREFs of SetAppStarting @ 0x1C0051DD0
 * Callers:
 *     xxxInitProcessInfo @ 0x1C0051B44 (xxxInitProcessInfo.c)
 * Callees:
 *     IsSetRITTimerSupported_0 @ 0x1C0001C60 (IsSetRITTimerSupported_0.c)
 *     SetRITTimer_0 @ 0x1C0001C68 (SetRITTimer_0.c)
 */

__int64 __fastcall SetAppStarting(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 12) |= 0x40u;
  result = gppiStarting;
  *(_QWORD *)(a1 + 344) = gppiStarting;
  gppiStarting = a1;
  if ( gptmrMaster )
  {
    result = IsSetRITTimerSupported_0();
    if ( (int)result < 0 )
    {
      qword_1C00FFCA8 = 0LL;
    }
    else
    {
      result = SetRITTimer_0();
      qword_1C00FFCA8 = result;
    }
  }
  return result;
}
