/*
 * XREFs of ?xxxFreeImeKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0098BAC
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0097694 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C0098BF4 (xxxImmUnloadThreadsLayout.c)
 *     ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z @ 0x1C0098D10 (-GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z.c)
 */

void __fastcall xxxFreeImeKeyboardLayouts(struct tagWINDOWSTATION *a1)
{
  unsigned int ThreadsWithPKL; // eax
  _BYTE v2[40]; // [rsp+20h] [rbp-28h] BYREF
  struct tagTHREADINFO **v3; // [rsp+50h] [rbp+8h] BYREF

  if ( (*((_DWORD *)a1 + 8) & 4) == 0 )
  {
    ThreadsWithPKL = GetThreadsWithPKL(&v3, (struct _TL *)v2, 0LL);
    if ( ThreadsWithPKL )
    {
      xxxImmUnloadThreadsLayout(v3, ThreadsWithPKL, 0LL, 2LL);
      PopAndFreeAlwaysW32ThreadLock((__int64)v2);
    }
  }
}
