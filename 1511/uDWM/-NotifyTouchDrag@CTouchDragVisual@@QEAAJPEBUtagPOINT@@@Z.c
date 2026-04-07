/*
 * XREFs of ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18004C908
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18004BB7C (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x18004CD8C (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x18004FF7E (sqrtf_0.c)
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x18006F620 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18006FEDC (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?InsertAt@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z @ 0x18007025C (-InsertAt@-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z.c)
 *     ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z @ 0x180070C48 (-NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z.c)
 *     TemplateEventDescriptor @ 0x180073BC8 (TemplateEventDescriptor.c)
 *     ?Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z @ 0x180089898 (-Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z.c)
 */

__int64 __fastcall CTouchDragVisual::NotifyTouchDrag(CTouchDragVisual *this, const struct tagPOINT *a2)
{
  int v4; // ebx
  DWORD TickCount; // eax
  __int64 v6; // rcx
  unsigned int v7; // esi
  DWORD v8; // r12d
  __int64 v9; // rax
  bool v10; // r15
  __int64 v11; // rax
  DWORD v12; // ecx
  CContactManager *v13; // rcx
  int v14; // eax
  __m128i v15; // xmm1
  unsigned int v16; // xmm0_4
  char *v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rbx
  __m128 v20; // xmm0
  __m128 v21; // xmm10
  __m128 v22; // xmm11
  float v23; // xmm8_4
  float v24; // xmm7_4
  float v25; // xmm6_4
  float v26; // xmm9_4
  float v27; // xmm0_4
  bool v28; // zf
  __m128 v29; // xmm1
  int v30; // eax
  unsigned int v31; // r15d
  __int64 v32; // r12
  __int64 v33; // rax
  float v34; // xmm0_4
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rcx
  __int128 v41; // [rsp+48h] [rbp-89h] BYREF
  __int64 v42; // [rsp+58h] [rbp-79h] BYREF
  int v43; // [rsp+60h] [rbp-71h]

  v4 = 0;
  TickCount = GetTickCount();
  v7 = *((_DWORD *)this + 82);
  v8 = TickCount;
  v10 = 1;
  if ( v7 )
  {
    v9 = *((_QWORD *)this + 38);
    if ( *(float *)(v9 + 4) == (float)a2->x && *(float *)(v9 + 8) == (float)a2->y )
      v10 = 0;
  }
  if ( v7 )
  {
    v11 = *((_QWORD *)this + 38);
    v12 = v8 - *(_DWORD *)v11;
    if ( *((float *)this + 72) <= (float)((float)((float)((float)(*(float *)(v11 + 8) - (float)a2->y)
                                                        * (float)(*(float *)(v11 + 8) - (float)a2->y))
                                                + (float)((float)(*(float *)(v11 + 4) - (float)a2->x)
                                                        * (float)(*(float *)(v11 + 4) - (float)a2->x)))
                                        / (float)(int)(v12 * v12)) )
      *((_DWORD *)this + 107) = 0;
    else
      *((_DWORD *)this + 107) += v12;
    if ( *((_DWORD *)this + 107) > *((_DWORD *)this + 73) )
    {
      v13 = (CContactManager *)*((_QWORD *)this + 54);
      if ( v13 )
      {
        v14 = CContactManager::NotifyTouchDragVisualComplete(v13, this);
        v4 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x8Au);
          goto LABEL_40;
        }
      }
      *((_DWORD *)this + 107) = 0;
    }
  }
  else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    TemplateEventDescriptor(v6, &UdwmTouchDragVisual_BeginDraw_Info);
  }
  if ( v10 )
  {
    v15 = _mm_cvtsi32_si128(a2->y);
    *(float *)&v16 = (float)a2->x;
    v42 = 0LL;
    v43 = 0;
    *(_QWORD *)&v41 = __PAIR64__(v16, v8);
    *((float *)&v41 + 3) = FLOAT_0_5;
    DWORD2(v41) = _mm_cvtepi32_ps(v15).m128_u32[0];
    if ( *((_BYTE *)this + 424) && v7 )
    {
      v17 = (char *)this + 304;
      v18 = *((_QWORD *)this + 38);
      *(_OWORD *)v18 = v41;
      *(_QWORD *)(v18 + 16) = v42;
      *(_DWORD *)(v18 + 24) = v43;
    }
    else
    {
      v17 = (char *)this + 304;
      DynArray<TOUCH_DRAG_POINT,0>::InsertAt((char *)this + 304, &v41);
      ++v7;
    }
    *((_BYTE *)this + 424) = 0;
    if ( v7 > 1 )
    {
      v19 = *(_QWORD *)v17;
      v20 = *(__m128 *)(*(_QWORD *)v17 + 28LL);
      v21 = _mm_shuffle_ps(v20, v20, 85);
      v22 = _mm_shuffle_ps(v20, v20, 170);
      v23 = *((float *)&v41 + 1) - v21.m128_f32[0];
      v24 = *((float *)&v41 + 2) - v22.m128_f32[0];
      v25 = _mm_shuffle_ps(v20, v20, 255).m128_f32[0];
      v26 = *((float *)&v41 + 3) - v25;
      v27 = sqrtf_0((float)((float)(v24 * v24) + (float)(v23 * v23)) + (float)(v26 * v26));
      v28 = v7 == 2;
      if ( v7 > 2 )
      {
        v29 = *(__m128 *)(v19 + 56);
        v21.m128_f32[0] = v21.m128_f32[0] - _mm_shuffle_ps(v29, v29, 85).m128_f32[0];
        v22.m128_f32[0] = v22.m128_f32[0] - _mm_shuffle_ps(v29, v29, 170).m128_f32[0];
        *((_QWORD *)this + 49) = _mm_unpacklo_ps(v21, v22).m128_u64[0];
        *((float *)this + 100) = v25 - _mm_shuffle_ps(v29, v29, 255).m128_f32[0];
        CTouchDragVisualHelper::Normalize((CTouchDragVisual *)((char *)this + 392));
        if ( (float)((float)((float)((float)((float)(v24 * *((float *)this + 99)) + (float)(v23 * *((float *)this + 98)))
                                   + (float)(v26 * *((float *)this + 100)))
                           / v27)
                   / v27) > 0.059999999 )
          goto LABEL_28;
        v28 = v7 == 2;
      }
      if ( !v28 || v27 >= 10.0 )
      {
LABEL_29:
        v30 = CTouchVisual::RegisterGlobalTimer(this);
        v4 = v30;
        if ( v30 >= 0 )
        {
          v31 = 0;
          v32 = 0LL;
          do
          {
            if ( v31 )
            {
              v35 = v31 - 1;
              if ( v31 == v7 - 1 )
              {
                v36 = *(_QWORD *)v17;
                LODWORD(v42) = COERCE_UNSIGNED_INT(*(float *)(28 * v35 + *(_QWORD *)v17 + 8) - *(float *)(v32 + *(_QWORD *)v17 + 8)) ^ _xmm;
                v34 = *(float *)(28 * v35 + v36 + 4) - *(float *)(v32 + v36 + 4);
              }
              else
              {
                v37 = *(_QWORD *)v17;
                v38 = 28LL * (v31 + 1);
                LODWORD(v42) = COERCE_UNSIGNED_INT(*(float *)(28 * v35 + *(_QWORD *)v17 + 8) - *(float *)(v38 + *(_QWORD *)v17 + 8)) ^ _xmm;
                v34 = *(float *)(28 * v35 + v37 + 4) - *(float *)(v38 + v37 + 4);
              }
            }
            else
            {
              v33 = *(_QWORD *)v17;
              LODWORD(v42) = COERCE_UNSIGNED_INT(*(float *)(*(_QWORD *)v17 + 8LL) - *(float *)(*(_QWORD *)v17 + 36LL)) ^ _xmm;
              v34 = *(float *)(v33 + 4) - *(float *)(v33 + 32);
            }
            v43 = 0;
            *((float *)&v42 + 1) = v34;
            CTouchDragVisualHelper::Normalize((struct MilPoint3F *)&v42);
            v39 = *(_QWORD *)v17;
            ++v31;
            *(_QWORD *)(v32 + v39 + 16) = v42;
            *(_DWORD *)(v32 + v39 + 24) = v43;
            v32 += 28LL;
          }
          while ( v31 < 2 );
          CTouchDragVisualHelper::SmoothTouchDragPath(v17, (char *)this + 336);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v30, 0xC4u);
        }
        goto LABEL_40;
      }
LABEL_28:
      *((_BYTE *)this + 424) = 1;
      goto LABEL_29;
    }
  }
LABEL_40:
  if ( v4 < 0 )
    CTouchDragVisual::Stop(this);
  return (unsigned int)v4;
}
