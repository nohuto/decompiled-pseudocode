/*
 * XREFs of ?OnAddBinding@CAnimation@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z @ 0x180039B30
 * Callers:
 *     ?ProcessAddBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_ADDBINDING@@@Z @ 0x1800B01F0 (-ProcessAddBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_ADDBINDING@.c)
 * Callees:
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18001FDD8 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 *     ?GetPrimitive@CSharedSectionAnimationPrimitiveBuffer@@UEAAPEBUDwmAnimationPrimitive@@I@Z @ 0x1800AC820 (-GetPrimitive@CSharedSectionAnimationPrimitiveBuffer@@UEAAPEBUDwmAnimationPrimitive@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_xxqf @ 0x180141550 (Template_xxqf.c)
 */

__int64 __fastcall CAnimation::OnAddBinding(CAnimation *this, struct CBaseAnimation::AnimationBinding *a2)
{
  CSharedSectionAnimationPrimitiveBuffer *v4; // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v5)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int); // rax
  const struct DwmAnimationPrimitive *v6; // rax
  int v7; // edx
  int v8; // ecx
  bool v9; // zf
  int v10; // xmm0_4
  float v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = (CSharedSectionAnimationPrimitiveBuffer *)*((_QWORD *)this + 23);
  if ( v4 )
  {
    v5 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(*(_QWORD *)v4 + 24LL);
    v6 = v5 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive
       ? CSharedSectionAnimationPrimitiveBuffer::GetPrimitive(v4, 0)
       : v5(v4, 0);
    if ( v6 )
    {
      v9 = *(_DWORD *)v6 == 1;
      LOBYTE(v10) = 0;
      v12 = 0.0;
      if ( v9 )
      {
        v10 = *((_DWORD *)v6 + 7);
      }
      else if ( *(_DWORD *)v6 == 4 )
      {
        v10 = *((_DWORD *)v6 + 4);
      }
      else if ( *(_DWORD *)v6 == 2 )
      {
        CAnimationInterpolator::GetInterpolatedValue((CAnimation *)((char *)this + 328), *((_QWORD *)v6 + 1), &v12, 0LL);
        LOBYTE(v10) = LOBYTE(v12);
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_xxqf(v8, v7, (_DWORD)this, *(_QWORD *)a2, *((_DWORD *)a2 + 2), v10);
    }
  }
  return 0LL;
}
