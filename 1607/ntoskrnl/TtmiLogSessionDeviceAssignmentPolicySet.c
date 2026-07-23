/*
 * XREFs of TtmiLogSessionDeviceAssignmentPolicySet @ 0x14067B9A8
 * Callers:
 *     TtmInitCurrentSession @ 0x14067879C (TtmInitCurrentSession.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x140679CE4 (TtmpDispatchSetDefaultDeviceAssignment.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall TtmiLogSessionDeviceAssignmentPolicySet(char a1)
{
  int SessionId; // eax
  char v3; // [rsp+30h] [rbp-68h] BYREF
  int v4; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  char *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  if ( stru_1407478B0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1407478B0, 1uLL) )
    {
      SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
      v8 = 0;
      v11 = 0;
      v4 = SessionId;
      v6 = &v4;
      v9 = &v3;
      v3 = a1;
      v7 = 4;
      v10 = 1;
      TlgWrite(&stru_1407478B0, &unk_14027DDCA, 0LL, 0LL, 4u, &pData);
    }
  }
}
