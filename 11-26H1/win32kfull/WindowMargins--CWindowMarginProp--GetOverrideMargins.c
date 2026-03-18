/*
 * XREFs of WindowMargins::CWindowMarginProp::GetOverrideMargins @ 0x14029006C
 * Callers:
 *     WindowMargins::CWindowMarginProp::CalculateWindowMargins @ 0x1400A7100 (WindowMargins--CWindowMarginProp--CalculateWindowMargins.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     _lambda_eeef72b4b24c806838652c8dfe68f68f_::operator() @ 0x1402DA9FC (_lambda_eeef72b4b24c806838652c8dfe68f68f_--operator().c)
 */

char __fastcall WindowMargins::CWindowMarginProp::GetOverrideMargins(__int64 a1, __int64 a2, INT a3, int a4, _WORD *a5)
{
  __int64 v5; // r10
  _WORD *v9; // rdi
  __int64 v10; // rdx
  int v11; // r14d
  bool v12; // di
  bool v13; // bl
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  __int16 v17; // r11
  __int64 v18; // rax
  __int64 v19; // r9
  __m128i v20; // xmm1
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rcx
  __int16 v24; // r11

  v5 = *(_QWORD *)(a2 + 40);
  if ( (*(_BYTE *)(v5 + 234) & 2) == 0 || a4 == 1 && (*(_BYTE *)(v5 + 31) & 0x21) != 0 )
    return 0;
  *a5 = EngMulDiv(*(__int16 *)(a1 + 52), a3, *(_DWORD *)(a1 + 40));
  a5[1] = EngMulDiv(*(__int16 *)(a1 + 54), a3, *(_DWORD *)(a1 + 40));
  a5[2] = EngMulDiv(*(__int16 *)(a1 + 56), a3, *(_DWORD *)(a1 + 40));
  v9 = a5 + 3;
  a5[3] = EngMulDiv(*(__int16 *)(a1 + 58), a3, *(_DWORD *)(a1 + 40));
  v11 = *(_DWORD *)(a1 + 40);
  if ( a3 != v11 )
  {
    v12 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100000) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
    v13 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
       && *((_WORD *)WPP_GLOBAL_Control + 36);
    if ( v12 || v13 )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v12;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(UserSessionState + 69152),
        5,
        21,
        26,
        (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
        v11,
        a3);
    }
    v9 = a5 + 3;
  }
  v17 = EngMulDiv(1, a3, 96);
  v18 = *(_QWORD *)(a2 + 40);
  v19 = *(unsigned int *)(v18 + 96);
  v20 = *(__m128i *)(v18 + 88);
  LOWORD(v19) = v19 - 2 * v17 - _mm_cvtsi128_si32(v20);
  lambda_eeef72b4b24c806838652c8dfe68f68f_::operator()(v21, a5, a5 + 1, v19);
  v22 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v20, 12));
  v23 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v20, 4));
  LOWORD(v22) = v22 - v24 - v23;
  lambda_eeef72b4b24c806838652c8dfe68f68f_::operator()(v23, a5 + 2, v9, v22);
  return 1;
}
