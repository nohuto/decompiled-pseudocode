/*
 * XREFs of HvlpInitializeBootProcessor @ 0x1401E68FC
 * Callers:
 *     HvlPhase0Initialize @ 0x1405C0150 (HvlPhase0Initialize.c)
 * Callees:
 *     HvlEnlightenProcessor @ 0x14016337C (HvlEnlightenProcessor.c)
 *     HvlpMapStatisticsPage @ 0x1401E6A38 (HvlpMapStatisticsPage.c)
 */

__int64 __fastcall HvlpInitializeBootProcessor(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v2; // rbx
  __int64 v3; // rax
  signed __int32 v5[8]; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  if ( (HvlpFlags & 1) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v2 = 0LL;
    _InterlockedOr(v5, 0);
    v8 = 0LL;
    v7 = 0LL;
    if ( (HvlpFlags & 2) != 0 && (HvlpFlags & 4) == 0 )
    {
      v3 = qword_1403218D8(a1, 1LL, &v8);
      if ( !v3 )
        return 3221225626LL;
      CurrentPrcb->VirtualApicAssist = (void *)v3;
    }
    if ( (HvlpRootFlags & 0x10) != 0 )
    {
      v6[1] = 0LL;
      v6[0] = 0LL;
      if ( (int)HvlpMapStatisticsPage(2LL, v6, &v7) >= 0 )
        v2 = qword_1403218E0(v7, 1LL, 4LL);
      CurrentPrcb->StatisticsPage = (unsigned __int64 *)v2;
    }
    HvlEnlightenProcessor();
  }
  return 0LL;
}
