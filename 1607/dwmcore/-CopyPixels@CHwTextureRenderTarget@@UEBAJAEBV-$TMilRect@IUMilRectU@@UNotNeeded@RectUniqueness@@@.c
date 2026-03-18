/*
 * XREFs of ?CopyPixels@CHwTextureRenderTarget@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x18017B560
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x180016250 (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180081704 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180081744 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800B1AE4 (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwTextureRenderTarget::CopyPixels(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int8 *a5)
{
  unsigned int v5; // eax
  struct IBitmapSource *v6; // rdi
  unsigned int v10; // eax
  unsigned int v11; // ebx
  _DWORD *v12; // rdx
  __int64 v13; // rdx
  unsigned int v14; // r11d
  int v15; // eax
  int v16; // eax
  int v17; // r9d
  unsigned int v19; // [rsp+20h] [rbp-40h]
  __int64 *v20; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v21[6]; // [rsp+48h] [rbp-18h] BYREF
  struct IBitmapSource *v22; // [rsp+80h] [rbp+20h] BYREF

  v5 = *(_DWORD *)(a1 - 184);
  v6 = 0LL;
  v20 = 0LL;
  v21[0] = 0;
  v21[1] = 0;
  v21[2] = v5;
  v10 = *(_DWORD *)(a1 - 180);
  v22 = 0LL;
  v21[3] = v10;
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v11 = -2003292412;
    v19 = 802;
LABEL_13:
    v17 = v11;
    goto LABEL_14;
  }
  if ( !TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(v21, a2)
    || TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v12) )
  {
    v11 = -2147024809;
    v19 = 807;
    goto LABEL_13;
  }
  v15 = HrCreateBitmapFromMemoryEx(
          a2[2] - *a2,
          *(_DWORD *)(v13 + 12) - a2[1],
          (const struct PixelFormatInfo *)(a1 + 24),
          a3,
          v14,
          a5,
          0LL,
          &v22);
  v11 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x333u);
    v6 = v22;
    goto LABEL_15;
  }
  v6 = v22;
  v16 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 **))v22)(
          v22,
          &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
          &v20);
  v11 = v16;
  if ( v16 < 0 )
  {
    v19 = 822;
  }
  else
  {
    v16 = CD3DDeviceLevel1::CopyTexture(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 128LL),
            *(__int64 **)(*(_QWORD *)(a1 - 24) + 136LL),
            *(_DWORD *)(*(_QWORD *)(a1 - 24) + 144LL),
            (int *)a2,
            v20);
    v11 = v16;
    if ( v16 >= 0 )
      goto LABEL_15;
    v19 = 830;
  }
  v17 = v16;
LABEL_14:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, v19);
LABEL_15:
  if ( v20 )
    (*(void (__fastcall **)(__int64 *))(*v20 + 16))(v20);
  if ( v6 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v6 + 16LL))(v6);
  return v11;
}
