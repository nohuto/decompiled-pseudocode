/*
 * XREFs of PpmApplyIdlePolicy @ 0x140168C50
 * Callers:
 *     PpmResetIdlePolicy @ 0x140168B78 (PpmResetIdlePolicy.c)
 * Callees:
 *     PpmConvertTime @ 0x140014C30 (PpmConvertTime.c)
 */

unsigned __int64 __fastcall PpmApplyIdlePolicy(_BYTE *a1)
{
  __int64 *v1; // r9
  unsigned __int64 v2; // r8
  char v3; // dl
  char v4; // al
  unsigned __int64 result; // rax
  __int64 v6; // r11

  v1 = PpmCurrentProfile;
  v2 = 174LL * dword_14032E84C;
  a1[60] = BYTE4(PpmCurrentProfile[v2 + 16]);
  v3 = BYTE4(v1[v2 + 17]);
  a1[59] = v3;
  v4 = BYTE5(v1[v2 + 17]);
  a1[57] = v3;
  a1[58] = v4;
  a1[56] = v4;
  result = PpmConvertTime(LODWORD(v1[v2 + 17]), 0xF4240uLL, PopQpcFrequency);
  *(_DWORD *)(v6 + 516) = result;
  return result;
}
