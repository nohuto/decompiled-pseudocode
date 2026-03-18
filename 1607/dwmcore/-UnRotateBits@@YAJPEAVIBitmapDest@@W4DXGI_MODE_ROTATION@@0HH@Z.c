/*
 * XREFs of ?UnRotateBits@@YAJPEAVIBitmapDest@@W4DXGI_MODE_ROTATION@@0HH@Z @ 0x18012D3C8
 * Callers:
 *     ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x180009330 (-GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18009EC4C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UnRotateBits(
        struct IBitmapDest *a1,
        enum DXGI_MODE_ROTATION a2,
        struct IBitmapDest *a3,
        int a4,
        int a5)
{
  __int64 v5; // rax
  int v9; // edi
  int v10; // esi
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // r13d
  int v15; // edx
  int v16; // r14d
  int v17; // r8d
  char *v18; // r15
  enum DXGI_MODE_ROTATION v19; // ebx
  int v20; // r12d
  size_t v21; // r9
  int v22; // esi
  unsigned int v24; // [rsp+20h] [rbp-51h]
  __int64 v25; // [rsp+30h] [rbp-41h] BYREF
  int v26; // [rsp+38h] [rbp-39h] BYREF
  int v27; // [rsp+3Ch] [rbp-35h] BYREF
  __int64 v28; // [rsp+40h] [rbp-31h] BYREF
  enum DXGI_FORMAT v29; // [rsp+48h] [rbp-29h] BYREF
  enum DXGI_FORMAT v30; // [rsp+4Ch] [rbp-25h] BYREF
  enum DXGI_MODE_ROTATION v31; // [rsp+50h] [rbp-21h]
  int v32; // [rsp+54h] [rbp-1Dh] BYREF
  unsigned int v33; // [rsp+58h] [rbp-19h] BYREF
  unsigned int v34; // [rsp+5Ch] [rbp-15h]
  void *v35; // [rsp+60h] [rbp-11h] BYREF
  char v36[4]; // [rsp+68h] [rbp-9h] BYREF
  char v37[4]; // [rsp+6Ch] [rbp-5h] BYREF
  __int64 v38; // [rsp+70h] [rbp-1h] BYREF
  _DWORD v39[2]; // [rsp+78h] [rbp+7h] BYREF
  int v40; // [rsp+80h] [rbp+Fh]
  int v41; // [rsp+84h] [rbp+13h]

  v5 = *(_QWORD *)a1;
  v25 = 0LL;
  v28 = 0LL;
  v31 = a2;
  v9 = 0;
  v10 = 0;
  v11 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _QWORD, __int64, __int64 *))(v5 + 24))(a1, 0LL, 1LL, &v25);
  v12 = v11;
  if ( v11 < 0 )
  {
    v24 = 54;
    goto LABEL_42;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v25 + 56LL))(v25, &v27, &v26);
  v12 = v11;
  if ( v11 < 0 )
  {
    v24 = 56;
    goto LABEL_42;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, enum DXGI_FORMAT *))(*(_QWORD *)v25 + 24LL))(v25, &v29);
  v12 = v11;
  if ( v11 < 0 )
  {
    v24 = 57;
    goto LABEL_42;
  }
  v39[0] = a4;
  v39[1] = a5;
  if ( a2 != DXGI_MODE_ROTATION_ROTATE90 )
  {
    if ( a2 == DXGI_MODE_ROTATION_ROTATE180 )
    {
      v40 = v27;
      v13 = v26;
      goto LABEL_10;
    }
    if ( a2 != DXGI_MODE_ROTATION_ROTATE270 )
    {
      v12 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x4Fu);
      goto LABEL_43;
    }
  }
  v40 = v26;
  v13 = v27;
LABEL_10:
  v41 = v13;
  v11 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _DWORD *, __int64, __int64 *))(*(_QWORD *)a3 + 24LL))(
          a3,
          v39,
          2LL,
          &v28);
  v12 = v11;
  if ( v11 < 0 )
  {
    v24 = 88;
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(__int64, enum DXGI_FORMAT *))(*(_QWORD *)v28 + 24LL))(v28, &v30);
    v12 = v11;
    if ( v11 < 0 )
    {
      v24 = 90;
    }
    else
    {
      v14 = GetPixelFormatSize(v29) >> 3;
      if ( v14 != GetPixelFormatSize(v30) >> 3 )
      {
        v12 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x63u);
        goto LABEL_43;
      }
      v11 = (*(__int64 (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v25 + 72LL))(v25, v36, &v38);
      v12 = v11;
      if ( v11 < 0 )
      {
        v24 = 105;
      }
      else
      {
        v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 64LL))(v25, &v32);
        v12 = v11;
        if ( v11 < 0 )
        {
          v24 = 106;
        }
        else
        {
          v11 = (*(__int64 (__fastcall **)(__int64, char *, void **))(*(_QWORD *)v28 + 72LL))(v28, v37, &v35);
          v12 = v11;
          if ( v11 < 0 )
          {
            v24 = 111;
          }
          else
          {
            v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v28 + 64LL))(v28, &v33);
            v34 = v11;
            v12 = v11;
            if ( v11 >= 0 )
            {
              v15 = v41;
              v16 = 0;
              if ( v41 <= 0 )
                goto LABEL_43;
              v17 = v40;
              v18 = (char *)v35;
              v19 = v31;
              while ( 1 )
              {
                v20 = 0;
                if ( v17 <= 0 )
                  goto LABEL_31;
                v21 = v14;
                do
                {
                  switch ( v19 )
                  {
                    case DXGI_MODE_ROTATION_ROTATE90:
                      v9 = v16;
                      v22 = v17 - v20;
                      goto LABEL_28;
                    case DXGI_MODE_ROTATION_ROTATE180:
                      v9 = v17 - v20 - 1;
                      v22 = v15 - v16;
LABEL_28:
                      v10 = v22 - 1;
                      break;
                    case DXGI_MODE_ROTATION_ROTATE270:
                      v10 = v20;
                      v9 = v15 - v16 - 1;
                      break;
                  }
                  memcpy_0(v18, (const void *)(v38 + (unsigned int)(v10 * v32) + v9 * v14), v21);
                  v17 = v40;
                  ++v20;
                  v15 = v41;
                  v21 = v14;
                  v18 += v14;
                }
                while ( v20 < v40 );
                v18 = (char *)v35;
LABEL_31:
                ++v16;
                v18 += v33;
                v35 = v18;
                if ( v16 >= v15 )
                {
                  v12 = v34;
                  goto LABEL_43;
                }
              }
            }
            v24 = 112;
          }
        }
      }
    }
  }
LABEL_42:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v24);
LABEL_43:
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  return v12;
}
