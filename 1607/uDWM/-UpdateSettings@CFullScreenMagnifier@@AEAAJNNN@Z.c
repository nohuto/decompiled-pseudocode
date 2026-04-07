/*
 * XREFs of ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x180047D5C
 * Callers:
 *     ?Create@CFullScreenMagnifier@@SAJPEAUIDwmChannel@@PEAVCResource@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180047B50 (-Create@CFullScreenMagnifier@@SAJPEAUIDwmChannel@@PEAVCResource@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z @ 0x180077604 (-OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z.c)
 * Callees:
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001F154 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x18001F19C (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x18001F21C (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001F650 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18001F7A4 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFullScreenMagnifier::UpdateSettings(CFullScreenMagnifier *this, double a2, double a3, double a4)
{
  bool v5; // al
  __int64 v6; // rdx
  struct tagPOINT *v7; // rcx
  double v8; // xmm1_8
  double v9; // xmm2_8
  int v10; // eax
  unsigned int v11; // edi
  __int64 v13; // rdx
  struct tagPOINT *v14; // rcx
  int v15; // eax
  unsigned int v16; // [rsp+20h] [rbp-18h]
  struct tagPOINT v17; // [rsp+40h] [rbp+8h] BYREF

  v5 = *((double *)this + 5) != a2;
  *((double *)this + 5) = a2;
  *((double *)this + 6) = a3;
  *((double *)this + 7) = a4;
  if ( a2 > 1.01 )
  {
    if ( v5 )
    {
      v13 = *((_QWORD *)this + 3);
      if ( v13 )
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v13 + 16) + 696LL))(
                *(_QWORD *)(v13 + 16),
                *(unsigned int *)(v13 + 24),
                1LL);
        v11 = v10;
        if ( v10 < 0 )
        {
          v16 = 170;
LABEL_18:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v16);
          return v11;
        }
        v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 16LL) + 680LL))(
                *(_QWORD *)(*((_QWORD *)this + 3) + 16LL),
                *(unsigned int *)(*((_QWORD *)this + 3) + 24LL),
                1LL);
        v11 = v10;
        if ( v10 < 0 )
        {
          v16 = 178;
          goto LABEL_18;
        }
      }
    }
    CVisual::SetInterpolationMode(*((CVisual **)this + 4), 1);
    v14 = (struct tagPOINT *)*((_QWORD *)this + 4);
    v17.x = (int)*((double *)this + 6);
    v17.y = (int)*((double *)this + 7);
    CVisual::SetOffset(v14, &v17);
    v9 = *((double *)this + 5);
    v8 = v9;
    goto LABEL_4;
  }
  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v6 + 16) + 696LL))(
            *(_QWORD *)(v6 + 16),
            *(unsigned int *)(v6 + 24),
            0LL);
    v11 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xD0u);
      return v11;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 16LL) + 680LL))(
            *(_QWORD *)(*((_QWORD *)this + 3) + 16LL),
            *(unsigned int *)(*((_QWORD *)this + 3) + 24LL),
            0LL);
    v11 = v10;
    if ( v10 < 0 )
    {
      v16 = 212;
      goto LABEL_18;
    }
  }
  CVisual::SetInterpolationMode(*((CVisual **)this + 4), 0);
  CVisual::ClearInterpolationMode(*((CVisual **)this + 4));
  v7 = (struct tagPOINT *)*((_QWORD *)this + 4);
  v17.x = 0;
  v17.y = 0;
  CVisual::SetOffset(v7, &v17);
  v8 = DOUBLE_1_0;
  v9 = DOUBLE_1_0;
LABEL_4:
  CVisual::SetScale(*((CVisual **)this + 4), v8, v9);
  v10 = CVisual::RenderRecursive(*((CVisual **)this + 4));
  v11 = v10;
  if ( v10 < 0 )
  {
    v16 = 236;
    goto LABEL_18;
  }
  return v11;
}
