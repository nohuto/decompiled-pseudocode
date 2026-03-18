/*
 * XREFs of ?ProcessEffectStateUpdate@CPrimitive@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVE_EFFECTSTATEUPDATE@@@Z @ 0x1801176D4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180048368 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CPrimitive::ProcessEffectStateUpdate(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_PRIMITIVE_EFFECTSTATEUPDATE *a3)
{
  struct CResource *Resource; // rax
  struct CResource *v5; // rdi

  Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 99LL);
  v5 = Resource;
  if ( Resource != this[21] )
  {
    CResource::RegisterNotifier((CResource *)this, Resource);
    CResource::UnRegisterNotifierInternal((CResource *)this, this[21]);
    this[21] = v5;
    this[8] = 0LL;
    *((_DWORD *)this + 12) = v5 != 0LL ? 3 : 0;
    CResource::NotifyOnChanged(this, 5u, 0LL);
    CResource::NotifyOnChanged(this, 0, 0LL);
  }
  return 0LL;
}
