/*
 * XREFs of GreGetTextExtentExW @ 0x1C01523C4
 * Callers:
 *     NtGdiGetTextExtentExW @ 0x1C0022700 (NtGdiGetTextExtentExW.c)
 *     GreGetCharacterPlacementW @ 0x1C0291D38 (GreGetCharacterPlacementW.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z @ 0x1C00236A0 (-vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0023A60 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0028490 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x1C0150F20 (-bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C0151048 (--1ESTROBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetTextExtentExW(
        HDC a1,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        int *a6,
        struct tagSIZE *a7,
        char a8)
{
  unsigned int v8; // r12d
  int *v10; // rbx
  int *v13; // r14
  unsigned int i; // eax
  struct _FD_XFORM *v15; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v16; // [rsp+98h] [rbp-78h]
  _QWORD v17[2]; // [rsp+A0h] [rbp-70h] BYREF
  struct tagSIZE *v18; // [rsp+B0h] [rbp-60h]
  _BYTE v19[24]; // [rsp+B8h] [rbp-58h] BYREF
  _BYTE v20[320]; // [rsp+D0h] [rbp-40h] BYREF
  char v21; // [rsp+210h] [rbp+100h] BYREF

  v8 = 0;
  v10 = a6;
  v16 = a4;
  v18 = a7;
  if ( (a2 || !a3) && a7 )
  {
    if ( a3 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v17, a1);
      if ( v17[0] )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v19, (struct XDCOBJ *)v17, 0x204u);
        if ( (unsigned int)RFONTOBJ::bInit(&v15, (struct XDCOBJ *)v17, 0, (a8 & 1) != 0 ? 4 : 2) )
          GreAcquireSemaphore(*(_QWORD *)&v15[33].eXX);
        if ( v15 )
        {
          if ( (LODWORD(v15[4].eXY) & 4) != 0 )
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v15, a2, a3);
          v13 = 0LL;
          if ( !a6 && a5 )
          {
            if ( a3 > 0x28 )
            {
              v13 = (int *)PALLOCMEM2(4 * a3, 1954051143LL, 1);
              if ( !v13 )
                EngSetLastError(8u);
              v10 = v13;
            }
            else
            {
              v10 = (int *)&v21;
            }
          }
          ESTROBJ::vInit(
            (ESTROBJ *)v20,
            a2,
            a3,
            (struct XDCOBJ *)v17,
            (struct RFONTOBJ *)&v15,
            (struct EXFORMOBJ *)v19,
            0LL,
            0,
            *(_DWORD *)(v17[0] + 2148LL),
            *(_DWORD *)(*(_QWORD *)(v17[0] + 80LL) + 160LL),
            *(_DWORD *)(*(_QWORD *)(v17[0] + 80LL) + 168LL),
            *(_DWORD *)(*(_QWORD *)(v17[0] + 80LL) + 172LL),
            0,
            0,
            0,
            v10,
            0LL,
            0);
          if ( (v20[64] & 4) != 0 && (unsigned int)ESTROBJ::bTextExtent((ESTROBJ *)v20, (struct RFONTOBJ *)&v15, 0, v18) )
          {
            if ( a5 && v10 )
            {
              for ( i = 0; i < a3; ++v10 )
              {
                if ( *v10 > v16 )
                  break;
                ++i;
              }
              *a5 = i;
            }
            v8 = 1;
          }
          if ( v13 )
            Win32FreePool(v13);
          ESTROBJ::~ESTROBJ((ESTROBJ *)v20);
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15);
      }
      else
      {
        EngSetLastError(6u);
      }
      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v17);
      return v8;
    }
    else
    {
      if ( a5 )
        *a5 = 0;
      return 1LL;
    }
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
