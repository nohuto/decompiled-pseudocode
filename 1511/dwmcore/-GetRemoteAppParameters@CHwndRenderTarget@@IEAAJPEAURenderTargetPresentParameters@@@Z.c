/*
 * XREFs of ?GetRemoteAppParameters@CHwndRenderTarget@@IEAAJPEAURenderTargetPresentParameters@@@Z @ 0x180105E90
 * Callers:
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x18007CC50 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180047C60 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?FindTopLevelVisualFromHwnd@CWindowManager@@QEAAJ_KPEAPEAVCVisual@@@Z @ 0x180104914 (-FindTopLevelVisualFromHwnd@CWindowManager@@QEAAJ_KPEAPEAVCVisual@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CHwndRenderTarget::GetRemoteAppParameters(
        CHwndRenderTarget *this,
        struct RenderTargetPresentParameters *a2,
        double a3)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  CWindowManager *v7; // rdi
  __int64 v8; // rax
  int TopLevelVisualFromHwnd; // eax
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // rax
  float v13; // xmm0_4
  int v14; // eax
  float v15; // xmm0_4
  int v16; // eax
  float v17; // xmm0_4
  int v18; // eax
  float v19; // xmm0_4
  int v20; // eax
  __int128 v22; // [rsp+30h] [rbp-30h] BYREF
  __int64 v23; // [rsp+40h] [rbp-20h]
  _DWORD v24[4]; // [rsp+48h] [rbp-18h] BYREF

  v3 = *((_QWORD *)this + 2);
  v4 = 0LL;
  v23 = 0LL;
  v22 = 0uLL;
  v7 = *(CWindowManager **)(v3 + 48);
  v8 = (*(__int64 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 208LL))(this);
  TopLevelVisualFromHwnd = CWindowManager::FindTopLevelVisualFromHwnd(v7, v8, (struct CVisual **)&v22);
  v10 = TopLevelVisualFromHwnd;
  if ( TopLevelVisualFromHwnd >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(CHwndRenderTarget *, char *))(*(_QWORD *)this + 200LL))(this, (char *)a2 + 8);
    v10 = v11;
    if ( v11 >= 0 )
    {
      do
      {
        *((float *)&v22 + v4 + 2) = (float)*(int *)((char *)&v24[v4 - 2]
                                                  + a2
                                                  - (struct RenderTargetPresentParameters *)((char *)&v22 + 8));
        ++v4;
      }
      while ( v4 < 4 );
      CBaseMatrix::Transform2DBounds(
        (CHwndRenderTarget *)((char *)this + 132),
        (const struct MilRectF *)((char *)&v22 + 8),
        (struct MilRectF *)v24);
      v12 = (*(__int64 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 208LL))(this);
      v13 = *(float *)v24;
      *(_QWORD *)a2 = v12;
      *(float *)&v22 = v13;
      if ( (LODWORD(v13) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v13 - v13;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
        LODWORD(v22) = LODWORD(a3);
        v14 = (int)v13 - LODWORD(a3);
      }
      else
      {
        *(float *)&v22 = v13 + 6291456.25;
        v14 = (int)((_DWORD)v22 << 10) >> 11;
      }
      v15 = *(float *)&v24[2];
      *((_DWORD *)a2 + 2) = v14;
      *(float *)&v22 = v15;
      if ( (LODWORD(v15) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v15 - v15;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
        LODWORD(v22) = LODWORD(a3);
        v16 = (int)v15 - LODWORD(a3);
      }
      else
      {
        *(float *)&v22 = v15 + 6291456.25;
        v16 = (int)((_DWORD)v22 << 10) >> 11;
      }
      v17 = *(float *)&v24[1];
      *((_DWORD *)a2 + 4) = v16;
      *(float *)&v22 = v17;
      if ( (LODWORD(v17) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v17 - v17;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
        LODWORD(v22) = LODWORD(a3);
        v18 = (int)v17 - LODWORD(a3);
      }
      else
      {
        *(float *)&v22 = v17 + 6291456.25;
        v18 = (int)((_DWORD)v22 << 10) >> 11;
      }
      v19 = *(float *)&v24[3];
      *((_DWORD *)a2 + 3) = v18;
      *(float *)&v22 = v19;
      if ( (LODWORD(v19) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v19 - v19;
        LODWORD(v22) = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
        v20 = (int)v19 - v22;
      }
      else
      {
        *(float *)&v22 = v19 + 6291456.25;
        v20 = (int)((_DWORD)v22 << 10) >> 11;
      }
      *((_DWORD *)a2 + 5) = v20;
      *((_QWORD *)a2 + 3) = (*(__int64 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 216LL))(this);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x60Fu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, TopLevelVisualFromHwnd, 0x60Cu);
  }
  return v10;
}
