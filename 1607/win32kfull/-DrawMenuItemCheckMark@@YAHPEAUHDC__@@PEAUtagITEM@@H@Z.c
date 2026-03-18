/*
 * XREFs of ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0235F40
 * Callers:
 *     xxxRealDrawMenuItem @ 0x1C023882C (xxxRealDrawMenuItem.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     NtGdiAlphaBlend @ 0x1C00423F0 (NtGdiAlphaBlend.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GreExtGetObjectW @ 0x1C004BBB8 (GreExtGetObjectW.c)
 *     GreGetLayout @ 0x1C005D99C (GreGetLayout.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreSetTextColor @ 0x1C00B112C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00B1198 (GreSetBkColor.c)
 *     FixHDCBITSBmp @ 0x1C011D850 (FixHDCBITSBmp.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     BltColor @ 0x1C0235644 (BltColor.c)
 */

__int64 __fastcall DrawMenuItemCheckMark(HDC a1, struct tagITEM *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  LONG v5; // esi
  char v6; // r12
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // ecx
  _QWORD *v13; // rbx
  __int64 v14; // rbx
  int *v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  LONG v18; // r13d
  __int64 v19; // rcx
  struct HLFONT__ *v20; // r15
  __int64 v21; // r12
  int v22; // r13d
  bool v23; // zf
  char v24; // al
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // ecx
  _QWORD *v32; // rbx
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  int v39; // [rsp+60h] [rbp-C8h]
  LONG v40; // [rsp+64h] [rbp-C4h]
  int v41; // [rsp+68h] [rbp-C0h]
  unsigned __int16 v42[24]; // [rsp+70h] [rbp-B8h] BYREF
  int v43; // [rsp+A0h] [rbp-88h]

  v4 = 1;
  v5 = a3;
  v6 = 1;
  if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)a1, (__int64)a2, a3, a4) & 0xF) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, 0LL, v10) + 408)
      ? (v12 = 0)
      : (v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, 0LL, v10)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        !v12) )
  {
    v13 = (_QWORD *)gpsi;
  }
  else
  {
    v13 = (_QWORD *)gpsi;
    if ( *(_WORD *)(gpsi + 8678LL) != 96 )
    {
      v14 = gpsi + 7140LL;
      goto LABEL_10;
    }
  }
  v14 = *v13 + 5652LL;
LABEL_10:
  v15 = (int *)(v14 + 1008);
  v16 = *((_DWORD *)a2 + 21) - v15[3];
  if ( v16 < 0 )
    v16 = 0;
  v17 = (unsigned int)(v16 >> 31);
  v40 = v16 / 2;
  v18 = v16 / 2;
  v19 = *((_DWORD *)a2 + 1) & 8;
  if ( (_DWORD)v19 )
    v20 = (struct HLFONT__ *)*((_QWORD *)a2 + 3);
  else
    v20 = (struct HLFONT__ *)*((_QWORD *)a2 + 4);
  if ( v20 )
  {
    v21 = GreSelectBitmap(ghdcMem2, v20);
    if ( v21 )
    {
      v22 = GreSetTextColor(a1, 0);
      v41 = GreSetBkColor(a1, 0xFFFFFF);
      if ( (*(_DWORD *)a2 & 0x2000) != 0 )
        v5 = *((_DWORD *)a2 + 20) - v15[2];
      if ( (unsigned int)GreExtGetObjectW(v20, 104, v42) == 104 && v42[23] == 32 && !v43 )
      {
        LOBYTE(v39) = 0;
        HIWORD(v39) = 511;
        v23 = (GreGetLayout(a1) & 1) == 0;
        v24 = 0;
        if ( !v23 )
          v24 = 0x80;
        BYTE1(v39) = v24;
        NtGdiAlphaBlend((POINTL)a1, v5, v40, v15[3], v15[3], ghdcMem2, 0, 0, v15[2], v15[3], v39);
      }
      else
      {
        NtGdiBitBltInternal(a1, v5, v40, v15[2], v15[3], ghdcMem2, 0, 0, 0xB8074Au, 0xFFFFFF, 0);
      }
      GreSetTextColor(a1, v22);
      GreSetBkColor(a1, v41);
      GreSelectBitmap(ghdcMem2, v21);
    }
    return v4;
  }
  if ( !(_DWORD)v19 )
    return 0;
  if ( (*(_DWORD *)a2 & 0x200) != 0 )
  {
    LODWORD(v17) = v16 % 2;
    if ( (W32GetCurrentThreadDpiAwarenessContext(v19, v17, 0LL, v10) & 0xF) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26, v27) + 408)
        ? (v31 = 0)
        : (v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v28,
                                                       v29,
                                                       v30)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          !v31) )
    {
      v32 = (_QWORD *)gpsi;
    }
    else
    {
      v32 = (_QWORD *)gpsi;
      if ( *(_WORD *)(gpsi + 8678LL) != 96 )
      {
        v33 = gpsi + 7140LL;
LABEL_38:
        v15 = (int *)(v33 + 1024);
        goto LABEL_39;
      }
    }
    v33 = *v32 + 5652LL;
    goto LABEL_38;
  }
LABEL_39:
  if ( (*(_DWORD *)a2 & 0x2000) != 0 )
    v5 = *((_DWORD *)a2 + 20) - v15[2];
  if ( (GreGetLayout(a1) & 1) != 0 )
  {
    v35 = gpDispInfo;
    if ( a1 != *(HDC *)(gpDispInfo + 40LL) )
      v6 = 3;
  }
  FixHDCBITSBmp(v35, v34, v36, v37);
  BltColor(a1, 0LL, *(HDC *)(gpDispInfo + 32LL), v5, v18, v15[2], v15[3], *v15, v15[1], v6);
  return v4;
}
