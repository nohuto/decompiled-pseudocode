/*
 * XREFs of ?xxxFreeImeKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00E7338
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C00E67CC (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C00E7380 (xxxImmUnloadThreadsLayout.c)
 *     ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z @ 0x1C00E749C (-GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z.c)
 */

void __fastcall xxxFreeImeKeyboardLayouts(struct tagWINDOWSTATION *a1)
{
  unsigned int ThreadsWithPKL; // eax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF
  struct tagTHREADINFO **v6; // [rsp+50h] [rbp+8h] BYREF

  if ( (*((_DWORD *)a1 + 8) & 4) == 0 )
  {
    ThreadsWithPKL = GetThreadsWithPKL(&v6, (struct _TL *)v5, 0LL);
    if ( ThreadsWithPKL )
    {
      xxxImmUnloadThreadsLayout(v6, ThreadsWithPKL, 0LL, 2LL);
      PopAndFreeAlwaysW32ThreadLock((__int64)v5, v2, v3, v4);
    }
  }
}
