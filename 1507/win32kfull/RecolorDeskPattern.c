/*
 * XREFs of RecolorDeskPattern @ 0x1C01011B0
 * Callers:
 *     SetDesktopPattern @ 0x1C0152980 (SetDesktopPattern.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     GreSetTextColor @ 0x1C005184C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00518B8 (GreSetBkColor.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     GreCreateDIBitmapReal @ 0x1C0098254 (GreCreateDIBitmapReal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0098F78 (GreCreateCompatibleBitmapInternal.c)
 *     GreMarkDeletableBrush @ 0x1C0152ABC (GreMarkDeletableBrush.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 RecolorDeskPattern()
{
  unsigned int v0; // ebx
  __int64 v2; // r15
  unsigned __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // ecx
  __int64 v10; // rdx
  _DWORD *v11; // rax
  int v12; // ecx
  char v13; // al
  int v14; // ecx
  char v15; // al
  HDC v16; // rcx
  __int64 CompatibleBitmapInternal; // rax
  __int64 v18; // rsi
  __int64 v19; // r14
  __int64 PatternBrush; // rdi
  HBRUSH v21; // rcx
  unsigned int v22[3]; // [rsp+78h] [rbp+7h] BYREF
  __int64 v23; // [rsp+84h] [rbp+13h]
  __int64 v24; // [rsp+8Ch] [rbp+1Bh]
  int v25; // [rsp+94h] [rbp+23h]
  int v26; // [rsp+98h] [rbp+27h]
  int v27; // [rsp+9Ch] [rbp+2Bh]
  char v28; // [rsp+A0h] [rbp+2Fh]
  char v29; // [rsp+A1h] [rbp+30h]
  char v30; // [rsp+A2h] [rbp+31h]
  char v31; // [rsp+A4h] [rbp+33h]
  char v32; // [rsp+A5h] [rbp+34h]
  char v33; // [rsp+A6h] [rbp+35h]

  v0 = 0;
  if ( !g_hbmDesktopPattern )
    return v0;
  v2 = GreSelectBitmap(ghdcMem, g_hbmDesktopPattern);
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x51uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v3) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v4) + 776) & 0x4000) != 0 )
    {
      goto LABEL_6;
    }
  }
  else if ( !IsDPIDWMSysMet(v3)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           ? (v9 = 0)
           : (v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
             !v9) )
  {
LABEL_6:
    if ( IsDPIDWMSysMet(0x51uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v6 = 0)
        : (v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1),
          v6) )
    {
      v10 = gpsi;
      v11 = (_DWORD *)(gpsi + 2980LL);
    }
    else
    {
      v10 = gpsi;
      v11 = (_DWORD *)(gpsi + 2204LL);
    }
    goto LABEL_22;
  }
  v10 = gpsi;
  v11 = (_DWORD *)(gpsi + 2592LL);
LABEL_22:
  if ( *v11 )
  {
    CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 32LL), 8, 8, 0, 0LL);
  }
  else
  {
    v12 = *(_DWORD *)(v10 + 3572);
    v26 = 2;
    v27 = 2;
    v28 = BYTE2(v12);
    v13 = *(_BYTE *)(v10 + 3572);
    v29 = BYTE1(v12);
    v14 = *(_DWORD *)(v10 + 3600);
    v30 = v13;
    v31 = BYTE2(v14);
    v15 = *(_BYTE *)(v10 + 3600);
    v32 = BYTE1(v14);
    v33 = v15;
    v22[0] = 40;
    v22[1] = 8;
    v22[2] = 8;
    v23 = 65537LL;
    v16 = *(HDC *)(gpDispInfo + 32LL);
    v24 = 0LL;
    v25 = 0;
    CompatibleBitmapInternal = GreCreateDIBitmapReal(v16, v10, 0LL, v22, 0, 0x30u, 0, 0LL, 0, 0LL, 0, 0LL, 0LL);
  }
  v18 = CompatibleBitmapInternal;
  if ( CompatibleBitmapInternal )
  {
    v19 = GreSelectBitmap(ghdcMem2, CompatibleBitmapInternal);
    GreSetTextColor(ghdcMem2, *(_DWORD *)(gpsi + 3572LL));
    GreSetBkColor(ghdcMem2, *(_DWORD *)(gpsi + 3600LL));
    NtGdiBitBltInternal(ghdcMem2, 0, 0, 8, 8, ghdcMem, 0, 0, 0xCC0020u, 0, 0);
    PatternBrush = GreCreatePatternBrush(v18);
    if ( PatternBrush )
    {
      v21 = *(HBRUSH *)(gpsi + 3704LL);
      if ( v21 )
      {
        GreMarkDeletableBrush(v21);
        GreDeleteObject(*(_QWORD *)(gpsi + 3704LL));
      }
      GreMarkUndeletableBrush(PatternBrush);
      GreSetBrushOwner(PatternBrush, 0LL);
      v0 = 1;
      *(_QWORD *)(gpsi + 3704LL) = PatternBrush;
    }
    GreSelectBitmap(ghdcMem2, v19);
    GreDeleteObject(v18);
  }
  GreSelectBitmap(ghdcMem, v2);
  return v0;
}
