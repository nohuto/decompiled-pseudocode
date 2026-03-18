/*
 * XREFs of ?LockForRead@CHwTextureRenderTarget@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18017BBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x180016250 (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180081704 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180081744 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?HrCreateDestBitmap@@YAJIIPEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x18011C5E4 (-HrCreateDestBitmap@@YAJIIPEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::LockForRead(__int64 a1, unsigned int *a2, __int64 a3)
{
  bool v6; // zf
  unsigned int v7; // ebx
  _DWORD *v8; // rdx
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  int v12; // r9d
  unsigned int v14; // [rsp+20h] [rbp-28h]
  unsigned int v15[6]; // [rsp+30h] [rbp-18h] BYREF
  struct IBitmapDest *v16; // [rsp+50h] [rbp+8h] BYREF

  v15[0] = 0;
  v15[1] = 0;
  v16 = 0LL;
  v6 = *(_QWORD *)(a1 + 16) == 0LL;
  v15[2] = *(_DWORD *)(a1 - 184);
  v15[3] = *(_DWORD *)(a1 - 180);
  if ( v6 )
  {
    v7 = -2003292412;
    v14 = 851;
LABEL_13:
    v12 = v7;
    goto LABEL_14;
  }
  if ( !TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(v15, a2)
    || TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v8) )
  {
    v7 = -2147024809;
    v14 = 858;
    goto LABEL_13;
  }
  v10 = HrCreateDestBitmap(a2[2] - *a2, *(_DWORD *)(v9 + 12) - a2[1], (const struct PixelFormatInfo *)(a1 + 24), &v16);
  v7 = v10;
  if ( v10 < 0 )
  {
    v14 = 867;
  }
  else
  {
    v11 = CD3DDeviceLevel1::CopyTexture(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 128LL),
            *(__int64 **)(*(_QWORD *)(a1 - 24) + 136LL),
            *(_DWORD *)(*(_QWORD *)(a1 - 24) + 144LL),
            (int *)a2,
            (__int64 *)v16);
    v7 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x36Bu);
      goto LABEL_15;
    }
    v10 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _QWORD, __int64, __int64))(*(_QWORD *)v16 + 24LL))(
            v16,
            0LL,
            1LL,
            a3);
    v7 = v10;
    if ( v10 >= 0 )
      goto LABEL_15;
    v14 = 882;
  }
  v12 = v10;
LABEL_14:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v14);
LABEL_15:
  if ( v16 )
    (*(void (__fastcall **)(struct IBitmapDest *))(*(_QWORD *)v16 + 16LL))(v16);
  return v7;
}
