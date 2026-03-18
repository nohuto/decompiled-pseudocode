/*
 * XREFs of xxxCallMouseHook @ 0x1C00FAA60
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     PhkFirstValid @ 0x1C004A274 (PhkFirstValid.c)
 *     xxxCallHook2 @ 0x1C006C0B0 (xxxCallHook2.c)
 */

_BOOL8 xxxCallMouseHook()
{
  __int64 Valid; // rax
  unsigned int v1; // r10d
  int *v2; // r9
  unsigned int v3; // r11d
  int v5; // [rsp+40h] [rbp+8h] BYREF

  Valid = PhkFirstValid(gptiCurrent, 7);
  return xxxCallHook2(Valid, v3, v1, v2, &v5) != 0;
}
