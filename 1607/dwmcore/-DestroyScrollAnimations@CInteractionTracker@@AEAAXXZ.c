/*
 * XREFs of ?DestroyScrollAnimations@CInteractionTracker@@AEAAXXZ @ 0x18014A3F0
 * Callers:
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x180149A8C (--1CInteractionTracker@@UEAA@XZ.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18014C264 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18014C300 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CInteractionTracker::DestroyScrollAnimations(CInteractionTracker *this)
{
  int v1; // edi
  _QWORD *v2; // rsi
  __int64 v3; // rbx

  v1 = 0;
  v2 = (_QWORD *)((char *)this + 416);
  v3 = 0LL;
  do
  {
    if ( *v2 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 184LL))(*v2);
      Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)this + v3 + 52);
    }
    ++v1;
    ++v2;
    v3 = v1;
  }
  while ( (unsigned __int64)v1 < 3 );
  CInteractionTracker::ClearActiveManipulation(this);
}
