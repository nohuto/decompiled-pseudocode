/*
 * XREFs of ?TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z @ 0x18014C374
 * Callers:
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18014AEE0 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800068B0 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x180145E0C (-SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z.c)
 *     ?ClearActiveManipulation@CInteractionTracker@@AEAAXXZ @ 0x18014A3B4 (-ClearActiveManipulation@CInteractionTracker@@AEAAXXZ.c)
 *     ?EnsureScrollAnimations@CInteractionTracker@@AEAAJXZ @ 0x18014A474 (-EnsureScrollAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@VCManipulation@@@WRL@Microsoft@@IEAAKXZ @ 0x18014AD54 (-InternalRelease@-$ComPtr@VCManipulation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x18014BD80 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAXXZ @ 0x18014C22C (-StopCustomAnimations@CInteractionTracker@@AEAAXXZ.c)
 */

void __fastcall CInteractionTracker::TransitionToInContact(CInteractionTracker *this, struct CManipulation *a2)
{
  int v2; // eax
  unsigned int v5; // ecx
  int v6; // esi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 51);
  if ( !v2 || (unsigned int)(v2 - 2) <= 1 )
  {
    v5 = *((_DWORD *)this + 134);
    v6 = 0;
    if ( v5 )
    {
      while ( *(struct CManipulation **)(*((_QWORD *)this + 65) + 8LL * v6) != a2 )
      {
        if ( ++v6 >= v5 )
          return;
      }
      CInteractionTracker::ClearActiveManipulation(this);
      if ( *((struct CManipulation **)this + 68) != a2 )
      {
        if ( a2 )
          (*(void (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 8LL))((char *)a2 + 8);
        v7 = *((_QWORD *)this + 68);
        *((_QWORD *)this + 68) = a2;
        Microsoft::WRL::ComPtr<CManipulation>::InternalRelease(&v7);
      }
      Microsoft::WRL::ComPtr<CInteraction>::operator=(
        (__int64 *)this + 69,
        (__int64 *)(*((_QWORD *)this + 66) + 8LL * v6));
      CManipulation::SetCaptureState_RenderThread(*((CManipulation **)this + 68));
      CInteractionTracker::StopCustomAnimations(this);
      *((_DWORD *)this + 54) = 0;
      CInteractionTracker::EnsureScrollAnimations(this);
      CInteractionTracker::SetState((__int64)this, 1);
    }
  }
}
