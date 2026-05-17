/*
 * XREFs of ShipAssert @ 0x18008C170
 * Callers:
 *     ShipAssertMsgA @ 0x1800D1310 (ShipAssertMsgA.c)
 * Callees:
 *     WerReportSQMEvent @ 0x18008C270 (WerReportSQMEvent.c)
 *     GetShipAssertBuffer @ 0x18008C868 (GetShipAssertBuffer.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 */

__int64 __fastcall ShipAssert(__int64 a1, int a2)
{
  int v3; // r14d
  struct _TEB *v4; // rbx
  unsigned int LastErrorValue; // edi
  __int64 result; // rax
  __int64 ShipAssertBuffer; // rax
  unsigned int v8; // ecx
  _DWORD v9[4]; // [rsp+38h] [rbp-20h] BYREF

  v3 = a1;
  v4 = NtCurrentTeb();
  LastErrorValue = v4->LastErrorValue;
  result = v4->SameTebFlags;
  if ( (result & 0x10) == 0 )
  {
    v4->SameTebFlags = result | 0x10;
    ShipAssertBuffer = GetShipAssertBuffer(a1);
    if ( ShipAssertBuffer && ShipAssertBuffer != 255 && ShipAssertBuffer != 238 )
    {
      v8 = ((unsigned __int16)_InterlockedExchangeAdd(&dword_1801429D8, 1u) + 1) & 0x3FF;
      *(_DWORD *)(ShipAssertBuffer + 8LL * v8) = v3;
      *(_DWORD *)(ShipAssertBuffer + 8LL * v8 + 4) = a2;
    }
    v9[0] = v3;
    v9[1] = a2;
    v9[2] = 0;
    WerReportSQMEvent(1LL, v9, 3LL);
    result = 65519LL;
    v4->SameTebFlags &= ~0x10u;
    v4->LastErrorValue = LastErrorValue;
  }
  return result;
}
