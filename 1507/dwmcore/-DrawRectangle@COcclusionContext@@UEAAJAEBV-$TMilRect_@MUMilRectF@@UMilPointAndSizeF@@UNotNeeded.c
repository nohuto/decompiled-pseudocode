/*
 * XREFs of ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0CN@@@@Z @ 0x180020570
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004E7A0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x18001FA04 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CBitmapResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180082630 (-IsOfType@CBitmapResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsConstantOpaque@CSolidColorBrush@@UEBA_NXZ @ 0x180083DD0 (-IsConstantOpaque@CSolidColorBrush@@UEBA_NXZ.c)
 *     ?IsOfType@CSolidColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180083E60 (-IsOfType@CSolidColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CImageBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180085BE0 (-IsOfType@CImageBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall COcclusionContext::DrawRectangle(__int64 a1, __int64 a2, CSolidColorBrush *a3, __int64 a4)
{
  unsigned int v4; // r14d
  bool (__fastcall *v8)(CSolidColorBrush *__hidden); // rdi
  __int64 (__fastcall *v10)(CSolidColorBrush *, __int64); // rdi
  char v11; // al
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64); // rsi
  int v16; // eax
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // [rsp+20h] [rbp-50h]
  __int128 v22; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v23[24]; // [rsp+40h] [rbp-30h]
  __int128 v24; // [rsp+58h] [rbp-18h]

  v4 = 0;
  v24 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  if ( !*(_DWORD *)(a1 + 648) && !a4 && a3 )
  {
    v8 = *(bool (__fastcall **)(CSolidColorBrush *__hidden))(*(_QWORD *)a3 + 128LL);
    if ( v8 == CSolidColorBrush::IsConstantOpaque ? CSolidColorBrush::IsConstantOpaque(a3) : v8(a3) )
    {
      v16 = COcclusionContext::CollectRectangleForOcclusion(a1 - 8, a2, 0);
      v4 = v16;
      if ( v16 < 0 )
      {
        v21 = 959;
LABEL_28:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v21);
        return v4;
      }
    }
  }
  v10 = *(__int64 (__fastcall **)(CSolidColorBrush *, __int64))(*(_QWORD *)a3 + 48LL);
  if ( (char *)v10 == (char *)CImageBrush::IsOfType )
  {
    v11 = CImageBrush::IsOfType(a3, 71LL);
  }
  else if ( (char *)v10 == (char *)CSolidColorBrush::IsOfType )
  {
    v11 = CSolidColorBrush::IsOfType(a3, 71LL, a3);
  }
  else
  {
    v11 = v10(a3, 71LL);
  }
  if ( v11 )
  {
    v12 = *((_QWORD *)a3 + 64);
    if ( v12 )
    {
      v13 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v12 + 8) + 144LL);
      if ( v13 == CBitmapResource::IsOfType
         ? CBitmapResource::IsOfType(v12 + 8, 52LL)
         : (unsigned __int8)v13(v12 + 8, 52LL) )
      {
        *(_QWORD *)&v22 = *(_QWORD *)(a1 + 504);
        v17 = *(unsigned int *)(a1 + 752);
        *((_QWORD *)&v22 + 1) = v12;
        v23[0] = 0;
        *(_OWORD *)&v23[4] = v24;
        v18 = v17 + 1;
        if ( (int)v17 + 1 >= (unsigned int)v17 )
        {
          if ( v18 > *(_DWORD *)(a1 + 748) )
          {
            v16 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 728, 40LL, 1LL, &v22);
            if ( v16 < 0 )
            {
              v21 = 192;
              goto LABEL_28;
            }
          }
          else
          {
            v19 = 5 * v17;
            v20 = *(_QWORD *)(a1 + 728);
            *(_OWORD *)(v20 + 8 * v19) = v22;
            *(_OWORD *)(v20 + 8 * v19 + 16) = *(_OWORD *)v23;
            *(_QWORD *)(v20 + 8 * v19 + 32) = *(_QWORD *)&v23[16];
            *(_DWORD *)(a1 + 752) = v18;
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        }
      }
    }
  }
  return v4;
}
