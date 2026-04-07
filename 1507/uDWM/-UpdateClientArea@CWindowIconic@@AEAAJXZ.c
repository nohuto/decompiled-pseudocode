/*
 * XREFs of ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18003A4D0
 * Callers:
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18003A204 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003A270 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003ABB4 (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18001C938 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18001C978 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x18001DF40 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001E130 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CRectangleInstruction@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180039984 (-Create@CRectangleInstruction@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z @ 0x180039AB4 (-SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z.c)
 *     ?SetRect@CRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180039C7C (-SetRect@CRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowIconic::UpdateClientArea(CWindowIconic *this)
{
  _DWORD *v1; // rdx
  __int64 v2; // rdi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  struct MIL_CHANNEL__ *v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  const struct _D3DCOLORVALUE *v14; // r8
  const struct _D3DCOLORVALUE *v15; // r9
  struct CRectangleInstruction *v16; // rdi
  int v17; // eax
  int v18; // eax
  CVisual *v19; // r8
  int v20; // ecx
  int v21; // r15d
  __int64 v22; // rax
  int v24; // [rsp+30h] [rbp-30h] BYREF
  int v25; // [rsp+34h] [rbp-2Ch]
  struct CRectangleInstruction *v26; // [rsp+38h] [rbp-28h] BYREF
  __int128 v27; // [rsp+40h] [rbp-20h] BYREF

  v1 = (_DWORD *)*((_QWORD *)this + 10);
  v2 = *((_QWORD *)this + 13);
  v26 = 0LL;
  v4 = v1[49] - v1[47];
  if ( v4 < 0 )
    v4 = 0;
  v5 = v4 - v1[60] - v1[59];
  if ( v5 < 0 )
    v5 = 0;
  v24 = v5;
  v6 = v1[50] - v1[48];
  if ( v6 < 0 )
    v6 = 0;
  v7 = v6 - v1[62] - v1[61];
  if ( v7 < 0 )
    v7 = 0;
  v25 = v7;
  v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 80LL))(v2, &v24);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x100u);
  }
  else
  {
    CVisual::ClearInstructions(*((CVisual **)this + 13));
    v10 = *((_DWORD *)this + 4);
    if ( v10 >= 0 )
    {
      if ( v10 > 1 )
      {
        if ( v10 == 2 )
        {
          CVisual::SetInsetFromParentLeft(*((CVisual **)this + 12), 0);
          CVisual::SetInsetFromParentTop(*((CVisual **)this + 12), 0);
        }
      }
      else
      {
        *(_QWORD *)&v27 = 0LL;
        v11 = (struct MIL_CHANNEL__ *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
        *((float *)&v27 + 2) = (float)v24;
        *((float *)&v27 + 3) = (float)v25;
        v12 = CRectangleInstruction::Create(v11, &v26);
        v16 = v26;
        v9 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x10Eu);
        }
        else
        {
          v17 = CRectangleInstruction::SetLinearGradientFill(v26, v13, v14, v15, 1.0);
          v9 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0x10Fu);
          }
          else
          {
            CRectangleInstruction::SetRect((__int64)v16, &v27);
            v18 = CVisual::AddInstruction(*((CVisual **)this + 13), v16);
            v9 = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0x112u);
            }
            else
            {
              v19 = (CVisual *)*((_QWORD *)this + 12);
              v20 = 0;
              v21 = 0;
              v22 = *((_QWORD *)v19 + 33);
              if ( v22 )
              {
                v26 = *(struct CRectangleInstruction **)(v22 + 24);
                v20 = (int)v26;
                v21 = HIDWORD(v26);
              }
              CVisual::SetInsetFromParentLeft(v19, (v24 - v20) / 2);
              CVisual::SetInsetFromParentTop(*((CVisual **)this + 12), (v25 - v21) / 2);
            }
          }
        }
        if ( v16 )
          CBaseObject::Release(v16);
      }
    }
  }
  return v9;
}
