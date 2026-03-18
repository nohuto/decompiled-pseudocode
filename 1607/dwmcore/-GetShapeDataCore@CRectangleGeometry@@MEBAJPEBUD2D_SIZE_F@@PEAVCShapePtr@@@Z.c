/*
 * XREFs of ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180095DF0
 * Callers:
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18002C9C0 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x180067DF0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18009A468 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRectangleGeometry::GetShapeDataCore(
        CRectangleGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  float *v4; // rdi
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  float v7; // xmm7_4
  float v8; // xmm9_4
  float v9; // xmm6_4
  float v10; // xmm8_4
  LPVOID (__fastcall *v11)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  char *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // rax
  __int128 v17; // xmm0
  _DWORD v18[4]; // [rsp+30h] [rbp-A8h] BYREF
  _OWORD v19[3]; // [rsp+40h] [rbp-98h] BYREF

  if ( a2 )
  {
    v4 = (float *)v19;
    v5 = *((_OWORD *)this + 12);
    v19[0] = *((_OWORD *)this + 11);
    v6 = *((_OWORD *)this + 13);
    v19[1] = v5;
    *(float *)&v5 = a2->width - *((float *)this + 46);
    v19[2] = v6;
    *((_QWORD *)&v19[0] + 1) = __PAIR64__(a2->height - *((float *)this + 47), v5);
  }
  else
  {
    v4 = (float *)((char *)this + 176);
  }
  v7 = *v4;
  v8 = v4[2];
  v9 = v4[1];
  v10 = v4[3];
  if ( v8 <= *v4 || v10 <= v9 )
  {
    v16 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            64LL);
    v13 = v16;
    if ( !v16 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xABu);
      return 2147942414LL;
    }
    *(_QWORD *)v16 = &CRectanglesShape::`vftable';
    *(_QWORD *)(v16 + 8) = v16 + 40;
    *(_QWORD *)(v16 + 16) = v16 + 40;
    *(_DWORD *)(v16 + 24) = 1;
    *(_QWORD *)(v16 + 28) = 1LL;
  }
  else
  {
    if ( *((float *)this + 48) <= 0.0
      && *((float *)this + 49) <= 0.0
      && *((float *)this + 50) <= 0.0
      && *((float *)this + 51) <= 0.0
      && *((float *)this + 52) <= 0.0
      && *((float *)this + 53) <= 0.0
      && *((float *)this + 54) <= 0.0
      && *((float *)this + 55) <= 0.0 )
    {
      v11 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v11 == WPF::ProcessHeapImpl::Alloc )
        v12 = (char *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x40uLL);
      else
        v12 = (char *)v11(WPF::g_pProcessHeap, 64LL);
      v13 = (__int64)v12;
      if ( v12 )
      {
        *(_QWORD *)v12 = &CRectanglesShape::`vftable';
        *((_DWORD *)v12 + 6) = 1;
        *((_QWORD *)v12 + 1) = v12 + 40;
        *((_QWORD *)v12 + 2) = v12 + 40;
        *(_QWORD *)(v12 + 28) = 1LL;
        *((_QWORD *)v12 + 7) = 0LL;
        *((_DWORD *)v12 + 8) = 0;
        DynArrayImpl<0>::ShrinkToSize(v12 + 8, 16LL);
        v14 = *(_QWORD *)(v13 + 56);
        if ( v14 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          *(_QWORD *)(v13 + 56) = 0LL;
        }
        *(float *)v18 = v7;
        *(float *)&v18[1] = v9;
        *(float *)&v18[2] = v8;
        *(float *)&v18[3] = v10;
        DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
          v13 + 8,
          v18,
          1LL);
        goto LABEL_19;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xB7u);
      return 2147942414LL;
    }
    v13 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            72LL);
    if ( !v13 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xB2u);
      return 2147942414LL;
    }
    *(_QWORD *)v13 = &CRoundedRectangleShape::`vftable';
    *(_OWORD *)(v13 + 8) = *(_OWORD *)v4;
    *(_OWORD *)(v13 + 24) = *((_OWORD *)v4 + 1);
    v17 = *((_OWORD *)v4 + 2);
    *(_QWORD *)(v13 + 64) = 0LL;
    *(_OWORD *)(v13 + 40) = v17;
  }
  *(_QWORD *)(v13 + 56) = 0LL;
LABEL_19:
  if ( *((_BYTE *)a3 + 8) )
  {
    if ( *(_QWORD *)a3 )
      (***(void (__fastcall ****)(_QWORD, __int64))a3)(*(_QWORD *)a3, 1LL);
  }
  *(_QWORD *)a3 = v13;
  result = 0LL;
  *((_BYTE *)a3 + 8) = 1;
  return result;
}
