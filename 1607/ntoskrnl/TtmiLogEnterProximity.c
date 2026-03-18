/*
 * XREFs of TtmiLogEnterProximity @ 0x14067AE64
 * Callers:
 *     TtmpEnterProximity @ 0x140677FC8 (TtmpEnterProximity.c)
 * Callees:
 *     _TlgWrite @ 0x14000A598 (_TlgWrite.c)
 *     MmGetSessionIdEx @ 0x140024FEC (MmGetSessionIdEx.c)
 *     _TlgKeywordOn @ 0x140088D98 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

void __fastcall TtmiLogEnterProximity(int a1)
{
  int SessionId; // eax
  int v3; // [rsp+30h] [rbp-68h] BYREF
  int v4; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  int *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  if ( stru_1407478B0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1407478B0, 0x400000000001uLL) )
    {
      SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
      v8 = 0;
      v11 = 0;
      v3 = SessionId;
      v6 = &v3;
      v9 = &v4;
      v4 = a1;
      v7 = 4;
      v10 = 4;
      TlgWrite(&stru_1407478B0, &unk_14027DC5C, 0LL, 0LL, 4u, &pData);
    }
  }
}
