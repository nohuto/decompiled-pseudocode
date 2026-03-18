/*
 * XREFs of NtGdiGetDCDword @ 0x1C00DA760
 * Callers:
 *     <none>
 * Callees:
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002DAD0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C027F4D0 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiGetDCDword(__int64 a1, __int64 a2, int *a3)
{
  int v4; // esi
  int FontLanguageInfo; // edi
  unsigned int v6; // r14d
  __int64 v7; // r9
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  char v16; // al
  __int64 v17; // [rsp+20h] [rbp-18h] BYREF
  int v18; // [rsp+28h] [rbp-10h]
  int v19; // [rsp+2Ch] [rbp-Ch]

  v4 = a2;
  FontLanguageInfo = 0;
  v6 = 1;
  v18 = 0;
  v19 = 0;
  LOBYTE(a2) = 1;
  v7 = HmgLockEx(a1, a2, 0LL);
  v17 = v7;
  if ( v7 )
  {
    if ( (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v17) )
    {
      v7 = v17;
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(v17 + 12));
      v7 = 0LL;
      v17 = 0LL;
    }
  }
  if ( v7 )
  {
    if ( v4 )
    {
      v8 = v4 - 1;
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
                  v14 = v13 - 1;
                  if ( v14 )
                  {
                    if ( v14 == 1 )
                      FontLanguageInfo = *(_DWORD *)(*(_QWORD *)(v7 + 80) + 308LL);
                    else
                      v6 = 0;
                  }
                  else
                  {
                    LOBYTE(FontLanguageInfo) = *(_DWORD *)(v7 + 32) == 1;
                  }
                }
                else
                {
                  FontLanguageInfo = dwGetFontLanguageInfo((struct XDCOBJ *)&v17);
                }
              }
              else
              {
                FontLanguageInfo = *(_DWORD *)(v7 + 116);
              }
            }
            else
            {
              v16 = *(_BYTE *)(v7 + 176) & 4;
              if ( (*(_DWORD *)(*(_QWORD *)(v7 + 80) + 312LL) & 1) != 0 )
                FontLanguageInfo = 2 - (v16 != 0);
              else
                FontLanguageInfo = (v16 != 0) + 1;
            }
          }
          else
          {
            FontLanguageInfo = *(_DWORD *)(*(_QWORD *)(v7 + 80) + 172LL);
          }
        }
        else
        {
          FontLanguageInfo = *(_DWORD *)(*(_QWORD *)(v7 + 80) + 168LL);
        }
      }
      else
      {
        FontLanguageInfo = *(_DWORD *)(*(_QWORD *)(v7 + 80) + 164LL);
      }
    }
    else
    {
      FontLanguageInfo = ((*(_DWORD *)(v7 + 72) >> 13) & 1) == 0;
    }
    if ( v6 )
    {
      if ( (unsigned __int64)a3 >= W32UserProbeAddress )
        a3 = (int *)W32UserProbeAddress;
      *a3 = FontLanguageInfo;
    }
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v17);
    _InterlockedDecrement((volatile signed __int32 *)(v17 + 12));
  }
  else
  {
    return 0;
  }
  return v6;
}
