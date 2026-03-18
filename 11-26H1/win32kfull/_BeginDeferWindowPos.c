/*
 * XREFs of _BeginDeferWindowPos @ 0x140179558
 * Callers:
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1401790C4 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     NtUserBeginDeferWindowPos @ 0x140179510 (NtUserBeginDeferWindowPos.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     AllocateCvr @ 0x1401795D0 (AllocateCvr.c)
 */

__int64 __fastcall BeginDeferWindowPos(__int64 a1)
{
  unsigned int v1; // edi
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx

  v1 = a1;
  v2 = PtiCurrent(a1);
  LOBYTE(v3) = 4;
  v4 = HMAllocObject(v2, 0LL, v3, 48LL);
  v5 = v4;
  if ( v4 )
  {
    v6 = 8LL;
    if ( v1 )
      v6 = v1;
    if ( (unsigned int)AllocateCvr(v4, v6) )
    {
      *(_DWORD *)(v5 + 24) |= 2u;
      return v5;
    }
    HMFreeObject(v5);
  }
  return 0LL;
}
