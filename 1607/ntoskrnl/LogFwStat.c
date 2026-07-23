/*
 * XREFs of LogFwStat @ 0x140727310
 * Callers:
 *     AnFwpProgressAnimationManual @ 0x1407253F8 (AnFwpProgressAnimationManual.c)
 *     AnFwDisplayFade @ 0x14072664C (AnFwDisplayFade.c)
 *     AnFwFadeCompletion @ 0x140726D9C (AnFwFadeCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x140726E84 (AnFwpFadeAnimationTimer.c)
 *     AnFwpProgressIndicatorTimer @ 0x1407271D8 (AnFwpProgressIndicatorTimer.c)
 *     AnFwDisplayProgressIndicator @ 0x140727494 (AnFwDisplayProgressIndicator.c)
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x14012775C (BgpFwQueryPerformanceCounter.c)
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
  qword_140328C88 = result.QuadPart;
  if ( a1 )
  {
    stru_140328BC0[v4] = result;
    return result;
  }
  v6 = (LARGE_INTEGER)(*(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - stru_140328BC0[v4].QuadPart);
  qword_140328CE8 = v6.QuadPart;
  if ( !(_DWORD)v4 )
  {
    v7.QuadPart = qword_1402F4EF8;
    if ( v6.QuadPart < qword_1402F4EF8 )
      v7 = v6;
    qword_1402F4EF8 = v7.QuadPart;
    v8.QuadPart = qword_140328C68;
    if ( v6.QuadPart > qword_140328C68 )
      v8 = v6;
LABEL_8:
    qword_140328CA0 += v6.QuadPart;
    ++dword_140328CB8;
    qword_140328C68 = v8.QuadPart;
    goto LABEL_9;
  }
  v9 = v4 - 1;
  if ( !v9 )
  {
    v10.QuadPart = qword_1402F4EF8;
    if ( v6.QuadPart < qword_1402F4EF8 )
      v10 = v6;
    qword_1402F4EF8 = v10.QuadPart;
    v8.QuadPart = qword_140328C68;
    if ( v6.QuadPart > qword_140328C68 )
      v8 = v6;
    qword_140328CB0 += v6.QuadPart;
    goto LABEL_8;
  }
  v11 = v9 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( !v12 )
    {
      qword_140328CF0 += v6.QuadPart;
      return (LARGE_INTEGER)qword_140328C88;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      qword_140328CF8 += v6.QuadPart;
      return (LARGE_INTEGER)qword_140328C88;
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
            qword_140341CA0 += v6.QuadPart;
        }
        else
        {
          qword_140328C78 = v6.QuadPart;
        }
      }
      else
      {
        v16.QuadPart = qword_1402F4F08;
        if ( v6.QuadPart < qword_1402F4F08 )
          v16 = v6;
        qword_1402F4F08 = v16.QuadPart;
        v17.QuadPart = qword_140328C80;
        if ( v6.QuadPart > qword_140328C80 )
          v17 = v6;
        qword_140328C98 += v6.QuadPart;
        qword_140328C90 += v6.QuadPart;
        ++dword_140328C70;
        qword_140328C80 = v17.QuadPart;
      }
      return (LARGE_INTEGER)qword_140328C88;
    }
    qword_140328C98 += v6.QuadPart;
    qword_140328CC0 = v6.QuadPart;
  }
  else
  {
    qword_140328CA0 += v6.QuadPart;
    qword_140328CD0 = v6.QuadPart;
  }
LABEL_9:
  qword_140328C90 += v6.QuadPart;
  return (LARGE_INTEGER)qword_140328C88;
}
