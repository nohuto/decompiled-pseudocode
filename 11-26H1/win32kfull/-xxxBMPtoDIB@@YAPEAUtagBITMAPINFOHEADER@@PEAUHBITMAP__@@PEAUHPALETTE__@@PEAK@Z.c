/*
 * XREFs of ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x14025E63C
 * Callers:
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402CEB64 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402CED08 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x140014058 (GreExtGetObjectW.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreGetDIBitsInternal @ 0x1401B5FB8 (GreGetDIBitsInternal.c)
 *     _SelectPalette @ 0x1401D49D0 (_SelectPalette.c)
 *     xxxRealizePalette @ 0x140292500 (xxxRealizePalette.c)
 */

struct tagBITMAPINFOHEADER *__fastcall xxxBMPtoDIB(Gre::Base *a1, __int64 a2, unsigned int *a3)
{
  unsigned int v5; // edi
  unsigned __int16 v6; // bx
  unsigned __int16 v7; // cx
  int v8; // r12d
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r15
  unsigned int v11; // esi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int *v15; // rbx
  __int128 v16; // xmm1
  __int64 v17; // xmm0_8
  __int64 UserSessionState; // rax
  __int64 v19; // rcx
  Gre::Base *CompatibleDC; // rsi
  __int64 v21; // r14
  struct tagTHREADINFO *v22; // rax
  int DIBitsInternal; // edi
  __int64 v24; // rcx
  struct tagTHREADINFO *v25; // rax
  int v27; // [rsp+38h] [rbp-39h]
  _QWORD v28[5]; // [rsp+58h] [rbp-19h] BYREF
  int v29[4]; // [rsp+80h] [rbp+Fh] BYREF
  __int128 v30; // [rsp+90h] [rbp+1Fh]

  *(_OWORD *)v29 = 0LL;
  v30 = 0LL;
  v5 = 0;
  if ( (unsigned int)GreExtGetObjectW(a1, 32, v29) )
  {
    v6 = v30 * WORD1(v30);
    if ( (unsigned __int16)(v30 * WORD1(v30)) > 1u )
    {
      v7 = 4;
      if ( v6 > 4u )
      {
        if ( v6 > 8u )
        {
          if ( *((_WORD *)PtiCurrent(4LL) + 332) < 0x400u )
          {
            v7 = 24;
          }
          else if ( v6 > 0x10u )
          {
            v7 = 24;
            if ( v6 > 0x18u )
              v7 = 32;
          }
          else
          {
            v7 = 16;
          }
        }
        else
        {
          v7 = 8;
        }
      }
    }
    else
    {
      v7 = 1;
    }
    v8 = v29[2];
    *(_QWORD *)((char *)v28 + 4) = *(_QWORD *)&v29[1];
    v9 = v7 * (unsigned __int64)(unsigned int)v29[1];
    LODWORD(v28[0]) = 40;
    WORD2(v28[1]) = 1;
    HIWORD(v28[1]) = v7;
    memset(&v28[2], 0, 24);
    if ( v9 <= 0xFFFFFFFF )
    {
      v10 = (unsigned int)v29[2] * (unsigned __int64)(((unsigned int)(v9 + 31) >> 3) & 0x1FFFFFFC);
      if ( v10 <= 0xFFFFFFFF )
      {
        if ( v7 > 8u )
        {
          if ( ((v7 - 16) & 0xFFEF) == 0 )
          {
            v5 = 12;
            LODWORD(v28[2]) = 3;
          }
        }
        else
        {
          v5 = 4 * (1 << v7);
        }
        v11 = v5 + 40 + v10;
        if ( v11 >= v5 + 40 )
        {
          v12 = Win32AllocPoolZInit(v11, 1650684757LL);
          v15 = (unsigned int *)v12;
          if ( v12 )
          {
            if ( a3 )
              *a3 = v11;
            v16 = *(_OWORD *)&v28[2];
            *(_OWORD *)v12 = *(_OWORD *)v28;
            v17 = v28[4];
            *(_OWORD *)(v12 + 16) = v16;
            *(_QWORD *)(v12 + 32) = v17;
            UserSessionState = W32GetUserSessionState(v14, v13);
            CompatibleDC = (Gre::Base *)GreCreateCompatibleDC(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 56LL));
            if ( CompatibleDC )
            {
              v21 = 0LL;
              v22 = PtiCurrent(v19);
              v28[0] = *((_QWORD *)v22 + 47);
              *((_QWORD *)v22 + 47) = v28;
              v28[2] = Win32FreePool;
              v28[1] = v15;
              if ( a2 )
              {
                v21 = SelectPalette((__int64)CompatibleDC, a2, 0);
                xxxRealizePalette((HDC)CompatibleDC);
              }
              DIBitsInternal = GreGetDIBitsInternal(
                                 CompatibleDC,
                                 (__int64)a1,
                                 (__int64)v15 + *v15 + v5,
                                 v8,
                                 (__int64)v15 + *v15 + v5,
                                 v15,
                                 v27,
                                 v10,
                                 *v15 + v5);
              if ( v21 )
              {
                SelectPalette((__int64)CompatibleDC, v21, 0);
                xxxRealizePalette((HDC)CompatibleDC);
              }
              GreDeleteDC(CompatibleDC);
              v25 = PtiCurrent(v24);
              *((_QWORD *)v25 + 47) = v28[0];
              if ( DIBitsInternal )
                return (struct tagBITMAPINFOHEADER *)v15;
            }
            Win32FreePool(v15);
          }
        }
      }
    }
  }
  return 0LL;
}
