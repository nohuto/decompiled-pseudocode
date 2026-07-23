/*
 * XREFs of TtmpCallSetDisplayState @ 0x1406773F8
 * Callers:
 *     TtmpPushTerminalState @ 0x14067760C (TtmpPushTerminalState.c)
 * Callees:
 *     TtmiLogError @ 0x14054710C (TtmiLogError.c)
 *     TtmpStartCallout @ 0x140677730 (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x1406777A0 (TtmpStopCallout.c)
 */

void __fastcall TtmpCallSetDisplayState(int a1, __int64 a2, unsigned int a3)
{
  __int64 (__fastcall *v3)(_QWORD, _QWORD); // rdi
  int v6; // ebx
  _BYTE v7[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a2 + 56);
  if ( v3 )
  {
    TtmpStartCallout((unsigned int)v7, a1, a2, 1400072516, a3);
    v6 = v3(*(_QWORD *)(a2 + 24), a3);
    TtmpStopCallout(v7, (unsigned int)v6);
    if ( v6 < 0 )
      TtmiLogError("TtmpCallSetDisplayState", 1464, v6, -1);
  }
}
