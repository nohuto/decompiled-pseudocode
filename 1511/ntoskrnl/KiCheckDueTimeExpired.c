/*
 * XREFs of KiCheckDueTimeExpired @ 0x14002A094
 * Callers:
 *     KeWaitForAlertByThreadId @ 0x1400297D0 (KeWaitForAlertByThreadId.c)
 *     KiWaitForAllObjects @ 0x1400DECEC (KiWaitForAllObjects.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 */

__int64 __fastcall KiCheckDueTimeExpired(__int64 a1, int a2, unsigned __int64 a3)
{
  unsigned int v3; // r11d
  unsigned __int64 v6; // rax

  v3 = 0;
  if ( a2 == 2 )
  {
    v6 = KiQueryUnbiasedInterruptTime(0LL) - *(_QWORD *)(a1 + 248);
LABEL_5:
    LOBYTE(v3) = v6 > a3;
    return v3;
  }
  if ( !a2 )
    return 0LL;
  if ( a3 )
  {
    v6 = MEMORY[0xFFFFF78000000014];
    goto LABEL_5;
  }
  return 1LL;
}
