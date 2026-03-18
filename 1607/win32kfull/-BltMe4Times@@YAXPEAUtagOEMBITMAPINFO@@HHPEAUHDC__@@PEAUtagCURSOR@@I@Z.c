/*
 * XREFs of ?BltMe4Times@@YAXPEAUtagOEMBITMAPINFO@@HHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C022E4F0
 * Callers:
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C022E79C (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     FillRect @ 0x1C00AE8B8 (FillRect.c)
 *     BltIcon @ 0x1C00B0F38 (BltIcon.c)
 *     FixHDCBITSBmp @ 0x1C011D850 (FixHDCBITSBmp.c)
 */

void __fastcall BltMe4Times(struct tagOEMBITMAPINFO *a1, __int64 a2, __int64 a3, HDC a4, struct tagCURSOR *a5, char a6)
{
  int v6; // r12d
  int v7; // ebx
  HBRUSH v9; // r9
  _DWORD *v10; // r14
  int v11; // r13d
  LONG v12; // edx
  int v13; // esi
  LONG left; // ebx
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  BOOL v41; // ecx
  _DWORD *v42; // rcx
  __int64 v43; // rdi
  int v44; // ecx
  int v45; // r13d
  LONG v46; // ebx
  BOOL v47; // eax
  bool v48; // zf
  int v49; // [rsp+50h] [rbp-30h]
  int v50; // [rsp+54h] [rbp-2Ch]
  int v51; // [rsp+58h] [rbp-28h]
  char *v52; // [rsp+60h] [rbp-20h]
  __int64 v53; // [rsp+68h] [rbp-18h]
  RECT v54; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v56; // [rsp+D8h] [rbp+58h]

  v6 = a3;
  v49 = 1;
  v7 = a2;
  FixHDCBITSBmp((__int64)a1, a2, a3, (__int64)a4);
  v56 = a6 & 0x10;
  v50 = IsDPIAbsoluteSysMet(5uLL);
  v10 = (_DWORD *)((char *)a1 + 8);
  v52 = (char *)a1 + 8;
  v53 = 2LL;
  v11 = (v7 - v6) / 2;
  v51 = v11;
  do
  {
    v12 = *(v10 - 1);
    v13 = 8913094;
    left = *(v10 - 2);
    v15 = v10[1];
    v54.right = left + *v10;
    v54.bottom = v12 + v15;
    v54.top = v12;
    v54.left = left;
    FillRect(*(HDC *)(gpDispInfo + 32LL), &v54, v9);
    v54.top += v11;
    if ( v50 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v17, v16, v18, v19) & 0xF) == 0 )
        goto LABEL_14;
    }
    else if ( IsDPIDWMSysMet(5uLL) && (W32GetCurrentThreadDpiAwarenessContext(v32, v31, v33, v34) & 0xF) == 0 )
    {
      v41 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36, v37) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38, v39, v40)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1;
      left = v54.left;
      if ( v41 )
      {
LABEL_14:
        v42 = (_DWORD *)(gpsi + 2288LL);
        goto LABEL_19;
      }
    }
    if ( IsDPIDWMSysMet(5uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v21, v20, v22, v23) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26) + 408)
        ? (v30 = 0)
        : (v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v27,
                                                       v28,
                                                       v29)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          left = v54.left,
          v30) )
    {
      v42 = (_DWORD *)(gpsi + 2676LL);
    }
    else
    {
      v42 = (_DWORD *)(gpsi + 1900LL);
    }
LABEL_19:
    v43 = 2LL;
    v44 = v11 + *v42;
    v45 = v49;
    v46 = v44 + left;
    do
    {
      BltIcon(*(HDC *)(gpDispInfo + 32LL), v46, v54.top, v6, v6, a4, (__int64)a5, 2 - (v45 != 0), v13);
      v13 = 6684742;
      v47 = v45 == 0;
      v45 = v47;
      --v43;
    }
    while ( v43 );
    v10 = v52 + 16;
    v49 = v47;
    v52 += 16;
    if ( v56 )
      v9 = *(HBRUSH *)(gpsi + 5208LL);
    else
      v9 = *(HBRUSH *)(gpsi + 5112LL);
    v48 = v53-- == 1;
    v11 = v51;
  }
  while ( !v48 );
}
