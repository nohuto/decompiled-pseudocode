/*
 * XREFs of AnFwpProgressIndicatorTimer @ 0x14075E2F0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x140150248 (BgpFwQueryPerformanceCounter.c)
 *     BgpFwReleaseLock @ 0x140150250 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140150298 (BgpFwAcquireLock.c)
 *     BgpTxtDisplayCharacter @ 0x140150300 (BgpTxtDisplayCharacter.c)
 *     LogFwStat @ 0x14075E428 (LogFwStat.c)
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
  if ( byte_140356CF7 )
  {
    v4 = BgpFwQueryPerformanceCounter(&PerformanceFrequency);
    v5 = word_140316618;
    v6 = v4;
    if ( word_140316618 != -7989
      && (qword_1403539B0 + 10 * (PerformanceFrequency.QuadPart / 33) / 100 - v4.QuadPart)
       / (PerformanceFrequency.QuadPart
        / 33) >= 2 )
    {
      v5 = ++word_140316618;
    }
    if ( (unsigned __int16)(v5 + 8110) <= 0x79u )
    {
      LogFwStat(1LL, 0LL, &PerformanceFrequency);
      BgpTxtDisplayCharacter(qword_140323D80, (unsigned __int16)word_140316618, 0, 0LL, 0LL, v7);
      LogFwStat(0LL, 0LL, &PerformanceFrequency);
      v5 = word_140316618;
    }
    if ( v5 == -7989 )
      word_140316618 = -8118;
    else
      word_140316618 = v5 + 1;
    qword_1403539B0 = v6.QuadPart;
  }
  BgpFwReleaseLock();
}
