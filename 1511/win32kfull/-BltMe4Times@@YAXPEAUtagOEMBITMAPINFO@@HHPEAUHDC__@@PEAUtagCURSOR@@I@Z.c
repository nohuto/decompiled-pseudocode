/*
 * XREFs of ?BltMe4Times@@YAXPEAUtagOEMBITMAPINFO@@HHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C0235BB0
 * Callers:
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0235EA4 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 * Callees:
 *     BltIcon @ 0x1C00153C8 (BltIcon.c)
 *     FillRect @ 0x1C003C7F0 (FillRect.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     FixHDCBITSBmp @ 0x1C00FBAA4 (FixHDCBITSBmp.c)
 */

void __fastcall BltMe4Times(
        struct tagOEMBITMAPINFO *a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        struct tagCURSOR *a5,
        char a6)
{
  HBRUSH v9; // r9
  _DWORD *v10; // r14
  int v11; // r13d
  LONG v12; // edx
  int v13; // esi
  LONG left; // ebx
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rcx
  BOOL v22; // ecx
  _DWORD *v23; // rcx
  __int64 v24; // rdi
  int v25; // ecx
  int v26; // r13d
  unsigned int v27; // ebx
  BOOL v28; // eax
  bool v29; // zf
  int v30; // [rsp+50h] [rbp-30h]
  int v31; // [rsp+54h] [rbp-2Ch]
  int v32; // [rsp+58h] [rbp-28h]
  char *v33; // [rsp+60h] [rbp-20h]
  __int64 v34; // [rsp+68h] [rbp-18h]
  RECT v35; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v37; // [rsp+D8h] [rbp+58h]

  v30 = 1;
  FixHDCBITSBmp((__int64)a1);
  v37 = a6 & 0x10;
  v31 = IsDPIAbsoluteSysMet(5uLL);
  v10 = (_DWORD *)((char *)a1 + 8);
  v33 = (char *)a1 + 8;
  v34 = 2LL;
  v11 = (int)(a2 - a3) / 2;
  v32 = v11;
  do
  {
    v12 = *(v10 - 1);
    v13 = 8913094;
    left = *(v10 - 2);
    v35.right = left + *v10;
    v15 = v10[1];
    v35.top = v12;
    v35.bottom = v12 + v15;
    v35.left = left;
    FillRect(*(HDC *)(gpDispInfo + 32LL), &v35, v9);
    v35.top += v11;
    if ( v31 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x2000) == 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x4000) == 0 )
      {
        goto LABEL_16;
      }
    }
    else if ( IsDPIDWMSysMet(5uLL)
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) == 0
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x4000) == 0 )
    {
      v22 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 244LL) & 1;
      left = v35.left;
      if ( v22 )
      {
LABEL_16:
        v23 = (_DWORD *)(gpsi + 2288LL);
        goto LABEL_21;
      }
    }
    if ( IsDPIDWMSysMet(5uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v19 = 0)
        : (v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          left = v35.left,
          v19) )
    {
      v23 = (_DWORD *)(gpsi + 2676LL);
    }
    else
    {
      v23 = (_DWORD *)(gpsi + 1900LL);
    }
LABEL_21:
    v24 = 2LL;
    v25 = v11 + *v23;
    v26 = v30;
    v27 = v25 + left;
    do
    {
      BltIcon(*(HDC *)(gpDispInfo + 32LL), v27, v35.top, a3, a3, a4, (__int64)a5, 2 - (v26 != 0), v13);
      v13 = 6684742;
      v28 = v26 == 0;
      v26 = v28;
      --v24;
    }
    while ( v24 );
    v10 = v33 + 16;
    v30 = v28;
    v33 += 16;
    if ( v37 )
      v9 = *(HBRUSH *)(gpsi + 3816LL);
    else
      v9 = *(HBRUSH *)(gpsi + 3720LL);
    v29 = v34-- == 1;
    v11 = v32;
  }
  while ( !v29 );
}
