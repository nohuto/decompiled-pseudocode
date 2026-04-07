/*
 * XREFs of ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJPEAUIDwmChannel@@K@Z @ 0x180039264
 * Callers:
 *     ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x180039194 (-CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800204C4 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x180039420 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Create@CRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180039468 (-Create@CRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetRect@CRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003957C (-SetRect@CRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z @ 0x180039594 (-SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_AddPPIRectangleInstruction@CDesktopWindowReplacement@@AEAAJPEAUIDwmChannel@@KH@Z @ 0x1800771A0 (-_AddPPIRectangleInstruction@CDesktopWindowReplacement@@AEAAJPEAUIDwmChannel@@KH@Z.c)
 */

__int64 __fastcall CDesktopWindowReplacement::AddDrawSolidBackgroundInstructions(
        CDesktopWindowReplacement *this,
        struct IDwmChannel *a2,
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
  unsigned int v14; // r8d
  int v15; // r9d
  signed int v17; // eax
  signed int LastError; // eax
  unsigned int v19; // [rsp+20h] [rbp-60h]
  struct CRectangleInstruction *v20; // [rsp+30h] [rbp-50h] BYREF
  float v21[4]; // [rsp+38h] [rbp-48h] BYREF
  struct _D3DCOLORVALUE v22; // [rsp+48h] [rbp-38h] BYREF

  v20 = 0LL;
  v22.a = FLOAT_1_0;
  v22.r = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a3] / 255.0;
  v22.g = GammaLUT_sRGB_to_scRGB[BYTE1(a3)] / 255.0;
  v22.b = GammaLUT_sRGB_to_scRGB[BYTE2(a3)] / 255.0;
  SystemMetrics = (float)GetSystemMetrics(76);
  v21[0] = SystemMetrics;
  v6 = (float)GetSystemMetrics(77);
  v21[1] = v6;
  SetLastError(0);
  v7 = GetSystemMetrics(78);
  if ( v7 )
  {
    v21[2] = (float)v7 + SystemMetrics;
    SetLastError(0);
    v8 = GetSystemMetrics(79);
    if ( v8 )
    {
      v21[3] = (float)v8 + v6;
      v9 = CRectangleInstruction::Create(a2, &v20);
      v10 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x36u);
      }
      else
      {
        CRectangleInstruction::SetRect(v20, v21);
        v12 = CRectangleInstruction::SetSolidFill(v11, &v22, 1.0);
        v10 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x39u);
        }
        else
        {
          v13 = CVisual::AddInstruction(this, v20);
          v10 = v13;
          if ( v13 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x3Bu);
          }
          else if ( IsPPIEdition() )
          {
            CDesktopWindowReplacement::_AddPPIRectangleInstruction(this, a2, v14, v15);
          }
        }
      }
      if ( v20 )
        CBaseObject::Release(v20);
      return v10;
    }
    LastError = GetLastError();
    v10 = LastError;
    if ( LastError > 0 )
      v10 = (unsigned __int16)LastError | 0x80070000;
    v19 = 51;
  }
  else
  {
    v17 = GetLastError();
    v10 = v17;
    if ( v17 > 0 )
      v10 = (unsigned __int16)v17 | 0x80070000;
    v19 = 48;
  }
  if ( (v10 & 0x80000000) == 0 )
    v10 = -2003304445;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v19);
  return v10;
}
