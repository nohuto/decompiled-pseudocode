/*
 * XREFs of ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@_N7PEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x180131E3C
 * Callers:
 *     ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x18012044C (-GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W43MilCompositingMod.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z @ 0x180131D54 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?CalculatePlane@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x180035C30 (-CalculatePlane@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPolygon::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10,
        __m128i *a11,
        __int64 *a12)
{
  unsigned int v16; // esi
  __int64 v17; // rax
  __int64 v18; // rdi
  int v19; // eax
  __int128 v20; // xmm1
  __m128i v21; // xmm0
  struct D2D_VECTOR_4F v23; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 24) >= 3u )
  {
    v17 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            248LL);
    v18 = v17;
    if ( v17 )
    {
      *(_QWORD *)v17 = &CMILRefCountBase::`vftable';
      *(_QWORD *)v17 = &CPolygon::`vftable';
      *(_DWORD *)(v17 + 8) = 0;
      *(_DWORD *)(v17 + 40) = 0;
      *(_QWORD *)(v17 + 16) = v17 + 48;
      *(_QWORD *)(v17 + 24) = v17 + 48;
      *(_DWORD *)(v17 + 32) = 4;
      *(_DWORD *)(v17 + 36) = 4;
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    }
    else
    {
      v18 = 0LL;
    }
    if ( v18 )
    {
      *(_DWORD *)(v18 + 40) = 0;
      DynArrayImpl<0>::ShrinkToSize((_QWORD *)(v18 + 16), 0x14u);
      v19 = DynArrayImpl<0>::AddMultipleAndSet(v18 + 16, 20, *(_DWORD *)(a1 + 24), *(_QWORD *)a1);
      v16 = v19;
      if ( v19 >= 0 )
      {
        *(_QWORD *)(v18 + 208) = a2;
        *(_OWORD *)(v18 + 144) = *a4;
        *(_OWORD *)(v18 + 160) = a4[1];
        *(_OWORD *)(v18 + 176) = a4[2];
        v20 = a4[3];
        *(_DWORD *)(v18 + 228) = a6;
        *(_DWORD *)(v18 + 220) = a7;
        *(_DWORD *)(v18 + 224) = a8;
        *(_BYTE *)(v18 + 232) = a9;
        *(_BYTE *)(v18 + 233) = a10;
        *(_DWORD *)(v18 + 216) = a5;
        *(_QWORD *)(v18 + 240) = a3;
        *(_OWORD *)(v18 + 192) = v20;
        if ( a3 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
        if ( a11 )
          v21 = *a11;
        else
          v21 = _mm_loadu_si128((const __m128i *)D2DVectorHelper::CalculatePlane(
                                                   &v23,
                                                   *(__m128 **)(v18 + 16),
                                                   (__m128 *)(*(_QWORD *)(v18 + 16) + 20LL),
                                                   (__m128 *)(*(_QWORD *)(v18 + 16) + 40LL)));
        *(__m128i *)(v18 + 128) = v21;
        *a12 = v18;
        v18 = 0LL;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x22u);
      }
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    }
    else
    {
      v16 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Fu);
    }
  }
  else
  {
    v16 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1Cu);
  }
  return v16;
}
