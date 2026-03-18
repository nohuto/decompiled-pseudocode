/*
 * XREFs of ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C012F31C
 * Callers:
 *     ?EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ @ 0x1C012C480 (-EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ.c)
 * Callees:
 *     ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x1C0019658 (--_GBLTQUEUE@@QEAAPEAXI@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x1C00E4EC4 (--0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z.c)
 *     ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1C00E50E0 (-Startup@BLTQUEUE@@QEAAJXZ.c)
 *     ?UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z @ 0x1C015FB18 (-UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z.c)
 */

__int64 __fastcall REMOTE_VSYNC::StartEmulation(REMOTE_VSYNC *this)
{
  BLTQUEUE *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax

  v2 = (BLTQUEUE *)operator new[](0x968uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v2 )
    v2 = BLTQUEUE::BLTQUEUE(v2, 0LL, -1, (struct _KEVENT *)((char *)this + 8), 0);
  *(_QWORD *)this = v2;
  if ( v2 )
  {
    v9 = BLTQUEUE::Startup(v2);
    v11 = v9;
    if ( v9 < 0 )
    {
      v12 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v12 + 24) = v11;
      WdLogEvent5_WdError(v12);
    }
    else
    {
      BLTQUEUE::UpdateDisplayModeInfo(*(BLTQUEUE **)this, (struct _D3DDDI_RATIONAL)0x100000020LL, 0x300u);
    }
    if ( (int)v11 < 0 )
    {
      if ( *(_QWORD *)this )
      {
        BLTQUEUE::`scalar deleting destructor'(*(BLTQUEUE **)this, 1);
        *(_QWORD *)this = 0LL;
      }
    }
    return (unsigned int)v11;
  }
  else
  {
    v7 = WdLogNewEntry5_WdLowResource(v4, v3, v5, v6);
    *(_QWORD *)(v7 + 24) = 29594LL;
    WdLogEvent5_WdLowResource(v7);
    return 3221225495LL;
  }
}
