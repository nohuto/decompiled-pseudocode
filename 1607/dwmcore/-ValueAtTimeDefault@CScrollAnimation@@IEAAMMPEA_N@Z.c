/*
 * XREFs of ?ValueAtTimeDefault@CScrollAnimation@@IEAAMMPEA_N@Z @ 0x18015EF40
 * Callers:
 *     ?ValueAtTime@CScrollAnimation@@IEAAMM@Z @ 0x18015EEE0 (-ValueAtTime@CScrollAnimation@@IEAAMM@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetScrollRange@CInteractionTracker@@QEBAXW4ScrollAxis@@PEAM1@Z @ 0x18014AC40 (-GetScrollRange@CInteractionTracker@@QEBAXW4ScrollAxis@@PEAM1@Z.c)
 *     ??$?4VCSpringDamperEndpointForce@@@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@QEAAAEAV012@PEAVCSpringDamperEndpointForce@@@Z @ 0x18015D4C0 (--$-4VCSpringDamperEndpointForce@@@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@QEAAAEAV012@PEAVCSpri.c)
 *     ?Update@CSpringForce@@QEAAMM@Z @ 0x180168D00 (-Update@CSpringForce@@QEAAMM@Z.c)
 */

float __fastcall CScrollAnimation::ValueAtTimeDefault(CScrollAnimation *this, float a2, bool *a3)
{
  float v3; // xmm2_4
  double v6; // xmm0_8
  float v7; // xmm6_4
  _DWORD **v8; // rax
  _DWORD *v9; // rcx
  float v10; // xmm6_4
  float v11; // xmm6_4
  float v12; // xmm0_4
  int v13; // eax
  float v14; // xmm7_4
  float v15; // xmm0_4
  bool v16; // zf
  bool v17; // al
  float v19; // [rsp+60h] [rbp+8h] BYREF
  float v20; // [rsp+68h] [rbp+10h] BYREF

  v3 = *((float *)this + 95);
  *a3 = 0;
  *((float *)this + 104) = a2;
  if ( v3 <= a2 )
  {
    v8 = (_DWORD **)*((_QWORD *)this + 54);
    if ( v8 )
      v9 = *v8;
    else
      v9 = 0LL;
    CInteractionTracker::GetScrollRange(v9, *((_DWORD *)this + 72), &v20, &v19);
    if ( v3 <= 0.0 )
    {
      v11 = *((float *)this + 97);
      if ( *((_DWORD *)this + 105) == 1 )
        v10 = v11 - v20;
      else
        v10 = v11 - v19;
    }
    else
    {
      v10 = 0.0;
    }
    if ( *((_DWORD *)this + 106) != 3 )
    {
      v12 = 0.0;
      if ( v10 == 0.0 )
        v12 = (*(float (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 272LL))(this);
      *((float *)this + 85) = v12;
      *((float *)this + 84) = v10;
      *((_QWORD *)this + 41) = 0LL;
      v13 = *((_DWORD *)this + 85);
      *((_QWORD *)this + 43) = *(_QWORD *)((char *)this + 332);
      *((_DWORD *)this + 88) = v13;
      *((_QWORD *)this + 40) = 0LL;
      Microsoft::WRL::ComPtr<IAccelerator>::operator=<CSpringDamperEndpointForce>(
        (__int64 (__fastcall ****)(_QWORD))this + 61,
        (__int64 (__fastcall ***)(_QWORD))this + 37);
      *((_DWORD *)this + 106) = 3;
    }
    v14 = a2 - *((float *)this + 95);
    v15 = CSpringForce::Update((CScrollAnimation *)((char *)this + 296), v14);
    if ( *((_DWORD *)this + 105) == 1 )
      v7 = v15 + v20;
    else
      v7 = v15 + v19;
    if ( v14 <= 0.0
      || (v16 = (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 37) + 32LL))((char *)this + 296) == 0,
          v17 = 1,
          !v16) )
    {
      v17 = 0;
    }
    *a3 = v17;
    if ( v17 )
    {
      if ( *((_DWORD *)this + 105) == 1 )
        return v20;
      else
        return v19;
    }
  }
  else
  {
    v6 = (*(double (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 280LL))(this);
    v7 = *(float *)&v6;
    *a3 = a2 >= *((float *)this + 94);
  }
  return v7;
}
