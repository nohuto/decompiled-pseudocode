/*
 * XREFs of ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x180038858
 * Callers:
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x1800385A0 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x1800385F8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180038F2C (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180020310 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800204C4 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x180020C8C (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180020CC0 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?Create@CRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180039468 (-Create@CRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetRect@CRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003957C (-SetRect@CRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z @ 0x18003962C (-SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowIconic::UpdateClientArea(CWindowIconic *this)
{
  _DWORD *v1; // rdx
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  struct IDwmChannel *v11; // rcx
  int v12; // eax
  bool v13; // dl
  const struct _D3DCOLORVALUE *v14; // r8
  const struct _D3DCOLORVALUE *v15; // r9
  int v16; // eax
  struct CRenderDataInstruction *v17; // rcx
  int v18; // eax
  CVisual *v19; // r8
  int v20; // r15d
  int v21; // ecx
  __int64 v22; // rax
  int v24; // [rsp+30h] [rbp-30h] BYREF
  int v25; // [rsp+34h] [rbp-2Ch]
  struct CRectangleInstruction *v26; // [rsp+38h] [rbp-28h] BYREF
  __int64 v27; // [rsp+40h] [rbp-20h] BYREF
  float v28; // [rsp+48h] [rbp-18h]
  float v29; // [rsp+4Ch] [rbp-14h]

  v1 = (_DWORD *)*((_QWORD *)this + 10);
  v26 = 0LL;
  v3 = *((_QWORD *)this + 13);
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
  v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v3 + 80LL))(v3, &v24);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x100u);
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
        v27 = 0LL;
        v11 = (struct IDwmChannel *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
        v28 = (float)v24;
        v29 = (float)v25;
        v12 = CRectangleInstruction::Create(v11, &v26);
        v9 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x10Eu);
        }
        else
        {
          v16 = CRectangleInstruction::SetLinearGradientFill(v26, v13, v14, v15, 1.0);
          v9 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x10Fu);
          }
          else
          {
            CRectangleInstruction::SetRect(v26, &v27);
            v18 = CVisual::AddInstruction(*((CVisual **)this + 13), v17);
            v9 = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x112u);
            }
            else
            {
              v19 = (CVisual *)*((_QWORD *)this + 12);
              v20 = 0;
              v21 = 0;
              v22 = *((_QWORD *)v19 + 33);
              if ( v22 )
              {
                v27 = *(_QWORD *)(v22 + 24);
                v21 = v27;
                v20 = HIDWORD(v27);
              }
              CVisual::SetInsetFromParentLeft(v19, (v24 - v21) / 2);
              CVisual::SetInsetFromParentTop(*((CVisual **)this + 12), (v25 - v20) / 2);
            }
          }
        }
        if ( v26 )
          CBaseObject::Release(v26);
      }
    }
  }
  return v9;
}
