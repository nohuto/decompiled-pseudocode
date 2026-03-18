/*
 * XREFs of ?IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVIImageSource@@@Z @ 0x180007850
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180038480 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007D8C0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004A540 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

char __fastcall CRenderTargetManager::IsOverlayOrDirectFlipAssigned(
        CRenderTargetManager *this,
        const struct CVisual *a2,
        struct IImageSource *a3)
{
  char v3; // di
  unsigned int i; // ebp
  __int64 (__fastcall *v8)(_QWORD, __int64); // rsi
  char v9; // al
  __int64 v10; // rsi
  unsigned int v11; // edx
  unsigned int v12; // ecx
  __int64 v13; // rcx
  __int64 v15; // r9
  __int64 v16; // r8

  v3 = 0;
  for ( i = 0; i < *((_DWORD *)this + 12); ++i )
  {
    v8 = *(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 8LL * i) + 48LL);
    if ( v8 == CHwndRenderTarget::IsOfType )
      v9 = CHwndRenderTarget::IsOfType(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * i), 36LL);
    else
      v9 = v8(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * i), 36LL);
    if ( v9 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * i) + 552LL);
      if ( v10 )
      {
        v11 = *(_DWORD *)(v10 + 224);
        v12 = 0;
        if ( v11 )
        {
          v15 = *(_QWORD *)(v10 + 200);
          while ( 1 )
          {
            v16 = 240LL * v12;
            if ( *(const struct CVisual **)(v16 + v15) == a2 && *(struct IImageSource **)(v16 + v15 + 8) == a3 )
              break;
            if ( ++v12 >= v11 )
              goto LABEL_7;
          }
          if ( v12 != -1 )
            return 1;
        }
LABEL_7:
        if ( (*(unsigned __int8 (__fastcall **)(struct IImageSource *, __int64))(*(_QWORD *)a3 + 144LL))(a3, 79LL) )
        {
          v13 = *(_QWORD *)(v10 + 624);
          if ( v13 )
          {
            if ( *(const struct CVisual **)(v13 + 24) == a2 && *(_QWORD *)(v13 + 32) == *((_QWORD *)a3 + 49) )
              return 1;
          }
        }
      }
    }
  }
  return v3;
}
