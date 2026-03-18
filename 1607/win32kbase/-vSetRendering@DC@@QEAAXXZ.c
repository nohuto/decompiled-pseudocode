/*
 * XREFs of ?vSetRendering@DC@@QEAAXXZ @ 0x1C002C870
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C002F4A0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?vLockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x1C000D8C0 (-vLockSingleThread@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x1C000D8F0 (-vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0026A70 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 */

void __fastcall DC::vSetRendering(DC *this)
{
  int v2; // ecx
  char *v3; // rdx
  bool v4; // zf
  __int64 v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-18h]

  v2 = *((_DWORD *)this + 10);
  v3 = (char *)this + 1416;
  if ( (v2 & 1) == 0 )
    v3 = (char *)this + 1408;
  v4 = (*((_DWORD *)this + 9) & 0x4000) == 0;
  *((_QWORD *)this + 177) = *(_QWORD *)v3;
  v6 = *((_OWORD *)this + 89);
  *((_DWORD *)this + 10) = v2 | 1;
  *((_OWORD *)this + 90) = v6;
  if ( !v4 )
  {
    if ( (unsigned int)SURFACE::bRedirectionBitmap(*((SURFACE **)this + 64)) )
    {
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v5 + 272));
      ++*(_DWORD *)(*((_QWORD *)this + 64) + 324LL);
      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(*((_QWORD *)this + 64) + 272LL));
    }
  }
}
