/*
 * XREFs of ?EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ @ 0x18015301C
 * Callers:
 *     ?DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x180152D98 (-DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 *     ?GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z @ 0x180153280 (-GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompressedSourceBitmap::EnsureWICBitmapFrame(CCompressedSourceBitmap *this)
{
  unsigned int v1; // edi
  _QWORD *v2; // r14
  int v4; // eax
  unsigned int v6; // [rsp+20h] [rbp-10h]
  __int64 v7; // [rsp+60h] [rbp+30h] BYREF
  __int64 v8; // [rsp+68h] [rbp+38h] BYREF
  __int64 v9; // [rsp+70h] [rbp+40h]

  v1 = 0;
  v2 = (_QWORD *)((char *)this + 272);
  v7 = 0LL;
  v8 = 0LL;
  if ( *((_QWORD *)this + 34) )
    return v1;
  v9 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 38) + 112LL))(*((_QWORD *)this + 38), &v7);
  v1 = v4;
  if ( v4 < 0 )
  {
    v6 = 257;
LABEL_16:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, v6);
    goto LABEL_17;
  }
  if ( v7 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 128LL))(
           v7,
           *((_QWORD *)this + 36),
           *((unsigned int *)this + 74));
    v1 = v4;
    if ( v4 < 0 )
    {
      v6 = 261;
      goto LABEL_16;
    }
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 40LL))(v7, v9, 0LL, 0LL);
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, GUID *, _QWORD, __int64 *))(**((_QWORD **)this + 38) + 32LL))(
           *((_QWORD *)this + 38),
           v7,
           &GUID_VendorMicrosoft,
           0LL,
           &v8);
    v1 = v4;
    if ( v4 < 0 )
    {
      v6 = 268;
      goto LABEL_16;
    }
    if ( v8 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v8 + 104LL))(v8, 0LL, v2);
      v1 = v4;
      if ( v4 < 0 )
      {
        v6 = 271;
        goto LABEL_16;
      }
      v4 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(*(_QWORD *)*v2 + 24LL))(
             *v2,
             (char *)this + 184,
             (char *)this + 188);
      v1 = v4;
      if ( v4 < 0 )
      {
        v6 = 276;
        goto LABEL_16;
      }
    }
    else
    {
      v1 = -2147024890;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x10Du);
    }
  }
  else
  {
    v1 = -2147024890;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x102u);
  }
LABEL_17:
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v1;
}
