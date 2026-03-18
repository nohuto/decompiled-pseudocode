/*
 * XREFs of _DrawIconEx @ 0x1C005137C
 * Callers:
 *     NtUserDrawIconEx @ 0x1C00511F0 (NtUserDrawIconEx.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C0200060 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0235A94 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C0242300 (xxxRealDrawMenuItem.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     BltIcon @ 0x1C0051658 (BltIcon.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     GreSetBrushOrg @ 0x1C00864B0 (GreSetBrushOrg.c)
 *     GrePolyPatBlt @ 0x1C00865E0 (GrePolyPatBlt.c)
 *     GetAnimatedCursorFrame @ 0x1C00913AC (GetAnimatedCursorFrame.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     _GetIconSize @ 0x1C0097BA8 (_GetIconSize.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0098F78 (GreCreateCompatibleBitmapInternal.c)
 *     GreGetBrushOrg @ 0x1C0124710 (GreGetBrushOrg.c)
 */

__int64 __fastcall DrawIconEx(HDC a1, int a2, int a3, __int64 a4, int a5, int a6, unsigned int a7, __int64 a8, char a9)
{
  unsigned int v9; // ebx
  __int64 AnimatedCursorFrame; // r13
  int v11; // ecx
  unsigned int v12; // edi
  __int64 v13; // rdx
  int v14; // r12d
  int v15; // esi
  int v16; // eax
  int v18; // edi
  HDC CompatibleDC; // r14
  __int64 CompatibleBitmapInternal; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // ecx
  int *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // ecx
  int *v36; // rcx
  __int64 v37; // [rsp+68h] [rbp-31h] BYREF
  _QWORD v38[3]; // [rsp+70h] [rbp-29h] BYREF
  int v39; // [rsp+88h] [rbp-11h]
  int v40; // [rsp+8Ch] [rbp-Dh]
  __int64 v41; // [rsp+90h] [rbp-9h]
  int v45; // [rsp+100h] [rbp+67h]

  v9 = 0;
  v45 = 0;
  AnimatedCursorFrame = a4;
  v11 = 0;
  v12 = (a9 & 0x10) != 0 ? 0x80000000 : 0;
  if ( (*(_DWORD *)(a4 + 80) & 8) != 0 )
  {
    AnimatedCursorFrame = GetAnimatedCursorFrame(a4, a7);
    if ( !AnimatedCursorFrame )
    {
      UserSetLastError(87LL);
      return v9;
    }
    v11 = 0;
  }
  if ( *(_QWORD *)(AnimatedCursorFrame + 128) )
  {
    if ( (a9 & 3) == 3 )
      v11 = 1;
    v45 = v11;
  }
  GetIconSize(AnimatedCursorFrame, &v37, v38);
  v14 = a5;
  if ( !a5 )
  {
    if ( (a9 & 8) == 0 )
    {
      v14 = v37;
      goto LABEL_9;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(11LL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x4000) != 0 )
      {
        goto LABEL_40;
      }
    }
    else if ( !(unsigned int)IsDPIDWMSysMet(v21)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v27 = 0)
             : (v27 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v27) )
    {
LABEL_40:
      if ( (unsigned int)IsDPIDWMSysMet(11LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v24 = 0)
          : (v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v24) )
      {
        v28 = (int *)(gpsi + 2700LL);
      }
      else
      {
        v28 = (int *)(gpsi + 1924LL);
      }
      goto LABEL_56;
    }
    v28 = (int *)(gpsi + 2312LL);
LABEL_56:
    v14 = *v28;
  }
LABEL_9:
  v15 = a6;
  if ( a6 )
    goto LABEL_12;
  if ( (a9 & 8) == 0 )
  {
    v13 = (unsigned int)(SLODWORD(v38[0]) >> 31);
    LODWORD(v13) = SLODWORD(v38[0]) % 2;
    v15 = SLODWORD(v38[0]) / 2;
    goto LABEL_12;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(12LL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x4000) != 0 )
    {
      goto LABEL_60;
    }
  }
  else if ( !(unsigned int)IsDPIDWMSysMet(v29)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           ? (v35 = 0)
           : (v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1),
             !v35) )
  {
LABEL_60:
    if ( (unsigned int)IsDPIDWMSysMet(12LL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v32 = 0)
        : (v32 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v32) )
    {
      v36 = (int *)(gpsi + 2704LL);
    }
    else
    {
      v36 = (int *)(gpsi + 1928LL);
    }
    goto LABEL_76;
  }
  v36 = (int *)(gpsi + 2316LL);
LABEL_76:
  v15 = *v36;
LABEL_12:
  if ( a8 )
  {
    CompatibleDC = (HDC)GreCreateCompatibleDC(a1, v13);
    if ( CompatibleDC )
    {
      CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a1, 0LL);
      v37 = CompatibleBitmapInternal;
      if ( CompatibleBitmapInternal )
      {
        v38[0] = GreSelectBitmap(CompatibleDC, CompatibleBitmapInternal);
        GreGetBrushOrg(a1);
        GreSetBrushOrg(CompatibleDC);
        v38[2] = 0LL;
        v39 = v14;
        v40 = v15;
        v41 = a8;
        GrePolyPatBlt(CompatibleDC);
        if ( v45 )
        {
          BltIcon(CompatibleDC, 0, 0, v14, v15, ghdcMem, AnimatedCursorFrame, 3, v12 | 0xCC0020);
        }
        else
        {
          BltIcon(CompatibleDC, 0, 0, v14, v15, ghdcMem, AnimatedCursorFrame, 1, v12 | 0x8800C6);
          BltIcon(CompatibleDC, 0, 0, v14, v15, ghdcMem, AnimatedCursorFrame, 2, v12 | 0x660046);
        }
        NtGdiBitBltInternal(a1, a2, a3, v14, v15, (__int64)CompatibleDC, 0, 0, 13369376, -1, 0);
        GreSelectBitmap(CompatibleDC, v38[0]);
        GreDeleteObject(v37);
        v9 = 1;
      }
      GreDeleteDC(CompatibleDC);
    }
  }
  else
  {
    if ( v45 )
    {
      BltIcon(a1, a2, a3, v14, v15, ghdcMem, AnimatedCursorFrame, 3, v12 | 0xCC0020);
    }
    else
    {
      if ( (a9 & 1) != 0 )
      {
        if ( (a9 & 2) != 0 )
          v16 = v12 | 0x8800C6;
        else
          v16 = v12 | 0xCC0020;
        BltIcon(a1, a2, a3, v14, v15, ghdcMem, AnimatedCursorFrame, 1, v16);
      }
      if ( (a9 & 2) != 0 )
      {
        if ( (a9 & 1) != 0 )
          v18 = v12 | 0x660046;
        else
          v18 = v12 | 0xCC0020;
        BltIcon(a1, a2, a3, v14, v15, ghdcMem, AnimatedCursorFrame, 2, v18);
      }
    }
    return 1;
  }
  return v9;
}
