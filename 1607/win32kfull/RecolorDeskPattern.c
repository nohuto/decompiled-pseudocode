/*
 * XREFs of RecolorDeskPattern @ 0x1C01355A0
 * Callers:
 *     SetDesktopPattern @ 0x1C010CF14 (SetDesktopPattern.c)
 * Callees:
 *     GreCreateDIBitmapReal @ 0x1C003B1A0 (GreCreateDIBitmapReal.c)
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreSetTextColor @ 0x1C00B112C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00B1198 (GreSetBkColor.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00F05D8 (GreCreateCompatibleBitmapInternal.c)
 *     GreMarkDeletableBrush @ 0x1C010D04C (GreMarkDeletableBrush.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 RecolorDeskPattern()
{
  unsigned int v0; // ebx
  __int64 v2; // r15
  __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // ecx
  __int64 v29; // rdx
  _DWORD *v30; // rax
  int v31; // ecx
  char v32; // al
  int v33; // ecx
  char v34; // al
  HDC v35; // rcx
  __int64 CompatibleBitmapInternal; // rax
  __int64 v37; // rsi
  __int64 v38; // r14
  __int64 PatternBrush; // rdi
  HBRUSH v40; // rcx
  unsigned int v41[3]; // [rsp+78h] [rbp+7h] BYREF
  __int64 v42; // [rsp+84h] [rbp+13h]
  __int64 v43; // [rsp+8Ch] [rbp+1Bh]
  int v44; // [rsp+94h] [rbp+23h]
  int v45; // [rsp+98h] [rbp+27h]
  int v46; // [rsp+9Ch] [rbp+2Bh]
  char v47; // [rsp+A0h] [rbp+2Fh]
  char v48; // [rsp+A1h] [rbp+30h]
  char v49; // [rsp+A2h] [rbp+31h]
  char v50; // [rsp+A4h] [rbp+33h]
  char v51; // [rsp+A5h] [rbp+34h]
  char v52; // [rsp+A6h] [rbp+35h]

  v0 = 0;
  if ( !g_hbmDesktopPattern )
    return v0;
  v2 = GreSelectBitmap(ghdcMem, g_hbmDesktopPattern);
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x51uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v4, v3, v5, v6) & 0xF) != 0 )
      goto LABEL_5;
  }
  else if ( !IsDPIDWMSysMet(v4)
         || (W32GetCurrentThreadDpiAwarenessContext(v19, v18, v20, v21) & 0xF) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24) + 408)
           ? (v28 = 0)
           : (v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v25,
                                                          v26,
                                                          v27)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v28) )
  {
LABEL_5:
    if ( IsDPIDWMSysMet(0x51uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v8, v7, v9, v10) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13) + 408)
        ? (v17 = 0)
        : (v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v14,
                                                       v15,
                                                       v16)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v17) )
    {
      v29 = gpsi;
      v30 = (_DWORD *)(gpsi + 2980LL);
    }
    else
    {
      v29 = gpsi;
      v30 = (_DWORD *)(gpsi + 2204LL);
    }
    goto LABEL_20;
  }
  v29 = gpsi;
  v30 = (_DWORD *)(gpsi + 2592LL);
LABEL_20:
  if ( *v30 )
  {
    CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 32LL), 8, 8, 0, 0LL);
  }
  else
  {
    v31 = *(_DWORD *)(v29 + 4964);
    v45 = 2;
    v46 = 2;
    v47 = BYTE2(v31);
    v32 = *(_BYTE *)(v29 + 4964);
    v48 = BYTE1(v31);
    v33 = *(_DWORD *)(v29 + 4992);
    v49 = v32;
    v50 = BYTE2(v33);
    v34 = *(_BYTE *)(v29 + 4992);
    v51 = BYTE1(v33);
    v52 = v34;
    v41[0] = 40;
    v41[1] = 8;
    v41[2] = 8;
    v42 = 65537LL;
    v35 = *(HDC *)(gpDispInfo + 32LL);
    v43 = 0LL;
    v44 = 0;
    CompatibleBitmapInternal = GreCreateDIBitmapReal(v35, v29, 0LL, v41, 0, 0x30u, 0, 0LL, 0, 0LL, 0, 0LL, 0LL);
  }
  v37 = CompatibleBitmapInternal;
  if ( CompatibleBitmapInternal )
  {
    v38 = GreSelectBitmap(ghdcMem2, CompatibleBitmapInternal);
    GreSetTextColor(ghdcMem2, *(_DWORD *)(gpsi + 4964LL));
    GreSetBkColor(ghdcMem2, *(_DWORD *)(gpsi + 4992LL));
    NtGdiBitBltInternal(ghdcMem2, 0, 0, 8, 8, ghdcMem, 0, 0, 0xCC0020u, 0, 0);
    PatternBrush = GreCreatePatternBrush(v37);
    if ( PatternBrush )
    {
      v40 = *(HBRUSH *)(gpsi + 5096LL);
      if ( v40 )
      {
        GreMarkDeletableBrush(v40);
        GreDeleteObject(*(_QWORD *)(gpsi + 5096LL));
      }
      GreMarkUndeletableBrush(PatternBrush);
      GreSetBrushOwner(PatternBrush, 0LL);
      v0 = 1;
      *(_QWORD *)(gpsi + 5096LL) = PatternBrush;
    }
    GreSelectBitmap(ghdcMem2, v38);
    GreDeleteObject(v37);
  }
  GreSelectBitmap(ghdcMem, v2);
  return v0;
}
