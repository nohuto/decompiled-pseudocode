/*
 * XREFs of RtlGetExtendedContextLength @ 0x180076430
 * Callers:
 *     PsspCaptureThreadInformation @ 0x18000526C (PsspCaptureThreadInformation.c)
 * Callees:
 *     RtlpGetLegacyContextLength @ 0x1800765DC (RtlpGetLegacyContextLength.c)
 *     RtlpValidateContextFlags @ 0x180076620 (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlGetExtendedContextLength(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // r10d
  _DWORD *v3; // r11
  int v4; // ecx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+50h] [rbp+18h] BYREF
  int v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0;
  v6 = 0;
  result = RtlpValidateContextFlags(a1, v5);
  if ( (int)result >= 0 )
  {
    RtlpGetLegacyContextLength(v2, &v6, &v7);
    v4 = v6 + 24;
    if ( (v5[0] & 2) != 0 )
      v4 = MEMORY[0x7FFE03E8] - 448 + (~(v7 - 1) & (v7 + v6 + 23)) - v7;
    *v3 = v4 + v7 - 1;
    return 0LL;
  }
  return result;
}
