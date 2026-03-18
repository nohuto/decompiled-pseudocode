/*
 * XREFs of ?PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1800822E4
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x180082504 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormat@CBitmapLock@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x18009E6E0 (-GetPixelFormat@CBitmapLock@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z @ 0x18009E760 (-GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z.c)
 *     ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x18009E800 (-GetStride@CBitmapLock@@UEAAJPEAI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18009EC4C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x1800A1868 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@_N@Z @ 0x180182234 (-HrInit@CSystemMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@_N@Z.c)
 *     ?UnsafeUpdateFromSource@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@AEBUMilRectU@@II@Z @ 0x180182798 (-UnsafeUpdateFromSource@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@AEBUMilRectU@@II@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::PrepareToPushSourceBitsToVidMem(
        __int64 a1,
        struct IBitmapSource *a2,
        unsigned int a3,
        unsigned int *a4,
        CBitmapLock **a5)
{
  CBitmapLock **v5; // r14
  int (__fastcall **v9)(struct IBitmapSource *, GUID *, __int64 *); // rax
  unsigned int *v10; // r12
  CSystemMemoryBitmap *v11; // rdi
  int (__fastcall *v12)(struct IBitmapSource *, GUID *, __int64 *); // rax
  int v13; // eax
  unsigned int v14; // ebx
  __int64 (__fastcall *v15)(CBitmapLock *__hidden, unsigned int *, unsigned __int8 **); // rax
  int DataPointer; // eax
  __int64 (__fastcall *v17)(CBitmapLock *__hidden, unsigned int *); // rax
  int Stride; // eax
  __int64 (__fastcall *v19)(CBitmapLock *__hidden, enum DXGI_FORMAT *); // rax
  int PixelFormat; // eax
  CBitmapLock *v21; // rax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  CSystemMemoryBitmap *v26; // rax
  int v27; // r9d
  unsigned int v28; // r14d
  unsigned int v29; // [rsp+20h] [rbp-71h]
  CBitmapLock *v30; // [rsp+30h] [rbp-61h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v32; // [rsp+3Ch] [rbp-55h] BYREF
  enum DXGI_FORMAT v33; // [rsp+40h] [rbp-51h] BYREF
  unsigned int v34; // [rsp+44h] [rbp-4Dh] BYREF
  __int64 v35; // [rsp+48h] [rbp-49h] BYREF
  int v36; // [rsp+50h] [rbp-41h] BYREF
  int v37; // [rsp+54h] [rbp-3Dh] BYREF
  unsigned int v38; // [rsp+58h] [rbp-39h] BYREF
  int v39; // [rsp+60h] [rbp-31h] BYREF
  __int64 v40; // [rsp+64h] [rbp-2Dh]
  __int64 v41; // [rsp+6Ch] [rbp-25h]
  int v42; // [rsp+74h] [rbp-1Dh]
  unsigned int *v43; // [rsp+78h] [rbp-19h]
  CBitmapLock **v44; // [rsp+80h] [rbp-11h]
  unsigned __int8 *v45; // [rsp+88h] [rbp-9h] BYREF
  __int64 v46; // [rsp+90h] [rbp-1h] BYREF
  int v47; // [rsp+98h] [rbp+7h]
  int v48; // [rsp+9Ch] [rbp+Bh]

  v5 = a5;
  v47 = *(_DWORD *)(a1 + 144);
  v48 = *(_DWORD *)(a1 + 148);
  *a5 = 0LL;
  v9 = *(int (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))a2;
  v10 = a4;
  v43 = a4;
  v44 = a5;
  v11 = 0LL;
  v35 = 0LL;
  v12 = *v9;
  v30 = 0LL;
  v46 = 0LL;
  if ( v12(a2, &GUID_14d094dc_1246_4784_b811_74305a3ecec8, &v35) >= 0 )
    goto LABEL_2;
  v13 = (*(__int64 (__fastcall **)(struct IBitmapSource *, unsigned int *, unsigned int *))(*(_QWORD *)a2 + 56LL))(
          a2,
          &v32,
          &v31);
  v14 = v13;
  if ( v13 < 0 )
  {
    v29 = 3394;
    goto LABEL_49;
  }
  v23 = *(_QWORD *)(a1 + 272);
  if ( v23 )
  {
    (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)(v23 + 256) + 24LL))(v23 + 256, &v36, &v37);
    if ( v32 == v36 && v31 == v37 )
    {
LABEL_35:
      v28 = 0;
      if ( a3 )
      {
        while ( 1 )
        {
          v13 = CSystemMemoryBitmap::UnsafeUpdateFromSource(
                  *(CSystemMemoryBitmap **)(a1 + 272),
                  a2,
                  (const struct MilRectU *)&v43[4 * v28],
                  *v10,
                  v10[1]);
          v14 = v13;
          if ( v13 < 0 )
            break;
          ++v28;
          v10 += 4;
          if ( v28 >= a3 )
            goto LABEL_38;
        }
        v29 = 3447;
        goto LABEL_49;
      }
LABEL_38:
      v13 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 272))(
              *(_QWORD *)(a1 + 272),
              &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
              &v35);
      v14 = v13;
      if ( v13 < 0 )
      {
        v29 = 3451;
        goto LABEL_49;
      }
      v5 = v44;
LABEL_2:
      v13 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, CBitmapLock **))(*(_QWORD *)v35 + 24LL))(
              v35,
              &v46,
              1LL,
              &v30);
      v14 = v13;
      if ( v13 >= 0 )
      {
        v15 = *(__int64 (__fastcall **)(CBitmapLock *__hidden, unsigned int *, unsigned __int8 **))(*(_QWORD *)v30 + 72LL);
        if ( v15 == CBitmapLock::GetDataPointer )
          DataPointer = CBitmapLock::GetDataPointer(v30, &v38, &v45);
        else
          DataPointer = v15(v30, &v38, &v45);
        v14 = DataPointer;
        if ( DataPointer < 0 )
        {
          v29 = 3468;
        }
        else
        {
          v17 = *(__int64 (__fastcall **)(CBitmapLock *__hidden, unsigned int *))(*(_QWORD *)v30 + 64LL);
          if ( v17 == CBitmapLock::GetStride )
            Stride = CBitmapLock::GetStride(v30, &v34);
          else
            Stride = v17(v30, &v34);
          v14 = Stride;
          if ( Stride < 0 )
          {
            v29 = 3471;
          }
          else
          {
            v19 = *(__int64 (__fastcall **)(CBitmapLock *__hidden, enum DXGI_FORMAT *))(*(_QWORD *)v30 + 24LL);
            if ( v19 == CBitmapLock::GetPixelFormat )
              PixelFormat = CBitmapLock::GetPixelFormat(v30, &v33);
            else
              PixelFormat = v19(v30, &v33);
            v14 = PixelFormat;
            if ( PixelFormat < 0 )
            {
              v29 = 3474;
            }
            else
            {
              if ( !(v34 % (GetPixelFormatSize(v33) >> 3)) )
              {
                v21 = v30;
                v30 = 0LL;
                *v5 = v21;
                goto LABEL_14;
              }
              v14 = -2003292288;
              v29 = 3495;
            }
          }
        }
        goto LABEL_32;
      }
      v29 = 3461;
LABEL_49:
      v27 = v13;
      goto LABEL_50;
    }
  }
  v39 = 0;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0;
  v13 = (*(__int64 (__fastcall **)(struct IBitmapSource *, int *))(*(_QWORD *)a2 + 24LL))(a2, &v39);
  v14 = v13;
  if ( v13 < 0 )
  {
    v29 = 3414;
    goto LABEL_49;
  }
  LODWORD(v40) = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 32LL))(a2);
  v24 = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 40LL))(a2);
  v25 = *(_QWORD *)(a1 + 272);
  HIDWORD(v40) = v24;
  if ( v25 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    *(_QWORD *)(a1 + 272) = 0LL;
  }
  v26 = (CSystemMemoryBitmap *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 8LL))(
                                 WPF::g_pProcessHeap,
                                 280LL);
  if ( v26 )
    v11 = CSystemMemoryBitmap::CSystemMemoryBitmap(v26);
  if ( v11 )
  {
    (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v11 + 8LL))(v11);
    v13 = CSystemMemoryBitmap::HrInit(v11, v32, v31, (const struct PixelFormatInfo *)&v39, 0);
    v14 = v13;
    if ( v13 < 0 )
    {
      v29 = 3429;
      goto LABEL_49;
    }
    *(_QWORD *)(a1 + 272) = v11;
    v11 = 0LL;
    goto LABEL_35;
  }
  v14 = -2147024882;
  v29 = 3424;
LABEL_32:
  v27 = v14;
LABEL_50:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, v29);
  if ( v30 )
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v11 )
    (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_14:
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  return v14;
}
