/*
 * XREFs of ?GetBitmap@ID2DBitmapCache@@EEAAJU_LUID@@VDisplayId@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18015C570
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall ID2DBitmapCache::GetBitmap(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  char v5; // [rsp+20h] [rbp-28h]
  char v6; // [rsp+28h] [rbp-20h]

  v6 = 0;
  v5 = 0;
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, char, char, __int64))(*(_QWORD *)a1 + 56LL))(
           a1,
           a2,
           a3,
           0LL,
           v5,
           v6,
           a4);
}
