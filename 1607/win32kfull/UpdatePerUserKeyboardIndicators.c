/*
 * XREFs of UpdatePerUserKeyboardIndicators @ 0x1C0093338
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C009190C (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     UpdateKeyLights @ 0x1C00EC4CC (UpdateKeyLights.c)
 */

__int64 __fastcall UpdatePerUserKeyboardIndicators(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  unsigned int v3; // eax
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0x80000000;
  result = gProtocolType;
  v2 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( !gProtocolType )
  {
    FastGetProfileIntW(a1, 13LL, L"InitialKeyboardIndicators", 0x80000000LL, &v4, 0);
    v3 = v4 & 0x80000002;
    v4 = v3;
    if ( v3 == 0x80000000 )
    {
      LOBYTE(v3) = word_1C0327716;
      v4 = (unsigned __int16)word_1C0327716;
    }
    if ( (v3 & 2) != 0 )
    {
      *(_BYTE *)(v2 + 228) |= 2u;
      gafAsyncKeyState[36] |= 2u;
      byte_1C0327744 |= 2u;
    }
    else
    {
      *(_BYTE *)(v2 + 228) &= ~2u;
      gafAsyncKeyState[36] &= ~2u;
      byte_1C0327744 &= ~2u;
    }
    gfKanaToggle = 0;
    *(_BYTE *)(v2 + 197) &= ~8u;
    gafAsyncKeyState[5] &= ~8u;
    byte_1C0327725 &= ~8u;
    return UpdateKeyLights(0LL);
  }
  return result;
}
