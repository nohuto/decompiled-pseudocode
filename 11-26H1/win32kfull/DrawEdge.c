/*
 * XREFs of DrawEdge @ 0x1401266B0
 * Callers:
 *     xxxMenuDraw @ 0x14000A708 (xxxMenuDraw.c)
 *     xxxDrawCaptionBar @ 0x140122F88 (xxxDrawCaptionBar.c)
 *     DrawPushButton @ 0x140126508 (DrawPushButton.c)
 *     ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1401F0E20 (-DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z.c)
 *     xxxDrawWindowFrame @ 0x14025B5E8 (xxxDrawWindowFrame.c)
 *     xxxMNDrawFullNC @ 0x1402FA704 (xxxMNDrawFullNC.c)
 * Callees:
 *     FillRect @ 0x140126BCC (FillRect.c)
 *     GrePolyPatBlt @ 0x140126C64 (GrePolyPatBlt.c)
 *     ?DrawDiagonal@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@2I@Z @ 0x140127364 (-DrawDiagonal@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@2I@Z.c)
 *     ?FillTriangle@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@I@Z @ 0x1403026D4 (-FillTriangle@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@I@Z.c)
 */

__int64 __fastcall DrawEdge(HDC a1, __m128i *a2, unsigned int a3, int a4)
{
  unsigned int v4; // edi
  __int64 UserSessionState; // rax
  __m128i v9; // xmm6
  LONG bottom; // r12d
  int v11; // ecx
  __m128i v12; // xmm0
  int right; // r15d
  int left; // r14d
  unsigned int v15; // ebx
  int top; // esi
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  HBRUSH v24; // rdi
  HBRUSH v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // r9d
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // eax
  HBRUSH v41; // r8
  int v42; // eax
  HBRUSH v43; // r8
  RECT v45; // [rsp+40h] [rbp-61h] BYREF
  __m128i *v46; // [rsp+50h] [rbp-51h]
  int v47; // [rsp+58h] [rbp-49h] BYREF
  int v48; // [rsp+5Ch] [rbp-45h]
  int v49; // [rsp+60h] [rbp-41h]
  int v50; // [rsp+64h] [rbp-3Dh]
  _QWORD v51[12]; // [rsp+68h] [rbp-39h]

  v4 = 1;
  v46 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v9 = *a2;
  bottom = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 12));
  LOWORD(UserSessionState) = *(_WORD *)(*(_QWORD *)(UserSessionState + 19904) + 6996LL);
  v11 = a4 | 0x8000;
  v12 = _mm_srli_si128(*a2, 4);
  right = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 8));
  v45 = (RECT)*a2;
  if ( (_WORD)UserSessionState != 1 )
    v11 = a4;
  left = _mm_cvtsi128_si32(v9);
  v15 = v11 | 0x4000;
  top = _mm_cvtsi128_si32(v12);
  if ( (v11 & 0x8000) == 0 )
    v15 = v11;
  v17 = a3;
  v18 = a3 & 3;
  if ( (a3 & 3) == 0 )
    goto LABEL_27;
  while ( 1 )
  {
    if ( (v15 & 0x4000) != 0 )
    {
      v40 = v18 & 3;
      if ( (v15 & 0x8000) != 0 )
        v25 = v40
            ? *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v17, 4096LL) + 19904) + 4744LL)
            : *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v17, 4096LL) + 19904) + 4736LL);
      else
        v25 = v40
            ? *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v17, 4096LL) + 19904) + 4824LL)
            : *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v17, 4096LL) + 19904) + 4816LL);
      v24 = v25;
    }
    else
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 2;
          if ( v21 )
          {
            if ( v21 != 4 )
              return 0LL;
            v37 = *(_QWORD *)(W32GetUserSessionState(v17, 4096LL) + 19904);
            v24 = (v15 & 0x1000) != 0 ? *(HBRUSH *)(v37 + 4824) : *(HBRUSH *)(v37 + 4864);
            v25 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v37, v36) + 19904) + 4872LL);
          }
          else
          {
            v23 = *(_QWORD *)(W32GetUserSessionState(v17, 4096LL) + 19904);
            v24 = (v15 & 0x1000) != 0 ? *(HBRUSH *)(v23 + 4872) : *(HBRUSH *)(v23 + 4856);
            v25 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v23, v22) + 19904) + 4824LL);
          }
        }
        else
        {
          v39 = *(_QWORD *)(W32GetUserSessionState(v17, 4096LL) + 19904);
          v24 = (v15 & 0x1000) != 0 ? *(HBRUSH *)(v39 + 4864) : *(HBRUSH *)(v39 + 4824);
          v25 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v39, v38) + 19904) + 4856LL);
        }
      }
      else
      {
        v27 = *(_QWORD *)(W32GetUserSessionState(v17, 4096LL) + 19904);
        v24 = (v15 & 0x1000) != 0 ? *(HBRUSH *)(v27 + 4856) : *(HBRUSH *)(v27 + 4872);
        v25 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v27, v26) + 19904) + 4864LL);
      }
    }
    if ( (v15 & 0x10) != 0 )
    {
      v34 = DrawDiagonal(a1, &v45, v24, v25, v15);
      bottom = v45.bottom;
      right = v45.right;
      top = v45.top;
      left = v45.left;
      v9 = (__m128i)v45;
    }
    else
    {
      v28 = 0;
      if ( (v15 & 4) != 0 )
      {
        --right;
        v48 = top;
        v45.right = right;
        v9 = (__m128i)v45;
        v47 = right;
        v50 = bottom - top;
        v28 = 1;
        v49 = 1;
        v51[0] = v25;
      }
      if ( (v15 & 8) != 0 )
      {
        v45.bottom = --bottom;
        v9 = (__m128i)v45;
        v29 = 3LL * v28;
        *(&v47 + 2 * v29) = left;
        *(&v49 + 2 * v29) = right - left;
        ++v28;
        *(&v48 + 2 * v29) = bottom;
        *(&v50 + 2 * v29) = 1;
        v51[v29] = v25;
      }
      if ( (v15 & 1) != 0 )
      {
        v30 = v28++;
        v31 = 3 * v30;
        *(&v47 + 2 * v31) = left++;
        *(&v48 + 2 * v31) = top;
        v45.left = left;
        v9 = (__m128i)v45;
        *(&v49 + 2 * v31) = 1;
        *(&v50 + 2 * v31) = bottom - top;
        v51[v31] = v24;
      }
      if ( (v15 & 2) != 0 )
      {
        v32 = v28++;
        v33 = 3 * v32;
        *(&v48 + 2 * v33) = top++;
        *(&v47 + 2 * v33) = left;
        v45.top = top;
        v9 = (__m128i)v45;
        *(&v49 + 2 * v33) = right - left;
        *(&v50 + 2 * v33) = 1;
        v51[v33] = v24;
      }
      v34 = GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)&v47, v28);
    }
    v17 = a3;
    v4 = v34;
LABEL_27:
    v18 = v17 & 0xC;
    if ( (v17 & 0xC) == 0 )
      break;
    v17 = (unsigned int)v17 & 0xFFFFFFF3;
    a3 = v17;
  }
  if ( (v15 & 0x800) != 0 )
  {
    if ( (v15 & 0x10) != 0 )
    {
      if ( (v15 & 0x8000) != 0 )
        v41 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v17, 4096LL) + 19904) + 4736LL);
      else
        v41 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v17, 4096LL) + 19904) + 4816LL);
      v42 = FillTriangle(a1, &v45, v41, v15);
      v9 = (__m128i)v45;
    }
    else
    {
      if ( (v15 & 0x8000) != 0 )
        v43 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v17, 4096LL) + 19904) + 4736LL);
      else
        v43 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v17, 4096LL) + 19904) + 4816LL);
      v42 = FillRect(a1, &v45, v43);
    }
    v4 = v42;
  }
  if ( (v15 & 0x2000) != 0 )
    *v46 = v9;
  return v4;
}
