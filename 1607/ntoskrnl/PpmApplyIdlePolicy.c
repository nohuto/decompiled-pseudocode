/*
 * XREFs of PpmApplyIdlePolicy @ 0x1401462C8
 * Callers:
 *     PpmResetIdlePolicy @ 0x1401461C4 (PpmResetIdlePolicy.c)
 * Callees:
 *     PpmConvertTime @ 0x14000DBE4 (PpmConvertTime.c)
 */

unsigned __int64 __fastcall PpmApplyIdlePolicy(__int64 *a1)
{
  __int64 *v1; // r9
  __int64 v2; // rbx
  unsigned __int64 v3; // r8
  char v4; // dl
  char v5; // al
  unsigned __int64 result; // rax

  v1 = PpmCurrentProfile;
  v2 = *a1;
  v3 = 174LL * dword_140303D4C;
  *((_BYTE *)a1 + 60) = BYTE4(PpmCurrentProfile[v3 + 16]);
  v4 = BYTE4(v1[v3 + 17]);
  *((_BYTE *)a1 + 59) = v4;
  v5 = BYTE5(v1[v3 + 17]);
  *((_BYTE *)a1 + 57) = v4;
  *((_BYTE *)a1 + 58) = v5;
  *((_BYTE *)a1 + 56) = v5;
  result = PpmConvertTime(LODWORD(v1[v3 + 17]), 0xF4240uLL, PopQpcFrequency);
  *(_DWORD *)(v2 + 516) = result;
  return result;
}
