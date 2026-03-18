/*
 * XREFs of GreGetTextExtentExW @ 0x1C015CBE0
 * Callers:
 *     NtGdiGetTextExtentExW @ 0x1C0029F30 (NtGdiGetTextExtentExW.c)
 *     GreGetCharacterPlacementW @ 0x1C02921F0 (GreGetCharacterPlacementW.c)
 * Callees:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00225B0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z @ 0x1C002AF34 (-vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002B2F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x1C015B7D0 (-bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C015B8F8 (--1ESTROBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetTextExtentExW(
        HDC a1,
        __m128i *a2,
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
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int i; // eax
  struct RFONTOBJ *v18; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v19; // [rsp+98h] [rbp-78h]
  struct tagSIZE *v20; // [rsp+A0h] [rbp-70h]
  _QWORD v21[6]; // [rsp+A8h] [rbp-68h] BYREF
  float *v22[3]; // [rsp+D8h] [rbp-38h] BYREF
  _BYTE v23[320]; // [rsp+F0h] [rbp-20h] BYREF
  char v24; // [rsp+230h] [rbp+120h] BYREF

  v8 = 0;
  v10 = a6;
  v19 = a4;
  v20 = a7;
  if ( (a2 || !a3) && a7 )
  {
    if ( a3 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v21, a1);
      if ( v21[0] )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v22, (struct XDCOBJ *)v21, 0x204u);
        if ( (unsigned int)RFONTOBJ::bInit((struct _FD_XFORM **)&v18, (struct XDCOBJ *)v21, 0, (a8 & 1) != 0 ? 4 : 2) )
          GreAcquireSemaphore(*((_QWORD *)v18 + 66));
        if ( v18 )
        {
          if ( (*((_DWORD *)v18 + 17) & 4) != 0 )
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v18, (unsigned __int16 *)a2, a3);
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
              v10 = (int *)&v24;
            }
          }
          ESTROBJ::vInit(
            (ESTROBJ *)v23,
            a2,
            a3,
            (struct XDCOBJ *)v21,
            &v18,
            v22,
            0LL,
            0,
            *(_DWORD *)(v21[0] + 2172LL),
            *(_DWORD *)(*(_QWORD *)(v21[0] + 80LL) + 160LL),
            *(_DWORD *)(*(_QWORD *)(v21[0] + 80LL) + 168LL),
            *(_DWORD *)(*(_QWORD *)(v21[0] + 80LL) + 172LL),
            0,
            0,
            0,
            v10,
            0LL,
            0);
          if ( (v23[64] & 4) != 0 && (unsigned int)ESTROBJ::bTextExtent((ESTROBJ *)v23, (struct RFONTOBJ *)&v18, 0, v20) )
          {
            if ( a5 && v10 )
            {
              for ( i = 0; i < a3; ++v10 )
              {
                if ( *v10 > v19 )
                  break;
                ++i;
              }
              *a5 = i;
            }
            v8 = 1;
          }
          if ( v13 )
            Win32FreePool(v13);
          ESTROBJ::~ESTROBJ((ESTROBJ *)v23, v14, v15, v16);
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v18);
      }
      else
      {
        EngSetLastError(6u);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v21);
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
