/*
 * XREFs of PoSessionBuiltinPanelState @ 0x14020D22C
 * Callers:
 *     TtmpCallSetBuiltinPanelState @ 0x1406773A0 (TtmpCallSetBuiltinPanelState.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     PsInvokeWin32Callout @ 0x140427EE0 (PsInvokeWin32Callout.c)
 *     PopBlockSessionSwitch @ 0x14066FE80 (PopBlockSessionSwitch.c)
 */

__int64 __fastcall PoSessionBuiltinPanelState(__int64 a1, int a2)
{
  int v2; // ebx
  _QWORD v4[6]; // [rsp+20h] [rbp-30h] BYREF
  int v5; // [rsp+60h] [rbp+10h] BYREF
  int v6; // [rsp+68h] [rbp+18h] BYREF
  char v7; // [rsp+70h] [rbp+20h] BYREF

  v6 = a2;
  v2 = a1;
  LOBYTE(a1) = 1;
  PopBlockSessionSwitch(a1, &v7);
  v5 = v2;
  memset(v4, 0, 0x28uLL);
  LODWORD(v4[0]) = 7;
  BYTE4(v4[0]) = 0;
  LODWORD(v4[3]) = 0;
  v4[4] = 0LL;
  LODWORD(v4[1]) = 4;
  v4[2] = &v5;
  PsInvokeWin32Callout(5LL, v4, 1LL, &v6);
  return PopBlockSessionSwitch(0LL, &v7);
}
