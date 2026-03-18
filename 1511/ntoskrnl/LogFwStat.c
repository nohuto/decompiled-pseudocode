/*
 * XREFs of LogFwStat @ 0x1406DB3E0
 * Callers:
 *     AnFwpProgressAnimationManual @ 0x1406D9008 (AnFwpProgressAnimationManual.c)
 *     AnFwDisplayFade @ 0x1406DA060 (AnFwDisplayFade.c)
 *     AnFwFadeCompletion @ 0x1406DAE6C (AnFwFadeCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x1406DAF40 (AnFwpFadeAnimationTimer.c)
 *     AnFwpProgressIndicatorTimer @ 0x1406DB2A8 (AnFwpProgressIndicatorTimer.c)
 *     AnFwDisplayProgressIndicator @ 0x1406DB564 (AnFwDisplayProgressIndicator.c)
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x14011BFC4 (BgpFwQueryPerformanceCounter.c)
 */

LARGE_INTEGER __fastcall LogFwStat(int a1, int a2, LARGE_INTEGER *a3)
{
  __int64 v4; // rdi
  LARGE_INTEGER result; // rax
  LARGE_INTEGER v6; // rcx
  LARGE_INTEGER v7; // rax
  LARGE_INTEGER v8; // rax
  int v9; // edi
  LARGE_INTEGER v10; // rax
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  LARGE_INTEGER v16; // rax
  LARGE_INTEGER v17; // rax
  int v18; // edi

  v4 = a2;
  result = BgpFwQueryPerformanceCounter(a3);
  qword_140306A40 = result.QuadPart;
  if ( a1 )
  {
    stru_140306620[v4] = result;
    return result;
  }
  v6 = (LARGE_INTEGER)(*(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - stru_140306620[v4].QuadPart);
  qword_140306A60 = v6.QuadPart;
  if ( !(_DWORD)v4 )
  {
    v7.QuadPart = qword_1402CF818;
    if ( v6.QuadPart < qword_1402CF818 )
      v7 = v6;
    qword_1402CF818 = v7.QuadPart;
    v8.QuadPart = qword_140306A28;
    if ( v6.QuadPart > qword_140306A28 )
      v8 = v6;
LABEL_8:
    qword_140306A78 += v6.QuadPart;
    ++dword_140306A50;
    qword_140306A28 = v8.QuadPart;
    goto LABEL_9;
  }
  v9 = v4 - 1;
  if ( !v9 )
  {
    v10.QuadPart = qword_1402CF818;
    if ( v6.QuadPart < qword_1402CF818 )
      v10 = v6;
    qword_1402CF818 = v10.QuadPart;
    v8.QuadPart = qword_140306A28;
    if ( v6.QuadPart > qword_140306A28 )
      v8 = v6;
    qword_140306A20 += v6.QuadPart;
    goto LABEL_8;
  }
  v11 = v9 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( !v12 )
    {
      qword_140306A18 += v6.QuadPart;
      return (LARGE_INTEGER)qword_140306A40;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      qword_140306A08 += v6.QuadPart;
      return (LARGE_INTEGER)qword_140306A40;
    }
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v18 = v15 - 1;
        if ( v18 )
        {
          if ( v18 == 1 )
            qword_14031CCB0 += v6.QuadPart;
        }
        else
        {
          qword_140306A70 = v6.QuadPart;
        }
      }
      else
      {
        v16.QuadPart = qword_1402CF828;
        if ( v6.QuadPart < qword_1402CF828 )
          v16 = v6;
        qword_1402CF828 = v16.QuadPart;
        v17.QuadPart = qword_140306A58;
        if ( v6.QuadPart > qword_140306A58 )
          v17 = v6;
        qword_140306A10 += v6.QuadPart;
        qword_140306A68 += v6.QuadPart;
        ++dword_140306A38;
        qword_140306A58 = v17.QuadPart;
      }
      return (LARGE_INTEGER)qword_140306A40;
    }
    qword_140306A10 += v6.QuadPart;
    qword_140306A30 = v6.QuadPart;
  }
  else
  {
    qword_140306A78 += v6.QuadPart;
    qword_140306A48 = v6.QuadPart;
  }
LABEL_9:
  qword_140306A68 += v6.QuadPart;
  return (LARGE_INTEGER)qword_140306A40;
}
