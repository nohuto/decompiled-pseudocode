/*
 * XREFs of AnFwpProgressIndicatorTimer @ 0x1406DB2A8
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x14011BFC4 (BgpFwQueryPerformanceCounter.c)
 *     BgpFwReleaseLock @ 0x14011BFCC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14011C010 (BgpFwAcquireLock.c)
 *     BgpTxtDisplayCharacter @ 0x14011C070 (BgpTxtDisplayCharacter.c)
 *     LogFwStat @ 0x1406DB3E0 (LogFwStat.c)
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
  if ( byte_1403069E7 )
  {
    v4 = BgpFwQueryPerformanceCounter(&PerformanceFrequency);
    v5 = word_1402C7540;
    v6 = v4;
    if ( word_1402C7540 != -7989
      && (qword_140305C30 + 10 * (PerformanceFrequency.QuadPart / 33) / 100 - v4.QuadPart)
       / (PerformanceFrequency.QuadPart
        / 33) >= 2 )
    {
      v5 = ++word_1402C7540;
    }
    if ( (unsigned __int16)(v5 + 8110) <= 0x79u )
    {
      LogFwStat(1LL, 0LL, &PerformanceFrequency);
      BgpTxtDisplayCharacter(qword_1402D4C40, (unsigned __int16)word_1402C7540, 0, 0LL, 0LL, v7);
      LogFwStat(0LL, 0LL, &PerformanceFrequency);
      v5 = word_1402C7540;
    }
    if ( v5 == -7989 )
      word_1402C7540 = -8118;
    else
      word_1402C7540 = v5 + 1;
    qword_140305C30 = v6.QuadPart;
  }
  BgpFwReleaseLock();
}
