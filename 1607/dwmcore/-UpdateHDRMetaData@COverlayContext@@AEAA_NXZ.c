/*
 * XREFs of ?UpdateHDRMetaData@COverlayContext@@AEAA_NXZ @ 0x180129D2C
 * Callers:
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x180078B34 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800BF656 (memcmp_0.c)
 */

char __fastcall COverlayContext::UpdateHDRMetaData(COverlayContext *this)
{
  unsigned int v1; // r10d
  char v2; // bl
  int v4; // esi
  __int64 v5; // r9
  unsigned int v6; // r8d
  __int64 v7; // r11
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  __int64 v11; // xmm1_8
  _OWORD Buf1[2]; // [rsp+20h] [rbp-30h] BYREF

  v1 = *((_DWORD *)this + 66);
  v2 = 0;
  memset(Buf1, 0, 28);
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  if ( v1 )
  {
    v7 = *((_QWORD *)this + 30);
    do
    {
      v8 = *(_QWORD *)(232LL * v6 + v7 + 24);
      if ( *(_DWORD *)(v8 + 144) == 1 )
      {
        v9 = *(_DWORD *)(v8 + 172);
        *(_QWORD *)&Buf1[1] = *(_QWORD *)(v8 + 164);
        DWORD2(Buf1[1]) = v9;
        Buf1[0] = *(_OWORD *)(v8 + 148);
        if ( v5 && v5 != v8 )
        {
          v4 = 0;
          break;
        }
        v4 = 1;
        v5 = v8;
      }
      ++v6;
    }
    while ( v6 < v1 );
  }
  if ( v4 != *((_DWORD *)this + 24) || v4 == 1 && memcmp_0(Buf1, (char *)this + 100, 0x1CuLL) )
  {
    v2 = 1;
    v10 = DWORD2(Buf1[1]);
    v11 = *(_QWORD *)&Buf1[1];
    *(_OWORD *)((char *)this + 100) = Buf1[0];
    *((_DWORD *)this + 24) = v4;
    *(_QWORD *)((char *)this + 116) = v11;
    *((_DWORD *)this + 31) = v10;
  }
  return v2;
}
