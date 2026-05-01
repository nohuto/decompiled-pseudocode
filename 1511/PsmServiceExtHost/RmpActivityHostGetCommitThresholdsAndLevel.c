/*
 * XREFs of RmpActivityHostGetCommitThresholdsAndLevel @ 0x180019138
 * Callers:
 *     RmpActivityHostComputeCommitThresholds @ 0x1800204F8 (RmpActivityHostComputeCommitThresholds.c)
 * Callees:
 *     RmpActivityHostComputeCommitEstimate @ 0x180040CBC (RmpActivityHostComputeCommitEstimate.c)
 */

unsigned __int64 __fastcall RmpActivityHostGetCommitThresholdsAndLevel(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned __int64 *a9,
        unsigned __int64 *a10,
        _QWORD *a11,
        int *a12,
        unsigned __int64 *a13)
{
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r11
  __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  int v19; // edi
  unsigned __int64 v20; // rbx
  unsigned __int64 result; // rax

  v13 = a7;
  if ( a1 < a7 )
    v13 = a1;
  v14 = a1 - v13;
  v15 = a7;
  v16 = a4 + v14;
  if ( a2 < a7 )
    v15 = a2;
  v17 = a6 + a3 - a7;
  v18 = a5 + a2 - v15;
  if ( a8 < v16 )
  {
    v19 = 1;
    v20 = 0LL;
  }
  else if ( a8 < v18 )
  {
    v20 = v16;
    v19 = 2;
    v16 = v18;
  }
  else
  {
    v19 = 3;
    v20 = v18;
    v16 = 0LL;
  }
  if ( a8 && v17 )
  {
    RmpActivityHostComputeCommitEstimate(a8, v17, &a7, &a5);
    result = a5;
    if ( v20 <= a7 )
      v20 = a7;
    if ( !v16 || v16 >= a5 )
      v16 = a5;
  }
  else
  {
    result = 0LL;
  }
  if ( a9 )
    *a9 = v20;
  if ( a10 )
    *a10 = v16;
  if ( a11 )
    *a11 = v17;
  if ( a12 )
    *a12 = v19;
  if ( a13 )
    *a13 = result;
  return result;
}
