/*
 * XREFs of ?UnRotateBits@@YAJPEAVIBitmapDest@@W4DXGI_MODE_ROTATION@@0HH@Z @ 0x180113E94
 * Callers:
 *     ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x18007CED0 (-GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800A1878 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 */

__int64 __fastcall UnRotateBits(
        struct IBitmapDest *a1,
        enum DXGI_MODE_ROTATION a2,
        struct IBitmapDest *a3,
        int a4,
        int a5)
{
  __int64 v5; // rax
  int v9; // esi
  int v10; // r14d
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  unsigned int v14; // r13d
  int v15; // edx
  int v16; // ebx
  int v17; // r8d
  char *v18; // r15
  enum DXGI_MODE_ROTATION v19; // edi
  int v20; // r12d
  size_t v21; // r9
  int v22; // r14d
  unsigned int v24; // [rsp+20h] [rbp-61h]
  __int64 v25; // [rsp+30h] [rbp-51h] BYREF
  int v26; // [rsp+38h] [rbp-49h] BYREF
  int v27; // [rsp+3Ch] [rbp-45h] BYREF
  __int64 v28; // [rsp+40h] [rbp-41h] BYREF
  unsigned int v29; // [rsp+48h] [rbp-39h]
  enum DXGI_FORMAT v30; // [rsp+4Ch] [rbp-35h] BYREF
  int v31; // [rsp+50h] [rbp-31h] BYREF
  unsigned int v32; // [rsp+54h] [rbp-2Dh] BYREF
  enum DXGI_FORMAT v33; // [rsp+58h] [rbp-29h] BYREF
  void *v34; // [rsp+60h] [rbp-21h] BYREF
  enum DXGI_MODE_ROTATION v35; // [rsp+68h] [rbp-19h]
  char v36[4]; // [rsp+6Ch] [rbp-15h] BYREF
  __int64 v37; // [rsp+70h] [rbp-11h] BYREF
  char v38[8]; // [rsp+78h] [rbp-9h] BYREF
  _DWORD v39[2]; // [rsp+80h] [rbp-1h] BYREF
  bool v40[4]; // [rsp+88h] [rbp+7h]
  unsigned __int64 v41; // [rsp+8Ch] [rbp+Bh]

  v5 = *(_QWORD *)a1;
  v25 = 0LL;
  v28 = 0LL;
  v35 = a2;
  v9 = 0;
  v10 = 0;
  v11 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _QWORD, __int64, __int64 *))(v5 + 24))(a1, 0LL, 1LL, &v25);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v25 + 56LL))(v25, &v26, &v27);
    v12 = v11;
    if ( v11 < 0 )
    {
      v24 = 56;
      goto LABEL_27;
    }
    v11 = (*(__int64 (__fastcall **)(__int64, enum DXGI_FORMAT *))(*(_QWORD *)v25 + 24LL))(v25, &v30);
    v12 = v11;
    if ( v11 < 0 )
    {
      v24 = 57;
      goto LABEL_27;
    }
    v39[0] = a4;
    v39[1] = a5;
    if ( a2 != DXGI_MODE_ROTATION_ROTATE90 )
    {
      if ( a2 == DXGI_MODE_ROTATION_ROTATE180 )
      {
        *(_DWORD *)v40 = v26;
        v13 = v27;
LABEL_13:
        LODWORD(v41) = v13;
        v11 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _DWORD *, __int64, __int64 *))(*(_QWORD *)a3 + 24LL))(
                a3,
                v39,
                2LL,
                &v28);
        v12 = v11;
        if ( v11 < 0 )
        {
          v24 = 88;
          goto LABEL_27;
        }
        v11 = (*(__int64 (__fastcall **)(__int64, enum DXGI_FORMAT *))(*(_QWORD *)v28 + 24LL))(v28, &v33);
        v12 = v11;
        if ( v11 < 0 )
        {
          v24 = 90;
          goto LABEL_27;
        }
        v14 = GetPixelFormatSize(v30) >> 3;
        if ( v14 != GetPixelFormatSize(v33) >> 3 )
        {
          v12 = -2147024809;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x63u);
          goto LABEL_44;
        }
        v11 = (*(__int64 (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v25 + 72LL))(v25, v38, &v37);
        v12 = v11;
        if ( v11 < 0 )
        {
          v24 = 105;
          goto LABEL_27;
        }
        v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 64LL))(v25, &v31);
        v12 = v11;
        if ( v11 < 0 )
        {
          v24 = 106;
          goto LABEL_27;
        }
        v11 = (*(__int64 (__fastcall **)(__int64, char *, void **))(*(_QWORD *)v28 + 72LL))(v28, v36, &v34);
        v12 = v11;
        if ( v11 < 0 )
        {
          v24 = 111;
          goto LABEL_27;
        }
        v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v28 + 64LL))(v28, &v32);
        v29 = v11;
        v12 = v11;
        if ( v11 < 0 )
        {
          v24 = 112;
          goto LABEL_27;
        }
        v15 = v41;
        v16 = 0;
        if ( (int)v41 <= 0 )
          goto LABEL_44;
        v17 = *(_DWORD *)v40;
        v18 = (char *)v34;
        v19 = v35;
LABEL_31:
        v20 = 0;
        if ( v17 <= 0 )
          goto LABEL_42;
        v21 = v14;
        while ( 1 )
        {
          if ( v19 == DXGI_MODE_ROTATION_ROTATE90 )
          {
            v9 = v16;
            v22 = v17 - v20;
          }
          else
          {
            if ( v19 != DXGI_MODE_ROTATION_ROTATE180 )
            {
              if ( v19 == DXGI_MODE_ROTATION_ROTATE270 )
              {
                v10 = v20;
                v9 = v15 - v16 - 1;
              }
              goto LABEL_40;
            }
            v9 = v17 - v20 - 1;
            v22 = v15 - v16;
          }
          v10 = v22 - 1;
LABEL_40:
          memcpy_0(v18, (const void *)(v37 + (unsigned int)(v10 * v31) + v9 * v14), v21);
          v17 = *(_DWORD *)v40;
          ++v20;
          v15 = v41;
          v21 = v14;
          v18 += v14;
          if ( v20 >= *(int *)v40 )
          {
            v18 = (char *)v34;
LABEL_42:
            ++v16;
            v18 += v32;
            v34 = v18;
            if ( v16 >= v15 )
            {
              v12 = v29;
              goto LABEL_44;
            }
            goto LABEL_31;
          }
        }
      }
      if ( a2 != DXGI_MODE_ROTATION_ROTATE270 )
      {
        v12 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x4Fu);
        goto LABEL_44;
      }
    }
    *(_DWORD *)v40 = v27;
    v13 = v26;
    goto LABEL_13;
  }
  v24 = 54;
LABEL_27:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v24);
LABEL_44:
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  return v12;
}
