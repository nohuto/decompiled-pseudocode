/*
 * XREFs of ?GetD2DBitmap@IBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18015C730
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall IBitmapRealization::GetD2DBitmap(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  char v6; // [rsp+28h] [rbp-20h]
  char v7; // [rsp+30h] [rbp-18h]

  v7 = 0;
  v6 = 0;
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, char, char, __int64))(*(_QWORD *)a1 + 96LL))(
           a1,
           a2,
           a3,
           a4,
           0LL,
           v6,
           v7,
           a5);
}
