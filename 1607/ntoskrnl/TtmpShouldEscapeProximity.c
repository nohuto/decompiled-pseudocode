/*
 * XREFs of TtmpShouldEscapeProximity @ 0x140678290
 * Callers:
 *     TtmiSetPendingOnOffRequest @ 0x140677DFC (TtmiSetPendingOnOffRequest.c)
 * Callees:
 *     TtmiLogProximityPowerPress @ 0x14067B3AC (TtmiLogProximityPowerPress.c)
 */

char __fastcall TtmpShouldEscapeProximity(__int64 a1)
{
  char v1; // di
  int v2; // edx
  __int64 v4; // rsi
  __int64 v5; // rax
  int v6; // ecx

  ++*(_DWORD *)(a1 + 256);
  v1 = 0;
  v2 = -1;
  v4 = MEMORY[0xFFFFF78000000008];
  v5 = *(_QWORD *)(a1 + 248);
  if ( v5 != -1 )
  {
    v2 = MEMORY[0xFFFFF78000000008] - v5;
    if ( MEMORY[0xFFFFF78000000008] - v5 < (unsigned __int64)(unsigned int)(10000 * TtmpProximityEscapeMsec) )
    {
      ++*(_DWORD *)(a1 + 264);
      v1 = 1;
    }
  }
  v6 = *(_DWORD *)(a1 + 264);
  LOBYTE(v6) = v1;
  TtmiLogProximityPowerPress(v6, v2, *(_DWORD *)(a1 + 256), *(_DWORD *)(a1 + 260), *(_DWORD *)(a1 + 264));
  *(_QWORD *)(a1 + 248) = v4;
  return v1;
}
