/*
 * XREFs of ?TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z @ 0x1C022B524
 * Callers:
 *     ?_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOINT@@3K@Z @ 0x1C022C004 (-_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOIN.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C022C7CC (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 * Callees:
 *     IntersectRect @ 0x1C006B798 (IntersectRect.c)
 *     ?GetScreenRect@@YA?AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z @ 0x1C022B120 (-GetScreenRect@@YA-AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z.c)
 */

__int64 __fastcall TTBetterTarget(
        struct tagWND *a1,
        int a2,
        struct tagPNTRWINDOWHITTTESTARGS *a3,
        struct tagRECT *a4,
        __int16 a5)
{
  unsigned int v5; // ebx
  struct tagRECT v8; // xmm6
  __int64 result; // rax
  int v10; // r15d
  const struct _D3DMATRIX *v11; // rsi
  int v12; // r14d
  struct tagRECT v13; // [rsp+20h] [rbp-60h] BYREF
  struct tagRECT v14; // [rsp+30h] [rbp-50h] BYREF
  struct tagRECT v15; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v16; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v17; // [rsp+60h] [rbp-20h] BYREF

  v5 = 0;
  v8 = (struct tagRECT)*((_OWORD *)a1 + 7);
  v13 = v8;
  if ( a4 )
  {
    result = IntersectRect(&v13, &v13.left, &a4->left);
    if ( !(_DWORD)result )
      return result;
    v8 = v13;
  }
  if ( !*((_QWORD *)a3 + 7) )
    return 1;
  v10 = *((_DWORD *)a3 + 44);
  if ( (a5 == 3 ? 0 : 0xFFF) + a2 < (unsigned int)(*((_DWORD *)a3 + 16)
                                                 + ((((unsigned __int8)v10 >> 1) & 1) == 0 ? 0xFFF : 0)) )
  {
    v11 = (const struct _D3DMATRIX *)*((_QWORD *)a3 + 12);
    v12 = *((_DWORD *)a3 + 21);
    v13 = v8;
    if ( GetScreenRect(&v14, v12, v11, &v13)->left >= *((_DWORD *)a3 + 19) )
      return 1;
    v13 = v8;
    if ( *((_DWORD *)a3 + 17) >= _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)GetScreenRect(&v15, v12, v11, &v13), 8)) )
      return 1;
    v13 = v8;
    if ( (int)HIDWORD(*(_QWORD *)&GetScreenRect(&v16, v12, v11, &v13)->left) >= *((_DWORD *)a3 + 20) )
      return 1;
    v13 = v8;
    if ( *((_DWORD *)a3 + 18) >= _mm_srli_si128(*(__m128i *)GetScreenRect(&v17, v12, v11, &v13), 8).m128i_i32[1]
      || (v10 & 1) != 0 )
    {
      return 1;
    }
  }
  return v5;
}
