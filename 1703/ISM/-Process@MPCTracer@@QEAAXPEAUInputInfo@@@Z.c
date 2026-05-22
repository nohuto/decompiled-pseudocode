/*
 * XREFs of ?Process@MPCTracer@@QEAAXPEAUInputInfo@@@Z @ 0x180047198
 * Callers:
 *     ?hfxOnInputReport@MPCProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180047310 (-hfxOnInputReport@MPCProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?hydroOnInputReport@MPCProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180047480 (-hydroOnInputReport@MPCProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?hfxOnInputReport@MPCClickerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18004949C (-hfxOnInputReport@MPCClickerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?hydroOnInputReport@MPCClickerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180049670 (-hydroOnInputReport@MPCClickerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Instance@MPCTracing@@KAPEAV1@XZ @ 0x180046FC4 (-Instance@MPCTracing@@KAPEAV1@XZ.c)
 *     ?TraceGestureUsage_@MPCTracing@@QEAAXIII@Z @ 0x1800470E0 (-TraceGestureUsage_@MPCTracing@@QEAAXIII@Z.c)
 */

void __fastcall MPCTracer::Process(MPCTracer *this, struct InputInfo *a2)
{
  _DWORD *v3; // rcx
  MPCTracing *v4; // rcx

  if ( *(_DWORD *)a2 == 512 )
  {
    *(_DWORD *)this += *((_DWORD *)a2 + 176) == 2;
    *((_DWORD *)this + 1) += *((_DWORD *)a2 + 177) == 2;
    *((_DWORD *)this + 2) += *((_DWORD *)a2 + 176) == 7;
    if ( (unsigned int)(*(_DWORD *)this + *((_DWORD *)this + 2) + *((_DWORD *)this + 1)) >= 0xF )
    {
      v3 = (_DWORD *)*((_QWORD *)MPCTracing::Instance() + 1);
      if ( v3 )
      {
        if ( *v3 )
        {
          MPCTracing::Instance();
          MPCTracing::TraceGestureUsage_(v4, *(_DWORD *)this, *((_DWORD *)this + 1), *((_DWORD *)this + 2));
        }
      }
      *(_DWORD *)this = 0;
      *((_DWORD *)this + 1) = 0;
      *((_DWORD *)this + 2) = 0;
    }
  }
}
