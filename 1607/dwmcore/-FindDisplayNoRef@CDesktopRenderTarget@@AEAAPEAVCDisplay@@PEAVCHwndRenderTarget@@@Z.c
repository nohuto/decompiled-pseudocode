/*
 * XREFs of ?FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z @ 0x1800770E0
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x1800769A0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x180076E7C (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ @ 0x180034D5C (-IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ.c)
 *     ?GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z @ 0x1800B8818 (-GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z.c)
 */

struct CDisplay *__fastcall CDesktopRenderTarget::FindDisplayNoRef(CDesktopRenderTarget *this, HMONITOR *a2)
{
  CDesktopRenderTarget *v2; // r10
  __int64 v3; // r8
  __int64 v4; // r11
  int v5; // r8d
  unsigned int v6; // r9d
  __int64 v7; // rax
  int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct CDisplay *result; // rax
  struct CDisplay *v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = 0LL;
  v2 = this;
  if ( qword_1801EFD28 && (v3 = 0LL, *((_DWORD *)qword_1801EFD28 + 18)) )
  {
    v4 = *((_QWORD *)qword_1801EFD28 + 6);
    while ( !(unsigned __int8)CDisplay::IsOffscreenRenderTarget(*(CDisplay **)(v4 + 8 * v3)) )
    {
      v3 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v3 >= v6 )
        goto LABEL_6;
    }
    CDisplaySet::GetDisplayByHMonitorNoRefNoConst(*((CDisplaySet **)v2 + 45), a2[53], &v12);
    return v12;
  }
  else
  {
LABEL_6:
    v7 = *((_QWORD *)v2 + 45);
    v8 = *((_DWORD *)a2 + 105);
    v9 = (unsigned int)(*(_DWORD *)(v7 + 72) - 1);
    if ( (int)v9 < 0 )
    {
      return 0LL;
    }
    else
    {
      v10 = *(_QWORD *)(v7 + 48);
      while ( 1 )
      {
        result = *(struct CDisplay **)(v10 + 8 * v9);
        if ( *((_DWORD *)result + 62) == v8 )
          break;
        v9 = (unsigned int)(v9 - 1);
        if ( (int)v9 < 0 )
          return 0LL;
      }
    }
  }
  return result;
}
