/*
 * XREFs of ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C0221EF0
 * Callers:
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C02224F8 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOINT@@3K@Z @ 0x1C0221CCC (-_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOIN.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C0221DA4 (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C02222E0 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     _TTHmToPixels @ 0x1C0248C44 (_TTHmToPixels.c)
 */

void __fastcall xxxPointerInsideNCTargeting(
        struct tagWND *a1,
        struct tagPNTRWINDOWHITTTESTARGS *a2,
        struct tagRECT *a3,
        unsigned int a4)
{
  LONG v4; // r13d
  LONG v6; // r14d
  struct tagRECT v7; // xmm8
  unsigned int v8; // edi
  LONG v10; // r15d
  LONG v11; // eax
  LONG v12; // ecx
  unsigned int v13; // r9d
  unsigned int v14; // r12d
  unsigned int v15; // r11d
  int v16; // eax
  unsigned int v17; // r11d
  __int64 v18; // rdx
  int v19; // r10d
  struct tagRECT v20; // xmm7
  int v21; // r12d
  int v22; // edi
  struct tagRECT v23; // xmm6
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  struct tagPOINT *v27; // rdx
  int v28; // r14d
  int v29; // eax
  unsigned __int16 v30[4]; // [rsp+48h] [rbp-99h] BYREF
  struct tagPOINT v31; // [rsp+50h] [rbp-91h] BYREF
  struct tagPOINT v32[2]; // [rsp+58h] [rbp-89h]
  struct tagRECT v33; // [rsp+68h] [rbp-79h] BYREF
  int v34[4]; // [rsp+78h] [rbp-69h] BYREF
  struct tagRECT v35; // [rsp+88h] [rbp-59h] BYREF
  struct tagRECT v36; // [rsp+98h] [rbp-49h] BYREF
  struct tagRECT v37; // [rsp+A8h] [rbp-39h] BYREF

  v4 = *((_DWORD *)a1 + 35);
  v6 = *((_DWORD *)a1 + 32);
  v7 = *a3;
  v8 = 120;
  v30[0] = 4095;
  v10 = *((_DWORD *)a1 + 34);
  v31 = 0LL;
  *(_OWORD *)&v32[0].x = 0uLL;
  *(_QWORD *)&v37.left = 0LL;
  *(_QWORD *)&v37.right = 0LL;
  v11 = *((_DWORD *)a1 + 28);
  v12 = *((_DWORD *)a1 + 31);
  v33.left = v11;
  v35.right = *((_DWORD *)a1 + 30);
  v36 = v7;
  v33.top = v4;
  v33.right = v6;
  v33.bottom = v12;
  v35.left = v10;
  v35.top = v4;
  v35.bottom = v12;
  if ( (_WORD)a4 == 3 )
  {
    v13 = HIWORD(a4);
    if ( (unsigned __int16)v13 >= 0x78u )
      v8 = v13;
  }
  v14 = *(_DWORD *)(*((_QWORD *)a2 + 5) + 184LL);
  TTHmToPixels(v8, v14);
  v16 = TTHmToPixels(v8, v15);
  v18 = v14;
  if ( v19 <= v16 )
    v18 = v17;
  v20 = v35;
  v21 = TTHmToPixels(v8, v18);
  v22 = (v8 << 16) + 3;
  _TTCheckNCTarget(&v35, a1, a2, &v36, v30, &v31, &v37, v22);
  v23 = v33;
  _TTCheckNCTarget(&v33, a1, a2, &v36, v30, &v31, &v37, v22);
  v32[0].x = *((_DWORD *)a1 + 34);
  *(struct tagPOINT *)&v32[0].y = *(struct tagPOINT *)((char *)a1 + 116);
  v32[1].y = *((_DWORD *)a1 + 35) - 1;
  v33 = *(struct tagRECT *)&v32[0].x;
  if ( (unsigned int)_TTCheckNCTarget(&v33, a1, a2, &v36, v30, &v31, &v37, v22) )
  {
    v24 = *(_DWORD *)(*((_QWORD *)a2 + 5) + 36LL);
    if ( v24 + v21 >= v4 )
    {
      v37 = v20;
      v31.y = v20.top - v24 + 1;
    }
  }
  v32[0] = *(struct tagPOINT *)((char *)a1 + 112);
  v32[1].x = *((_DWORD *)a1 + 32);
  v32[1].y = *((_DWORD *)a1 + 35) - 1;
  v33 = *(struct tagRECT *)&v32[0].x;
  if ( (unsigned int)_TTCheckNCTarget(&v33, a1, a2, &v36, v30, &v31, &v37, v22) )
  {
    v25 = *(_DWORD *)(*((_QWORD *)a2 + 5) + 36LL);
    if ( v25 + v21 >= v4 )
    {
      v37 = v23;
      v31.y = v23.top - v25 + 1;
    }
  }
  v32[0].x = *((_DWORD *)a1 + 32) + 1;
  v32[0].y = *((_DWORD *)a1 + 35);
  v32[1].x = *((_DWORD *)a1 + 34) - 1;
  v32[1].y = *((_DWORD *)a1 + 31);
  v33 = *(struct tagRECT *)&v32[0].x;
  if ( (unsigned int)_TTCheckNCTarget(&v33, a1, a2, &v36, v30, &v31, &v37, v22) )
  {
    v26 = *(_DWORD *)(*((_QWORD *)a2 + 5) + 32LL);
    if ( v26 + v21 < v10 )
    {
      if ( v26 - v21 <= v6 )
      {
        v37 = v23;
        v31.x = v6 - v26 - 1;
      }
    }
    else
    {
      v37 = v20;
      v31.x = v10 - v26 + 1;
    }
  }
  if ( v30[0] < 0xFFDu )
  {
    v27 = (struct tagPOINT *)*((_QWORD *)a2 + 5);
    v34[0] = 0;
    xxxSendNCHitTest(a1, v27[4], v27[4], &v31, v34, a2);
    v28 = v34[0];
    if ( v34[0] <= 0x11u )
    {
      v29 = 232656;
      if ( _bittest(&v29, v34[0]) )
      {
        v33 = v7;
        _TTUpdateBestTarget(a2, a1, v30[0], &v31, &v37, 0, &v33, v22);
        *((_DWORD *)a2 + 8) = v28;
      }
    }
  }
}
