/*
 * XREFs of ?IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@@Z @ 0x180007444
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004BB70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180063FA0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?IsDirectFlipAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@@Z @ 0x180007598 (-IsDirectFlipAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007BA90 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CRenderTargetManager::IsOverlayOrDirectFlipAssigned(
        CRenderTargetManager *this,
        const struct CVisual *a2,
        struct ISwapChainContent *a3)
{
  char v3; // bl
  unsigned int i; // edi
  __int64 (__fastcall *v8)(_QWORD, __int64); // rbp
  char v9; // al
  __int64 v10; // r9
  unsigned int v11; // edx
  unsigned int v12; // ecx
  __int64 v14; // r10
  __int64 v15; // r8

  v3 = 0;
  for ( i = 0; i < *((_DWORD *)this + 12); ++i )
  {
    v8 = *(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 8LL * i) + 48LL);
    if ( v8 == CHwndRenderTarget::IsOfType )
      v9 = CHwndRenderTarget::IsOfType(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * i), 37LL);
    else
      v9 = v8(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * i), 37LL);
    if ( v9 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * i) + 544LL);
      if ( v10 )
      {
        v11 = *(_DWORD *)(v10 + 224);
        v12 = 0;
        if ( v11 )
        {
          v14 = *(_QWORD *)(v10 + 200);
          while ( 1 )
          {
            v15 = 224LL * v12;
            if ( *(const struct CVisual **)(v15 + v14) == a2 && *(struct ISwapChainContent **)(v15 + v14 + 8) == a3 )
              break;
            if ( ++v12 >= v11 )
              goto LABEL_7;
          }
          if ( v12 != -1 )
            return 1;
        }
LABEL_7:
        if ( COverlayContext::IsDirectFlipAssigned((COverlayContext *)v10, a2, a3) )
          return 1;
      }
    }
  }
  return v3;
}
