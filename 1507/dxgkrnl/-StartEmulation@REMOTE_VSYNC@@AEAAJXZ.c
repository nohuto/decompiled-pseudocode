/*
 * XREFs of ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C0128CC0
 * Callers:
 *     ?EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ @ 0x1C01262A0 (-EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ.c)
 * Callees:
 *     ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x1C0017B84 (--_GBLTQUEUE@@QEAAPEAXI@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x1C00D219C (--0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z.c)
 *     ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1C00D23D8 (-Startup@BLTQUEUE@@QEAAJXZ.c)
 *     ?UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z @ 0x1C015B824 (-UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z.c)
 */

__int64 __fastcall REMOTE_VSYNC::StartEmulation(REMOTE_VSYNC *this)
{
  BLTQUEUE *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax

  v2 = (BLTQUEUE *)operator new[](0x950uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v2 )
    v2 = BLTQUEUE::BLTQUEUE(v2, 0LL, -1, (struct _KEVENT *)((char *)this + 8), 0);
  *(_QWORD *)this = v2;
  if ( v2 )
  {
    v6 = BLTQUEUE::Startup(v2);
    v8 = v6;
    if ( v6 < 0 )
    {
      v9 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v9 + 24) = v8;
      WdLogEvent5_WdError(v9);
    }
    else
    {
      BLTQUEUE::UpdateDisplayModeInfo(*(BLTQUEUE **)this, (struct _D3DDDI_RATIONAL)0x100000020LL, 0x300u);
    }
    if ( (int)v8 < 0 )
    {
      if ( *(_QWORD *)this )
      {
        BLTQUEUE::`scalar deleting destructor'(*(BLTQUEUE **)this, 1);
        *(_QWORD *)this = 0LL;
      }
    }
    return (unsigned int)v8;
  }
  else
  {
    v4 = WdLogNewEntry5_WdLowResource(v3);
    *(_QWORD *)(v4 + 24) = 28933LL;
    WdLogEvent5_WdLowResource(v4);
    return 3221225495LL;
  }
}
