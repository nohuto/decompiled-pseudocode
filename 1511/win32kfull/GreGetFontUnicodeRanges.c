/*
 * XREFs of GreGetFontUnicodeRanges @ 0x1C00FF734
 * Callers:
 *     NtGdiGetFontUnicodeRanges @ 0x1C00FF680 (NtGdiGetFontUnicodeRanges.c)
 * Callees:
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C001E568 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C001E62C (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0023A60 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0036AA0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreGetFontUnicodeRanges(HDC a1, int *a2)
{
  ULONG v3; // edi
  int v4; // ebp
  int v5; // eax
  struct _FD_XFORM *v6; // rbx
  struct _FD_GLYPHSET *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  struct _FD_XFORM *v12; // [rsp+60h] [rbp+18h] BYREF
  __int64 *v13; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  v4 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  if ( !v11[0] )
    goto LABEL_14;
  v5 = RFONTOBJ::bInit(&v12, (struct XDCOBJ *)v11, 0, 2u);
  v6 = v12;
  if ( v5 )
    GreAcquireSemaphore(*(_QWORD *)&v12[33].eXX);
  if ( !v6 )
  {
LABEL_13:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
LABEL_14:
    v3 = v4;
    goto LABEL_15;
  }
  v13 = *(__int64 **)&v6[7].eXX;
  v7 = PFEOBJ::pfdg(&v13);
  if ( v7 )
  {
    v4 = 4 * v7->cRuns + 16;
    if ( a2 )
    {
      if ( *a2 == v4 )
      {
        *a2 = v4;
        a2[2] = v7->cGlyphsSupported;
        a2[3] = v7->cRuns;
        a2[1] = 0;
        a2[1] = (v7->flAccel & 2) != 0;
        if ( v7->cRuns )
        {
          do
          {
            v8 = v3;
            v9 = v3++;
            v9 *= 2LL;
            LOWORD(a2[v8 + 4]) = *(&v7->awcrun[0].wcLow + 4 * v9);
            HIWORD(a2[v8 + 4]) = *(&v7->awcrun[0].cGlyphs + 4 * v9);
          }
          while ( v3 < v7->cRuns );
        }
      }
      else
      {
        v4 = 0;
      }
    }
    PFEOBJ::vFreepfdg(&v13);
    goto LABEL_13;
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
LABEL_15:
  DCOBJ::~DCOBJ((DCOBJ *)v11);
  return v3;
}
