/*
 * XREFs of ?DetachInUseDisplays@CDesktopRenderTarget@@AEAAXXZ @ 0x1800497D0
 * Callers:
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180049850 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z @ 0x180054D30 (-GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z.c)
 */

void __fastcall CDesktopRenderTarget::DetachInUseDisplays(CDesktopRenderTarget *this)
{
  __int64 i; // rbx
  __int64 v3; // rsi
  CMILRefCountBase *v4; // rcx
  struct CDisplay *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 28); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 11) + 8 * i);
    if ( (int)CDisplaySet::GetDisplayByHMonitorNoRefNoConst(
                *((CDisplaySet **)this + 24),
                *(HMONITOR *)(*(_QWORD *)(*(_QWORD *)(v3 + 80) + 152LL) + 32LL),
                &v5) >= 0 )
    {
      v4 = *(CMILRefCountBase **)(v3 + 80);
      if ( v4 )
      {
        CMILRefCountBase::Release(v4);
        *(_QWORD *)(v3 + 80) = 0LL;
      }
    }
  }
}
