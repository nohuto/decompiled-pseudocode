/*
 * XREFs of UpdatePerUserKeyboardIndicators @ 0x1C0135904
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0133984 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     UpdateKeyLights @ 0x1C01383A4 (UpdateKeyLights.c)
 */

__int64 __fastcall UpdatePerUserKeyboardIndicators(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // rdx

  result = gProtocolType;
  v2 = *(_QWORD *)(gptiCurrent + 392LL);
  if ( !gProtocolType )
  {
    FastGetProfileIntW(a1, 13LL, L"InitialKeyboardIndicators");
    if ( (word_1C0323996 & 2) != 0 )
    {
      *(_BYTE *)(v2 + 220) |= 2u;
      gafAsyncKeyState[36] |= 2u;
      byte_1C03230F4 |= 2u;
    }
    else
    {
      *(_BYTE *)(v2 + 220) &= ~2u;
      gafAsyncKeyState[36] &= ~2u;
      byte_1C03230F4 &= ~2u;
    }
    gfKanaToggle = 0;
    *(_BYTE *)(v2 + 189) &= ~8u;
    gafAsyncKeyState[5] &= ~8u;
    byte_1C03230D5 &= ~8u;
    return UpdateKeyLights(0LL, v3);
  }
  return result;
}
