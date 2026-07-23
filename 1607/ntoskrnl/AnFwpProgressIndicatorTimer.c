/*
 * XREFs of AnFwpProgressIndicatorTimer @ 0x1407271D8
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x14012775C (BgpFwQueryPerformanceCounter.c)
 *     BgpFwReleaseLock @ 0x140127764 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1401277A0 (BgpFwAcquireLock.c)
 *     BgpTxtDisplayCharacter @ 0x1401277F4 (BgpTxtDisplayCharacter.c)
 *     LogFwStat @ 0x140727310 (LogFwStat.c)
 */

void __fastcall AnFwpProgressIndicatorTimer(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  LARGE_INTEGER v4; // rax
  __int16 v5; // r9
  LARGE_INTEGER v6; // rbx
  int v7; // [rsp+28h] [rbp-30h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-18h] BYREF

  BgpFwAcquireLock();
  if ( byte_140328C50 )
  {
    v4 = BgpFwQueryPerformanceCounter(&PerformanceFrequency);
    v5 = word_1402F4E60;
    v6 = v4;
    if ( word_1402F4E60 != -7989
      && (qword_140328C58 + 10 * (PerformanceFrequency.QuadPart / 33) / 100 - v4.QuadPart)
       / (PerformanceFrequency.QuadPart
        / 33) >= 2 )
    {
      v5 = ++word_1402F4E60;
    }
    if ( (unsigned __int16)(v5 + 8110) <= 0x79u )
    {
      LogFwStat(1LL, 0LL, &PerformanceFrequency);
      BgpTxtDisplayCharacter(qword_1402FA040, (unsigned __int16)word_1402F4E60, 0, 0LL, 0LL, v7);
      LogFwStat(0LL, 0LL, &PerformanceFrequency);
      v5 = word_1402F4E60;
    }
    if ( v5 == -7989 )
      word_1402F4E60 = -8118;
    else
      word_1402F4E60 = v5 + 1;
    qword_140328C58 = v6.QuadPart;
  }
  BgpFwReleaseLock();
}
