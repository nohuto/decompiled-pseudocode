/*
 * XREFs of GreGetTextExtentExW @ 0x1C01106D0
 * Callers:
 *     NtGdiGetTextExtentExW @ 0x1C01103F0 (NtGdiGetTextExtentExW.c)
 *     GreGetCharacterPlacementW @ 0x1C0290D00 (GreGetCharacterPlacementW.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z @ 0x1C002E5E8 (-vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x1C00317F4 (-bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0031964 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C0032018 (--1ESTROBJ@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int i; // eax
  struct _FD_XFORM *v17; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v18; // [rsp+98h] [rbp-78h]
  struct tagSIZE *v19; // [rsp+A0h] [rbp-70h]
  _QWORD v20[2]; // [rsp+A8h] [rbp-68h] BYREF
  char v21[32]; // [rsp+B8h] [rbp-58h] BYREF
  float *v22[3]; // [rsp+D8h] [rbp-38h] BYREF
  _BYTE v23[320]; // [rsp+F0h] [rbp-20h] BYREF
  char v24; // [rsp+230h] [rbp+120h] BYREF

  v8 = 0;
  v10 = a6;
  v18 = a4;
  v19 = a7;
  if ( (a2 || !a3) && a7 )
  {
    if ( a3 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v20, a1);
      if ( v20[0] )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v22, (struct XDCOBJ *)v20, 0x204u);
        if ( (unsigned int)RFONTOBJ::bInit(&v17, (struct XDCOBJ *)v20, 0, (a8 & 1) != 0 ? 4 : 2) )
          GreAcquireSemaphore(*(_QWORD *)&v17[33].eXX);
        if ( v17 )
        {
          if ( (LODWORD(v17[4].eXY) & 4) != 0 )
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v17, a2, a3);
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
            (struct XDCOBJ *)v20,
            (struct RFONTOBJ *)&v17,
            v22,
            0LL,
            0,
            *(_DWORD *)(v20[0] + 2172LL),
            *(_DWORD *)(*(_QWORD *)(v20[0] + 80LL) + 160LL),
            *(_DWORD *)(*(_QWORD *)(v20[0] + 80LL) + 168LL),
            *(_DWORD *)(*(_QWORD *)(v20[0] + 80LL) + 172LL),
            0,
            0,
            0,
            v10,
            0LL,
            0);
          if ( (v23[64] & 4) != 0 && (unsigned int)ESTROBJ::bTextExtent((ESTROBJ *)v23, (struct RFONTOBJ *)&v17, 0, v19) )
          {
            if ( a5 && v10 )
            {
              for ( i = 0; i < a3; ++v10 )
              {
                if ( *v10 > v18 )
                  break;
                ++i;
              }
              *a5 = i;
            }
            v8 = 1;
          }
          if ( v13 )
            Win32FreePool(v13, v14, v15);
          ESTROBJ::~ESTROBJ((ESTROBJ *)v23, v14, v15);
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
      }
      else
      {
        EngSetLastError(6u);
      }
      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v20);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v21);
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
