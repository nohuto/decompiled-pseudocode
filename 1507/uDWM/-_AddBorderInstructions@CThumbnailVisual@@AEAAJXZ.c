/*
 * XREFs of ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x1800752C4
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180013474 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x18001374C (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180010994 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800177C0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCResource@@KM@Z @ 0x180099F48 (-AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCResource@@KM@Z.c)
 */

__int64 __fastcall CThumbnailVisual::_AddBorderInstructions(CThumbnailVisual *this)
{
  struct CResource **v1; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  void *Theme; // rbp
  HRESULT ThemeColor; // eax
  HRESULT ThemeInt; // eax
  int v8; // eax
  unsigned int pColor; // [rsp+20h] [rbp-28h]
  int piVal; // [rsp+50h] [rbp+8h] BYREF
  COLORREF v12; // [rsp+58h] [rbp+10h] BYREF

  v1 = (struct CResource **)((char *)this + 408);
  if ( !*((_QWORD *)this + 51) )
  {
    v3 = CResource::Create(0x3Fu, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 51);
    v4 = v3;
    if ( v3 < 0 )
    {
      pColor = 1062;
LABEL_14:
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, pColor);
      return v4;
    }
  }
  Theme = (void *)CDesktopManager::GetTheme(0);
  ThemeColor = GetThemeColor(Theme, 64, 0, 3801, &v12);
  v4 = ThemeColor;
  if ( ThemeColor >= 0 )
  {
    ThemeInt = GetThemeInt(Theme, 64, 0, 2403, (int *)this + 120);
    v4 = ThemeInt;
    if ( ThemeInt >= 0 )
    {
      v3 = GetThemeInt(Theme, 64, 0, 2402, &piVal);
      v4 = v3;
      if ( v3 < 0 )
      {
        pColor = 1070;
        goto LABEL_14;
      }
      v8 = CThumbnailAnimatedVisual::AddSolidBrushInstruction(this, *v1, v12, (double)piVal / 255.0);
      v4 = v8;
      if ( v8 >= 0 )
      {
        v3 = CThumbnailAnimatedVisual::AddSolidBrushInstruction(this, *((struct CResource **)this + 50), 0, 1.0);
        v4 = v3;
        if ( v3 < 0 )
        {
          pColor = 1072;
          goto LABEL_14;
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x42Fu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, ThemeInt, 0x42Du);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, ThemeColor, 0x42Cu);
  }
  return v4;
}
