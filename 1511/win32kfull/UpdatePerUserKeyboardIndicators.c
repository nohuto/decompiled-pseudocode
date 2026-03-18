/*
 * XREFs of UpdatePerUserKeyboardIndicators @ 0x1C009D588
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C012420C (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     UpdateKeyLights @ 0x1C009D668 (UpdateKeyLights.c)
 */

__int64 __fastcall UpdatePerUserKeyboardIndicators(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // rdx
  unsigned int v4; // eax
  unsigned int v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0x80000000;
  result = gProtocolType;
  v2 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( !gProtocolType )
  {
    FastGetProfileIntW(a1, 13LL, L"InitialKeyboardIndicators", 0x80000000LL, &v5, 0);
    v4 = v5 & 0x80000002;
    v5 = v4;
    if ( v4 == 0x80000000 )
    {
      LOBYTE(v4) = word_1C0322A96;
      v5 = (unsigned __int16)word_1C0322A96;
    }
    if ( (v4 & 2) != 0 )
    {
      *(_BYTE *)(v2 + 220) |= 2u;
      BYTE4(gafAsyncKeyState[2]) |= 2u;
      byte_1C0322AC4 |= 2u;
    }
    else
    {
      *(_BYTE *)(v2 + 220) &= ~2u;
      BYTE4(gafAsyncKeyState[2]) &= ~2u;
      byte_1C0322AC4 &= ~2u;
    }
    gfKanaToggle = 0;
    *(_BYTE *)(v2 + 189) &= ~8u;
    BYTE5(gafAsyncKeyState[0]) &= ~8u;
    byte_1C0322AA5 &= ~8u;
    return UpdateKeyLights(0LL, v3);
  }
  return result;
}
