/*
 * XREFs of ??0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z @ 0x1C000E734
 * Callers:
 *     ??0DXGDIAGNOSTICSWITHMUTEX@@QEAA@IW4_POOL_TYPE@@@Z @ 0x1C0020864 (--0DXGDIAGNOSTICSWITHMUTEX@@QEAA@IW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C00D4630 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C00DD684 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

DXGDIAGNOSTICS *__fastcall DXGDIAGNOSTICS::DXGDIAGNOSTICS(DXGDIAGNOSTICS *this, unsigned int a2, enum _POOL_TYPE a3)
{
  _DWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // rax

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  v5 = operator new[](a2, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 2) = v5;
  if ( v5 )
  {
    *(_DWORD *)this = a2;
    *v5 = 0;
  }
  else
  {
    v11 = WdLogNewEntry5_WdLowResource(v7, v6, v8, v9);
    *(_QWORD *)(v11 + 24) = *(unsigned int *)this;
    WdLogEvent5_WdLowResource(v11);
  }
  return this;
}
