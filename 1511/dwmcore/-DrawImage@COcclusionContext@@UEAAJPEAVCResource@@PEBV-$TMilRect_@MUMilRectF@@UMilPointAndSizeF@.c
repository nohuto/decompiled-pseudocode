/*
 * XREFs of ?DrawImage@COcclusionContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DB@@@@Z @ 0x180056120
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18009ECF0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180055C9C (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?IsOfType@CBitmapResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18005C340 (-IsOfType@CBitmapResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall COcclusionContext::DrawImage(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, CGdiSpriteBitmap **),
        float *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  int (__fastcall *v9)(_QWORD, GUID *, CGdiSpriteBitmap **); // rsi
  char v10; // al
  int v11; // eax
  __int64 v13; // rax
  unsigned int v14; // edx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int128 v18; // [rsp+30h] [rbp-58h] BYREF
  __int128 v19; // [rsp+40h] [rbp-48h]
  __int64 v20; // [rsp+50h] [rbp-38h]

  v4 = 0;
  v9 = (*a2)[6];
  if ( (char *)v9 == (char *)CBitmapResource::IsOfType )
    v10 = CBitmapResource::IsOfType(a2, 56LL);
  else
    v10 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, CGdiSpriteBitmap **), __int64))v9)(a2, 56LL);
  if ( v10 )
  {
    *(_QWORD *)&v18 = *(_QWORD *)(a1 + 504);
    v13 = *(unsigned int *)(a1 + 752);
    *((_QWORD *)&v18 + 1) = a2 - 2;
    LOBYTE(v19) = 1;
    v14 = v13 + 1;
    if ( (int)v13 + 1 < (unsigned int)v13 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else if ( v14 <= *(_DWORD *)(a1 + 748) )
    {
      v16 = 5 * v13;
      v17 = *(_QWORD *)(a1 + 728);
      *(_OWORD *)(v17 + 8 * v16) = v18;
      *(_OWORD *)(v17 + 8 * v16 + 16) = v19;
      *(_QWORD *)(v17 + 8 * v16 + 32) = v20;
      *(_DWORD *)(a1 + 752) = v14;
    }
    else
    {
      v15 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 728, 40LL, 1LL, &v18);
      if ( v15 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC0u);
    }
  }
  if ( !a4 )
  {
    v11 = COcclusionContext::DrawImage(a1 - 8, a2, a3, 0);
    v4 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x45Bu);
  }
  return v4;
}
