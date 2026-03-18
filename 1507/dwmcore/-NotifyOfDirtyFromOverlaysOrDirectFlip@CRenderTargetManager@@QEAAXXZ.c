/*
 * XREFs of ?NotifyOfDirtyFromOverlaysOrDirectFlip@CRenderTargetManager@@QEAAXXZ @ 0x180007718
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180038480 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007D8C0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CRenderTargetManager::NotifyOfDirtyFromOverlaysOrDirectFlip(CRenderTargetManager *this)
{
  __int64 i; // rsi
  _QWORD *v3; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 12); i = (unsigned int)(i + 1) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 8 * i) + 48LL))(
           *(_QWORD *)(*((_QWORD *)this + 3) + 8 * i),
           36LL) )
    {
      v3 = *(_QWORD **)(*((_QWORD *)this + 3) + 8 * i);
      if ( *(_QWORD *)(v3[10] + 152LL) != v3[10] )
        (*(void (__fastcall **)(_QWORD))(*v3 + 152LL))(*(_QWORD *)(*((_QWORD *)this + 3) + 8 * i));
    }
  }
}
