/*
 * XREFs of ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@_N7PEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x180154604
 * Callers:
 *     ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x18013846C (-GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W43MilCompositingMod.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z @ 0x180154530 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CalculatePlane@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x180153694 (-CalculatePlane@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 */

__int64 __fastcall CPolygon::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10,
        __m128i *a11,
        __int64 *a12)
{
  unsigned int v16; // edi
  __int64 v17; // rax
  __int64 v18; // rbx
  int v19; // eax
  __m128i v20; // xmm0
  struct D2D_VECTOR_4F v22; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 24) >= 3u )
  {
    v17 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            256LL);
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
      *(_DWORD *)(v17 + 208) = 0;
      _InterlockedExchangeAdd((volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 19, 1u);
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    }
    else
    {
      v18 = 0LL;
    }
    if ( v18 )
    {
      *(_DWORD *)(v18 + 40) = 0;
      DynArrayImpl<0>::ShrinkToSize(v18 + 16, 0x14u);
      v19 = DynArrayImpl<0>::AddMultipleAndSet(v18 + 16, 0x14u, *(_DWORD *)(a1 + 24), *(_QWORD *)a1);
      v16 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x22u);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      }
      else
      {
        *(_QWORD *)(v18 + 216) = a2;
        *(_OWORD *)(v18 + 144) = *(_OWORD *)a4;
        *(_OWORD *)(v18 + 160) = *(_OWORD *)(a4 + 16);
        *(_OWORD *)(v18 + 176) = *(_OWORD *)(a4 + 32);
        *(_OWORD *)(v18 + 192) = *(_OWORD *)(a4 + 48);
        *(_DWORD *)(v18 + 208) = *(_DWORD *)(a4 + 64);
        *(_DWORD *)(v18 + 236) = a6;
        *(_DWORD *)(v18 + 228) = a7;
        *(_DWORD *)(v18 + 232) = a8;
        *(_BYTE *)(v18 + 240) = a9;
        *(_BYTE *)(v18 + 241) = a10;
        *(_DWORD *)(v18 + 224) = a5;
        *(_QWORD *)(v18 + 248) = a3;
        if ( a3 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
        if ( a11 )
          v20 = *a11;
        else
          v20 = _mm_loadu_si128((const __m128i *)D2DVectorHelper::CalculatePlane(
                                                   &v22,
                                                   *(__m128 **)(v18 + 16),
                                                   (__m128 *)(*(_QWORD *)(v18 + 16) + 20LL),
                                                   (__m128 *)(*(_QWORD *)(v18 + 16) + 40LL)));
        *(__m128i *)(v18 + 128) = v20;
        *a12 = v18;
      }
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
