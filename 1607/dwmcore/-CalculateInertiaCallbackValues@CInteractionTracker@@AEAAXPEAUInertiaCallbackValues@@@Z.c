/*
 * XREFs of ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAAXPEAUInertiaCallbackValues@@@Z @ 0x180149FD8
 * Callers:
 *     ?SendPendingCallbacks@CInteractionTracker@@QEAAXXZ @ 0x18014B1A8 (-SendPendingCallbacks@CInteractionTracker@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CalculateCoordinatedNaturalRestPositions@CScrollAnimation@@SA?AUD2DVector3@@AEBU2@PEBV1@110@Z @ 0x18015D858 (-CalculateCoordinatedNaturalRestPositions@CScrollAnimation@@SA-AUD2DVector3@@AEBU2@PEBV1@110@Z.c)
 *     ?GetBoundedEndpoint@CScrollAnimation@@QEAAMXZ @ 0x18015DE28 (-GetBoundedEndpoint@CScrollAnimation@@QEAAMXZ.c)
 */

void __fastcall CInteractionTracker::CalculateInertiaCallbackValues(
        CInteractionTracker *this,
        struct InertiaCallbackValues *a2)
{
  float *v2; // rbx
  float *v5; // rdi
  CScrollAnimation *v6; // rsi
  int v7; // xmm0_4
  int v8; // xmm0_4
  int v9; // xmm0_4
  float *v10; // r13
  __int64 v11; // xmm0_8
  int v12; // xmm0_4
  int v13; // r11d
  float BoundedEndpoint; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  bool v17; // r8
  bool v18; // cl
  bool v19; // dl
  char v20; // al
  __int64 v21; // [rsp+30h] [rbp-20h]
  __int64 v22; // [rsp+30h] [rbp-20h]
  _BYTE v23[8]; // [rsp+40h] [rbp-10h] BYREF
  int v24; // [rsp+48h] [rbp-8h]

  v2 = (float *)*((_QWORD *)this + 52);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 8LL))(*((_QWORD *)this + 52));
  v5 = (float *)*((_QWORD *)this + 53);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*((_QWORD *)this + 53));
  v6 = (CScrollAnimation *)*((_QWORD *)this + 54);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*((_QWORD *)this + 54));
  if ( v2 )
    v7 = *((_DWORD *)v2 + 96);
  else
    v7 = 0;
  LODWORD(v21) = v7;
  if ( v5 )
    v8 = *((_DWORD *)v5 + 96);
  else
    v8 = 0;
  HIDWORD(v21) = v8;
  *(_QWORD *)a2 = v21;
  *((_DWORD *)a2 + 2) = 0;
  if ( v6 )
    v9 = *((_DWORD *)v6 + 96);
  else
    v9 = 0;
  *((_DWORD *)a2 + 3) = v9;
  if ( v2 && v5 && v6 )
  {
    v10 = (float *)((char *)this + 128);
    v11 = *(_QWORD *)CScrollAnimation::CalculateCoordinatedNaturalRestPositions(
                       v23,
                       (char *)this + 128,
                       v2,
                       v5,
                       v6,
                       (char *)this + 592);
  }
  else
  {
    v10 = (float *)((char *)this + 128);
    v11 = *((_QWORD *)this + 16);
  }
  v24 = 0;
  *((_QWORD *)a2 + 2) = _mm_unpacklo_ps((__m128)(unsigned int)v11, (__m128)HIDWORD(v11)).m128_u64[0];
  *((_DWORD *)a2 + 6) = 0;
  if ( v6 )
    v12 = *((_DWORD *)v6 + 102);
  else
    v12 = *((_DWORD *)this + 44);
  *((_DWORD *)a2 + 7) = v12;
  v13 = 1;
  if ( v2 )
  {
    if ( *((_DWORD *)v2 + 124) == 1 )
      BoundedEndpoint = v2[101];
    else
      BoundedEndpoint = CScrollAnimation::GetBoundedEndpoint((CScrollAnimation *)v2);
  }
  else
  {
    BoundedEndpoint = *v10;
  }
  *(float *)&v22 = BoundedEndpoint;
  if ( v5 )
  {
    if ( *((_DWORD *)v5 + 124) == v13 )
      v15 = v5[101];
    else
      v15 = CScrollAnimation::GetBoundedEndpoint((CScrollAnimation *)v5);
  }
  else
  {
    v15 = *((float *)this + 33);
  }
  *((float *)&v22 + 1) = v15;
  *((_QWORD *)a2 + 4) = v22;
  *((_DWORD *)a2 + 10) = 0;
  if ( v6 )
    v16 = CScrollAnimation::GetBoundedEndpoint(v6);
  else
    v16 = *((float *)this + 44);
  *((float *)a2 + 12) = v16;
  if ( v2 )
    v17 = *((_DWORD *)v2 + 124) == 2;
  else
    v17 = 0;
  if ( v5 )
    v18 = *((_DWORD *)v5 + 124) == 2;
  else
    v18 = 0;
  if ( v6 )
    v19 = *((_DWORD *)v6 + 124) == 2;
  else
    v19 = 0;
  if ( *((float *)a2 + 3) == 0.0 )
    v20 = 0;
  else
    v20 = v13;
  if ( v17 || v18 || v20 )
    LOBYTE(v13) = 0;
  *((_BYTE *)a2 + 44) = v13;
  *((_BYTE *)a2 + 52) = !v19;
  if ( v6 )
    (*(void (__fastcall **)(CScrollAnimation *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v5 )
    (*(void (__fastcall **)(float *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v2 )
    (*(void (__fastcall **)(float *))(*(_QWORD *)v2 + 16LL))(v2);
}
