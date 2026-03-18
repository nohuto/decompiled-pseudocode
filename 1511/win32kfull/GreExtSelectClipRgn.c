/*
 * XREFs of GreExtSelectClipRgn @ 0x1C009B3F8
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C009AF0C (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     _ExcludeUpdateRgn @ 0x1C00CC3D8 (_ExcludeUpdateRgn.c)
 *     DrawTextExWorker @ 0x1C024B318 (DrawTextExWorker.c)
 * Callees:
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C0027798 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C002C838 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002DA14 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C00368B0 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0037A14 (--1RGNOBJAPI@@QEAA@XZ.c)
 */

__int64 __fastcall GreExtSelectClipRgn(HDC a1, HRGN a2, int a3)
{
  unsigned int v3; // ebx
  DC *v7[2]; // [rsp+28h] [rbp-29h] BYREF
  struct REGION *v8[4]; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v9[24]; // [rsp+58h] [rbp+7h] BYREF
  char v10; // [rsp+70h] [rbp+1Fh]
  struct REGION *v11; // [rsp+D0h] [rbp+7Fh] BYREF

  v3 = 0;
  if ( (unsigned int)(a3 - 1) > 4 )
  {
    EngSetLastError(0x57u);
  }
  else
  {
    DCOBJ::DCOBJ((DCOBJ *)v7, a1);
    if ( v7[0] )
    {
      if ( a2 )
      {
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v8, a2, 1);
        if ( v8[0] )
        {
          v3 = DC::iSelect(v7[0], v8[0], a3);
          if ( v3 )
          {
            DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v9, (struct XDCOBJ *)v7, 1);
            v3 = 0;
            if ( (v10 & 1) != 0 )
            {
              v11 = XDCOBJ::prgnEffRao((XDCOBJ *)v7);
              v3 = RGNOBJ::iComplexity((RGNOBJ *)&v11);
            }
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v9);
          }
        }
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v8);
      }
      else if ( a3 == 5 )
      {
        v3 = DC::iSelect(v7[0], 0LL, 5);
        if ( v3 )
        {
          DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v9, (struct XDCOBJ *)v7, 1);
          v3 = 0;
          if ( (v10 & 1) != 0 )
          {
            v11 = (struct REGION *)*((_QWORD *)v7[0] + 190);
            v3 = RGNOBJ::iComplexity((RGNOBJ *)&v11);
          }
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v9);
        }
      }
    }
    else
    {
      EngSetLastError(6u);
    }
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v7);
  }
  return v3;
}
