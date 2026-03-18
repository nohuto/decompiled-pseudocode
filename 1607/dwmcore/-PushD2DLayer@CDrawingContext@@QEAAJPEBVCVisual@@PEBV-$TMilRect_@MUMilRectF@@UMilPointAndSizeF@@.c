/*
 * XREFs of ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@MI@Z @ 0x180003C10
 * Callers:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180058840 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x180067DF0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180122064 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x180122CAC (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x180003AE4 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z @ 0x180004070 (-PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z.c)
 *     ??_GCD2DLayer@@UEAAPEAXI@Z @ 0x1800059B0 (--_GCD2DLayer@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180098510 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_q @ 0x180129F68 (Template_q.c)
 */

__int64 __fastcall CDrawingContext::PushD2DLayer(
        CDrawingContext *this,
        struct CVisual *a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5,
        float a6,
        unsigned int a7)
{
  int v7; // eax
  __int64 v9; // rcx
  int v10; // ebx
  BOOL v13; // r15d
  char v14; // r13
  __int64 v15; // rdx
  int v16; // r12d
  void *(__fastcall *v17)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  char *v18; // rax
  __int64 v19; // rcx
  CD2DLayer *v20; // rbx
  __int128 v21; // xmm0
  float v22; // xmm1_4
  unsigned int v23; // eax
  unsigned int v24; // edx
  char v25; // r9
  int v26; // eax
  int v28; // r9d
  int v29; // eax
  unsigned int v30; // [rsp+20h] [rbp-58h]
  CD2DLayer *v31; // [rsp+30h] [rbp-48h] BYREF
  struct CVisual *v32; // [rsp+38h] [rbp-40h]
  __int128 v33; // [rsp+40h] [rbp-38h] BYREF

  v7 = *((_DWORD *)this + 82);
  v9 = *((_QWORD *)this + 54);
  v10 = 0;
  v31 = 0LL;
  v32 = a2;
  v13 = v7 != 0;
  v14 = 0;
  v16 = 0;
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9) == 3 )
    v16 = 3;
  if ( a3 )
  {
    v33 = *a3;
  }
  else
  {
    LOBYTE(v15) = 1;
    CScopedClipStack::GetTopGpuClipInScope((char *)this + 912, v15, &v33);
  }
  if ( *((float *)&v33 + 2) > *(float *)&v33 && *((float *)&v33 + 3) > *((float *)&v33 + 1) )
  {
    v17 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v17 == WPF::ProcessHeapImpl::Alloc )
      v18 = (char *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x50uLL);
    else
      v18 = (char *)v17(WPF::g_pProcessHeap, 80uLL);
    v20 = (CD2DLayer *)v18;
    if ( v18 )
    {
      v21 = v33;
      *((_DWORD *)v18 + 18) = 0;
      *((float *)v18 + 15) = a6;
      *(_QWORD *)v18 = &CD2DLayer::`vftable';
      v18[56] = 0;
      *((_DWORD *)v18 + 16) = v13;
      *((_DWORD *)v18 + 17) = v16;
      *((_QWORD *)v18 + 3) = a4;
      *(_OWORD *)(v18 + 8) = v21;
      if ( a4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
      if ( a5 )
      {
        *((_OWORD *)v20 + 2) = *(_OWORD *)a5;
        *((_QWORD *)v20 + 6) = *(_QWORD *)(a5 + 16);
        *((_BYTE *)v20 + 56) = 1;
      }
    }
    v31 = v20;
    if ( v20 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        Template_q(v19, &EVTDESC_ETWGUID_D2DLAYERCREATEREASON, a7);
        v20 = v31;
      }
      if ( !a4 || (v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a6 - 1.0)) & _xmm), v22 >= 0.0000011920929) )
      {
        v25 = 1;
        goto LABEL_23;
      }
      v23 = *((_DWORD *)this + 172);
      v24 = v23 + 1;
      if ( v23 + 1 < v23 )
      {
        v10 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else
      {
        if ( v24 <= *((_DWORD *)this + 171) )
        {
          *(_QWORD *)(*((_QWORD *)this + 83) + 8LL * v23) = v31;
          *((_DWORD *)this + 172) = v24;
LABEL_22:
          v20 = v31;
          v14 = 1;
          v25 = 0;
LABEL_23:
          v26 = CDrawingContext::PushLayer(this, v32, v20, v25, 1);
          v10 = v26;
          if ( v26 >= 0 )
          {
            v31 = 0LL;
            goto LABEL_25;
          }
          v30 = 6114;
          v28 = v26;
          goto LABEL_34;
        }
        v29 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 664, 8LL, 1LL, &v31);
        v10 = v29;
        if ( v29 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0xC0u);
      }
      if ( v10 >= 0 )
        goto LABEL_22;
      v30 = 6104;
    }
    else
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x19u);
      v30 = 6092;
    }
    v28 = v10;
LABEL_34:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, v30);
    goto LABEL_25;
  }
  CDrawingContext::PushNoOpLayer(this, v32);
LABEL_25:
  if ( v10 < 0 )
  {
    if ( v14 )
      --*((_DWORD *)this + 172);
    if ( v31 )
      CD2DLayer::`scalar deleting destructor'(v31, 1u);
  }
  return (unsigned int)v10;
}
