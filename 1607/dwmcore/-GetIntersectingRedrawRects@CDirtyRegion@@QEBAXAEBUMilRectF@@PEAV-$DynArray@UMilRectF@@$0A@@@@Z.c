/*
 * XREFs of ?GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@PEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x18012C014
 * Callers:
 *     ?GetIntersectingRedrawRects@CHwndRenderTarget@@QEBAXAEBUMilRectF@@PEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x18011C270 (-GetIntersectingRedrawRects@CHwndRenderTarget@@QEBAXAEBUMilRectF@@PEAV-$DynArray@UMilRectF@@$0A@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B800 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

void __fastcall CDirtyRegion::GetIntersectingRedrawRects(__int64 a1, float *a2, __int64 a3)
{
  unsigned int i; // esi
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  __int64 v11; // rax
  unsigned int v12; // ecx
  int v13; // eax
  __int128 v14; // [rsp+30h] [rbp-20h] BYREF

  *(_DWORD *)(a3 + 24) = 0;
  DynArrayImpl<0>::ShrinkToSize(a3, 0x10u);
  if ( *(_BYTE *)(a1 + 280) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 412); ++i )
    {
      v7 = *a2;
      v8 = a2[1];
      v9 = a2[2];
      v10 = a2[3];
      *(_QWORD *)&v14 = __PAIR64__(LODWORD(v8), LODWORD(v7));
      *((_QWORD *)&v14 + 1) = __PAIR64__(LODWORD(v10), LODWORD(v9));
      if ( *(float *)(a1 + 16LL * i + 284) > v7 )
      {
        v7 = *(float *)(a1 + 16LL * i + 284);
        *(float *)&v14 = v7;
      }
      if ( *(float *)(a1 + 16LL * i + 288) > v8 )
      {
        v8 = *(float *)(a1 + 16LL * i + 288);
        *((float *)&v14 + 1) = v8;
      }
      if ( v9 > *(float *)(a1 + 16LL * i + 292) )
      {
        v9 = *(float *)(a1 + 16LL * i + 292);
        *((float *)&v14 + 2) = v9;
      }
      if ( v10 > *(float *)(a1 + 16LL * i + 296) )
      {
        v10 = *(float *)(a1 + 16LL * i + 296);
        *((float *)&v14 + 3) = v10;
      }
      if ( v9 <= v7 || v10 <= v8 )
        v14 = 0uLL;
      if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v14) )
      {
        v11 = *(unsigned int *)(a3 + 24);
        v12 = v11 + 1;
        if ( (int)v11 + 1 < (unsigned int)v11 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        }
        else if ( v12 > *(_DWORD *)(a3 + 20) )
        {
          v13 = DynArrayImpl<0>::AddMultipleAndSet(a3, 0x10u, 1, &v14);
          if ( v13 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
        }
        else
        {
          *(_OWORD *)(*(_QWORD *)a3 + 16 * v11) = v14;
          *(_DWORD *)(a3 + 24) = v12;
        }
      }
    }
  }
}
