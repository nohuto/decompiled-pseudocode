/*
 * XREFs of ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x180072E9C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x180076C20 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x180076D08 (-RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z.c)
 *     ??1CAnalogCompositorClient@@QEAA@XZ @ 0x1800BD2C0 (--1CAnalogCompositorClient@@QEAA@XZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180107EE4 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?RemoveRemoteAppRenderTarget@CDesktopRenderTarget@@UEAAJ_K@Z @ 0x18011E1B0 (-RemoveRemoteAppRenderTarget@CDesktopRenderTarget@@UEAAJ_K@Z.c)
 *     ?DetachFromChannel@CAnalogTextureTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180166140 (-DetachFromChannel@CAnalogTextureTarget@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?NotifyIndirectSwapchainsOfTargetOcclusion@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x180072D1C (-NotifyIndirectSwapchainsOfTargetOcclusion@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@_N@Z.c)
 *     ?Remove@?$DynArray@PEAVCRenderTarget@@$00@@QEAAHAEBQEAVCRenderTarget@@@Z @ 0x180075CA4 (-Remove@-$DynArray@PEAVCRenderTarget@@$00@@QEAAHAEBQEAVCRenderTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetManager::RemoveRenderTarget(CRenderTargetManager *this, struct CRenderTarget *a2)
{
  unsigned int v2; // esi
  struct CRenderTarget **v4; // rcx
  unsigned int i; // eax
  bool v7; // bp
  struct CRenderTarget **v9; // rax
  struct CRenderTarget *v10; // [rsp+48h] [rbp+10h] BYREF

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
        DynArray<CRenderTarget *,1>::Remove((char *)this + 72, &v10);
        *((_BYTE *)this + 108) = 1;
      }
    }
  }
  else
  {
    v7 = (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 38LL) != 0;
    if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)a2 + 144LL))(a2) )
    {
      if ( (*((_DWORD *)this + 15))-- == 1 )
        DwmGenerateMoveData(0LL);
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 55LL) )
      --*((_DWORD *)this + 16);
    if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 43LL)
      || (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 45LL) )
    {
      --*((_DWORD *)this + 17);
    }
    CRenderTargetManager::NotifyIndirectSwapchainsOfTargetOcclusion(this, a2, 0);
    DynArray<CRenderTarget *,1>::Remove((char *)this + 24, &v10);
    (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)a2 + 16LL))(a2);
    if ( v7 )
      --*((_DWORD *)this + 14);
  }
}
