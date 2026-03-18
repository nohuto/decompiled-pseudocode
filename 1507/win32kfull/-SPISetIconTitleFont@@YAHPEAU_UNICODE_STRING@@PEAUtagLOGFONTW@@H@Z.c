/*
 * XREFs of ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01D4DB0
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z @ 0x1C0132FF0 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0014EE0 (GreExtGetObjectW.c)
 *     UserSetAltScaleFont @ 0x1C0137ED0 (UserSetAltScaleFont.c)
 *     CreateFontFromWinIni @ 0x1C0137FF8 (CreateFontFromWinIni.c)
 *     GreMarkDeletableFont @ 0x1C0138114 (GreMarkDeletableFont.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?SetWindowMetricFont@@YAHPEAU_UNICODE_STRING@@IPEAUtagLOGFONTW@@@Z @ 0x1C01D54A0 (-SetWindowMetricFont@@YAHPEAU_UNICODE_STRING@@IPEAUtagLOGFONTW@@@Z.c)
 */

__int64 __fastcall SPISetIconTitleFont(struct _UNICODE_STRING *a1, struct tagLOGFONTW *a2, int a3)
{
  BOOL v6; // ebp
  unsigned int v7; // edi
  __int64 v8; // rcx
  HSURF FontFromWinIni; // rax
  struct HLFONT__ *v10; // rbx
  struct HLFONT__ *v12; // rcx
  struct HLFONT__ *v13; // rcx
  struct HLFONT__ *v14; // rcx
  struct HLFONT__ *v15; // [rsp+20h] [rbp-A8h] BYREF
  tagLOGFONTW v16; // [rsp+30h] [rbp-98h] BYREF

  v6 = a3 == 0;
  v7 = 0;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x4000) == 0 )
  {
    a2->lfHeight = EngMulDiv(a2->lfHeight, *(unsigned __int16 *)(gpsi + 7286LL), 96);
    a2->lfWidth = EngMulDiv(a2->lfWidth, *(unsigned __int16 *)(gpsi + 7286LL), 96);
  }
  FontFromWinIni = (HSURF)CreateFontFromWinIni((__int64)a1, a2, 0x9Au);
  v10 = (struct HLFONT__ *)FontFromWinIni;
  if ( FontFromWinIni )
  {
    if ( !(unsigned int)UserSetAltScaleFont(FontFromWinIni, (__int64 *)&v15) )
    {
      GreMarkDeletableFont(v10);
      GreDeleteObject(v10);
      return 0LL;
    }
    if ( a3 )
    {
      if ( a2 )
      {
        GreExtGetObjectW((HSURF)v10, 92, (unsigned __int16 *)&v16);
        v7 = SetWindowMetricFont(a1, 0x9Au, &v16);
      }
      else
      {
        v7 = 1;
      }
      v6 = v7;
    }
    if ( v6 )
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
      gdpi96[4] = v14;
    }
    else
    {
      GreMarkDeletableFont(v10);
      GreDeleteObject(v10);
      GreMarkDeletableFont(v15);
      GreDeleteObject(v15);
    }
  }
  return v7;
}
