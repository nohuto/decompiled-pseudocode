/*
 * XREFs of ?BucketInteractionByPerformance@CTelemetryTouchLatencyAnalysis@@AEAAJPEAUTouchScenarioInfo@1@@Z @ 0x18001C434
 * Callers:
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z @ 0x18001C628 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::BucketInteractionByPerformance(
        CTelemetryTouchLatencyAnalysis *this,
        struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a2)
{
  unsigned int v2; // r8d
  float v5; // xmm1_4
  int *v6; // rdx
  unsigned int v7; // ecx
  int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // edx
  int *v11; // r11
  int v12; // eax
  int *v13; // rcx
  int *v14; // rax
  unsigned int v15; // edx
  int v16; // eax
  int *v17; // rcx
  int *i; // rax
  int v20; // [rsp+0h] [rbp-20h] BYREF
  int v21; // [rsp+4h] [rbp-1Ch]
  int v22; // [rsp+8h] [rbp-18h]
  int v23; // [rsp+Ch] [rbp-14h]
  int v24; // [rsp+10h] [rbp-10h]

  v2 = 0;
  if ( !a2 )
    return 2147942487LL;
  v5 = (float)(int)(*((_QWORD *)this + 232) / 0x2710uLL);
  v24 = -1;
  v6 = &v20;
  v21 = 3;
  v20 = 2;
  v7 = 0;
  v22 = 6;
  v23 = 12;
  while ( *((_WORD *)a2 + 49) > (unsigned __int16)(int)(float)((float)*v6 * v5) )
  {
    ++v7;
    ++v6;
    if ( v7 >= 5 )
      goto LABEL_5;
  }
  ++*((_WORD *)this + v7 + 886);
LABEL_5:
  if ( *((_WORD *)a2 + 44) > 1u )
  {
    v8 = *((unsigned __int16 *)a2 + 44);
    v24 = -1;
    v9 = *((_DWORD *)a2 + 23) / (unsigned int)(v8 - 1);
    v21 = 2;
    v10 = 0;
    v20 = 1;
    v11 = &v20;
    v22 = 3;
    v23 = 4;
    while ( (unsigned __int16)v9 > (unsigned __int16)(int)(float)((float)*v11 * v5) )
    {
      ++v10;
      ++v11;
      if ( v10 >= 5 )
        goto LABEL_11;
    }
    ++*((_WORD *)this + v10 + 891);
  }
LABEL_11:
  v12 = 0;
  v13 = &v20;
  do
    *v13++ = v12++;
  while ( v12 < 4 );
  v24 = -1;
  v14 = &v20;
  v15 = 0;
  while ( *((unsigned __int16 *)a2 + 76) + (unsigned int)*((unsigned __int16 *)a2 + 50) > *v14 )
  {
    ++v15;
    ++v14;
    if ( v15 >= 5 )
      goto LABEL_16;
  }
  ++*((_WORD *)this + v15 + 896);
LABEL_16:
  v16 = 0;
  v17 = &v20;
  do
    *v17++ = v16++;
  while ( v16 < 4 );
  v24 = -1;
  for ( i = &v20; *((unsigned __int16 *)a2 + 51) > (unsigned int)*i; ++i )
  {
    if ( ++v2 >= 5 )
      return 0LL;
  }
  ++*((_WORD *)this + v2 + 901);
  return 0LL;
}
