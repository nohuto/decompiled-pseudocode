/*
 * XREFs of ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJQEAUMIL_CHANNEL__@@K@Z @ 0x18003722C
 * Callers:
 *     ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x180039D54 (-CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001E130 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CRectangleInstruction@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180039984 (-Create@CRectangleInstruction@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?SetRect@CRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180039C7C (-SetRect@CRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z @ 0x180039C94 (-SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopWindowReplacement::AddDrawSolidBackgroundInstructions(
        CDesktopWindowReplacement *this,
        struct MIL_CHANNEL__ *const a2,
        int a3)
{
  float SystemMetrics; // xmm6_4
  float v6; // xmm7_4
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  CRectangleInstruction *v11; // rcx
  int v12; // eax
  int v13; // eax
  signed int v15; // eax
  signed int LastError; // eax
  unsigned int v17; // [rsp+20h] [rbp-60h]
  struct CRectangleInstruction *v18; // [rsp+30h] [rbp-50h] BYREF
  struct _D3DCOLORVALUE v19; // [rsp+38h] [rbp-48h] BYREF
  float v20[4]; // [rsp+48h] [rbp-38h] BYREF

  v18 = 0LL;
  v19.a = FLOAT_1_0;
  v19.r = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a3] / 255.0;
  v19.g = GammaLUT_sRGB_to_scRGB[BYTE1(a3)] / 255.0;
  v19.b = GammaLUT_sRGB_to_scRGB[BYTE2(a3)] / 255.0;
  SystemMetrics = (float)GetSystemMetrics(76);
  v20[0] = SystemMetrics;
  v6 = (float)GetSystemMetrics(77);
  v20[1] = v6;
  SetLastError(0);
  v7 = GetSystemMetrics(78);
  if ( v7 )
  {
    v20[2] = (float)v7 + SystemMetrics;
    SetLastError(0);
    v8 = GetSystemMetrics(79);
    if ( v8 )
    {
      v20[3] = (float)v8 + v6;
      v9 = CRectangleInstruction::Create(a2, &v18);
      v10 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x43u);
      }
      else
      {
        CRectangleInstruction::SetRect(v18, v20);
        v12 = CRectangleInstruction::SetSolidFill(v11, &v19, 1.0);
        v10 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x46u);
        }
        else
        {
          v13 = CVisual::AddInstruction(this, v18);
          v10 = v13;
          if ( v13 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x48u);
        }
      }
      if ( v18 )
        CBaseObject::Release(v18);
      return v10;
    }
    LastError = GetLastError();
    v10 = LastError;
    if ( LastError > 0 )
      v10 = (unsigned __int16)LastError | 0x80070000;
    v17 = 64;
  }
  else
  {
    v15 = GetLastError();
    v10 = v15;
    if ( v15 > 0 )
      v10 = (unsigned __int16)v15 | 0x80070000;
    v17 = 61;
  }
  if ( (v10 & 0x80000000) == 0 )
    v10 = -2003304445;
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, v17);
  return v10;
}
