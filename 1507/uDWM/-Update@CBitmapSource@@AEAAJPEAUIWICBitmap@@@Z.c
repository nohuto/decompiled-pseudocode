/*
 * XREFs of ?Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z @ 0x1800175D4
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180012B7C (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z @ 0x1800174FC (-Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAXKQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180040B68 (-Create@CBitmapSource@@SAJPEAXKQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CBitmapSource::Update(CBitmapSource *this, struct IWICBitmap *a2)
{
  __int64 v2; // r14
  struct IWICBitmapVtbl *lpVtbl; // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  CResource *v11; // rcx
  int v12; // eax
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+60h] [rbp+8h] BYREF
  int v15; // [rsp+68h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 12);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 12));
  *((_QWORD *)this + 12) = a2;
  if ( a2 )
  {
    ((void (__fastcall *)(struct IWICBitmap *))a2->lpVtbl->AddRef)(a2);
    lpVtbl = a2->lpVtbl;
    v14 = 0;
    v15 = 0;
    v6 = ((__int64 (__fastcall *)(struct IWICBitmap *, int *, int *))lpVtbl->GetSize)(a2, &v14, &v15);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x1B9u);
    }
    else
    {
      *((_DWORD *)this + 6) = v14;
      *((_DWORD *)this + 7) = v15;
      v8 = ((__int64 (__fastcall *)(struct IWICBitmap *))a2->lpVtbl->SetResolution)(a2);
      v7 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x1C2u);
      }
      else
      {
        v9 = MilResource_SendCommandBitmapSourceEx(
               *(_DWORD *)(*((_QWORD *)this + 2) + 24LL),
               a2,
               *(struct MIL_CHANNEL__ **)(*((_QWORD *)this + 2) + 16LL));
        v7 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x1C8u);
      }
    }
  }
  else
  {
    v11 = (CResource *)*((_QWORD *)this + 2);
    v13 = _mm_load_si128((const __m128i *)&_xmm).m128i_u64[0];
    v12 = CResource::Send(v11, &v13, 0x10u);
    v7 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x1D4u);
  }
  return v7;
}
