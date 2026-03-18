/*
 * XREFs of ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00913BC
 * Callers:
 *     ComputeProposedPerMonRect @ 0x1C0090C88 (ComputeProposedPerMonRect.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C0091108 (xxxDeferWindowPosAndCheckPoint.c)
 * Callees:
 *     GetWindowExtendedMargin @ 0x1C00916E4 (GetWindowExtendedMargin.c)
 *     IsValidMonitor @ 0x1C0091744 (IsValidMonitor.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@0@Z @ 0x1C01D64EC (-FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@0@Z.c)
 */

struct tagMONITOR *__fastcall NormalizeRect(
        struct tagWND *a1,
        struct tagRECT *a2,
        struct tagRECT *a3,
        struct tagMONITORRECTS *a4,
        int a5,
        int a6,
        int a7)
{
  __int128 v8; // xmm0
  __int64 v10; // r15
  struct tagWND *v12; // rdi
  struct tagMONITOR *v13; // rbx
  unsigned __int16 v14; // dx
  __int64 v15; // r8
  int v16; // r8d
  char *v17; // rdx
  int v18; // r12d
  int v19; // r13d
  int v20; // r15d
  int v21; // r11d
  int v22; // r9d
  int v23; // r10d
  int v24; // edx
  int v25; // r14d
  int v26; // eax
  LONG v27; // ecx
  LONG right; // ecx
  LONG v29; // edx
  LONG left; // edx
  LONG v31; // ecx
  LONG bottom; // eax
  LONG v33; // edx
  LONG top; // ecx
  LONG v35; // eax
  INT v37; // ebx
  char *v38; // rax
  INT v39; // edi
  INT v40; // eax
  INT v41; // ecx
  INT v42; // eax
  unsigned int MonitorFlags; // eax
  int v44; // ecx
  int v45; // r8d
  int v46; // r8d
  int v47; // ecx
  LONG v48; // eax
  int v49; // eax
  char *v50; // rcx
  __int64 v51; // rcx
  char *v52; // r8
  char *v53; // r9
  __int64 v54; // r10
  int v55; // eax
  int v56; // ecx
  struct tagWND *v57; // [rsp+30h] [rbp-38h] BYREF
  struct tagMONITOR *NewMonitor; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int16 v59; // [rsp+40h] [rbp-28h]
  int v60; // [rsp+44h] [rbp-24h]
  __int128 v61; // [rsp+48h] [rbp-20h] BYREF

  v8 = (__int128)*a3;
  v60 = 0;
  v10 = 112LL * a5;
  v61 = v8;
  v57 = a1;
  v12 = a1;
  v13 = *(struct tagMONITOR **)((char *)a4 + v10 + 112);
  NewMonitor = v13;
  if ( !v13 || !(unsigned int)IsValidMonitor(v13) )
  {
    NewMonitor = FindNewMonitor((struct tagRECT *)((char *)a4 + v10 + 8), (struct tagRECT *)((char *)a4 + v10 + 24));
    v13 = NewMonitor;
    if ( !NewMonitor )
    {
      v13 = *(struct tagMONITOR **)(GetDispInfo() + 88);
      NewMonitor = v13;
    }
  }
  v14 = *((_WORD *)v13 + 76);
  v15 = *(unsigned __int16 *)((char *)a4 + v10 + 104);
  v59 = v14;
  if ( *((_DWORD *)v12 + 86) == 2 )
  {
    if ( a7 && (*(_DWORD *)(*((_QWORD *)v12 + 2) + 568LL) & 0x2000000) == 0 && !a6 && v14 != (_WORD)v15 )
    {
      v37 = (unsigned __int16)v15;
      v39 = v14;
      goto LABEL_27;
    }
LABEL_5:
    v16 = DWORD1(v61);
    goto LABEL_6;
  }
  if ( __CFSHR__(*((_DWORD *)v12 + 72), 8) )
    LOWORD(v37) = 96;
  else
    LOWORD(v37) = *(_WORD *)(gpsi + 7286LL);
  v38 = (char *)a4 + 72;
  if ( __CFSHR__(*((_DWORD *)v12 + 72), 8) )
    v38 = (char *)a4 + 40;
  ScaleDPIRect(&v61, &v61, v15, (unsigned __int16)v37, *(_QWORD *)((char *)a4 + v10 + 8), *(_QWORD *)&v38[v10]);
  v60 = 1;
  if ( a6 )
  {
    v13 = NewMonitor;
    goto LABEL_5;
  }
  v39 = v59;
  v37 = (unsigned __int16)v37;
LABEL_27:
  v40 = EngMulDiv(a3->right - a3->left, v39, v37);
  v41 = a3->bottom - a3->top;
  DWORD2(v61) = v61 + v40;
  v42 = EngMulDiv(v41, v39, v37);
  v16 = DWORD1(v61);
  v13 = NewMonitor;
  v12 = v57;
  HIDWORD(v61) = DWORD1(v61) + v42;
LABEL_6:
  v17 = (char *)a4 + v10 + 8;
  if ( a6 )
  {
    if ( a6 == 1 )
    {
      v17 = (char *)a4 + v10 + 24;
      v50 = (char *)v13 + 76;
    }
    else
    {
      v50 = (char *)v13 + 28;
    }
    v51 = v50 - v17;
    v52 = (char *)((char *)&v61 - v17);
    v53 = (char *)((char *)a2 - v17);
    v54 = 4LL;
    do
    {
      *(_DWORD *)&v53[(_QWORD)v17] = *(_DWORD *)&v17[v51] + *(_DWORD *)&v52[(_QWORD)v17] - *(_DWORD *)v17;
      v17 += 4;
      --v54;
    }
    while ( v54 );
  }
  else
  {
    v18 = *(_DWORD *)v17;
    v19 = *((_DWORD *)v17 + 1);
    v20 = *((_DWORD *)v17 + 2) - *(_DWORD *)v17;
    v21 = *((_DWORD *)v17 + 3) - v19;
    v22 = *((_DWORD *)v13 + 7) - *(_DWORD *)v17;
    v23 = *((_DWORD *)v13 + 8) - v19;
    v24 = *((_DWORD *)v13 + 9) - *((_DWORD *)v13 + 7);
    v25 = *((_DWORD *)v13 + 10) - *((_DWORD *)v13 + 8);
    if ( v24 != v20 || v25 != v21 )
    {
      v22 += ((v24 - v20) * ((int)v61 - v18) + v20 / 2) / v20;
      v23 += ((v25 - v21) * (v16 - v19) + v21 / 2) / v21;
    }
    v26 = v61;
    a2->right = v22 + DWORD2(v61);
    v27 = v23 + HIDWORD(v61);
    a2->left = v22 + v26;
    a2->bottom = v27;
    a2->top = v23 + v16;
    GetWindowExtendedMargin(v12, &v57);
    right = a2->right;
    v29 = *((_DWORD *)v13 + 21);
    if ( right > v29 )
    {
      v55 = v29 + WORD1(v57) - right;
      a2->left += v55;
      a2->right = right + v55;
    }
    left = a2->left;
    v31 = *((_DWORD *)v13 + 19);
    if ( a2->left < v31 )
    {
      v56 = v31 - (unsigned __int16)v57 - left;
      a2->right += v56;
      a2->left = left + v56;
    }
    bottom = a2->bottom;
    v33 = *((_DWORD *)v13 + 22);
    if ( bottom > v33 )
    {
      v47 = v33 + HIWORD(v57) - bottom;
      v48 = v33 + HIWORD(v57);
      a2->top += v47;
      a2->bottom = v48;
    }
    top = a2->top;
    v35 = *((_DWORD *)v13 + 20);
    if ( top < v35 )
    {
      v49 = v35 - top;
      a2->bottom += v49;
      a2->top = top + v49;
    }
    if ( (*((_BYTE *)v12 + 54) & 4) != 0 )
    {
      v44 = 0;
      v45 = *((_DWORD *)v13 + 21);
      if ( a2->right - WORD1(v57) > v45 )
      {
        v44 = 1;
        a2->right = WORD1(v57) + v45;
      }
      v46 = *((_DWORD *)v13 + 22);
      if ( a2->bottom - HIWORD(v57) > v46 )
      {
        ++v44;
        a2->bottom = HIWORD(v57) + v46;
      }
      if ( v44 == 2 )
      {
        ++a2->left;
        --a2->right;
        ++a2->top;
        --a2->bottom;
      }
    }
  }
  if ( v60 )
  {
    MonitorFlags = GetMonitorFlags(*(_QWORD *)(*((_QWORD *)v12 + 2) + 376LL));
    PhysicalToLogicalDPIRect(a2, a2, MonitorFlags, &NewMonitor);
    return NewMonitor;
  }
  return v13;
}
