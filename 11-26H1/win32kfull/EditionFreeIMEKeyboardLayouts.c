/*
 * XREFs of EditionFreeIMEKeyboardLayouts @ 0x1401C7430
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     ?xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z @ 0x1401C74D8 (-xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z.c)
 */

void __fastcall EditionFreeIMEKeyboardLayouts(__int64 a1)
{
  int v1; // eax
  unsigned int ThreadsWithPKL; // eax
  __int128 v3; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+30h] [rbp-28h]
  struct tagTHREADINFO **v5; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 32);
  v5 = 0LL;
  if ( (v1 & 4) == 0 )
  {
    v3 = 0LL;
    v4 = -1LL;
    ThreadsWithPKL = GetThreadsWithPKL(&v5, &v3, 0LL);
    if ( ThreadsWithPKL )
      xxxImmUnloadThreadsLayout(v5, ThreadsWithPKL, 0LL, 2u);
    if ( v4 != -1 )
      PopAndFreeW32ThreadLock((__int64)&v3);
  }
}
