/*
 * XREFs of GreExtSelectClipRgnInternal @ 0x1C0290370
 * Callers:
 *     NtGdiExtSelectClipRgn @ 0x1C004B440 (NtGdiExtSelectClipRgn.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00D8568 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     _ExcludeUpdateRgn @ 0x1C0125A3C (_ExcludeUpdateRgn.c)
 *     DrawTextExWorker @ 0x1C0247624 (DrawTextExWorker.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C004892C (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0048970 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0049368 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C004A0F8 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C004AD74 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C004BB88 (--1RGNOBJAPI@@QEAA@XZ.c)
 */

__int64 __fastcall GreExtSelectClipRgnInternal(HDC a1, HRGN a2, int a3, int a4)
{
  unsigned int v4; // ebx
  DC *v8; // rcx
  struct REGION *v10; // [rsp+28h] [rbp-89h] BYREF
  DC *v11[6]; // [rsp+30h] [rbp-81h] BYREF
  struct REGION *v12[7]; // [rsp+60h] [rbp-51h] BYREF
  _BYTE v13[24]; // [rsp+98h] [rbp-19h] BYREF
  char v14; // [rsp+B0h] [rbp-1h]

  v4 = 0;
  if ( (unsigned int)(a3 - 1) > 4 )
  {
    EngSetLastError(0x57u);
    return v4;
  }
  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  v8 = v11[0];
  if ( !v11[0] )
    goto LABEL_19;
  if ( !a4 )
  {
    if ( (*(_DWORD *)(HmgPentryFromPobj(v11[0]) + 8) & 0xFFFFFFFE) == 0 )
      goto LABEL_19;
    v8 = v11[0];
  }
  if ( *((_WORD *)v8 + 6) <= 1u )
  {
    if ( a2 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v12, a2, 1, 0);
      if ( v12[0] )
      {
        v4 = DC::iSelect(v11[0], v12[0], a3);
        if ( v4 )
        {
          DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v13, (struct XDCOBJ *)v11, 1);
          v4 = 0;
          if ( (v14 & 1) != 0 )
          {
            v10 = XDCOBJ::prgnEffRao((XDCOBJ *)v11);
            v4 = RGNOBJ::iComplexity((RGNOBJ *)&v10);
          }
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v13);
        }
      }
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v12);
    }
    else if ( a3 == 5 )
    {
      v4 = DC::iSelect(v8, 0LL, 5);
      if ( v4 )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v13, (struct XDCOBJ *)v11, 1);
        v4 = 0;
        if ( (v14 & 1) != 0 )
        {
          v10 = (struct REGION *)*((_QWORD *)v11[0] + 193);
          v4 = RGNOBJ::iComplexity((RGNOBJ *)&v10);
        }
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v13);
      }
    }
    goto LABEL_20;
  }
LABEL_19:
  EngSetLastError(6u);
LABEL_20:
  DCOBJ::~DCOBJ((DCOBJ *)v11);
  return v4;
}
