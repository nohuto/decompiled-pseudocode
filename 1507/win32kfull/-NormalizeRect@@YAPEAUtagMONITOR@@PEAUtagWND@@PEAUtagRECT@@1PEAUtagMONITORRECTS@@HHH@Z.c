/*
 * XREFs of ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C004444C
 * Callers:
 *     ComputeProposedPerMonRect @ 0x1C0045040 (ComputeProposedPerMonRect.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C0045A88 (xxxDeferWindowPosAndCheckPoint.c)
 * Callees:
 *     GetWindowExtendedMargin @ 0x1C0044788 (GetWindowExtendedMargin.c)
 *     IsValidMonitor @ 0x1C00447E8 (IsValidMonitor.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@0@Z @ 0x1C01D4960 (-FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@0@Z.c)
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
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  char *v54; // rcx
  __int64 v55; // rcx
  char *v56; // r8
  char *v57; // r9
  __int64 v58; // r10
  int v59; // ecx
  struct tagWND *v60; // [rsp+30h] [rbp-38h] BYREF
  struct tagMONITOR *NewMonitor; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int16 v62; // [rsp+40h] [rbp-28h]
  int v63; // [rsp+44h] [rbp-24h]
  __int128 v64; // [rsp+48h] [rbp-20h] BYREF

  v8 = (__int128)*a3;
  v63 = 0;
  v10 = 112LL * a5;
  v64 = v8;
  v60 = a1;
  v12 = a1;
  v13 = *(struct tagMONITOR **)((char *)a4 + v10 + 112);
  NewMonitor = v13;
  if ( !v13 || !(unsigned int)IsValidMonitor(v13) )
  {
    NewMonitor = FindNewMonitor((struct tagRECT *)((char *)a4 + v10 + 8), (struct tagRECT *)((char *)a4 + v10 + 24));
    v13 = NewMonitor;
    if ( !NewMonitor )
    {
      v13 = *(struct tagMONITOR **)(GetDispInfo(v52, v51, v53) + 88);
      NewMonitor = v13;
    }
  }
  v14 = *((_WORD *)v13 + 76);
  v15 = *(unsigned __int16 *)((char *)a4 + v10 + 104);
  v62 = v14;
  if ( *((_DWORD *)v12 + 86) == 2 )
  {
    if ( a7 && (*(_DWORD *)(*((_QWORD *)v12 + 2) + 576LL) & 0x2000000) == 0 && !a6 && v14 != (_WORD)v15 )
    {
      v37 = (unsigned __int16)v15;
      v39 = v14;
      goto LABEL_27;
    }
LABEL_5:
    v16 = DWORD1(v64);
    goto LABEL_6;
  }
  if ( __CFSHR__(*((_DWORD *)v12 + 72), 8) )
    LOWORD(v37) = 96;
  else
    LOWORD(v37) = *(_WORD *)(gpsi + 7286LL);
  v38 = (char *)a4 + 72;
  if ( __CFSHR__(*((_DWORD *)v12 + 72), 8) )
    v38 = (char *)a4 + 40;
  ScaleDPIRect(&v64, &v64, v15, (unsigned __int16)v37, *(_QWORD *)((char *)a4 + v10 + 8), *(_QWORD *)&v38[v10]);
  v63 = 1;
  if ( a6 )
  {
    v13 = NewMonitor;
    goto LABEL_5;
  }
  v39 = v62;
  v37 = (unsigned __int16)v37;
LABEL_27:
  v40 = EngMulDiv(a3->right - a3->left, v39, v37);
  v41 = a3->bottom - a3->top;
  DWORD2(v64) = v64 + v40;
  v42 = EngMulDiv(v41, v39, v37);
  v16 = DWORD1(v64);
  v13 = NewMonitor;
  v12 = v60;
  HIDWORD(v64) = DWORD1(v64) + v42;
LABEL_6:
  v17 = (char *)a4 + v10 + 8;
  if ( a6 )
  {
    if ( a6 == 1 )
    {
      v17 = (char *)a4 + v10 + 24;
      v54 = (char *)v13 + 76;
    }
    else
    {
      v54 = (char *)v13 + 28;
    }
    v55 = v54 - v17;
    v56 = (char *)((char *)&v64 - v17);
    v57 = (char *)((char *)a2 - v17);
    v58 = 4LL;
    do
    {
      *(_DWORD *)&v57[(_QWORD)v17] = *(_DWORD *)&v17[v55] + *(_DWORD *)&v56[(_QWORD)v17] - *(_DWORD *)v17;
      v17 += 4;
      --v58;
    }
    while ( v58 );
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
      v22 += ((v24 - v20) * ((int)v64 - v18) + v20 / 2) / v20;
      v23 += ((v25 - v21) * (v16 - v19) + v21 / 2) / v21;
    }
    v26 = v64;
    a2->right = v22 + DWORD2(v64);
    v27 = v23 + HIDWORD(v64);
    a2->left = v22 + v26;
    a2->bottom = v27;
    a2->top = v23 + v16;
    GetWindowExtendedMargin(v12, &v60);
    right = a2->right;
    v29 = *((_DWORD *)v13 + 21);
    if ( right > v29 )
    {
      v49 = v29 + WORD1(v60) - right;
      a2->left += v49;
      a2->right = right + v49;
    }
    left = a2->left;
    v31 = *((_DWORD *)v13 + 19);
    if ( a2->left < v31 )
    {
      v59 = v31 - (unsigned __int16)v60 - left;
      a2->right += v59;
      a2->left = left + v59;
    }
    bottom = a2->bottom;
    v33 = *((_DWORD *)v13 + 22);
    if ( bottom > v33 )
    {
      v47 = v33 + HIWORD(v60) - bottom;
      v48 = v33 + HIWORD(v60);
      a2->top += v47;
      a2->bottom = v48;
    }
    top = a2->top;
    v35 = *((_DWORD *)v13 + 20);
    if ( top < v35 )
    {
      v50 = v35 - top;
      a2->bottom += v50;
      a2->top = top + v50;
    }
    if ( (*((_BYTE *)v12 + 54) & 4) != 0 )
    {
      v44 = 0;
      v45 = *((_DWORD *)v13 + 21);
      if ( a2->right - WORD1(v60) > v45 )
      {
        v44 = 1;
        a2->right = WORD1(v60) + v45;
      }
      v46 = *((_DWORD *)v13 + 22);
      if ( a2->bottom - HIWORD(v60) > v46 )
      {
        ++v44;
        a2->bottom = HIWORD(v60) + v46;
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
  if ( v63 )
  {
    MonitorFlags = GetMonitorFlags(*(_QWORD *)(*((_QWORD *)v12 + 2) + 384LL));
    PhysicalToLogicalDPIRect(a2, a2, MonitorFlags, &NewMonitor);
    return NewMonitor;
  }
  return v13;
}
