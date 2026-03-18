/*
 * XREFs of ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x18007AF38
 * Callers:
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x180075580 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x180075610 (-RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z.c)
 *     ?ReleaseResource@CComposition@@QEAAJPEAVCResourceTable@@IPEAVCResource@@_N@Z @ 0x1800949E0 (-ReleaseResource@CComposition@@QEAAJPEAVCResourceTable@@IPEAVCResource@@_N@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ??1CAnalogCompositorClient@@QEAA@XZ @ 0x1800BA658 (--1CAnalogCompositorClient@@QEAA@XZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1800F4514 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?RemoveRemoteAppRenderTarget@CDesktopRenderTarget@@UEAAJ_K@Z @ 0x180107580 (-RemoveRemoteAppRenderTarget@CDesktopRenderTarget@@UEAAJ_K@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x1800B2D74 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 */

void __fastcall CRenderTargetManager::RemoveRenderTarget(CRenderTargetManager *this, struct CRenderTarget *a2)
{
  unsigned int v2; // ebp
  struct CRenderTarget **v4; // rcx
  unsigned int i; // eax
  bool v7; // r15
  struct CRenderTarget **v9; // rax
  struct CRenderTarget *v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = a2;
  v2 = 0;
  v4 = (struct CRenderTarget **)*((_QWORD *)this + 3);
  for ( i = 0; i < *((_DWORD *)this + 12); ++v4 )
  {
    if ( a2 == *v4 )
      break;
    ++i;
  }
  if ( i >= *((_DWORD *)this + 12) )
  {
    v9 = (struct CRenderTarget **)*((_QWORD *)this + 9);
    if ( *((_DWORD *)this + 24) )
    {
      do
      {
        if ( a2 == *v9 )
          break;
        ++v2;
        ++v9;
      }
      while ( v2 < *((_DWORD *)this + 24) );
      if ( v2 < *((_DWORD *)this + 24) )
      {
        (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)a2 + 16LL))(a2);
        DynArray<CHwndRenderTarget *,0>::Remove((char *)this + 72, &v10);
        *((_BYTE *)this + 108) = 1;
      }
    }
  }
  else
  {
    v7 = (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 37LL) != 0;
    if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)a2 + 136LL))(a2) )
    {
      if ( (*((_DWORD *)this + 15))-- == 1 )
        DwmGenerateMoveData(0LL);
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 54LL) )
      --*((_DWORD *)this + 16);
    if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 42LL)
      || (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 44LL) )
    {
      --*((_DWORD *)this + 17);
    }
    (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)a2 + 16LL))(a2);
    DynArray<CHwndRenderTarget *,0>::Remove((char *)this + 24, &v10);
    if ( v7 )
      --*((_DWORD *)this + 14);
  }
}
