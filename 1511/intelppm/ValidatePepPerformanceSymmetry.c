/*
 * XREFs of ValidatePepPerformanceSymmetry @ 0x1C001BA58
 * Callers:
 *     ValidatePerfDomainSymmetry @ 0x1C00150EC (ValidatePerfDomainSymmetry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002450 (__security_check_cookie.c)
 */

__int64 __fastcall ValidatePepPerformanceSymmetry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  __int64 result; // rax
  __int64 v7; // r9
  __int64 v9; // rdx
  int v10; // [rsp+0h] [rbp-80h] BYREF
  const char *v11; // [rsp+8h] [rbp-78h]
  int v12; // [rsp+10h] [rbp-70h]
  const char *v13; // [rsp+18h] [rbp-68h]
  int v14; // [rsp+20h] [rbp-60h]
  const char *v15; // [rsp+28h] [rbp-58h]
  int v16; // [rsp+30h] [rbp-50h]
  const char *v17; // [rsp+38h] [rbp-48h]
  int v18; // [rsp+40h] [rbp-40h]
  const char *v19; // [rsp+48h] [rbp-38h]
  int v20; // [rsp+50h] [rbp-30h]
  const char *v21; // [rsp+58h] [rbp-28h]
  int v22; // [rsp+60h] [rbp-20h]
  const char *v23; // [rsp+68h] [rbp-18h]

  v12 = 4;
  v11 = "HighestPerformance";
  v4 = (unsigned int *)&v10;
  v14 = 8;
  v13 = "NominalPerformance";
  result = 0LL;
  v10 = 0;
  v15 = "LowestNonlinearPerformance";
  v16 = 12;
  v17 = "LowestPerformance";
  v7 = 7LL;
  v18 = 16;
  v19 = "NominalFrequency";
  v20 = 32;
  v21 = "FrequencyCounterIndex";
  v23 = "PerformanceCounterIndex";
  v22 = 36;
  do
  {
    v9 = *v4;
    v4 += 4;
    if ( *(_DWORD *)(v9 + a2) != *(_DWORD *)(v9 + a4) )
      result = 3221225473LL;
    --v7;
  }
  while ( v7 );
  return result;
}
