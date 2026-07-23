/*
 * XREFs of HvlpInitializeBootProcessor @ 0x1401BB95C
 * Callers:
 *     HvlPhase0Initialize @ 0x14057DA80 (HvlPhase0Initialize.c)
 * Callees:
 *     HvlEnlightenProcessor @ 0x14013A0C8 (HvlEnlightenProcessor.c)
 *     HvlpMapStatisticsPage @ 0x1401BBA98 (HvlpMapStatisticsPage.c)
 */

__int64 __fastcall HvlpInitializeBootProcessor(__int64 a1)
{
  __int64 v1; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v3; // rax
  signed __int32 v5[8]; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0LL;
  if ( HvlHypervisorConnected )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedOr(v5, 0);
    v8 = 0LL;
    v7 = 0LL;
    if ( (HvlpFlags & 1) != 0 && (HvlpFlags & 2) == 0 )
    {
      v3 = qword_1402F2428(a1, 1LL, &v8);
      if ( !v3 )
        return 3221225626LL;
      CurrentPrcb->VirtualApicAssist = (void *)v3;
    }
    if ( (HvlpRootFlags & 0x10) != 0 )
    {
      v6[1] = 0LL;
      v6[0] = 0LL;
      if ( (int)HvlpMapStatisticsPage(2LL, v6, &v7) >= 0 )
        v1 = qword_1402F2430(v7, 1LL, 4LL);
      CurrentPrcb->StatisticsPage = (unsigned __int64 *)v1;
    }
    HvlEnlightenProcessor();
  }
  return 0LL;
}
