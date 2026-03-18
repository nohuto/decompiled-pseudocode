/*
 * XREFs of ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180010BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x180010868 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x180016250 (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180081704 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180081744 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x18009E488 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x18009E518 (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18009EC4C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18009FF0C (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?HrCreateDestBitmap@@YAJIIPEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x18011C5E4 (-HrCreateDestBitmap@@YAJIIPEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 */

__int64 __fastcall CD2DBitmap::LockForRead(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  int v3; // eax
  CBitmapLock *v4; // rdi
  __int64 v8; // rdx
  enum DXGI_FORMAT v9; // eax
  struct IBitmapUnlock *v10; // rbx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v12; // esi
  __int64 v13; // r12
  CBitmapLock *v14; // rax
  int v15; // eax
  unsigned int v16; // ebx
  int v18; // r9d
  __int64 v19; // rdi
  int v20; // eax
  int v21; // eax
  unsigned int v22; // [rsp+20h] [rbp-49h]
  struct IBitmapDest *v23; // [rsp+60h] [rbp-9h] BYREF
  struct IUnknown *v24; // [rsp+68h] [rbp-1h] BYREF
  __int64 v25; // [rsp+70h] [rbp+7h] BYREF
  unsigned __int8 *v26; // [rsp+78h] [rbp+Fh] BYREF
  int v27; // [rsp+80h] [rbp+17h]
  int v28; // [rsp+84h] [rbp+1Bh]
  enum DXGI_FORMAT v29[2]; // [rsp+88h] [rbp+1Fh] BYREF
  _BYTE v30[8]; // [rsp+90h] [rbp+27h] BYREF
  __int64 v31; // [rsp+98h] [rbp+2Fh]
  unsigned int v32; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v33; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = *(_DWORD *)(a1 + 56);
  v4 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = v3;
  v28 = *(_DWORD *)(a1 + 60);
  if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(&v26)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v8) )
  {
    v16 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x150u);
LABEL_30:
    if ( v4 )
      (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v4 + 16LL))(v4);
    goto LABEL_32;
  }
  v9 = *(_DWORD *)(a1 + 108);
  v29[0] = *(enum DXGI_FORMAT *)(a1 + 72);
  v29[1] = v9;
  GetPixelFormatColorSpace(v29[0], (enum ColorSpace *)v30);
  v31 = 0LL;
  v10 = (struct IBitmapUnlock *)(a1 - 112);
  if ( CD2DBitmap::TryFastWarpLock((CD2DBitmap *)(a1 - 112), &v26, &v32, &v33, &v24) )
  {
    if ( a1 != 112 )
      v10 = (struct IBitmapUnlock *)(a1 + 8);
    PixelFormatSize = GetPixelFormatSize(*(enum DXGI_FORMAT *)(a1 + 72));
    v12 = v32;
    v13 = a2[1] * v32 + *a2 * (PixelFormatSize >> 3);
    v14 = (CBitmapLock *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                           WPF::g_pProcessHeap,
                           176LL);
    if ( v14 )
      v4 = CBitmapLock::CBitmapLock(v14);
    if ( v4 )
    {
      (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v4 + 8LL))(v4);
      v15 = CBitmapLock::HrInit(
              v4,
              v10,
              a2[2] - *a2,
              a2[3] - a2[1],
              (const struct PixelFormatInfo *)v29,
              v12,
              v33 - (unsigned int)v13,
              &v26[v13],
              WICBitmapLockRead,
              0,
              v24);
      v16 = v15;
      if ( v15 >= 0 )
      {
        *a3 = (char *)v4 + 72;
        goto LABEL_11;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x177u);
      goto LABEL_30;
    }
    v16 = -2147024882;
    v22 = 363;
    v18 = -2147024882;
    goto LABEL_20;
  }
  v19 = *(_QWORD *)(*(_QWORD *)(a1 - 88) + 24LL);
  v20 = HrCreateDestBitmap(a2[2] - *a2, a2[3] - a2[1], (const struct PixelFormatInfo *)v29, &v23);
  v16 = v20;
  if ( v20 < 0 )
  {
    v22 = 395;
    goto LABEL_18;
  }
  v20 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 24))(
          *(_QWORD *)(a1 + 24),
          &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
          &v25);
  v16 = v20;
  if ( v20 < 0 )
  {
    v22 = 398;
    goto LABEL_18;
  }
  v21 = CD3DDeviceLevel1::CopyTexture(v19, v25, *(_DWORD *)(a1 + 140), (_DWORD)a2, (__int64)v23);
  v16 = v21;
  if ( v21 < 0 )
  {
    v22 = 406;
    v18 = v21;
    goto LABEL_20;
  }
  v20 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _QWORD, __int64, _QWORD *))(*(_QWORD *)v23 + 24LL))(
          v23,
          0LL,
          1LL,
          a3);
  v16 = v20;
  if ( v20 < 0 )
  {
    v22 = 413;
LABEL_18:
    v18 = v20;
LABEL_20:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, v22);
  }
LABEL_32:
  if ( v24 )
    ((void (__fastcall *)(struct IUnknown *))v24->lpVtbl->Release)(v24);
LABEL_11:
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v23 )
    (*(void (__fastcall **)(struct IBitmapDest *))(*(_QWORD *)v23 + 16LL))(v23);
  return v16;
}
