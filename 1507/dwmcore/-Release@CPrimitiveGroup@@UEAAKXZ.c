/*
 * XREFs of ?Release@CPrimitiveGroup@@UEAAKXZ @ 0x18006E070
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180038480 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DELETERESOURCE@@@Z @ 0x180068B54 (-Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_C.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?Release@CPrimitiveGroup@@WDA@EAAKXZ @ 0x18009A370 (-Release@CPrimitiveGroup@@WDA@EAAKXZ.c)
 * Callees:
 *     ??_ECPrimitiveGroup@@MEAAPEAXI@Z @ 0x18006DF40 (--_ECPrimitiveGroup@@MEAAPEAXI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CPrimitiveGroup::Release(CPrimitiveGroup *this)
{
  unsigned __int32 v1; // edi
  CPrimitiveGroup *(__fastcall *v3)(CPrimitiveGroup *, char); // rsi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    v3 = *(CPrimitiveGroup *(__fastcall **)(CPrimitiveGroup *, char))(*(_QWORD *)this + 24LL);
    if ( v3 == CPrimitiveGroup::`vector deleting destructor' )
      CPrimitiveGroup::`vector deleting destructor'(this, 1);
    else
      v3(this, 1);
  }
  return v1;
}
