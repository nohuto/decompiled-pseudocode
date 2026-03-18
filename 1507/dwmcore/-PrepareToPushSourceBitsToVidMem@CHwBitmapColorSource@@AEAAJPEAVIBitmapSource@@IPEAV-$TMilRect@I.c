/*
 * XREFs of ?PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18001C248
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x18001C494 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180051BD0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x180083BA4 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@_N@Z @ 0x180143AE8 (-HrInit@CSystemMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@_N@Z.c)
 *     ?UnsafeUpdateFromSource@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@AEBUMilRectU@@II@Z @ 0x180143F64 (-UnsafeUpdateFromSource@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@AEBUMilRectU@@II@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::PrepareToPushSourceBitsToVidMem(
        __int64 a1,
        struct IBitmapSource *a2,
        unsigned int a3,
        unsigned int *a4,
        _QWORD *a5)
{
  unsigned int *v6; // r12
  CSystemMemoryBitmap *v9; // rsi
  int v10; // eax
  int (__fastcall **v11)(struct IBitmapSource *, GUID *, __int64 *); // rax
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rax
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rdi
  CSystemMemoryBitmap *v19; // rax
  unsigned int v20; // ebx
  int v21; // r9d
  unsigned int v22; // [rsp+20h] [rbp-71h]
  __int64 v23; // [rsp+30h] [rbp-61h] BYREF
  unsigned int v24; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v25; // [rsp+3Ch] [rbp-55h] BYREF
  __int64 v26; // [rsp+40h] [rbp-51h] BYREF
  enum DXGI_FORMAT v27; // [rsp+48h] [rbp-49h] BYREF
  int v28; // [rsp+4Ch] [rbp-45h] BYREF
  int v29; // [rsp+50h] [rbp-41h] BYREF
  unsigned int v30; // [rsp+54h] [rbp-3Dh] BYREF
  int v31; // [rsp+58h] [rbp-39h] BYREF
  __int64 v32; // [rsp+5Ch] [rbp-35h]
  __int64 v33; // [rsp+64h] [rbp-2Dh]
  int v34; // [rsp+6Ch] [rbp-25h]
  char v35[8]; // [rsp+70h] [rbp-21h] BYREF
  unsigned int *v36; // [rsp+78h] [rbp-19h]
  _QWORD *v37; // [rsp+80h] [rbp-11h]
  char v38[8]; // [rsp+88h] [rbp-9h] BYREF
  __int64 v39; // [rsp+90h] [rbp-1h] BYREF
  int v40; // [rsp+98h] [rbp+7h]
  int v41; // [rsp+9Ch] [rbp+Bh]

  v36 = a4;
  v37 = a5;
  v6 = a4;
  v26 = 0LL;
  v40 = *(_DWORD *)(a1 + 144);
  v9 = 0LL;
  v10 = *(_DWORD *)(a1 + 148);
  *a5 = 0LL;
  v41 = v10;
  v11 = *(int (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))a2;
  v23 = 0LL;
  v39 = 0LL;
  if ( (*v11)(a2, &GUID_14d094dc_1246_4784_b811_74305a3ecec8, &v26) < 0 )
  {
    v12 = (*(__int64 (__fastcall **)(struct IBitmapSource *, unsigned int *, unsigned int *))(*(_QWORD *)a2 + 56LL))(
            a2,
            &v24,
            &v25);
    v13 = v12;
    if ( v12 < 0 )
    {
      v22 = 3417;
      goto LABEL_41;
    }
    v16 = *(_QWORD *)(a1 + 272);
    if ( !v16
      || ((*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)(v16 + 256) + 24LL))(v16 + 256, &v28, &v29),
          v24 != v28)
      || v25 != v29 )
    {
      v31 = 0;
      v32 = 0LL;
      v33 = 0LL;
      v34 = 0;
      v12 = (*(__int64 (__fastcall **)(struct IBitmapSource *, int *))(*(_QWORD *)a2 + 24LL))(a2, &v31);
      v13 = v12;
      if ( v12 < 0 )
      {
        v22 = 3437;
        goto LABEL_41;
      }
      LODWORD(v32) = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 32LL))(a2);
      v17 = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 40LL))(a2);
      v18 = *(_QWORD *)(a1 + 272);
      HIDWORD(v32) = v17;
      if ( v18 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        *(_QWORD *)(a1 + 272) = 0LL;
      }
      v19 = (CSystemMemoryBitmap *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 8LL))(
                                     WPF::g_pProcessHeap,
                                     280LL);
      if ( v19 )
        v9 = CSystemMemoryBitmap::CSystemMemoryBitmap(v19);
      if ( !v9 )
      {
        v13 = -2147024882;
        v22 = 3447;
LABEL_43:
        v21 = v13;
        goto LABEL_44;
      }
      (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v9 + 8LL))(v9);
      v12 = CSystemMemoryBitmap::HrInit(v9, v24, v25, (const struct PixelFormatInfo *)&v31, 0);
      v13 = v12;
      if ( v12 < 0 )
      {
        v22 = 3452;
        goto LABEL_41;
      }
      *(_QWORD *)(a1 + 272) = v9;
      v9 = 0LL;
    }
    v20 = 0;
    if ( a3 )
    {
      while ( 1 )
      {
        v12 = CSystemMemoryBitmap::UnsafeUpdateFromSource(
                *(CSystemMemoryBitmap **)(a1 + 272),
                a2,
                (const struct MilRectU *)&v36[4 * v20],
                *v6,
                v6[1]);
        v13 = v12;
        if ( v12 < 0 )
          break;
        ++v20;
        v6 += 4;
        if ( v20 >= a3 )
          goto LABEL_34;
      }
      v22 = 3470;
      goto LABEL_41;
    }
LABEL_34:
    v12 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 272))(
            *(_QWORD *)(a1 + 272),
            &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
            &v26);
    v13 = v12;
    if ( v12 < 0 )
    {
      v22 = 3474;
      goto LABEL_41;
    }
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64 *))(*(_QWORD *)v26 + 24LL))(
          v26,
          &v39,
          1LL,
          &v23);
  v13 = v12;
  if ( v12 < 0 )
  {
    v22 = 3484;
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v23 + 72LL))(v23, v35, v38);
    v13 = v12;
    if ( v12 < 0 )
    {
      v22 = 3491;
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v23 + 64LL))(v23, &v30);
      v13 = v12;
      if ( v12 < 0 )
      {
        v22 = 3494;
      }
      else
      {
        v12 = (*(__int64 (__fastcall **)(__int64, enum DXGI_FORMAT *))(*(_QWORD *)v23 + 24LL))(v23, &v27);
        v13 = v12;
        if ( v12 >= 0 )
        {
          if ( !(v30 % (GetPixelFormatSize(v27) >> 3)) )
          {
            v14 = v23;
            v23 = 0LL;
            *v37 = v14;
            goto LABEL_8;
          }
          v13 = -2003292288;
          v22 = 3518;
          goto LABEL_43;
        }
        v22 = 3497;
      }
    }
  }
LABEL_41:
  v21 = v12;
LABEL_44:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, v22);
LABEL_8:
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v9 )
    (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  return v13;
}
