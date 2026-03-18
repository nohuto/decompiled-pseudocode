/*
 * XREFs of ?bUnMapImmediate@SURFACE@@QEAAHPEAXPEAVDC@@@Z @ 0x1C0035B84
 * Callers:
 *     ?bUnMapImmediate@SURFREFVIEW@@QEAAHXZ @ 0x1C0036ED0 (-bUnMapImmediate@SURFREFVIEW@@QEAAHXZ.c)
 * Callees:
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1C0012238 (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x1C00122E0 (-vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0036DE4 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C006E380 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall SURFACE::bUnMapImmediate(SURFACE *this, void *a2, struct DC *a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  HSEMAPHORE v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = (HSEMAPHORE)a3;
  if ( (unsigned int)SURFACE::bRedirectionBitmap(this) && (*((_WORD *)this + 51) & 0x800) != 0 )
  {
    v9 = ghsemMapRot;
    EngAcquireSemaphore(ghsemMapRot);
    if ( *((_QWORD *)this + 32) )
    {
      v4 = (_QWORD *)((char *)this + 440);
      v5 = *((_QWORD *)this + 55);
      v6 = (_QWORD *)*((_QWORD *)this + 56);
      if ( *(SURFACE **)(v5 + 8) != (SURFACE *)((char *)this + 440) || (_QWORD *)*v6 != v4 )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      *((_QWORD *)this + 56) = (char *)this + 440;
      *v4 = v4;
      v7 = *((_QWORD *)this + 9);
      if ( v7 )
        MmUnmapViewOfSection(**((_QWORD **)this + 32), v7);
    }
    if ( (*((_DWORD *)this + 29) & 1) == 0 )
    {
      *((_QWORD *)this + 9) = 0LL;
      *((_QWORD *)this + 10) = 0LL;
    }
    *((_QWORD *)this + 32) = 0LL;
    *((_QWORD *)this + 31) = 0LL;
    W32PIDLOCK::vUnlockSingleThread((SURFACE *)((char *)this + 264));
    W32PIDLOCK::vUnlockSimple((SURFACE *)((char *)this + 264));
    SEMOBJ::vUnlock((SEMOBJ *)&v9);
  }
  return 1LL;
}
