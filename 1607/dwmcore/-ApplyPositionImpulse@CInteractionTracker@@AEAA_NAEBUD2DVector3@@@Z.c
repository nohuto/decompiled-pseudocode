/*
 * XREFs of ?ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x180149DC8
 * Callers:
 *     ?ProcessApplyPositionImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_APPLYPOSITIONIMPULSE@@@Z @ 0x18010AEF0 (-ProcessApplyPositionImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIO.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCScrollPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCScrollPositionAnimation@@@Z @ 0x180149BDC (--4-$ComPtr@VCScrollPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCScrollPositionAnimation@.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18014C474 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 */

char __fastcall CInteractionTracker::ApplyPositionImpulse(CInteractionTracker *this, const struct D2DVector3 *a2)
{
  int v2; // eax
  char v3; // si
  float *v6; // rbx
  void (*v7)(void); // rax
  float *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 51);
  v3 = 0;
  if ( !v2 || (unsigned int)(v2 - 2) <= 1 )
  {
    v3 = 1;
    CInteractionTracker::TransitionToInertia(this);
    v6 = (float *)*((_QWORD *)this + 52);
    v9 = v6;
    if ( v6 )
    {
      (*(void (__fastcall **)(float *))(*(_QWORD *)v6 + 8LL))(v6);
      v6[92] = *(float *)a2 + v6[92];
    }
    Microsoft::WRL::ComPtr<CScrollPositionAnimation>::operator=((__int64 *)&v9, *((_QWORD *)this + 53));
    if ( v9 )
    {
      v7 = *(void (**)(void))(*(_QWORD *)v9 + 16LL);
      v9[92] = *((float *)a2 + 1) + v9[92];
      v7();
    }
  }
  return v3;
}
