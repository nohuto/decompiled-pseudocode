/*
 * XREFs of ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C00CEB64
 * Callers:
 *     ?EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ @ 0x1C00CEC04 (-EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ.c)
 * Callees:
 *     ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x1C00262F4 (--_GBLTQUEUE@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x1C00CEDE4 (--0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z.c)
 *     ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1C00CF074 (-Startup@BLTQUEUE@@QEAAJXZ.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C00CF16C (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z @ 0x1C00CF1C0 (-UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z.c)
 */

__int64 __fastcall REMOTE_VSYNC::StartEmulation(REMOTE_VSYNC *this)
{
  BLTQUEUE *v2; // rax
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v8; // rax
  __int64 v9; // rax

  v2 = (BLTQUEUE *)operator new(0xA48uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v2 )
    v2 = BLTQUEUE::BLTQUEUE(v2, 0LL, 0xFFFFFFFF, (struct _KEVENT *)((char *)this + 8), 0);
  *(_QWORD *)this = v2;
  if ( v2 )
  {
    v4 = BLTQUEUE::Startup(v2);
    v6 = v4;
    if ( v4 < 0 )
    {
      v9 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v9 + 24) = v6;
      WdLogEvent5_WdError(v9);
    }
    else
    {
      BLTQUEUE::EnableVSync(*(BLTQUEUE **)this);
      BLTQUEUE::UpdateDisplayModeInfo(*(BLTQUEUE **)this, (struct _D3DDDI_RATIONAL)0x100000020LL, 0x300u);
    }
    if ( (int)v6 < 0 )
    {
      if ( *(_QWORD *)this )
      {
        BLTQUEUE::`scalar deleting destructor'(*(BLTQUEUE **)this, 1);
        *(_QWORD *)this = 0LL;
      }
    }
    return (unsigned int)v6;
  }
  else
  {
    v8 = WdLogNewEntry5_WdLowResource(v3);
    *(_QWORD *)(v8 + 24) = 42LL;
    WdLogEvent5_WdLowResource(v8);
    return 3221225495LL;
  }
}
