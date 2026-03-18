/*
 * XREFs of ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01CD808
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z @ 0x1C008E2D4 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C004BBB8 (GreExtGetObjectW.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     CreateFontFromWinIni @ 0x1C00B8F88 (CreateFontFromWinIni.c)
 *     UserSetAltScaleFont @ 0x1C00B90A4 (UserSetAltScaleFont.c)
 *     GreMarkDeletableFont @ 0x1C00B919C (GreMarkDeletableFont.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?SetWindowMetricFont@@YAHPEAU_UNICODE_STRING@@IPEAUtagLOGFONTW@@@Z @ 0x1C01CDEE0 (-SetWindowMetricFont@@YAHPEAU_UNICODE_STRING@@IPEAUtagLOGFONTW@@@Z.c)
 */

__int64 __fastcall SPISetIconTitleFont(struct _UNICODE_STRING *a1, struct tagLOGFONTW *a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  BOOL v7; // esi
  unsigned int v8; // edi
  struct HLFONT__ *FontFromWinIni; // rax
  struct HLFONT__ *v10; // rbx
  struct HLFONT__ *v12; // rcx
  struct HLFONT__ *v13; // rcx
  struct HLFONT__ *v14; // rcx
  struct HLFONT__ *v15; // [rsp+20h] [rbp-A8h] BYREF
  tagLOGFONTW v16; // [rsp+30h] [rbp-98h] BYREF

  v4 = a3;
  v7 = a3 == 0;
  v8 = 0;
  if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)a1, (__int64)a2, a3, a4) & 0xF) == 0 )
  {
    a2->lfHeight = EngMulDiv(a2->lfHeight, *(unsigned __int16 *)(gpsi + 8678LL), 96);
    a2->lfWidth = EngMulDiv(a2->lfWidth, *(unsigned __int16 *)(gpsi + 8678LL), 96);
  }
  FontFromWinIni = CreateFontFromWinIni((__int64)a1, a2, 0x9Au);
  v10 = FontFromWinIni;
  if ( FontFromWinIni )
  {
    if ( !(unsigned int)UserSetAltScaleFont(FontFromWinIni, (__int64 *)&v15) )
    {
      GreMarkDeletableFont(v10);
      GreDeleteObject(v10);
      return 0LL;
    }
    if ( v4 )
    {
      if ( a2 )
      {
        GreExtGetObjectW(v10, 92, (unsigned __int16 *)&v16);
        v8 = SetWindowMetricFont(a1, 0x9Au, &v16);
      }
      else
      {
        v8 = 1;
      }
      v7 = v8;
    }
    if ( v7 )
    {
      v12 = (struct HLFONT__ *)gdpiSystem[4];
      if ( v12 )
      {
        GreMarkDeletableFont(v12);
        GreDeleteObject(gdpiSystem[4]);
      }
      v13 = (struct HLFONT__ *)gdpi96[4];
      if ( v13 )
      {
        GreMarkDeletableFont(v13);
        GreDeleteObject(gdpi96[4]);
      }
      v14 = v15;
      gdpiSystem[4] = v10;
      gdpi96[4] = (__int64)v14;
    }
    else
    {
      GreMarkDeletableFont(v10);
      GreDeleteObject(v10);
      GreMarkDeletableFont(v15);
      GreDeleteObject(v15);
    }
  }
  return v8;
}
