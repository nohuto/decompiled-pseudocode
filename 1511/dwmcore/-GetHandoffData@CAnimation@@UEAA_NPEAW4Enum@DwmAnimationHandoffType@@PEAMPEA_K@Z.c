/*
 * XREFs of ?GetHandoffData@CAnimation@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z @ 0x180083C80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x1800161C8 (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

char __fastcall CAnimation::GetHandoffData(
        CAnimation *this,
        enum DwmAnimationHandoffType::Enum *a2,
        float *a3,
        unsigned __int64 *a4)
{
  __int64 v5; // rcx
  char AnimationValue; // bp
  int v11; // ecx
  int v12; // xmm0_4
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  int v17; // [rsp+60h] [rbp+8h] BYREF
  int v18; // [rsp+64h] [rbp+Ch]

  v5 = *((_QWORD *)this + 16);
  AnimationValue = 1;
  if ( !v5 || (v14 = *((_QWORD *)this + 4), *(_QWORD *)(v5 + 120) > v14) )
  {
LABEL_2:
    *(_DWORD *)a2 = *((_DWORD *)this + 28);
    *a3 = *((float *)this + 34);
    *a4 = *((_QWORD *)this + 15);
    if ( (*((_BYTE *)this + 8) & 0x40) == 0 )
    {
      if ( *((_DWORD *)this + 49) )
      {
        v11 = *((_DWORD *)this + 48);
        if ( v11 )
        {
          v12 = *((_DWORD *)this + 34);
          v17 = *((_DWORD *)this + 49);
          v13 = *((_QWORD *)this - 9);
          v18 = v11;
          CoreUICallSend(*(_QWORD *)(*(_QWORD *)(v13 + 1128) + 56LL), &v17, 1LL, 1LL, &unk_18016DC12, v12);
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
                     (CAnimationInterpolator *)(v5 + 248),
                     v15,
                     (float *)this + 34,
                     0LL);
  if ( AnimationValue )
  {
    v16 = *((_QWORD *)this + 16);
    if ( v16 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16 + 16LL))(*((_QWORD *)this + 16));
      *((_QWORD *)this + 16) = 0LL;
    }
    goto LABEL_2;
  }
  return AnimationValue;
}
