/*
 * XREFs of ?DrawImage@COcclusionContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0CN@@@@Z @ 0x180020310
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004E7A0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001FE18 (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall COcclusionContext::DrawImage(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, CGdiSpriteBitmap **),
        __int64 a3,
        __int64 a4)
{
  unsigned int v8; // edi
  int v9; // eax
  __int64 v11; // rax
  unsigned int v12; // edx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int128 v16; // [rsp+30h] [rbp-58h] BYREF
  __int128 v17; // [rsp+40h] [rbp-48h]
  __int64 v18; // [rsp+50h] [rbp-38h]

  v8 = 0;
  if ( ((unsigned __int8 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, CGdiSpriteBitmap **), __int64))(*a2)[6])(
         a2,
         52LL) )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(a1 + 504);
    v11 = *(unsigned int *)(a1 + 752);
    *((_QWORD *)&v16 + 1) = a2 - 2;
    LOBYTE(v17) = 1;
    v12 = v11 + 1;
    if ( (int)v11 + 1 < (unsigned int)v11 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else if ( v12 <= *(_DWORD *)(a1 + 748) )
    {
      v14 = 5 * v11;
      v15 = *(_QWORD *)(a1 + 728);
      *(_OWORD *)(v15 + 8 * v14) = v16;
      *(_OWORD *)(v15 + 8 * v14 + 16) = v17;
      *(_QWORD *)(v15 + 8 * v14 + 32) = v18;
      *(_DWORD *)(a1 + 752) = v12;
    }
    else
    {
      v13 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 728, 40LL, 1LL, &v16);
      if ( v13 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
    }
  }
  if ( !a4 )
  {
    v9 = COcclusionContext::DrawImage(a1 - 8, a2, a3, 0);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x447u);
  }
  return v8;
}
