/*
 * XREFs of ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C023E554
 * Callers:
 *     xxxRealDrawMenuItem @ 0x1C0242490 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreSetTextColor @ 0x1C00155BC (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0015630 (GreSetBkColor.c)
 *     GreExtGetObjectW @ 0x1C0042130 (GreExtGetObjectW.c)
 *     NtGdiAlphaBlend @ 0x1C0044190 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     GreGetLayout @ 0x1C006B8B4 (GreGetLayout.c)
 *     FixHDCBITSBmp @ 0x1C00FBAA4 (FixHDCBITSBmp.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     BltColor @ 0x1C023DC5C (BltColor.c)
 */

__int64 __fastcall DrawMenuItemCheckMark(HDC a1, struct tagITEM *a2, int a3)
{
  unsigned int v3; // r14d
  char v5; // r12
  __int64 v8; // rcx
  int v9; // ecx
  _QWORD *v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rbx
  int v13; // eax
  int v14; // r13d
  __int64 v15; // rcx
  HBRUSH v16; // r15
  __int64 v17; // r12
  int v18; // r13d
  char Layout; // al
  char v20; // cl
  __int64 v21; // rcx
  int v22; // ecx
  _QWORD *v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // rcx
  int v27; // [rsp+60h] [rbp-C8h]
  int v28; // [rsp+64h] [rbp-C4h]
  int v29; // [rsp+68h] [rbp-C0h]
  unsigned __int16 v30[24]; // [rsp+70h] [rbp-B8h] BYREF
  int v31; // [rsp+A0h] [rbp-88h]

  v3 = 1;
  v5 = 1;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x4000) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v9 = 0)
      : (v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 244LL) & 1),
        !v9) )
  {
    v10 = (_QWORD *)gpsi;
  }
  else
  {
    v10 = (_QWORD *)gpsi;
    if ( *(_WORD *)(gpsi + 7286LL) != 96 )
    {
      v11 = gpsi + 5748LL;
      goto LABEL_11;
    }
  }
  v11 = *v10 + 4260LL;
LABEL_11:
  v12 = v11 + 1008;
  v13 = *((_DWORD *)a2 + 21) - *(_DWORD *)(v12 + 12);
  if ( v13 < 0 )
    v13 = 0;
  v28 = v13 / 2;
  v14 = v13 / 2;
  v15 = *((_DWORD *)a2 + 1) & 8;
  if ( (_DWORD)v15 )
    v16 = (HBRUSH)*((_QWORD *)a2 + 3);
  else
    v16 = (HBRUSH)*((_QWORD *)a2 + 4);
  if ( v16 )
  {
    v17 = GreSelectBitmap(ghdcMem2, v16);
    if ( v17 )
    {
      v18 = GreSetTextColor(a1, 0);
      v29 = GreSetBkColor(a1, 0xFFFFFF);
      if ( (*(_DWORD *)a2 & 0x2000) != 0 )
        a3 = *((_DWORD *)a2 + 20) - *(_DWORD *)(v12 + 8);
      if ( (unsigned int)GreExtGetObjectW(v16, 104LL, v30) == 104 && v30[23] == 32 && !v31 )
      {
        LOBYTE(v27) = 0;
        HIWORD(v27) = 511;
        Layout = GreGetLayout(a1);
        v20 = 0;
        if ( (Layout & 1) != 0 )
          v20 = 0x80;
        BYTE1(v27) = v20;
        NtGdiAlphaBlend(
          a1,
          a3,
          v28,
          *(_DWORD *)(v12 + 12),
          *(_DWORD *)(v12 + 12),
          ghdcMem2,
          0,
          0,
          *(_DWORD *)(v12 + 8),
          *(_DWORD *)(v12 + 12),
          v27);
      }
      else
      {
        NtGdiBitBltInternal(
          a1,
          a3,
          v28,
          *(_DWORD *)(v12 + 8),
          *(_DWORD *)(v12 + 12),
          ghdcMem2,
          0,
          0,
          0xB8074Au,
          0xFFFFFF,
          0);
      }
      GreSetTextColor(a1, v18);
      GreSetBkColor(a1, v29);
      GreSelectBitmap(ghdcMem2, v17);
    }
    return v3;
  }
  if ( !(_DWORD)v15 )
    return 0;
  if ( (*(_DWORD *)a2 & 0x200) != 0 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v22 = 0)
        : (v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          !v22) )
    {
      v23 = (_QWORD *)gpsi;
    }
    else
    {
      v23 = (_QWORD *)gpsi;
      if ( *(_WORD *)(gpsi + 7286LL) != 96 )
      {
        v24 = gpsi + 5748LL;
LABEL_40:
        v12 = v24 + 1024;
        goto LABEL_41;
      }
    }
    v24 = *v23 + 4260LL;
    goto LABEL_40;
  }
LABEL_41:
  if ( (*(_DWORD *)a2 & 0x2000) != 0 )
    a3 = *((_DWORD *)a2 + 20) - *(_DWORD *)(v12 + 8);
  if ( (GreGetLayout(a1) & 1) != 0 )
  {
    v25 = gpDispInfo;
    if ( a1 != *(HDC *)(gpDispInfo + 40LL) )
      v5 = 3;
  }
  FixHDCBITSBmp(v25);
  BltColor(
    a1,
    0LL,
    *(HDC *)(gpDispInfo + 32LL),
    a3,
    v14,
    *(_DWORD *)(v12 + 8),
    *(_DWORD *)(v12 + 12),
    *(_DWORD *)v12,
    *(_DWORD *)(v12 + 4),
    v5);
  return v3;
}
