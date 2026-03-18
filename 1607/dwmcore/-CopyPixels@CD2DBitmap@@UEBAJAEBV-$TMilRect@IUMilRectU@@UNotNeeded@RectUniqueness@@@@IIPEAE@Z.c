/*
 * XREFs of ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180010A00
 * Callers:
 *     <none>
 * Callees:
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x180010868 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x180016250 (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180081704 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180081744 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x18009EA84 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18009EC4C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18009FF0C (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800B1AE4 (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::CopyPixels(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  int v6; // eax
  struct IBitmapSource *v10; // rdi
  __int64 v11; // rdx
  enum DXGI_FORMAT v12; // eax
  __int64 v13; // r13
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  unsigned __int8 PixelFormatSize; // al
  unsigned int v19; // ecx
  int v20; // r9d
  unsigned int v21; // [rsp+28h] [rbp-51h]
  unsigned int v22; // [rsp+58h] [rbp-21h] BYREF
  struct IBitmapSource *v23; // [rsp+60h] [rbp-19h] BYREF
  __int64 v24; // [rsp+68h] [rbp-11h] BYREF
  __int64 v25; // [rsp+70h] [rbp-9h] BYREF
  unsigned __int8 *v26; // [rsp+78h] [rbp-1h] BYREF
  int v27; // [rsp+80h] [rbp+7h]
  int v28; // [rsp+84h] [rbp+Bh]
  struct IUnknown *v29; // [rsp+88h] [rbp+Fh] BYREF
  enum DXGI_FORMAT v30[2]; // [rsp+90h] [rbp+17h] BYREF
  _BYTE v31[8]; // [rsp+98h] [rbp+1Fh] BYREF
  __int64 v32; // [rsp+A0h] [rbp+27h]
  unsigned int v33; // [rsp+D8h] [rbp+5Fh] BYREF

  v27 = *(_DWORD *)(a1 + 56);
  v6 = *(_DWORD *)(a1 + 60);
  v29 = 0LL;
  v23 = 0LL;
  v25 = 0LL;
  v10 = 0LL;
  v24 = 0LL;
  v26 = 0LL;
  v28 = v6;
  if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(&v26)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v11) )
  {
    v15 = -2147024809;
    v21 = 240;
    v20 = -2147024809;
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 108);
    v30[0] = *(enum DXGI_FORMAT *)(a1 + 72);
    v30[1] = v12;
    GetPixelFormatColorSpace(v30[0], (enum ColorSpace *)v31);
    v32 = 0LL;
    if ( CD2DBitmap::TryFastWarpLock((CD2DBitmap *)(a1 - 112), &v26, &v33, &v22, &v29) )
    {
      PixelFormatSize = GetPixelFormatSize(*(enum DXGI_FORMAT *)(a1 + 72));
      v19 = v33 * a2[1] + *a2 * (PixelFormatSize >> 3);
      v16 = CBitmap::CopyPixelsHelper(
              (enum DXGI_FORMAT)*(_DWORD *)(a1 + 72),
              a2[2] - *a2,
              a2[3] - a2[1],
              v33,
              v22 - v19,
              &v26[v19],
              a3,
              a4,
              a5);
      v15 = v16;
      if ( v16 >= 0 )
        goto LABEL_8;
      v21 = 277;
    }
    else
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a1 - 88) + 24LL);
      v14 = HrCreateBitmapFromMemoryEx(
              a2[2] - *a2,
              a2[3] - a2[1],
              (const struct PixelFormatInfo *)v30,
              a3,
              a4,
              a5,
              0LL,
              &v23);
      v15 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x124u);
        v10 = v23;
        goto LABEL_8;
      }
      v10 = v23;
      v16 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))v23)(
              v23,
              &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
              &v25);
      v15 = v16;
      if ( v16 < 0 )
      {
        v21 = 295;
      }
      else
      {
        v16 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 24))(
                *(_QWORD *)(a1 + 24),
                &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
                &v24);
        v15 = v16;
        if ( v16 < 0 )
        {
          v21 = 298;
        }
        else
        {
          v16 = CD3DDeviceLevel1::CopyTexture(v13, v24, *(_DWORD *)(a1 + 140), (_DWORD)a2, v25);
          v15 = v16;
          if ( v16 >= 0 )
            goto LABEL_8;
          v21 = 306;
        }
      }
    }
    v20 = v16;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, v21);
LABEL_8:
  if ( v29 )
    ((void (__fastcall *)(struct IUnknown *))v29->lpVtbl->Release)(v29);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v10 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v10 + 16LL))(v10);
  return v15;
}
