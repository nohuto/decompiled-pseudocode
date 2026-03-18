/*
 * XREFs of NtGdiGetDCDword @ 0x1C00D4D40
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C027FB10 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiGetDCDword(HDC a1, int a2, int *a3)
{
  unsigned int v5; // esi
  int FontLanguageInfo; // ebx
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  char v14; // al
  _QWORD v16[7]; // [rsp+20h] [rbp-38h] BYREF

  v5 = 1;
  FontLanguageInfo = 0;
  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  if ( v16[0] )
  {
    if ( a2 )
    {
      v7 = a2 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              v11 = v10 - 1;
              if ( v11 )
              {
                v12 = v11 - 1;
                if ( v12 )
                {
                  v13 = v12 - 1;
                  if ( v13 )
                  {
                    if ( v13 == 1 )
                      FontLanguageInfo = *(_DWORD *)(*(_QWORD *)(v16[0] + 80LL) + 308LL);
                    else
                      v5 = 0;
                  }
                  else
                  {
                    LOBYTE(FontLanguageInfo) = *(_DWORD *)(v16[0] + 32LL) == 1;
                  }
                }
                else
                {
                  FontLanguageInfo = dwGetFontLanguageInfo((struct XDCOBJ *)v16);
                }
              }
              else
              {
                FontLanguageInfo = *(_DWORD *)(v16[0] + 116LL);
              }
            }
            else
            {
              v14 = *(_BYTE *)(v16[0] + 176LL) & 4;
              if ( (*(_DWORD *)(*(_QWORD *)(v16[0] + 80LL) + 312LL) & 1) != 0 )
                FontLanguageInfo = 2 - (v14 != 0);
              else
                FontLanguageInfo = (v14 != 0) + 1;
            }
          }
          else
          {
            FontLanguageInfo = *(_DWORD *)(*(_QWORD *)(v16[0] + 80LL) + 172LL);
          }
        }
        else
        {
          FontLanguageInfo = *(_DWORD *)(*(_QWORD *)(v16[0] + 80LL) + 168LL);
        }
      }
      else
      {
        FontLanguageInfo = *(_DWORD *)(*(_QWORD *)(v16[0] + 80LL) + 164LL);
      }
    }
    else
    {
      FontLanguageInfo = ((*(_DWORD *)(v16[0] + 72LL) >> 13) & 1) == 0;
    }
    if ( v5 )
    {
      if ( (unsigned __int64)a3 >= W32UserProbeAddress )
        a3 = (int *)W32UserProbeAddress;
      *a3 = FontLanguageInfo;
    }
  }
  else
  {
    v5 = 0;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v16);
  return v5;
}
