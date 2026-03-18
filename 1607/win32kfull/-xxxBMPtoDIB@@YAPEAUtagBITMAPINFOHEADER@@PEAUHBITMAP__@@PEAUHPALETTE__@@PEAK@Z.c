/*
 * XREFs of ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C01506E0
 * Callers:
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0150474 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01E6124 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     GreGetDIBitsInternal @ 0x1C0049A50 (GreGetDIBitsInternal.c)
 *     GreExtGetObjectW @ 0x1C004BBB8 (GreExtGetObjectW.c)
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     _SelectPalette @ 0x1C01045F0 (_SelectPalette.c)
 *     xxxRealizePalette @ 0x1C0145890 (xxxRealizePalette.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     UIntMult @ 0x1C01CE8C4 (UIntMult.c)
 */

struct tagBITMAPINFO *__fastcall xxxBMPtoDIB(struct HLFONT__ *a1, __int64 a2, unsigned int *a3)
{
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // bx
  unsigned int v7; // r12d
  char v8; // r10
  unsigned int v9; // edi
  UINT v10; // r15d
  UINT v11; // esi
  __int64 v12; // rax
  __int64 v13; // rdx
  struct tagBITMAPINFO *v14; // rbx
  __int128 v15; // xmm1
  __int64 v16; // xmm0_8
  __int64 v17; // rdx
  HDC CompatibleDC; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r14
  BOOL v22; // edi
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int16 v27[2]; // [rsp+50h] [rbp-29h] BYREF
  __int64 uMultiplicand; // [rsp+54h] [rbp-25h]
  __int16 v29; // [rsp+60h] [rbp-19h]
  __int16 v30; // [rsp+62h] [rbp-17h]
  _OWORD v31[6]; // [rsp+70h] [rbp-9h] BYREF
  UINT puResult; // [rsp+F8h] [rbp+7Fh] BYREF

  if ( (unsigned int)GreExtGetObjectW(a1, 32, v27) )
  {
    v5 = v29 * v30;
    if ( (unsigned __int16)(v29 * v30) > 1u )
    {
      v6 = 4;
      if ( v5 > 4u )
      {
        if ( v5 > 8u )
        {
          if ( *(_WORD *)(gptiCurrent + 552LL) < 0x400u )
          {
            v6 = 24;
          }
          else if ( v5 > 0x10u )
          {
            v6 = 24;
            if ( v5 > 0x18u )
              v6 = 32;
          }
          else
          {
            v6 = 16;
          }
        }
        else
        {
          v6 = 8;
        }
      }
    }
    else
    {
      v6 = 1;
    }
    memset(v31, 0, 0x28uLL);
    v7 = HIDWORD(uMultiplicand);
    LODWORD(v31[1]) = 0;
    LODWORD(v31[0]) = 40;
    *(_QWORD *)((char *)v31 + 4) = uMultiplicand;
    WORD6(v31[0]) = 1;
    HIWORD(v31[0]) = v6;
    if ( UIntMult(uMultiplicand, v6, &puResult) >= 0
      && UIntMult(((puResult + 31) >> 3) & 0x1FFFFFFC, v7, &puResult) >= 0 )
    {
      v9 = 0;
      if ( v6 > 8u )
      {
        if ( ((v6 - 16) & 0xFFEF) == 0 )
        {
          v9 = 12;
          LODWORD(v31[1]) = 3;
        }
      }
      else
      {
        v9 = 4 * (1 << v8);
      }
      v10 = puResult;
      v11 = v9 + 40 + puResult;
      if ( v11 >= v9 + 40 )
      {
        v12 = Win32AllocPool(v11, 1650684757LL);
        v14 = (struct tagBITMAPINFO *)v12;
        if ( v12 )
        {
          if ( a3 )
            *a3 = v11;
          v15 = v31[1];
          *(_OWORD *)v12 = v31[0];
          v16 = *(_QWORD *)&v31[2];
          *(_OWORD *)(v12 + 16) = v15;
          *(_QWORD *)(v12 + 32) = v16;
          CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 24LL), v13);
          if ( CompatibleDC )
          {
            v21 = 0LL;
            PushW32ThreadLock((__int64)v14, v27, (__int64)Win32FreePool, v20);
            if ( a2 )
            {
              v21 = SelectPalette((__int64)CompatibleDC, a2, 0);
              xxxRealizePalette(CompatibleDC);
            }
            v22 = GreGetDIBitsInternal(
                    CompatibleDC,
                    (HSURF)a1,
                    0,
                    v7,
                    (unsigned __int8 *)v14 + v14->bmiHeader.biSize + v9,
                    v14,
                    0,
                    v10,
                    v14->bmiHeader.biSize + v9) != 0;
            if ( v21 )
            {
              SelectPalette((__int64)CompatibleDC, v21, 0);
              xxxRealizePalette(CompatibleDC);
            }
            GreDeleteDC(CompatibleDC);
            PopW32ThreadLock(v27, v23, v24, v25);
            if ( v22 )
              return v14;
          }
          Win32FreePool(v14, v17, v19);
        }
      }
    }
  }
  return 0LL;
}
