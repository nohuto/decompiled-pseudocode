/*
 * XREFs of DxgkCddDestroyVirtualFrameBuffer @ 0x1C00B0910
 * Callers:
 *     ?DxgkCddDestroy@@YAJIIQEAXE@Z @ 0x1C00AF7A0 (-DxgkCddDestroy@@YAJIIQEAXE@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00AFD1C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCddDestroyVirtualFrameBuffer(__int64 a1)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v2; // rcx
  __int64 v3; // rcx
  void *v4; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  Global = DXGGLOBAL::GetGlobal(a1);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (struct DXGGLOBAL *)((char *)Global + 1224));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v4 = (void *)*((_QWORD *)DXGGLOBAL::GetGlobal(v2) + 136);
  if ( v4 )
  {
    InbvNotifyDisplayOwnershipChange(0LL, 0LL);
    ExFreePoolWithTag(v4, 0x4B677844u);
    *((_QWORD *)DXGGLOBAL::GetGlobal(v6) + 136) = 0LL;
    *((_QWORD *)DXGGLOBAL::GetGlobal(v7) + 152) = 0LL;
  }
  *((_DWORD *)DXGGLOBAL::GetGlobal(v3) + 303) = 4;
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  return 0LL;
}
