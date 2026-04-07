/*
 * XREFs of ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x180046AB0
 * Callers:
 *     ?Create@CFullScreenMagnifier@@SAJPEAUMIL_CHANNEL__@@PEAVCResource@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18004689C (-Create@CFullScreenMagnifier@@SAJPEAUMIL_CHANNEL__@@PEAVCResource@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z @ 0x18006D688 (-OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001CA80 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x18001CAE0 (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001CF70 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18001D0C8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x18003D738 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall CFullScreenMagnifier::UpdateSettings(CFullScreenMagnifier *this, double a2, double a3, double a4)
{
  bool v5; // al
  CResource *v6; // rcx
  struct tagPOINT *v7; // rcx
  double v8; // xmm1_8
  double v9; // xmm2_8
  int v10; // eax
  unsigned int v11; // ebx
  CResource *v13; // rcx
  int v14; // eax
  CResource *v15; // rcx
  int v16; // eax
  struct tagPOINT *v17; // rcx
  int v18; // eax
  CResource *v19; // rcx
  int v20; // eax
  struct tagPOINT v21; // [rsp+30h] [rbp-30h] BYREF
  int v22; // [rsp+38h] [rbp-28h] BYREF
  __int64 v23; // [rsp+3Ch] [rbp-24h]
  int v24; // [rsp+48h] [rbp-18h] BYREF
  __int64 v25; // [rsp+4Ch] [rbp-14h]

  v5 = *((double *)this + 5) != a2;
  *((double *)this + 5) = a2;
  v22 = 102;
  v23 = 0LL;
  v24 = 97;
  v25 = 0LL;
  *((double *)this + 6) = a3;
  *((double *)this + 7) = a4;
  if ( a2 > 1.01 )
  {
    if ( v5 )
    {
      v13 = (CResource *)*((_QWORD *)this + 3);
      if ( v13 )
      {
        HIDWORD(v23) = 1;
        v14 = CResource::Send(v13, &v22, 0xCu);
        v11 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0xABu);
          return v11;
        }
        v15 = (CResource *)*((_QWORD *)this + 3);
        HIDWORD(v25) = 1;
        v16 = CResource::Send(v15, &v24, 0xCu);
        v11 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0xB2u);
          return v11;
        }
      }
    }
    CVisual::SetInterpolationMode(*((CVisual **)this + 4), 1);
    v17 = (struct tagPOINT *)*((_QWORD *)this + 4);
    v21.x = (int)*((double *)this + 6);
    v21.y = (int)*((double *)this + 7);
    CVisual::SetOffset(v17, &v21);
    v9 = *((double *)this + 5);
    v8 = v9;
  }
  else
  {
    v6 = (CResource *)*((_QWORD *)this + 3);
    if ( v6 )
    {
      HIDWORD(v23) = 0;
      v18 = CResource::Send(v6, &v22, 0xCu);
      v11 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0xCFu);
        return v11;
      }
      v19 = (CResource *)*((_QWORD *)this + 3);
      HIDWORD(v25) = 0;
      v20 = CResource::Send(v19, &v24, 0xCu);
      v11 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0xD2u);
        return v11;
      }
    }
    CVisual::SetInterpolationMode(*((CVisual **)this + 4), 0);
    CVisual::ClearInterpolationMode(*((CVisual **)this + 4));
    v7 = (struct tagPOINT *)*((_QWORD *)this + 4);
    v21.x = 0;
    v21.y = 0;
    CVisual::SetOffset(v7, &v21);
    v8 = DOUBLE_1_0;
    v9 = DOUBLE_1_0;
  }
  CVisual::SetScale(*((CVisual **)this + 4), v8, v9);
  v10 = CVisual::RenderRecursive(*((CVisual **)this + 4));
  v11 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0xEAu);
  return v11;
}
