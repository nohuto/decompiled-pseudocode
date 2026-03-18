/*
 * XREFs of ?OnAddBinding@CAnimation@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z @ 0x180046F10
 * Callers:
 *     ?ProcessAddBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_ADDBINDING@@@Z @ 0x18005CD58 (-ProcessAddBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_ADDBINDING@.c)
 * Callees:
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18000F500 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 *     ?GetPrimitive@CSharedSectionAnimationPrimitiveBuffer@@UEAAPEBUDwmAnimationPrimitive@@I@Z @ 0x180058E00 (-GetPrimitive@CSharedSectionAnimationPrimitiveBuffer@@UEAAPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_xxqf @ 0x18010798C (Template_xxqf.c)
 */

__int64 __fastcall CAnimation::OnAddBinding(CAnimation *this, struct CBaseAnimation::AnimationBinding *a2)
{
  __int64 v2; // rbx
  const struct DwmAnimationPrimitive *(__fastcall *v5)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int); // rsi
  const struct DwmAnimationPrimitive *v6; // rax
  int v7; // edx
  int v8; // ecx
  bool v9; // zf
  int v10; // xmm0_4
  float v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 13);
  if ( v2 )
  {
    v5 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(*(_QWORD *)v2 + 24LL);
    v6 = v5 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive
       ? CSharedSectionAnimationPrimitiveBuffer::GetPrimitive(
           *((CSharedSectionAnimationPrimitiveBuffer **)this + 13),
           0)
       : v5(*((CSharedSectionAnimationPrimitiveBuffer **)this + 13), 0);
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
        CAnimationInterpolator::GetInterpolatedValue((CAnimation *)((char *)this + 248), *((_QWORD *)v6 + 1), &v12, 0LL);
        LOBYTE(v10) = LOBYTE(v12);
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_xxqf(v8, v7, (_DWORD)this, *(_QWORD *)a2, *((_DWORD *)a2 + 2), v10);
    }
  }
  return 0LL;
}
