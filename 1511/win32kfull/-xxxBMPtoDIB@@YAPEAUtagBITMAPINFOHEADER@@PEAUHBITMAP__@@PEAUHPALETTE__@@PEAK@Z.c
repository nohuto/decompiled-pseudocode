/*
 * XREFs of ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C014B1C0
 * Callers:
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C014AF54 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F03E4 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0042130 (GreExtGetObjectW.c)
 *     GreGetDIBitsInternal @ 0x1C0042840 (GreGetDIBitsInternal.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     PopW32ThreadLock @ 0x1C00829E0 (PopW32ThreadLock.c)
 *     _SelectPalette @ 0x1C00E4700 (_SelectPalette.c)
 *     xxxRealizePalette @ 0x1C013C790 (xxxRealizePalette.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

struct tagBITMAPINFO *__fastcall xxxBMPtoDIB(HBRUSH a1, __int64 a2, unsigned int *a3)
{
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // bx
  unsigned __int64 v8; // r15
  unsigned int v9; // edi
  unsigned int v10; // esi
  __int64 v11; // rax
  __int64 v12; // rdx
  struct tagBITMAPINFO *v13; // rbx
  __int128 v14; // xmm1
  __int64 v15; // xmm0_8
  HDC CompatibleDC; // rsi
  __int64 v17; // r14
  _BYTE v19[40]; // [rsp+58h] [rbp-19h] BYREF
  unsigned __int16 v20[2]; // [rsp+80h] [rbp+Fh] BYREF
  __int64 v21; // [rsp+84h] [rbp+13h]
  __int16 v22; // [rsp+90h] [rbp+1Fh]
  __int16 v23; // [rsp+92h] [rbp+21h]

  if ( !(unsigned int)GreExtGetObjectW(a1, 32LL, v20) )
    return 0LL;
  v6 = v22 * v23;
  if ( (unsigned __int16)(v22 * v23) <= 1u )
  {
    v7 = 1;
  }
  else
  {
    v7 = 4;
    if ( v6 > 4u )
    {
      if ( v6 <= 8u )
      {
        v7 = 8;
      }
      else if ( *(_WORD *)(gptiCurrent + 552LL) < 0x400u )
      {
        v7 = 24;
      }
      else if ( v6 <= 0x10u )
      {
        v7 = 16;
      }
      else
      {
        v7 = 24;
        if ( v6 > 0x18u )
          v7 = 32;
      }
    }
  }
  memset(v19, 0, sizeof(v19));
  *(_DWORD *)&v19[16] = 0;
  *(_QWORD *)&v19[4] = v21;
  *(_DWORD *)v19 = 40;
  *(_WORD *)&v19[12] = 1;
  *(_WORD *)&v19[14] = v7;
  v8 = HIDWORD(v21) * (unsigned __int64)(((v7 * (unsigned __int16)v21 + 31) >> 3) & 0xFFFFFFFC);
  if ( v8 > 0xFFFFFFFF )
    return 0LL;
  v9 = 0;
  if ( v7 <= 8u )
  {
    v9 = 4 * (1 << v7);
  }
  else if ( ((v7 - 16) & 0xFFEF) == 0 )
  {
    v9 = 12;
    *(_DWORD *)&v19[16] = 3;
  }
  v10 = v8 + v9 + 40;
  if ( v10 < v9 + 40 )
    return 0LL;
  v11 = Win32AllocPool(v10);
  v13 = (struct tagBITMAPINFO *)v11;
  if ( !v11 )
    return 0LL;
  if ( a3 )
    *a3 = v10;
  v14 = *(_OWORD *)&v19[16];
  *(_OWORD *)v11 = *(_OWORD *)v19;
  v15 = *(_QWORD *)&v19[32];
  *(_OWORD *)(v11 + 16) = v14;
  *(_QWORD *)(v11 + 32) = v15;
  CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 24LL), v12);
  if ( CompatibleDC )
  {
    v17 = 0LL;
    PushW32ThreadLock((__int64)v13, v19, (__int64)Win32FreePool);
    if ( a2 )
    {
      v17 = SelectPalette((__int64)CompatibleDC, a2, 0);
      xxxRealizePalette(CompatibleDC);
    }
    GreGetDIBitsInternal(
      (__int64)CompatibleDC,
      (__int64)a1,
      0,
      WORD2(v21),
      (unsigned __int8 *)v13 + v13->bmiHeader.biSize + v9,
      v13,
      0,
      v8,
      v13->bmiHeader.biSize + v9);
    if ( v17 )
    {
      SelectPalette((__int64)CompatibleDC, v17, 0);
      xxxRealizePalette(CompatibleDC);
    }
    GreDeleteDC(CompatibleDC);
    PopW32ThreadLock(v19);
  }
  return v13;
}
