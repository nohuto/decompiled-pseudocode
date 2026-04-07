/*
 * XREFs of ?SendBoundsToSwapchainTarget@CTopLevelWindow@@QEAAJXZ @ 0x18006F1C8
 * Callers:
 *     ?SetSwapchainTarget@CTopLevelWindow@@QEAAJI_NPEAVCResource@@@Z @ 0x18007E154 (-SetSwapchainTarget@CTopLevelWindow@@QEAAJI_NPEAVCResource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x180024000 (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::SendBoundsToSwapchainTarget(CTopLevelWindow *this)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  int v4; // eax
  __m128i v5; // xmm1
  unsigned __int64 v6; // xmm0_8
  __int64 v7; // rax
  __m128i v8; // xmm2
  unsigned __int64 v9; // xmm1_8
  int v10; // eax
  struct _MARGINS v12; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v13[2]; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-18h]
  __int64 v15; // [rsp+50h] [rbp-10h]

  v1 = *((_QWORD *)this + 100);
  v2 = 0;
  if ( v1 )
  {
    v13[0] = 120;
    v4 = *(_DWORD *)(v1 + 24);
    v14 = 0LL;
    v15 = 0LL;
    v13[1] = v4;
    if ( *((_BYTE *)this + 796) )
    {
      v12 = 0LL;
      CTopLevelWindow::GetOutsideMargins(this, &v12);
      v5 = *(__m128i *)(*((_QWORD *)this + 93) + 48LL);
      v14 = __PAIR64__(v12.cyTopHeight, v12.cxLeftWidth);
      v6 = _mm_srli_si128(v5, 8).m128i_u64[0];
      LODWORD(v15) = v6 - v12.cxRightWidth - v5.m128i_i32[0] - v12.cxLeftWidth;
      HIDWORD(v15) = HIDWORD(v6) - v5.m128i_i32[1] - v12.cyBottomHeight - v12.cyTopHeight;
    }
    else
    {
      v7 = *((_QWORD *)this + 93);
      v8 = *(__m128i *)(v7 + 204);
      *(_QWORD *)&v12.cxLeftWidth = *(_QWORD *)(v7 + 172);
      v9 = _mm_srli_si128(v8, 8).m128i_u64[0];
      LODWORD(v15) = (int)(float)((float)((int)v9 - v8.m128i_i32[0]) * *(float *)&v12.cxLeftWidth);
      HIDWORD(v15) = (int)(float)((float)(HIDWORD(v9) - v8.m128i_i32[1]) * *(float *)&v12.cxRightWidth);
    }
    v10 = CResource::Send(*((CResource **)this + 100), v13, 0x18u);
    v2 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x181Bu);
  }
  return v2;
}
