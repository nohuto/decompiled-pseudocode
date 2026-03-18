/*
 * XREFs of ?bUnMapImmediate@SURFACE@@QEAAHPEAXPEAVDC@@@Z @ 0x1C0025C74
 * Callers:
 *     ?bUnMapImmediate@SURFREFVIEW@@QEAAHXZ @ 0x1C00757D0 (-bUnMapImmediate@SURFREFVIEW@@QEAAHXZ.c)
 * Callees:
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1C000D7B8 (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x1C000D8F0 (-vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0026A70 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0074AF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall SURFACE::bUnMapImmediate(SURFACE *this, void *a2, struct DC *a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  HSEMAPHORE v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = (HSEMAPHORE)a3;
  if ( (unsigned int)SURFACE::bRedirectionBitmap(this) && (*((_WORD *)this + 51) & 0x800) != 0 )
  {
    v8 = ghsemMapRot;
    EngAcquireSemaphore(ghsemMapRot);
    if ( *((_QWORD *)this + 33) )
    {
      v4 = (_QWORD *)((char *)this + 448);
      v5 = *((_QWORD *)this + 56);
      v6 = (_QWORD *)*((_QWORD *)this + 57);
      if ( *(SURFACE **)(v5 + 8) != (SURFACE *)((char *)this + 448) || (_QWORD *)*v6 != v4 )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      *((_QWORD *)this + 57) = (char *)this + 448;
      *v4 = v4;
      if ( *((_QWORD *)this + 9) )
        MmUnmapViewOfSection(**((_QWORD **)this + 33));
    }
    if ( (*((_DWORD *)this + 29) & 1) == 0 )
    {
      *((_QWORD *)this + 9) = 0LL;
      *((_QWORD *)this + 10) = 0LL;
    }
    *((_QWORD *)this + 33) = 0LL;
    *((_QWORD *)this + 32) = 0LL;
    W32PIDLOCK::vUnlockSingleThread((SURFACE *)((char *)this + 272));
    W32PIDLOCK::vUnlockSimple((SURFACE *)((char *)this + 272));
    SEMOBJ::vUnlock((SEMOBJ *)&v8);
  }
  return 1LL;
}
