/*
 * XREFs of KiGenerateHeteroSets @ 0x1401C9790
 * Callers:
 *     KiUpdateRunTime @ 0x140045DB0 (KiUpdateRunTime.c)
 *     KeClockInterruptNotify @ 0x140046990 (KeClockInterruptNotify.c)
 *     KiQuantumEnd @ 0x14007AAB0 (KiQuantumEnd.c)
 *     KiHeteroChooseTargetProcessor @ 0x1401C97F0 (KiHeteroChooseTargetProcessor.c)
 *     KiSetHeteroPolicyThread @ 0x1401C9B74 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGenerateHeteroSets(__int64 a1, __int64 a2, int a3, _QWORD *a4, __int64 *a5)
{
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 result; // rax

  v5 = (_QWORD *)(a1 + 16 * (a3 + 11LL));
  v6 = a2 & *v5;
  v7 = a2 & v5[1];
  if ( v7 )
  {
    result = 0LL;
    a2 = v6;
    if ( !v6 )
      a2 = v7;
  }
  else
  {
    v7 = a2;
    result = 1LL;
  }
  *a4 = a2;
  if ( v7 )
    *a5 = v7;
  return result;
}
