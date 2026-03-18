/*
 * XREFs of xxxCallMouseHook @ 0x1C01076C8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     xxxCallHook2 @ 0x1C005BCC0 (xxxCallHook2.c)
 *     PhkFirstValid @ 0x1C0084424 (PhkFirstValid.c)
 */

_BOOL8 __fastcall xxxCallMouseHook(__int64 a1, __int64 a2, int a3)
{
  __int64 Valid; // rax
  unsigned int v4; // r10d
  int *v5; // r9
  unsigned int v6; // r11d
  char v8; // [rsp+40h] [rbp+8h] BYREF

  Valid = PhkFirstValid(gptiCurrent, 7LL, (unsigned int)-a3, a2);
  return xxxCallHook2(Valid, v6, v4, v5, (__int64)&v8) != 0;
}
