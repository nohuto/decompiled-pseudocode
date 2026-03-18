/*
 * XREFs of xxxCallMouseHook @ 0x1C0129C98
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     xxxCallHook2 @ 0x1C0083C30 (xxxCallHook2.c)
 *     PhkFirstValid @ 0x1C00A3CFC (PhkFirstValid.c)
 */

_BOOL8 xxxCallMouseHook()
{
  __int64 Valid; // rax
  unsigned int v1; // r10d
  int *v2; // r9
  unsigned int v3; // r11d
  int v5; // [rsp+40h] [rbp+8h] BYREF

  Valid = PhkFirstValid(gptiCurrent, 7);
  return xxxCallHook2(Valid, v3, v1, v2, &v5, 0) != 0;
}
