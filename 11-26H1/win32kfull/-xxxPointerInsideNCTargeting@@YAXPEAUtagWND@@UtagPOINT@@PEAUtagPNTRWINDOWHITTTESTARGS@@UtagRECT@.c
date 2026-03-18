/*
 * XREFs of ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1400872B4
 * Callers:
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x140088A18 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 * Callees:
 *     TouchTargetingRankForRect @ 0x1400878F8 (TouchTargetingRankForRect.c)
 *     _TTHmToPixels @ 0x140087E54 (_TTHmToPixels.c)
 *     ?TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z @ 0x140088200 (-TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1400895D8 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x140244704 (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall xxxPointerInsideNCTargeting(
        struct tagWND *a1,
        struct tagPOINT a2,
        struct tagPNTRWINDOWHITTTESTARGS *a3,
        struct tagRECT *a4,
        unsigned int a5)
{
  _DWORD *v6; // rcx
  unsigned __int16 v10; // r14
  LONG v11; // edx
  LONG v12; // r12d
  LONG v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rdi
  unsigned int v16; // r11d
  int v17; // eax
  unsigned int v18; // r10d
  unsigned int v19; // r11d
  int v20; // r9d
  int v21; // r9d
  unsigned __int16 v22; // ax
  unsigned int v23; // edi
  struct tagRECT v24; // xmm6
  __int64 v25; // r8
  unsigned __int16 v26; // ax
  _DWORD *v27; // rax
  unsigned int v28; // ecx
  unsigned int v29; // edx
  unsigned int v30; // r8d
  unsigned __int16 v31; // ax
  struct tagRECT v32; // xmm7
  _DWORD *v33; // rax
  LONG v34; // ecx
  unsigned int v35; // edx
  LONG v36; // r8d
  unsigned __int16 v37; // ax
  _DWORD *v38; // rcx
  unsigned int v39; // r8d
  int v40; // eax
  LONG v41; // edx
  __int64 v42; // r8
  unsigned __int16 v43; // ax
  unsigned __int16 v44; // r12
  int v45; // ecx
  int v46; // ecx
  int v47; // edx
  struct tagPOINT *v48; // r8
  unsigned int v49; // ebx
  int v50; // eax
  unsigned int v51; // [rsp+48h] [rbp-C0h]
  unsigned __int16 v52; // [rsp+48h] [rbp-C0h]
  unsigned __int16 v53; // [rsp+48h] [rbp-C0h]
  unsigned __int16 v54; // [rsp+48h] [rbp-C0h]
  unsigned __int16 v55; // [rsp+48h] [rbp-C0h]
  unsigned __int16 v56; // [rsp+48h] [rbp-C0h]
  unsigned int v57; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned __int64 v58; // [rsp+50h] [rbp-B8h]
  struct tagPOINT v59; // [rsp+58h] [rbp-B0h] BYREF
  struct tagPOINT v60; // [rsp+60h] [rbp-A8h] BYREF
  struct tagPOINT v61[2]; // [rsp+68h] [rbp-A0h] BYREF
  LONG v62; // [rsp+78h] [rbp-90h]
  struct tagRECT v63; // [rsp+88h] [rbp-80h] BYREF
  int v64; // [rsp+98h] [rbp-70h]
  _QWORD v65[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v66; // [rsp+B8h] [rbp-50h] BYREF
  signed int v67; // [rsp+C8h] [rbp-40h]
  struct tagRECT v68; // [rsp+D8h] [rbp-30h] BYREF

  v60 = 0LL;
  v6 = (_DWORD *)*((_QWORD *)a1 + 5);
  v10 = 4095;
  v68 = 0LL;
  v11 = v6[29];
  v12 = v6[28];
  v61[0].x = v6[22];
  v67 = v6[26];
  v13 = v6[25];
  LODWORD(v58) = v6[24];
  v63.right = v58;
  HIDWORD(v58) = v13;
  v61[1].y = v13;
  v63.bottom = v13;
  v14 = 120;
  v62 = v11;
  *(_QWORD *)&v61[0].y = __PAIR64__(v67, v11);
  v63.left = v12;
  v63.top = v11;
  v51 = 120;
  if ( (_WORD)a5 == 3 )
  {
    if ( HIWORD(a5) >= 0x78u )
    {
      v14 = HIWORD(a5);
      v51 = HIWORD(a5);
    }
    else
    {
      v51 = 120;
    }
  }
  v15 = *((_QWORD *)a3 + 5);
  TTHmToPixels(v14, *(unsigned int *)(v15 + 184));
  v17 = TTHmToPixels(v51, v16);
  if ( v20 <= v17 )
    v18 = v19;
  v64 = TTHmToPixels(v51, v18);
  v57 = (v21 << 16) + 3;
  v65[1] = v58;
  *((_QWORD *)&v66 + 1) = v58;
  v59 = 0LL;
  v65[0] = __PAIR64__(v62, v12);
  *(_QWORD *)&v66 = __PAIR64__(v62, v12);
  v22 = TouchTargetingRankForRect(&v66, v65, v15, a4, &v59, v57);
  v23 = v57;
  v52 = v22;
  if ( v22 <= 0xFFCu && (unsigned int)TTBetterTarget(a1, v22, a3, a4, v57) )
  {
    v10 = v52;
    v68.top = v62;
    *(_QWORD *)&v68.right = v58;
    v60 = v59;
    v68.left = v12;
  }
  v24 = *(struct tagRECT *)&v61[0].x;
  v25 = *((_QWORD *)a3 + 5);
  v66 = *(_OWORD *)&v61[0].x;
  v59 = 0LL;
  v26 = TouchTargetingRankForRect(&v66, v61, v25, a4, &v59, v57);
  v53 = v26;
  if ( v26 < 0xFFDu && v26 < v10 && (unsigned int)TTBetterTarget(a1, v26, a3, a4, v57) )
  {
    v10 = v53;
    v60 = v59;
    v68 = v24;
  }
  v27 = (_DWORD *)*((_QWORD *)a1 + 5);
  v65[0] = 0LL;
  v28 = v27[28];
  v29 = v27[23];
  v30 = v27[24];
  LODWORD(v27) = v27[29] - 1;
  v57 = v28;
  v59.x = (int)v27;
  v58 = __PAIR64__(v29, v30);
  v61[0] = (struct tagPOINT)__PAIR64__(v29, v28);
  v61[1] = (struct tagPOINT)__PAIR64__((unsigned int)v27, v30);
  *(_QWORD *)&v66 = __PAIR64__(v29, v28);
  *((_QWORD *)&v66 + 1) = __PAIR64__((unsigned int)v27, v30);
  v31 = TouchTargetingRankForRect(&v66, v61, *((_QWORD *)a3 + 5), a4, v65, v23);
  v32 = v63;
  v54 = v31;
  if ( v31 < v10 && v31 < 0xFFDu )
  {
    if ( (unsigned int)TTBetterTarget(a1, v31, a3, a4, v23) )
    {
      v10 = v54;
      v68.left = v57;
      v68.top = HIDWORD(v58);
      v68.right = v58;
      v68.bottom = v59.x;
      v60 = (struct tagPOINT)v65[0];
      v45 = *(_DWORD *)(*((_QWORD *)a3 + 5) + 36LL);
      if ( v45 + v64 >= v62 )
      {
        v68 = v32;
        v60.y = v32.top - v45 + 1;
      }
    }
  }
  v33 = (_DWORD *)*((_QWORD *)a1 + 5);
  v65[0] = 0LL;
  v34 = v33[22];
  v35 = v33[23];
  v36 = v33[26];
  LODWORD(v33) = v33[29] - 1;
  v59.x = v34;
  v58 = __PAIR64__(v36, (unsigned int)v33);
  v63.bottom = (int)v33;
  v57 = v35;
  v63.left = v34;
  v63.top = v35;
  v63.right = v36;
  v61[0] = (struct tagPOINT)__PAIR64__(v35, v34);
  v61[1] = (struct tagPOINT)__PAIR64__((unsigned int)v33, v36);
  v37 = TouchTargetingRankForRect(v61, &v63, *((_QWORD *)a3 + 5), a4, v65, v23);
  v55 = v37;
  if ( v37 < v10 && v37 < 0xFFDu )
  {
    if ( (unsigned int)TTBetterTarget(a1, v37, a3, a4, v23) )
    {
      v10 = v55;
      v68.left = v59.x;
      v68.top = v57;
      v68.right = HIDWORD(v58);
      v68.bottom = v58;
      v60 = (struct tagPOINT)v65[0];
      v46 = *(_DWORD *)(*((_QWORD *)a3 + 5) + 36LL);
      if ( v46 + v64 >= v62 )
      {
        v68 = v24;
        v60.y = v24.top - v46 + 1;
      }
    }
  }
  v38 = (_DWORD *)*((_QWORD *)a1 + 5);
  v65[0] = 0LL;
  v39 = v38[29];
  v40 = v38[28];
  v41 = v38[26] + 1;
  LODWORD(v38) = v38[25];
  HIDWORD(v58) = v40 - 1;
  v63.right = v40 - 1;
  v61[1].x = v40 - 1;
  v59.x = v41;
  v57 = v39;
  LODWORD(v58) = (_DWORD)v38;
  v63.left = v41;
  v63.top = v39;
  v63.bottom = (int)v38;
  v61[0] = (struct tagPOINT)__PAIR64__(v39, v41);
  v42 = *((_QWORD *)a3 + 5);
  v61[1].y = (int)v38;
  v43 = TouchTargetingRankForRect(v61, &v63, v42, a4, v65, v23);
  v56 = v43;
  if ( v43 < v10 && v43 < 0xFFDu && (unsigned int)TTBetterTarget(a1, v43, a3, a4, v23) )
  {
    v68.left = v59.x;
    v68.top = v57;
    v68.right = HIDWORD(v58);
    v68.bottom = v58;
    v60 = (struct tagPOINT)v65[0];
    v47 = *(_DWORD *)(*((_QWORD *)a3 + 5) + 32LL);
    if ( v47 + v64 < v12 )
    {
      if ( v47 - v64 <= v67 )
      {
        v68 = v24;
        v60.x = v67 - v47 - 1;
      }
    }
    else
    {
      v68 = v32;
      v60.x = v12 - v47 + 1;
    }
    v44 = v56;
  }
  else
  {
    v44 = v10;
    if ( v10 >= 0xFFDu )
      return;
  }
  v48 = (struct tagPOINT *)*((_QWORD *)a3 + 5);
  v57 = 0;
  xxxSendNCHitTest(a1, a2, v48[4], &v60, (int *)&v57, a3);
  v49 = v57;
  if ( v57 <= 0x11 )
  {
    v50 = 232656;
    if ( _bittest(&v50, v57) )
    {
      v63 = *a4;
      _TTUpdateBestTarget(a3, a1, v44, &v60, &v68, 0, &v63, v23);
      *((_DWORD *)a3 + 8) = v49;
    }
  }
}
