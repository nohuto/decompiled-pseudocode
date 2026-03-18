/*
 * XREFs of ?StopCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x18014C1C4
 * Callers:
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18014AEE0 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18014B54C (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAXXZ @ 0x18014C22C (-StopCustomAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18014C264 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 * Callees:
 *     ?ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z @ 0x18003B004 (-ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CInteractionTracker::StopCustomAnimation(CInteractionTracker *this, int a2)
{
  __int64 v2; // rdi
  struct CResource **v4; // rdx
  struct CResource *v5; // rdx
  struct CResource **v6; // rdx

  v2 = a2;
  if ( (unsigned __int64)a2 < 2 )
  {
    v4 = (struct CResource **)*((_QWORD *)this + a2 + 55);
    if ( v4 )
    {
      v5 = *v4;
      if ( v5 )
      {
        *((_BYTE *)v5 + 260) = 0;
        CResource::UnRegisterNotifierInternal(this, v5);
      }
      v6 = (struct CResource **)*((_QWORD *)this + v2 + 55);
      if ( v6 )
      {
        CComposition::ReleaseWeakReference(*((CComposition **)this + 2), v6);
        *((_QWORD *)this + v2 + 55) = 0LL;
      }
    }
  }
}
