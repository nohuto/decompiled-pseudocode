/*
 * XREFs of TppEnqueueTimer @ 0x18003C60C
 * Callers:
 *     TppSetTimer @ 0x18003C378 (TppSetTimer.c)
 *     TppSingleTimerExpiration @ 0x18003CC18 (TppSingleTimerExpiration.c)
 * Callees:
 *     TppPHInsert @ 0x18003C6A8 (TppPHInsert.c)
 */

__int64 __fastcall TppEnqueueTimer(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  _QWORD *v4; // rdx
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 328);
  v4 = (_QWORD *)(a2 + 288);
  v4[4] = v2;
  v4[3] = v4 + 2;
  v4[2] = v4 + 2;
  v4[1] = v4;
  *v4 = v4;
  TppPHInsert(a1 + 8);
  *(_QWORD *)(a2 + 280) = v5;
  *(_QWORD *)(a2 + 272) = a2 + 264;
  *(_QWORD *)(a2 + 264) = a2 + 264;
  *(_QWORD *)(a2 + 256) = a2 + 248;
  *(_QWORD *)(a2 + 248) = a2 + 248;
  result = TppPHInsert(v6 + 16);
  *(_BYTE *)(a2 + 354) |= 1u;
  *(_BYTE *)(a2 + 352) = 1;
  return result;
}
