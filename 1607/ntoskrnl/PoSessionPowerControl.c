/*
 * XREFs of PoSessionPowerControl @ 0x140674D68
 * Callers:
 *     TtmpSessionPowerControl @ 0x140678FC0 (TtmpSessionPowerControl.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     PsInvokeWin32Callout @ 0x140429010 (PsInvokeWin32Callout.c)
 *     PopBlockSessionSwitch @ 0x14066FD9C (PopBlockSessionSwitch.c)
 */

__int64 __fastcall PoSessionPowerControl(unsigned __int8 a1, int a2, int a3)
{
  _QWORD v6[6]; // [rsp+20h] [rbp-30h] BYREF
  int v7; // [rsp+70h] [rbp+20h] BYREF
  int v8; // [rsp+80h] [rbp+30h] BYREF
  int v9; // [rsp+88h] [rbp+38h] BYREF
  int v10; // [rsp+8Ch] [rbp+3Ch]

  v8 = a3;
  PopBlockSessionSwitch(1, &v7);
  v10 = a2;
  v9 = a1;
  memset(v6, 0, 0x28uLL);
  LODWORD(v6[0]) = 6;
  BYTE4(v6[0]) = 0;
  LODWORD(v6[3]) = 0;
  v6[4] = 0LL;
  LODWORD(v6[1]) = 8;
  v6[2] = &v9;
  PsInvokeWin32Callout(5, (__int64)v6, 1, (__int64)&v8);
  return PopBlockSessionSwitch(0, &v7);
}
