/*
 * XREFs of ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18004E448
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18004DBCC (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x18004CDB4 (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     sqrtf_0 @ 0x1800505BE (sqrtf_0.c)
 *     ?InsertAt@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z @ 0x18006E640 (-InsertAt@-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z.c)
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x18006F600 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18006FE2C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z @ 0x180070A2C (-NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z.c)
 *     TemplateEventDescriptor @ 0x180075A10 (TemplateEventDescriptor.c)
 *     ?Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z @ 0x180088E74 (-Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z.c)
 */

__int64 __fastcall CTouchDragVisual::NotifyTouchDrag(CTouchDragVisual *this, const struct tagPOINT *a2)
{
  int v4; // ebx
  DWORD TickCount; // eax
  __int64 v6; // rcx
  unsigned int v7; // esi
  DWORD v8; // r12d
  bool v9; // r15
  __m128i v11; // xmm1
  unsigned int v12; // xmm0_4
  _DWORD *v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rbx
  __m128 v16; // xmm0
  __m128 v17; // xmm10
  __m128 v18; // xmm11
  float v19; // xmm8_4
  float v20; // xmm7_4
  float v21; // xmm6_4
  float v22; // xmm9_4
  float v23; // xmm12_4
  bool v24; // zf
  __m128 v25; // xmm1
  int v26; // eax
  unsigned int v27; // r15d
  __int64 v28; // r12
  __int64 v29; // rcx
  __int64 v30; // rdx
  float v31; // xmm0_4
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rax
  DWORD v37; // ecx
  CContactManager *v38; // rcx
  int v39; // eax
  __int64 v40; // rax
  __int128 v41; // [rsp+48h] [rbp-89h] BYREF
  __int64 v42; // [rsp+58h] [rbp-79h] BYREF
  int v43; // [rsp+60h] [rbp-71h]

  v4 = 0;
  TickCount = GetTickCount();
  v7 = *((_DWORD *)this + 82);
  v8 = TickCount;
  v9 = 1;
  if ( v7 )
  {
    v40 = *((_QWORD *)this + 38);
    if ( *(float *)(v40 + 4) == (float)a2->x && *(float *)(v40 + 8) == (float)a2->y )
      v9 = 0;
  }
  if ( v7 )
  {
    v36 = *((_QWORD *)this + 38);
    v37 = v8 - *(_DWORD *)v36;
    if ( *((float *)this + 72) <= (float)((float)((float)((float)(*(float *)(v36 + 8) - (float)a2->y)
                                                        * (float)(*(float *)(v36 + 8) - (float)a2->y))
                                                + (float)((float)(*(float *)(v36 + 4) - (float)a2->x)
                                                        * (float)(*(float *)(v36 + 4) - (float)a2->x)))
                                        / (float)(int)(v37 * v37)) )
      *((_DWORD *)this + 107) = 0;
    else
      *((_DWORD *)this + 107) += v37;
    if ( *((_DWORD *)this + 107) > *((_DWORD *)this + 73) )
    {
      v38 = (CContactManager *)*((_QWORD *)this + 54);
      if ( v38 )
      {
        v39 = CContactManager::NotifyTouchDragVisualComplete(v38, this);
        v4 = v39;
        if ( v39 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0x6Bu);
          goto LABEL_7;
        }
      }
      *((_DWORD *)this + 107) = 0;
    }
  }
  else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    TemplateEventDescriptor(v6, &UdwmTouchDragVisual_BeginDraw_Info);
  }
  if ( v9 )
  {
    v11 = _mm_cvtsi32_si128(a2->y);
    *(float *)&v12 = (float)a2->x;
    v42 = 0LL;
    v43 = 0;
    *(_QWORD *)&v41 = __PAIR64__(v12, v8);
    *((float *)&v41 + 3) = FLOAT_0_5;
    DWORD2(v41) = _mm_cvtepi32_ps(v11).m128_u32[0];
    if ( *((_BYTE *)this + 424) && v7 )
    {
      v13 = (_DWORD *)((char *)this + 304);
      v14 = *((_QWORD *)this + 38);
      *(_OWORD *)v14 = v41;
      *(_QWORD *)(v14 + 16) = v42;
      *(_DWORD *)(v14 + 24) = v43;
    }
    else
    {
      v13 = (_DWORD *)((char *)this + 304);
      DynArray<TOUCH_DRAG_POINT,0>::InsertAt((char *)this + 304, &v41);
      ++v7;
    }
    *((_BYTE *)this + 424) = 0;
    if ( v7 > 1 )
    {
      v15 = *(_QWORD *)v13;
      v16 = *(__m128 *)(*(_QWORD *)v13 + 28LL);
      v17 = _mm_shuffle_ps(v16, v16, 85);
      v18 = _mm_shuffle_ps(v16, v16, 170);
      v19 = *((float *)&v41 + 1) - v17.m128_f32[0];
      v20 = *((float *)&v41 + 2) - v18.m128_f32[0];
      v21 = _mm_shuffle_ps(v16, v16, 255).m128_f32[0];
      v22 = *((float *)&v41 + 3) - v21;
      v23 = sqrtf_0((float)((float)(v20 * v20) + (float)(v19 * v19)) + (float)(v22 * v22));
      v24 = v7 == 2;
      if ( v7 > 2 )
      {
        v25 = *(__m128 *)(v15 + 56);
        v17.m128_f32[0] = v17.m128_f32[0] - _mm_shuffle_ps(v25, v25, 85).m128_f32[0];
        v18.m128_f32[0] = v18.m128_f32[0] - _mm_shuffle_ps(v25, v25, 170).m128_f32[0];
        *((_QWORD *)this + 49) = _mm_unpacklo_ps(v17, v18).m128_u64[0];
        *((float *)this + 100) = v21 - _mm_shuffle_ps(v25, v25, 255).m128_f32[0];
        CTouchDragVisualHelper::Normalize((CTouchDragVisual *)((char *)this + 392));
        if ( (float)((float)((float)((float)((float)(v20 * *((float *)this + 99)) + (float)(v19 * *((float *)this + 98)))
                                   + (float)(v22 * *((float *)this + 100)))
                           / v23)
                   / v23) > 0.059999999 )
          goto LABEL_16;
        v24 = v7 == 2;
      }
      if ( !v24 || v23 >= 10.0 )
      {
LABEL_20:
        v26 = CTouchVisual::RegisterGlobalTimer(this);
        v4 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xA5u);
        }
        else
        {
          v27 = 0;
          v28 = 0LL;
          do
          {
            if ( v27 )
            {
              v29 = v27 - 1;
              if ( v27 == v7 - 1 )
              {
                v30 = *(_QWORD *)v13;
                LODWORD(v42) = COERCE_UNSIGNED_INT(*(float *)(28 * v29 + *(_QWORD *)v13 + 8) - *(float *)(v28 + *(_QWORD *)v13 + 8)) ^ _xmm;
                v31 = *(float *)(28 * v29 + v30 + 4) - *(float *)(v28 + v30 + 4);
              }
              else
              {
                v34 = *(_QWORD *)v13;
                v35 = 28LL * (v27 + 1);
                LODWORD(v42) = COERCE_UNSIGNED_INT(*(float *)(28 * v29 + *(_QWORD *)v13 + 8) - *(float *)(v35 + *(_QWORD *)v13 + 8)) ^ _xmm;
                v31 = *(float *)(28 * v29 + v34 + 4) - *(float *)(v35 + v34 + 4);
              }
            }
            else
            {
              v32 = *(_QWORD *)v13;
              LODWORD(v42) = COERCE_UNSIGNED_INT(*(float *)(*(_QWORD *)v13 + 8LL) - *(float *)(*(_QWORD *)v13 + 36LL)) ^ _xmm;
              v31 = *(float *)(v32 + 4) - *(float *)(v32 + 32);
            }
            v43 = 0;
            *((float *)&v42 + 1) = v31;
            CTouchDragVisualHelper::Normalize((struct MilPoint3F *)&v42);
            v33 = *(_QWORD *)v13;
            ++v27;
            *(_QWORD *)(v28 + v33 + 16) = v42;
            *(_DWORD *)(v28 + v33 + 24) = v43;
            v28 += 28LL;
          }
          while ( v27 < 2 );
          CTouchDragVisualHelper::SmoothTouchDragPath(v13, (__int64)this + 336);
        }
        goto LABEL_7;
      }
LABEL_16:
      *((_BYTE *)this + 424) = 1;
      goto LABEL_20;
    }
  }
LABEL_7:
  if ( v4 < 0 )
    CTouchDragVisual::Stop(this);
  return (unsigned int)v4;
}
