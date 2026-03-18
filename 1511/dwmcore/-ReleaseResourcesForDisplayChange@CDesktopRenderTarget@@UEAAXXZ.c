/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x1800B63F0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@WCI@EAAXXZ @ 0x1800BCAF0 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@WCI@EAAXXZ.c)
 * Callees:
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x180070438 (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x180075580 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ResetScheduler@CComposition@@QEAAXXZ @ 0x180094CFC (-ResetScheduler@CComposition@@QEAAXXZ.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x1800B2D74 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z @ 0x1800B2DB8 (-InsertAt@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z.c)
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1800B62F8 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 */

void __fastcall CDesktopRenderTarget::ReleaseResourcesForDisplayChange(CDesktopRenderTarget *this)
{
  __int64 v1; // rax
  CDesktopRenderTarget *v3; // rcx
  unsigned int v4; // edx
  __int64 v5; // r9
  int v6; // edx
  unsigned int v7; // r8d
  int v8; // eax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this - 3);
  v3 = (CDesktopRenderTarget *)((char *)this - 40);
  if ( *(_DWORD *)(v1 + 1000) )
  {
    CDesktopRenderTarget::ReleaseRenderTargets(v3);
    *((_BYTE *)this + 192) = 1;
  }
  else
  {
    CDesktopRenderTarget::RemoveInvalidRenderTargets(v3);
    v4 = 1;
    if ( *((_DWORD *)this + 18) > 1u )
    {
      v5 = *((_QWORD *)this + 6);
      while ( 1 )
      {
        v9 = *(_QWORD *)(v5 + 8LL * v4);
        if ( CDisplay::IsPrimary(*(CDisplay **)(v9 + 80)) )
          break;
        v4 = v6 + 1;
        if ( v4 >= v7 )
          goto LABEL_3;
      }
      DynArray<CHwndRenderTarget *,0>::Remove((__int64 *)this + 6, &v9);
      v8 = DynArray<CHwndRenderTarget *,0>::InsertAt((__int64)this + 48, (unsigned __int64)&v9);
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x13Fu);
    }
LABEL_3:
    CComposition::ResetScheduler(*((CComposition **)this - 3));
  }
}
