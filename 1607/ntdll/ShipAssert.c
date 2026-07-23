/*
 * XREFs of ShipAssert @ 0x1800D8FD0
 * Callers:
 *     ShipAssertMsgA @ 0x1800D9120 (ShipAssertMsgA.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     GetShipAssertBuffer @ 0x1800D8E50 (GetShipAssertBuffer.c)
 *     WerReportSQMEvent @ 0x1800D9600 (WerReportSQMEvent.c)
 */

__int64 __fastcall ShipAssert(int a1, int a2)
{
  struct _TEB *v4; // rbx
  unsigned int LastErrorValue; // edi
  __int64 result; // rax
  _DWORD *ShipAssertBuffer; // rax
  unsigned int v8; // ecx
  _DWORD v9[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = NtCurrentTeb();
  LastErrorValue = v4->LastErrorValue;
  result = v4->SameTebFlags;
  if ( (result & 0x10) == 0 )
  {
    v4->SameTebFlags = result | 0x10;
    ShipAssertBuffer = GetShipAssertBuffer();
    if ( ShipAssertBuffer && ShipAssertBuffer != (_DWORD *)255 && ShipAssertBuffer != (_DWORD *)238 )
    {
      v8 = ((unsigned __int16)_InterlockedExchangeAdd(&dword_18014FDF0, 1u) + 1) & 0x3FF;
      ShipAssertBuffer[2 * v8] = a1;
      ShipAssertBuffer[2 * v8 + 1] = a2;
    }
    v9[0] = a1;
    v9[1] = a2;
    v9[2] = 0;
    WerReportSQMEvent(1LL, v9, 3LL);
    result = 65519LL;
    v4->SameTebFlags &= ~0x10u;
    v4->LastErrorValue = LastErrorValue;
  }
  return result;
}
