/*
 * XREFs of LogFwStat @ 0x14075E428
 * Callers:
 *     AnFwpProgressAnimationManual @ 0x14075C1F8 (AnFwpProgressAnimationManual.c)
 *     AnFwDisplayFade @ 0x14075D0A8 (AnFwDisplayFade.c)
 *     AnFwFadeCompletion @ 0x14075DEB4 (AnFwFadeCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x14075DF88 (AnFwpFadeAnimationTimer.c)
 *     AnFwpProgressIndicatorTimer @ 0x14075E2F0 (AnFwpProgressIndicatorTimer.c)
 *     AnFwDisplayProgressIndicator @ 0x14075E5AC (AnFwDisplayProgressIndicator.c)
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x140150248 (BgpFwQueryPerformanceCounter.c)
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
  qword_140356D50 = result.QuadPart;
  if ( a1 )
  {
    stru_140356920[v4] = result;
    return result;
  }
  v6 = (LARGE_INTEGER)(*(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - stru_140356920[v4].QuadPart);
  qword_140356D70 = v6.QuadPart;
  if ( !(_DWORD)v4 )
  {
    v7.QuadPart = qword_14031E878;
    if ( v6.QuadPart < qword_14031E878 )
      v7 = v6;
    qword_14031E878 = v7.QuadPart;
    v8.QuadPart = qword_140356D30;
    if ( v6.QuadPart > qword_140356D30 )
      v8 = v6;
LABEL_8:
    qword_140356D90 += v6.QuadPart;
    ++dword_140356D60;
    qword_140356D30 = v8.QuadPart;
    goto LABEL_9;
  }
  v9 = v4 - 1;
  if ( !v9 )
  {
    v10.QuadPart = qword_14031E878;
    if ( v6.QuadPart < qword_14031E878 )
      v10 = v6;
    qword_14031E878 = v10.QuadPart;
    v8.QuadPart = qword_140356D30;
    if ( v6.QuadPart > qword_140356D30 )
      v8 = v6;
    qword_140356D40 += v6.QuadPart;
    goto LABEL_8;
  }
  v11 = v9 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( !v12 )
    {
      qword_140356D20 += v6.QuadPart;
      return (LARGE_INTEGER)qword_140356D50;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      qword_140356D28 += v6.QuadPart;
      return (LARGE_INTEGER)qword_140356D50;
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
            qword_14036D038 += v6.QuadPart;
        }
        else
        {
          qword_140356D80 = v6.QuadPart;
        }
      }
      else
      {
        v16.QuadPart = qword_14031E888;
        if ( v6.QuadPart < qword_14031E888 )
          v16 = v6;
        qword_14031E888 = v16.QuadPart;
        v17.QuadPart = qword_140356D68;
        if ( v6.QuadPart > qword_140356D68 )
          v17 = v6;
        qword_140356D10 += v6.QuadPart;
        qword_140356D78 += v6.QuadPart;
        ++dword_140356D48;
        qword_140356D68 = v17.QuadPart;
      }
      return (LARGE_INTEGER)qword_140356D50;
    }
    qword_140356D10 += v6.QuadPart;
    qword_140356D38 = v6.QuadPart;
  }
  else
  {
    qword_140356D90 += v6.QuadPart;
    qword_140356D58 = v6.QuadPart;
  }
LABEL_9:
  qword_140356D78 += v6.QuadPart;
  return (LARGE_INTEGER)qword_140356D50;
}
