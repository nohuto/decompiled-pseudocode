/*
 * XREFs of TtmpCallSetInputMode @ 0x140677390
 * Callers:
 *     TtmpPushTerminalState @ 0x140677528 (TtmpPushTerminalState.c)
 * Callees:
 *     TtmiLogError @ 0x140546BCC (TtmiLogError.c)
 *     TtmpStartCallout @ 0x14067764C (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x1406776BC (TtmpStopCallout.c)
 */

void __fastcall TtmpCallSetInputMode(int a1, __int64 a2, unsigned int a3)
{
  __int64 (__fastcall *v3)(_QWORD, _QWORD); // rdi
  int v6; // ebx
  _BYTE v7[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a2 + 64);
  if ( v3 )
  {
    TtmpStartCallout((unsigned int)v7, a1, a2, 1299213897, a3);
    v6 = v3(*(_QWORD *)(a2 + 24), a3);
    TtmpStopCallout(v7, (unsigned int)v6);
    if ( v6 < 0 )
      TtmiLogError("TtmpCallSetInputMode", 1519, v6, -1);
  }
}
