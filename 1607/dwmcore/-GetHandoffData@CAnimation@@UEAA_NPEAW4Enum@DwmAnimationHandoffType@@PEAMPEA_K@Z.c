/*
 * XREFs of ?GetHandoffData@CAnimation@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z @ 0x180039A40
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180039CC0 (-UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18011094C (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 */

bool __fastcall CAnimation::GetHandoffData(
        CAnimation *this,
        enum DwmAnimationHandoffType::Enum *a2,
        float *a3,
        unsigned __int64 *a4)
{
  __int64 v5; // rcx
  bool AnimationValue; // di
  __int64 v11; // rcx
  int v12; // xmm0_4
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD v17[2]; // [rsp+40h] [rbp-28h] BYREF

  v5 = *((_QWORD *)this + 16);
  AnimationValue = 1;
  if ( !v5 || (v14 = *((_QWORD *)this + 4), *(_QWORD *)(v5 + 200) > v14) )
  {
LABEL_2:
    *(_DWORD *)a2 = *((_DWORD *)this + 28);
    *a3 = *((float *)this + 34);
    *a4 = *((_QWORD *)this + 15);
    if ( (*((_BYTE *)this + 8) & 0x40) == 0 )
    {
      if ( *((_DWORD *)this + 49) )
      {
        v11 = *((unsigned int *)this + 48);
        if ( (_DWORD)v11 )
        {
          v12 = *((_DWORD *)this + 34);
          v17[0] = *((unsigned int *)this + 49);
          v13 = *((_QWORD *)this - 19);
          v17[1] = v11;
          CoreUICallSend(*(_QWORD *)(*(_QWORD *)(v13 + 1232) + 56LL), v17, 2LL, 1LL, 1, &unk_1801AD3A2, v12);
          *((_BYTE *)this + 8) |= 0x40u;
        }
      }
    }
    return AnimationValue;
  }
  v15 = *((_QWORD *)this + 18);
  if ( (*((_BYTE *)this + 8) & 0x20) == 0 )
    v15 += v14 - *((_QWORD *)this + 19);
  AnimationValue = CAnimationInterpolator::GetAnimationValue(
                     (CAnimationInterpolator *)(v5 + 328),
                     v15,
                     (float *)this + 34,
                     0LL);
  if ( AnimationValue )
  {
    v16 = *((_QWORD *)this + 16);
    if ( v16 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      *((_QWORD *)this + 16) = 0LL;
    }
    goto LABEL_2;
  }
  return AnimationValue;
}
