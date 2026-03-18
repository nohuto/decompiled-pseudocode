/*
 * XREFs of ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18013E380
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x180014754 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180019B7C (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180019BBC (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180051BD0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x1800524C8 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x18005255C (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?HrCreateDestBitmap@@YAJIIPEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x1800EA25C (-HrCreateDestBitmap@@YAJIIPEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x1801339B0 (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x18013E768 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CD2DBitmap::LockForRead(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  int v4; // eax
  _DWORD *v7; // rdx
  int v8; // eax
  bool v9; // al
  struct IUnknown *v10; // r15
  struct IBitmapUnlock *v11; // r12
  unsigned __int8 PixelFormatSize; // al
  CBitmapLock *v13; // rax
  CBitmapLock *v14; // rsi
  unsigned int v15; // edi
  int v16; // eax
  __int64 v17; // r12
  int v18; // eax
  unsigned int v20; // [rsp+20h] [rbp-59h]
  struct IBitmapDest *v21; // [rsp+60h] [rbp-19h] BYREF
  struct IUnknown *v22; // [rsp+68h] [rbp-11h] BYREF
  struct IUnknown *v23; // [rsp+70h] [rbp-9h] BYREF
  unsigned __int8 *v24; // [rsp+78h] [rbp-1h] BYREF
  int v25; // [rsp+80h] [rbp+7h]
  int v26; // [rsp+84h] [rbp+Bh]
  int v27[2]; // [rsp+88h] [rbp+Fh] BYREF
  _BYTE v28[8]; // [rsp+90h] [rbp+17h] BYREF
  __int64 v29; // [rsp+98h] [rbp+1Fh]
  unsigned int v30; // [rsp+E0h] [rbp+67h] BYREF
  unsigned int v31; // [rsp+F8h] [rbp+7Fh] BYREF

  v25 = *(_DWORD *)(a1 + 56);
  v4 = *(_DWORD *)(a1 + 60);
  v23 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  v26 = v4;
  if ( !TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain((unsigned int *)&v24, a2)
    || TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v7) )
  {
    v15 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x156u);
    goto LABEL_26;
  }
  v8 = *(_DWORD *)(a1 + 108);
  v27[0] = *(_DWORD *)(a1 + 72);
  v27[1] = v8;
  GetPixelFormatColorSpace(v27[0], (enum ColorSpace *)v28);
  v29 = 0LL;
  v9 = CD2DBitmap::TryFastWarpLock((CD2DBitmap *)(a1 - 112), &v24, &v30, &v31, &v23);
  v10 = v23;
  if ( v9 )
  {
    v11 = (struct IBitmapUnlock *)(a1 + 8);
    if ( a1 == 112 )
      v11 = 0LL;
    PixelFormatSize = GetPixelFormatSize(*(_DWORD *)(a1 + 72));
    v23 = (struct IUnknown *)(*a2 * (PixelFormatSize >> 3) + a2[1] * v30);
    v13 = (CBitmapLock *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                           WPF::g_pProcessHeap,
                           176LL);
    if ( v13 )
      v14 = CBitmapLock::CBitmapLock(v13);
    else
      v14 = 0LL;
    if ( v14 )
    {
      (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v14 + 8LL))(v14);
      v16 = CBitmapLock::HrInit(
              v14,
              v11,
              a2[2] - *a2,
              a2[3] - a2[1],
              (const struct PixelFormatInfo *)v27,
              v30,
              v31 - (unsigned int)v23,
              &v24[(_QWORD)v23],
              WICBitmapLockRead,
              0,
              v10);
      v15 = v16;
      if ( v16 >= 0 )
      {
        *a3 = (char *)v14 + 72;
        goto LABEL_26;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x17Du);
      (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    else
    {
      v15 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x171u);
    }
    goto LABEL_23;
  }
  v17 = *(_QWORD *)(*(_QWORD *)(a1 - 88) + 16LL);
  v18 = HrCreateDestBitmap(a2[2] - *a2, a2[3] - a2[1], (const struct PixelFormatInfo *)v27, &v21);
  v15 = v18;
  if ( v18 >= 0 )
  {
    v18 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))(a1 + 24))(
            *(_QWORD *)(a1 + 24),
            &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
            &v22);
    v15 = v18;
    if ( v18 >= 0 )
    {
      v18 = CD3DDeviceLevel1::CopyTexture(v17, v22, *(_DWORD *)(a1 + 140), a2, (__int64 *)v21);
      v15 = v18;
      if ( v18 >= 0 )
      {
        v18 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _QWORD, __int64, _QWORD *))(*(_QWORD *)v21 + 24LL))(
                v21,
                0LL,
                1LL,
                a3);
        v15 = v18;
        if ( v18 >= 0 )
          goto LABEL_23;
        v20 = 419;
      }
      else
      {
        v20 = 412;
      }
    }
    else
    {
      v20 = 404;
    }
  }
  else
  {
    v20 = 401;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, v20);
LABEL_23:
  if ( v10 )
    ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->Release)(v10);
LABEL_26:
  if ( v22 )
    ((void (__fastcall *)(struct IUnknown *))v22->lpVtbl->Release)(v22);
  if ( v21 )
    (*(void (__fastcall **)(struct IBitmapDest *))(*(_QWORD *)v21 + 16LL))(v21);
  return v15;
}
