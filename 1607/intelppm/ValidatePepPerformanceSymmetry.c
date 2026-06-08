/*
 * XREFs of ValidatePepPerformanceSymmetry @ 0x1C001CE18
 * Callers:
 *     ValidatePerfDomainSymmetry @ 0x1C001328C (ValidatePerfDomainSymmetry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002510 (__security_check_cookie.c)
 */

__int64 __fastcall ValidatePepPerformanceSymmetry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int *v4; // r8
  __int64 result; // rax
  __int64 v8; // r9
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

  v10 = 8;
  v11 = "HighestPerformance";
  v4 = &v10;
  v12 = 12;
  v13 = "NominalPerformance";
  v14 = 16;
  v15 = "LowestNonlinearPerformance";
  v16 = 20;
  v17 = "LowestPerformance";
  v19 = "NominalFrequency";
  v21 = "FrequencyCounterIndex";
  v23 = "PerformanceCounterIndex";
  result = 0LL;
  v18 = 24;
  v20 = 40;
  v22 = 44;
  v8 = 7LL;
  do
  {
    v9 = (unsigned int)*v4;
    v4 += 4;
    if ( *(_DWORD *)(v9 + a2) != *(_DWORD *)(v9 + a4) )
      result = 3221225473LL;
    --v8;
  }
  while ( v8 );
  return result;
}
