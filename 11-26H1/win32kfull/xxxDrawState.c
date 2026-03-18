/*
 * XREFs of xxxDrawState @ 0x1401F9348
 * Callers:
 *     xxxDrawMenuItem @ 0x14000B428 (xxxDrawMenuItem.c)
 * Callees:
 *     MNIspItemValid @ 0x14000C5A8 (MNIspItemValid.c)
 *     GreExtGetObjectW @ 0x140014058 (GreExtGetObjectW.c)
 *     GreSetTextColor @ 0x140027BB0 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x140027C40 (GreSetBkColor.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GrePatBlt @ 0x1400AD26C (GrePatBlt.c)
 *     GreSetViewportOrg @ 0x14012045C (GreSetViewportOrg.c)
 *     GreGetTextAlign @ 0x1401205E8 (GreGetTextAlign.c)
 *     GreSetBkMode @ 0x140126104 (GreSetBkMode.c)
 *     GreSelectFont @ 0x140126190 (GreSelectFont.c)
 *     GreGetLayout @ 0x1401264BC (GreGetLayout.c)
 *     GrePolyPatBlt @ 0x140126C64 (GrePolyPatBlt.c)
 *     GreSetTextAlign @ 0x14012742C (GreSetTextAlign.c)
 *     GreGetTextColor @ 0x1401F0918 (GreGetTextColor.c)
 *     GreGetHFONT @ 0x1401F9294 (GreGetHFONT.c)
 *     GreSetTextCharacterExtra @ 0x1401F92E4 (GreSetTextCharacterExtra.c)
 *     xxxRealDrawMenuItem @ 0x1401F9D14 (xxxRealDrawMenuItem.c)
 *     BltColor @ 0x1401FB750 (BltColor.c)
 *     GreGetTextCharacterExtra @ 0x1402948B0 (GreGetTextCharacterExtra.c)
 *     GetDpiServerInfoForCurrentThread @ 0x140302578 (GetDpiServerInfoForCurrentThread.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxDrawState(
        Gre::Base *a1,
        __int64 a2,
        __int64 *a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        unsigned int a8)
{
  unsigned int v8; // ebx
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r15d
  int v14; // esi
  int v15; // r14d
  int v16; // ebx
  Gre::Base *v17; // r12
  unsigned int Layout; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  signed int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // edi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 Bitmap; // rdi
  __int64 UserSessionState; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // ebx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // edi
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // ebx
  __int64 v51; // rdx
  __int64 v52; // rax
  int TextCharacterExtra; // ebx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  unsigned __int16 v57; // ax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rcx
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  struct tagTHREADINFO *v72; // rax
  int v73; // ebx
  int TextColor; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r10
  Gre::Base *v78; // rbx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rbx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rdx
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // rdx
  __int64 v108; // rcx
  unsigned int v109; // ebx
  struct _POINTL v111; // [rsp+50h] [rbp-B0h] BYREF
  int v112; // [rsp+58h] [rbp-A8h]
  int v113; // [rsp+5Ch] [rbp-A4h]
  int v114; // [rsp+60h] [rbp-A0h]
  int v115; // [rsp+64h] [rbp-9Ch]
  int TextAlign; // [rsp+68h] [rbp-98h]
  unsigned int v117; // [rsp+6Ch] [rbp-94h]
  __int64 v118; // [rsp+70h] [rbp-90h]
  __int64 *v119; // [rsp+78h] [rbp-88h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v121; // [rsp+90h] [rbp-70h]
  ULONG_PTR v122; // [rsp+98h] [rbp-68h]
  __int64 v123; // [rsp+A0h] [rbp-60h] BYREF
  int v124; // [rsp+A8h] [rbp-58h]
  int v125; // [rsp+ACh] [rbp-54h]
  __int64 v126; // [rsp+B0h] [rbp-50h]
  ULONG_PTR BugCheckParameter3[3]; // [rsp+B8h] [rbp-48h] BYREF
  _WORD v128[24]; // [rsp+D0h] [rbp-30h] BYREF
  int v129; // [rsp+100h] [rbp+0h]

  v8 = a8;
  v114 = a4;
  v119 = a3;
  v118 = a2;
  v10 = a4;
  v122 = 0LL;
  v111 = 0LL;
  v112 = 0;
  TextAlign = 0;
  *(_OWORD *)BugCheckParameter3 = 0LL;
  if ( (a8 & 0x20) != 0 )
  {
    v12 = *(_QWORD *)(W32GetUserSessionState(1LL, a2) + 19904);
    if ( *(_WORD *)(v12 + 6996) == 1 || *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v12, v11) + 19904) + 2188LL) )
      v8 = a8 & 0xFFFFFFCF | 0x10;
  }
  v13 = a6;
  v14 = v8 | 0x80;
  if ( (v8 & 0x170) == 0 )
    v14 = v8;
  if ( !a6 )
    return 1LL;
  v15 = a7;
  if ( !a7 )
    return 1LL;
  v121 = -1LL;
  v126 = 0LL;
  v16 = v14 & 0x80;
  v113 = v16;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  if ( (v14 & 0x80) != 0 )
  {
    v17 = *(Gre::Base **)(*(_QWORD *)(W32GetUserSessionState(1LL, 128LL) + 56968) + 72LL);
    GreSetLayout(v17, 0xFFFFFFFFLL, 0LL);
    Layout = GreGetLayout((HDC)a1);
    if ( Layout != -1 )
      GreSetLayout(v17, a6, Layout);
    v21 = a6 + 1;
    v23 = *(_QWORD *)(W32GetUserSessionState(v20, v19) + 56968);
    if ( *(_DWORD *)(v23 + 88) < (signed int)(a6 + 1)
      || (v23 = *(_QWORD *)(W32GetUserSessionState(v23, v22) + 56968), *(_DWORD *)(v23 + 92) < a7) )
    {
      v25 = *(_QWORD *)(W32GetUserSessionState(v23, v22) + 56968);
      if ( *(_DWORD *)(v25 + 92) <= a7 )
      {
        v26 = a7;
      }
      else
      {
        v25 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 56968);
        v26 = *(_DWORD *)(v25 + 92);
      }
      v28 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 56968);
      if ( *(_DWORD *)(v28 + 88) <= v21 )
        v29 = (unsigned int)v21;
      else
        v29 = *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v28, v27) + 56968) + 88LL);
      Bitmap = GreCreateBitmap(v29, v26, 1LL, 1LL, 0LL);
      if ( Bitmap )
      {
        UserSessionState = W32GetUserSessionState(v31, v30);
        v34 = GreSelectBitmap(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 72LL), Bitmap);
        GreDeleteObject(v34);
        GreSetBitmapOwner(Bitmap, 0LL);
        v38 = *(_QWORD *)(W32GetUserSessionState(v36, v35) + 56968);
        if ( *(_DWORD *)(v38 + 88) > v21 )
        {
          v38 = *(_QWORD *)(W32GetUserSessionState(v38, v37) + 56968);
          v21 = *(_DWORD *)(v38 + 88);
        }
        v39 = *(_QWORD *)(W32GetUserSessionState(v38, v37) + 56968);
        *(_DWORD *)(v39 + 88) = v21;
        v42 = *(_QWORD *)(W32GetUserSessionState(v39, v40) + 56968);
        if ( *(_DWORD *)(v42 + 92) <= a7 )
        {
          v43 = a7;
        }
        else
        {
          v42 = *(_QWORD *)(W32GetUserSessionState(v42, v41) + 56968);
          v43 = *(_DWORD *)(v42 + 92);
        }
        v23 = *(_QWORD *)(W32GetUserSessionState(v42, v41) + 56968);
        *(_DWORD *)(v23 + 92) = v43;
      }
      else
      {
        v44 = *(_QWORD *)(W32GetUserSessionState(v31, v30) + 56968);
        v13 = *(_DWORD *)(v44 + 88) - 1;
        v23 = *(_QWORD *)(W32GetUserSessionState(v44, v45) + 56968);
        v15 = *(_DWORD *)(v23 + 92);
      }
    }
    v46 = *(_QWORD *)(W32GetUserSessionState(v23, v22) + 56968);
    v47 = *(_DWORD *)(v46 + 92);
    v49 = *(_QWORD *)(W32GetUserSessionState(v46, v48) + 56968);
    v50 = *(_DWORD *)(v49 + 88);
    v52 = W32GetUserSessionState(v49, v51);
    GrePatBlt(*(Gre::Base **)(*(_QWORD *)(v52 + 56968) + 72LL), 0, 0, v50, v47, 16711778);
    TextCharacterExtra = GreGetTextCharacterExtra((HDC)a1);
    v56 = W32GetUserSessionState(v55, v54);
    GreSetTextCharacterExtra(*(HDC *)(*(_QWORD *)(v56 + 56968) + 72LL), TextCharacterExtra);
    TextAlign = GreGetTextAlign((HDC)v17);
    v57 = GreGetTextAlign((HDC)a1);
    GreSetTextAlign((HDC)v17, TextAlign ^ ((unsigned __int16)TextAlign ^ v57) & 0x106);
    v60 = *(_QWORD *)(GetDpiServerInfoForCurrentThread(v59, v58) + 24);
    if ( GreGetHFONT((HDC)a1) != v60 )
    {
      v61 = GreSelectFont(a1, v60);
      GreSelectFont(a1, v61);
      v64 = W32GetUserSessionState(v63, v62);
      v122 = GreSelectFont(*(Gre::Base **)(*(_QWORD *)(v64 + 56968) + 72LL), v61);
      v67 = *(_QWORD *)(W32GetUserSessionState(v66, v65) + 56968);
      BugCheckParameter3[0] = *(_QWORD *)(v67 + 72);
      BugCheckParameter3[1] = v122;
      if ( v121 != -1 )
      {
        BugCheckParameter4 = PtiCurrent(v67);
        KeBugCheckEx(
          0x164u,
          0x12uLL,
          (ULONG_PTR)BugCheckParameter2,
          (ULONG_PTR)BugCheckParameter3,
          (ULONG_PTR)BugCheckParameter4);
      }
      v69 = PtiCurrent(v67);
      BugCheckParameter2[0] = *((_QWORD *)v69 + 47);
      *((_QWORD *)v69 + 47) = BugCheckParameter2;
      BugCheckParameter2[1] = (ULONG_PTR)BugCheckParameter3;
      v121 = (__int64)SelectFont;
    }
    v16 = v113;
    v10 = v114;
  }
  else
  {
    v17 = a1;
    GreGetDCPoint((HDC)a1, 4u, &v111);
    GreSetViewportOrg((HDC)a1, v10 + v111.x, a5 + v111.y);
  }
  v117 = xxxRealDrawMenuItem((_DWORD)v17, (_DWORD)v119, v13, v15, 0, v14);
  if ( v121 != -1 )
  {
    v72 = PtiCurrent(v71);
    v71 = BugCheckParameter2[0];
    *((_QWORD *)v72 + 47) = BugCheckParameter2[0];
    v121 = -1LL;
  }
  if ( v16
    || (v73 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v71, v70) + 19904) + 4636LL),
        TextColor = GreGetTextColor((HDC)v17),
        v115 = 0,
        TextColor == v73) )
  {
    v115 = 1;
  }
  if ( MNIspItemValid(*v119, v119[1]) )
  {
    v78 = *(Gre::Base **)(*(_QWORD *)v77 + 96LL);
    if ( v78 )
    {
      memset_0(v128, 0, 0x68uLL);
      if ( (unsigned int)GreExtGetObjectW(v78, 104, v128) != 104 || v128[23] != 32 || (v112 = 1, v129) )
        v112 = 0;
    }
  }
  v80 = *(_QWORD *)(W32GetUserSessionState(v76, v75) + 56968);
  if ( v17 == *(Gre::Base **)(v80 + 72) )
  {
    v81 = W32GetUserSessionState(v80, v79);
    GreSetBkColor(*(HDC *)(*(_QWORD *)(v81 + 56968) + 72LL), 0xFFFFFF);
    v84 = W32GetUserSessionState(v83, v82);
    GreSetTextColor(*(HDC *)(*(_QWORD *)(v84 + 56968) + 72LL), 0);
    v87 = *(_QWORD *)(W32GetUserSessionState(v86, v85) + 43080);
    v90 = W32GetUserSessionState(v89, v88);
    GreSelectBrush(*(_QWORD *)(*(_QWORD *)(v90 + 56968) + 72LL), v87);
    v93 = W32GetUserSessionState(v92, v91);
    GreSetBkMode(*(HDC *)(*(_QWORD *)(v93 + 56968) + 72LL), 2);
  }
  if ( v113 )
  {
    if ( v122 )
      GreSelectFont(v17, v122);
    GreSetTextAlign((HDC)v17, TextAlign);
    if ( (v14 & 0x10) != 0 )
    {
      v123 = 0LL;
      v124 = v13;
      v125 = v15;
      v96 = *(_QWORD *)(W32GetUserSessionState(v95, v94) + 19904);
      v126 = *(_QWORD *)(v96 + 4944);
      v98 = W32GetUserSessionState(v96, v97);
      GrePolyPatBlt(*(HDC *)(*(_QWORD *)(v98 + 56968) + 72LL), 16384137, (struct _POLYPATBLT *)&v123, 1);
    }
    if ( (v14 & 0x100) != 0 )
    {
      v99 = *(_QWORD *)(W32GetUserSessionState(v95, v94) + 56968);
      W32GetUserSessionState(v99, v100);
    }
    else if ( (v14 & 0x20) != 0 )
    {
      v101 = W32GetUserSessionState(v95, v94);
      W32GetUserSessionState(*(_QWORD *)(v101 + 56968), v102);
      BltColor((HDC)a1, a5 + 1, v13, v15, 0, 0, 1);
      v105 = *(_QWORD *)(W32GetUserSessionState(v104, v103) + 56968);
      W32GetUserSessionState(v105, v106);
      v10 = v114;
    }
    else
    {
      W32GetUserSessionState(v95, v94);
      if ( (v14 & 0x40) != 0 )
      {
        BltColor((HDC)a1, a5, v13, v15, 0, 0, 1);
        W32GetUserSessionState(v108, v107);
      }
    }
    BltColor((HDC)a1, a5, v13, v15, 0, 0, 1);
    GreSetLayout(v17, 0xFFFFFFFFLL, 0LL);
    if ( v112 )
    {
      GreGetDCPoint((HDC)a1, 4u, &v111);
      GreSetViewportOrg((HDC)a1, v10 + v111.x, a5 + v111.y);
      v109 = xxxRealDrawMenuItem((_DWORD)a1, (_DWORD)v119, v13, v15, 1, v115) & v117;
      GreSetViewportOrg((HDC)a1, v111.x, v111.y);
    }
    else
    {
      return v117;
    }
    return v109;
  }
  else
  {
    if ( v112 )
      xxxRealDrawMenuItem((_DWORD)v17, (_DWORD)v119, v13, v15, 1, v115);
    GreSetViewportOrg((HDC)v17, v111.x, v111.y);
    return 1LL;
  }
}
