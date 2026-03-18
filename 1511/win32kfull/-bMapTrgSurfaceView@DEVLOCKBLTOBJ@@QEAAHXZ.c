/*
 * XREFs of ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0030274
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C002F1B0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C003038C (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C001B660 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C028DB54 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bMapTrgSurfaceView(DEVLOCKBLTOBJ *this)
{
  struct XDCOBJ *v1; // r14
  __int64 v3; // r8
  __int64 v4; // rdi
  unsigned int v5; // eax
  unsigned int v6; // esi

  v1 = (DEVLOCKBLTOBJ *)((char *)this + 80);
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    if ( (*((_DWORD *)this + 18) & 0x1000) != 0 )
    {
      v4 = *(_QWORD *)(v3 + 512);
      if ( v4 )
      {
        v5 = SURFACE::Map(*(_QWORD *)(v3 + 512), this, v3);
        v6 = v5;
        if ( v5 <= 1 )
        {
          if ( (*(_DWORD *)(v4 + 112) & 0x800) != 0 && *(_QWORD *)(v4 + 240) && (unsigned int)bHookRedir(v1) )
            *((_DWORD *)this + 18) |= 0x400u;
          if ( (*(_DWORD *)(v4 + 112) & 0x10) != 0 && (unsigned int)bHookBmpDrv(v1) )
            *((_DWORD *)this + 18) |= 0x2000u;
          if ( v6 == 1 )
            *((_DWORD *)this + 18) |= 0x40u;
        }
        else if ( v5 == 2 )
        {
          return 0LL;
        }
      }
    }
  }
  return 1LL;
}
