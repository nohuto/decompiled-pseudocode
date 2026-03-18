/*
 * XREFs of ?DxgkPresentVirtualFrameBuffer@@YAJIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00CCD20
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000C6F0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000C7D0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C00CCDE4 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 */

__int64 __fastcall DxgkPresentVirtualFrameBuffer(
        unsigned int a1,
        unsigned int a2,
        const struct _D3DKMT_DISPLAYMODE *a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  struct DXGGLOBAL *v12; // rax
  unsigned int v13; // ebx
  __int64 v15; // rbx
  _BYTE v16[16]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v17[24]; // [rsp+40h] [rbp-18h] BYREF
  struct DXGCONTEXT *v18; // [rsp+78h] [rbp+20h] BYREF

  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v18 = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v17, a1, Current, &v18, 0);
    if ( v18 )
    {
      Global = DXGGLOBAL::GetGlobal(v7);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct DXGGLOBAL *)((char *)Global + 1224));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
      v10 = *((_QWORD *)DXGGLOBAL::GetGlobal(v9) + 136);
      v12 = DXGGLOBAL::GetGlobal(v11);
      if ( v10 || *((_DWORD *)v12 + 270) != 1 )
        v13 = PresentCddShadowBuffer(v18, a2);
      else
        v13 = -1073741823;
      if ( v16[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
    }
    else
    {
      v13 = 0;
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v17);
    return v13;
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    *(_QWORD *)(v15 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
}
