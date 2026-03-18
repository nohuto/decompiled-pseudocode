/*
 * XREFs of ?bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C002CEB0
 * Callers:
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C0029D40 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 * Callees:
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C001B660 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C028DB54 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKOBJ::bMapTrgSurfaceView(DEVLOCKOBJ *this)
{
  __int64 v1; // r8
  __int64 v3; // rdi
  unsigned int v4; // eax
  unsigned int v5; // ebp

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
  {
    if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
    {
      v3 = *(_QWORD *)(v1 + 512);
      if ( v3 )
      {
        v4 = SURFACE::Map(*(_QWORD *)(v1 + 512), this, v1);
        v5 = v4;
        if ( v4 <= 1 )
        {
          if ( (*(_DWORD *)(v3 + 112) & 0x800) != 0
            && *(_QWORD *)(v3 + 240)
            && (unsigned int)bHookRedir((DEVLOCKOBJ *)((char *)this + 32)) )
          {
            *((_DWORD *)this + 6) |= 0x400u;
          }
          if ( (*(_DWORD *)(v3 + 112) & 0x10) != 0 && (unsigned int)bHookBmpDrv((DEVLOCKOBJ *)((char *)this + 32)) )
            *((_DWORD *)this + 6) |= 0x2000u;
          if ( v5 == 1 )
            *((_DWORD *)this + 6) |= 0x40u;
        }
        else if ( v4 == 2 )
        {
          return 0LL;
        }
      }
    }
  }
  return 1LL;
}
