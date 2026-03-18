/*
 * XREFs of _GetMouseMovePointsEx @ 0x140210FEC
 * Callers:
 *     NtUserGetMouseMovePointsEx @ 0x140210ED0 (NtUserGetMouseMovePointsEx.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     GetCurrentThreadCompositedDpi @ 0x140031050 (GetCurrentThreadCompositedDpi.c)
 *     GetScreenRectForDpi @ 0x1400310BC (GetScreenRectForDpi.c)
 */

__int64 __fastcall GetMouseMovePointsEx(__int16 *a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  INT v19; // r15d
  __int64 v20; // rdx
  __int64 UserSessionState; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  INT v24; // eax
  INT v25; // r15d
  __int64 v26; // rax
  int v27; // r15d
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  unsigned int v31; // esi
  unsigned __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  INT v40; // ebx
  __int64 v41; // rax
  INT v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  INT v45; // ebx
  __int64 v46; // rax
  INT v47; // eax
  __int64 v48; // rcx
  unsigned int v49; // eax
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  __m128i v51; // xmm6
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // rdx
  unsigned int v58; // eax
  int v59; // [rsp+20h] [rbp-A8h]
  int v60; // [rsp+24h] [rbp-A4h]
  INT v61; // [rsp+24h] [rbp-A4h]
  int v62; // [rsp+28h] [rbp-A0h]
  unsigned int v63; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v64; // [rsp+30h] [rbp-98h] BYREF
  __int64 v65; // [rsp+38h] [rbp-90h] BYREF
  unsigned int v66; // [rsp+40h] [rbp-88h]
  unsigned int v67; // [rsp+44h] [rbp-84h]
  __int128 v68; // [rsp+48h] [rbp-80h]
  __int64 v69; // [rsp+58h] [rbp-70h] BYREF
  __int64 v70; // [rsp+60h] [rbp-68h] BYREF
  __m128i v71[3]; // [rsp+70h] [rbp-58h] BYREF
  int ca; // [rsp+D0h] [rbp+8h]

  v67 = 0;
  v70 = 0LL;
  LODWORD(v69) = *a1;
  HIDWORD(v69) = a1[2];
  v65 = 0LL;
  v64 = 0LL;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
  LogicalToPhysicalDPIPoint(&v70, &v69, CurrentThreadDpiAwarenessContext, 0LL);
  if ( *(_DWORD *)(W32GetUserSessionState(v7, v6) + 14716) )
    v10 = ((unsigned __int8)*(_DWORD *)(W32GetUserSessionState(v9, v8) + 14716) - 1) & 0x3F;
  else
    v10 = 63;
  v11 = v10;
  v13 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 56968);
  v68 = *(_OWORD *)(*(_QWORD *)v13 + 24LL);
  while ( 1 )
  {
    v66 = 0;
    v14 = (unsigned __int64)*(unsigned int *)(W32GetUserSessionState(v13, v12) + 24LL * v11 + 14720) >> 16;
    if ( !(_WORD)v14 )
      break;
    v15 = (unsigned __int64)*(unsigned int *)(W32GetUserSessionState(v14, v12) + 24LL * v11 + 14724) >> 16;
    if ( !(_WORD)v15 )
      break;
    v16 = (unsigned __int64)*(unsigned int *)(W32GetUserSessionState(v15, v12) + 24LL * v11 + 14720) >> 16;
    v60 = (unsigned __int16)v16 + 1;
    v18 = (unsigned __int64)*(unsigned int *)(W32GetUserSessionState(v16, v17) + 24LL * v11 + 14724) >> 16;
    v62 = (unsigned __int16)v18 + 1;
    v19 = DWORD2(v68) - v68;
    UserSessionState = W32GetUserSessionState(v18, v20);
    if ( v60 == v19 )
      v24 = *(__int16 *)(UserSessionState + 24LL * v11 + 14720);
    else
      v24 = v68 + EngMulDiv(*(unsigned __int16 *)(UserSessionState + 24LL * v11 + 14720), v19, v60);
    v61 = v24;
    v25 = HIDWORD(v68) - DWORD1(v68);
    v26 = W32GetUserSessionState(v23, v22);
    if ( v62 == v25 )
      v27 = *(__int16 *)(v26 + 24LL * v11 + 14724);
    else
      v27 = DWORD1(v68) + EngMulDiv(*(unsigned __int16 *)(v26 + 24LL * v11 + 14724), v25, v62);
    if ( __PAIR64__(v27, v61) == v70 )
      goto LABEL_17;
    if ( (W32GetCurrentThreadDpiAwarenessContext(v13) & 0xF) == 2 )
    {
      v13 = v66;
    }
    else
    {
      v64 = __PAIR64__(v27, v61);
      v58 = W32GetCurrentThreadDpiAwarenessContext(v28);
      PhysicalToLogicalDPIPoint(&v65, &v64, v58, 0LL);
      v13 = v66;
      if ( v65 == v69 )
        v13 = 1LL;
    }
    if ( (_DWORD)v13 )
    {
LABEL_17:
      if ( !*((_DWORD *)a1 + 2)
        || *((_DWORD *)a1 + 2) == *(_DWORD *)(W32GetUserSessionState(v13, v12) + 24LL * v11 + 14728) )
      {
        v29 = 1;
        goto LABEL_19;
      }
    }
    if ( v11 )
      v11 = ((_BYTE)v11 - 1) & 0x3F;
    else
      v11 = 63;
    if ( v11 == v10 )
    {
      v29 = 0;
      goto LABEL_19;
    }
  }
  v29 = 0;
LABEL_19:
  if ( v29 )
  {
    v30 = v11 - v10 + 64;
    if ( v11 > v10 )
      v30 = v11 - v10;
    if ( (unsigned int)v30 >= a3 )
      v30 = a3;
    v63 = v30;
    v31 = 0;
    v67 = 0;
    while ( v31 < (unsigned int)v30 )
    {
      v32 = (unsigned __int64)*(unsigned int *)(W32GetUserSessionState(v30, v12) + 24LL * v11 + 14720) >> 16;
      ca = (unsigned __int16)v32 + 1;
      v34 = (unsigned __int64)*(unsigned int *)(W32GetUserSessionState(v32, v33) + 24LL * v11 + 14724) >> 16;
      v59 = (unsigned __int16)v34 + 1;
      v37 = (unsigned __int64)*(unsigned int *)(W32GetUserSessionState(v34, v35) + 24LL * v11 + 14720) >> 16;
      if ( !(_WORD)v37 )
        break;
      v39 = (unsigned __int64)*(unsigned int *)(W32GetUserSessionState(v37, v36) + 24LL * v11 + 14724) >> 16;
      if ( !(_WORD)v39 )
        break;
      v40 = DWORD2(v68) - v68;
      v41 = W32GetUserSessionState(v39, v38);
      if ( ca == v40 )
        v42 = EngMulDiv(*(__int16 *)(v41 + 24LL * v11 + 14720), v40, ca);
      else
        v42 = v68 + EngMulDiv(*(unsigned __int16 *)(v41 + 24LL * v11 + 14720), v40, ca);
      LODWORD(v64) = v42;
      v45 = HIDWORD(v68) - DWORD1(v68);
      v46 = W32GetUserSessionState(v44, v43);
      if ( v59 == v45 )
        v47 = EngMulDiv(*(__int16 *)(v46 + 24LL * v11 + 14724), v45, v59);
      else
        v47 = DWORD1(v68) + EngMulDiv(*(unsigned __int16 *)(v46 + 24LL * v11 + 14724), v45, v59);
      HIDWORD(v64) = v47;
      v49 = W32GetCurrentThreadDpiAwarenessContext(v48);
      PhysicalToLogicalDPIPoint(&v65, &v64, v49, 0LL);
      if ( a4 == 2 )
      {
        CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
        GetScreenRectForDpi(v71, CurrentThreadCompositedDpi);
        v51 = v71[0];
        v71[1] = v71[0];
        *(_DWORD *)(a2 + 24LL * v31) = EngMulDiv(
                                         (unsigned __int16)v65,
                                         0x10000,
                                         _mm_cvtsi128_si32(_mm_srli_si128(v71[0], 8)) - _mm_cvtsi128_si32(v71[0]) - 1);
        *(_DWORD *)(a2 + 24LL * v31 + 4) = EngMulDiv(
                                             WORD2(v65),
                                             0x10000,
                                             _mm_cvtsi128_si32(_mm_srli_si128(v51, 12))
                                           - _mm_cvtsi128_si32(_mm_srli_si128(v51, 4))
                                           - 1);
        v53 = v31;
      }
      else
      {
        *(_QWORD *)(a2 + 24LL * v31) = v65;
        v53 = v31;
        v52 = 3LL * v31;
        if ( *(int *)(a2 + 24LL * v31) < 0 )
          *(_DWORD *)(a2 + 24LL * v31) += 0x10000;
        if ( *(int *)(a2 + 24LL * v31 + 4) < 0 )
          *(_DWORD *)(a2 + 24LL * v31 + 4) += 0x10000;
      }
      v54 = 3 * v53;
      v55 = *(unsigned int *)(W32GetUserSessionState(v52, v53) + 24LL * v11 + 14728);
      *(_DWORD *)(a2 + 8 * v54 + 8) = v55;
      *(_QWORD *)(a2 + 8 * v54 + 16) = *(_QWORD *)(W32GetUserSessionState(v55, v56) + 24LL * v11 + 14736);
      if ( v11 )
        v11 = ((_BYTE)v11 - 1) & 0x3F;
      else
        v11 = 63;
      v67 = ++v31;
      v30 = v63;
    }
    return v31;
  }
  else
  {
    UserSetLastError(1171);
    return 0xFFFFFFFFLL;
  }
}
