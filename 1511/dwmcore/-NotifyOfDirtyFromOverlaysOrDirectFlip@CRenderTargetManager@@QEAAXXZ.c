/*
 * XREFs of ?NotifyOfDirtyFromOverlaysOrDirectFlip@CRenderTargetManager@@QEAAXXZ @ 0x18000750C
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004BB70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180063FA0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CRenderTargetManager::NotifyOfDirtyFromOverlaysOrDirectFlip(CRenderTargetManager *this)
{
  __int64 i; // rsi
  _QWORD *v3; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 12); i = (unsigned int)(i + 1) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 8 * i) + 48LL))(
           *(_QWORD *)(*((_QWORD *)this + 3) + 8 * i),
           37LL) )
    {
      v3 = *(_QWORD **)(*((_QWORD *)this + 3) + 8 * i);
      if ( *(_QWORD *)(v3[10] + 136LL) != v3[10] )
        (*(void (__fastcall **)(_QWORD))(*v3 + 160LL))(*(_QWORD *)(*((_QWORD *)this + 3) + 8 * i));
    }
  }
}
