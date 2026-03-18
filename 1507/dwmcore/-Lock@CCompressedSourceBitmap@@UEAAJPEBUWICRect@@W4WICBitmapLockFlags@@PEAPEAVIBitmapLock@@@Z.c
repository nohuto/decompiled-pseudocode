/*
 * XREFs of ?Lock@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180145270
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x180144DF8 (-EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 */

__int64 __fastcall CCompressedSourceBitmap::Lock(
        CCompressedSourceBitmap *this,
        const struct WICRect *a2,
        unsigned int a3,
        struct IBitmapLock **a4)
{
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  int v11; // eax
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  v8 = CCompressedSourceBitmap::EnsureUncompressedBitmap((CCompressedSourceBitmap *)((char *)this - 24));
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 32))(
            *((_QWORD *)this + 32),
            &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
            &v13);
    v9 = v10;
    if ( v10 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, const struct WICRect *, _QWORD, struct IBitmapLock **))(*(_QWORD *)v13 + 24LL))(
              v13,
              a2,
              a3,
              a4);
      v9 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xBEu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xBBu);
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v9;
}
