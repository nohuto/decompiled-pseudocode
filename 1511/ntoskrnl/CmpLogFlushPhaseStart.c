/*
 * XREFs of CmpLogFlushPhaseStart @ 0x1404B77AC
 * Callers:
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 * Callees:
 *     _TlgWrite @ 0x140092474 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall CmpLogFlushPhaseStart(__int64 a1, char a2)
{
  TLG_STATUS result; // eax
  char v3; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  char *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  if ( stru_1402CFD30.LevelPlus1 > 4 )
  {
    v3 = a2;
    v5 = &v3;
    v7 = 0;
    v6 = 1;
    return TlgWrite(&stru_1402CFD30, &unk_1402535A2, 0LL, 0LL, 3u, &v4);
  }
  return result;
}
