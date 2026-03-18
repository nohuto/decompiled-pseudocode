/*
 * XREFs of PdcPoControlMonitor @ 0x140637658
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     PsInvokeWin32Callout @ 0x1403F6790 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PdcPoControlMonitor(__int64 a1, int a2)
{
  _QWORD v4[7]; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+68h] [rbp+10h] BYREF

  v5 = a2;
  memset(v4, 0, 0x28uLL);
  LODWORD(v4[0]) = 3;
  BYTE4(v4[0]) = 0;
  LODWORD(v4[1]) = 8;
  v4[2] = a1;
  LODWORD(v4[3]) = 0;
  v4[4] = 0LL;
  return PsInvokeWin32Callout((_KPROCESS *)5, (__int64)v4, 1, (int)&v5);
}
