/*
 * XREFs of ClearKeyboardToggleStates @ 0x1C00413F0
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 ClearKeyboardToggleStates()
{
  __int64 v0; // r8
  int v1; // r10d
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // r10d
  __int64 v6; // r9
  __int64 result; // rax
  _BYTE v8[16]; // [rsp+0h] [rbp-28h]

  v0 = *(_QWORD *)gafAsyncKeyState;
  v1 = 0;
  v2 = 0LL;
  do
  {
    ++v1;
    v8[v2] = gafAsyncKeyState[(unsigned __int64)byte_1C02E2010[v2] >> 2] & (1 << (2 * (byte_1C02E2010[v2] & 3) + 1));
    ++v2;
  }
  while ( (unsigned __int64)v1 < 0xE );
  v3 = 0LL;
  v4 = 4LL;
  while ( 1 )
  {
    *(__m128i *)(v3 + v0) = _mm_and_si128(_mm_loadu_si128((const __m128i *)(v3 + v0)), (__m128i)_xmm);
    v3 += 16LL;
    if ( !--v4 )
      break;
    v0 = *(_QWORD *)gafAsyncKeyState;
  }
  v5 = 0;
  v6 = 0LL;
  do
  {
    if ( v8[v6] )
      gafAsyncKeyState[(unsigned __int64)byte_1C02E2010[v6] >> 2] |= 1 << (2 * (byte_1C02E2010[v6] & 3) + 1);
    ++v5;
    ++v6;
    result = v5;
  }
  while ( (unsigned __int64)v5 < 0xE );
  return result;
}
