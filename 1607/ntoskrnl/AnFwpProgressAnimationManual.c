/*
 * XREFs of AnFwpProgressAnimationManual @ 0x1407253F8
 * Callers:
 *     AnFwDisplayProgressIndicator @ 0x140727494 (AnFwDisplayProgressIndicator.c)
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x14012775C (BgpFwQueryPerformanceCounter.c)
 *     BgpTxtDisplayCharacter @ 0x1401277F4 (BgpTxtDisplayCharacter.c)
 *     LogFwStat @ 0x140727310 (LogFwStat.c)
 */

LONGLONG AnFwpProgressAnimationManual()
{
  LARGE_INTEGER v0; // rdi
  LONGLONG v1; // rbx
  LONGLONG v2; // rdx
  LONGLONG result; // rax
  __int16 v4; // cx
  __int64 v5; // rbx
  int v6; // [rsp+28h] [rbp-30h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp+8h] BYREF

  v0 = BgpFwQueryPerformanceCounter(&PerformanceFrequency);
  v1 = PerformanceFrequency.QuadPart / 33;
  v2 = 10 * (PerformanceFrequency.QuadPart / 33) / 100;
  result = qword_140328C58;
  if ( v2 + v0.QuadPart >= qword_140328C58 + PerformanceFrequency.QuadPart / 33 )
  {
    v4 = word_1402F4E60;
    if ( word_1402F4E60 != -7989 && (qword_140328C58 - v2 - v0.QuadPart) / v1 >= 2 )
      v4 = ++word_1402F4E60;
    if ( (unsigned __int16)(v4 + 8110) <= 0x79u )
    {
      LogFwStat(1LL, 1LL, 0LL);
      BgpTxtDisplayCharacter(qword_1402FA040, (unsigned __int16)word_1402F4E60, 0, 0LL, 0LL, v6);
      LogFwStat(0LL, 1LL, 0LL);
      v4 = word_1402F4E60;
    }
    if ( v4 == -7989 )
      word_1402F4E60 = -8118;
    else
      word_1402F4E60 = v4 + 1;
    qword_140328C58 = v0.QuadPart;
    v5 = v1 / 2;
    result = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - v0.QuadPart;
    if ( result > v5 )
    {
      result = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - v5;
      qword_140328C58 = result;
    }
  }
  return result;
}
