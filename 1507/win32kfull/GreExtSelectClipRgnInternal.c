/*
 * XREFs of GreExtSelectClipRgnInternal @ 0x1C0291854
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C000ADB8 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     NtGdiExtSelectClipRgn @ 0x1C0016130 (NtGdiExtSelectClipRgn.c)
 *     _ExcludeUpdateRgn @ 0x1C00FC0C8 (_ExcludeUpdateRgn.c)
 *     DrawTextExWorker @ 0x1C024B358 (DrawTextExWorker.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00160F4 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C001617C (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0019248 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C001928C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0019EA4 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C001CF44 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreExtSelectClipRgnInternal(HDC a1, HRGN a2, int a3, int a4)
{
  unsigned int v4; // ebx
  struct REGION *v9; // [rsp+28h] [rbp-89h] BYREF
  DC *v10[6]; // [rsp+30h] [rbp-81h] BYREF
  struct REGION *v11[7]; // [rsp+60h] [rbp-51h] BYREF
  _BYTE v12[24]; // [rsp+98h] [rbp-19h] BYREF
  char v13; // [rsp+B0h] [rbp-1h]

  v4 = 0;
  if ( (unsigned int)(a3 - 1) > 4 )
  {
    EngSetLastError(0x57u);
  }
  else
  {
    DCOBJ::DCOBJ((DCOBJ *)v10, a1);
    if ( v10[0]
      && (a4 || (*(_DWORD *)(gpentHmgr + 24LL * (unsigned __int16)*(_DWORD *)v10[0] + 8) & 0xFFFFFFFE) != 0)
      && *((_WORD *)v10[0] + 6) <= 1u )
    {
      if ( a2 )
      {
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v11, a2, 1, 0);
        if ( v11[0] )
        {
          v4 = DC::iSelect(v10[0], v11[0], a3);
          if ( v4 )
          {
            DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v12, (struct XDCOBJ *)v10, 1);
            v4 = 0;
            if ( (v13 & 1) != 0 )
            {
              v9 = XDCOBJ::prgnEffRao((XDCOBJ *)v10);
              v4 = RGNOBJ::iComplexity((RGNOBJ *)&v9);
            }
            DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v12);
          }
        }
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v11);
      }
      else if ( a3 == 5 )
      {
        v4 = DC::iSelect(v10[0], 0LL, 5);
        if ( v4 )
        {
          DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v12, (struct XDCOBJ *)v10, 1);
          v4 = 0;
          if ( (v13 & 1) != 0 )
          {
            v9 = (struct REGION *)*((_QWORD *)v10[0] + 193);
            v4 = RGNOBJ::iComplexity((RGNOBJ *)&v9);
          }
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v12);
        }
      }
    }
    else
    {
      EngSetLastError(6u);
    }
    DCOBJ::~DCOBJ((DCOBJ *)v10);
  }
  return v4;
}
