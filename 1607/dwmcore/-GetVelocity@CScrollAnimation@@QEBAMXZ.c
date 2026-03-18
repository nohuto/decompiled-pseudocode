/*
 * XREFs of ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x18015E010
 * Callers:
 *     ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x18014A910 (-GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?PreCalculateInertiaPath@CScrollScaleAnimation@@MEAAXXZ @ 0x18015F4E0 (-PreCalculateInertiaPath@CScrollScaleAnimation@@MEAAXXZ.c)
 *     ?PreCalculateInertiaPath@CScrollPositionAnimation@@MEAAXXZ @ 0x18015FC20 (-PreCalculateInertiaPath@CScrollPositionAnimation@@MEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetManipulationVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18014A844 (-GetManipulationVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 */

float __fastcall CScrollAnimation::GetVelocity(CScrollAnimation *this)
{
  float result; // xmm0_4
  __int64 *v2; // rdx
  __int64 v3; // rax

  result = 0.0;
  switch ( *((_DWORD *)this + 106) )
  {
    case 1:
      v2 = (__int64 *)*((_QWORD *)this + 54);
      v3 = 0LL;
      if ( v2 )
        v3 = *v2;
      LODWORD(result) = CInteractionTracker::GetManipulationVelocity(v3, *((_DWORD *)this + 72)).m128_u32[0];
      break;
    case 2:
      if ( *((_QWORD *)this + 61) )
        return *(float *)((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 61) + 40LL))(*((_QWORD *)this + 61))
                        + 8);
      (*(void (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 272LL))(this);
      break;
    case 3:
      return *(float *)((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 61) + 40LL))(*((_QWORD *)this + 61)) + 8);
    default:
      return result;
  }
  return result;
}
