/*
 * XREFs of ?NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z @ 0x180064DD0
 * Callers:
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x18004D4B4 (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetAnchor@CComponentTransform3D@@AEAAJMM@Z @ 0x18012F398 (-SetAnchor@CComponentTransform3D@@AEAAJMM@Z.c)
 * Callees:
 *     ?ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z @ 0x180064DAC (-ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyVector2PropertyChanged(
        CPropertyChangeResource *this,
        __int64 a2,
        const struct D2DVector2 *a3)
{
  int v3; // ebx
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // r10
  _QWORD *v7; // r11
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rcx
  _QWORD v12[3]; // [rsp+40h] [rbp-18h] BYREF
  int v13; // [rsp+78h] [rbp+20h] BYREF
  int v14; // [rsp+7Ch] [rbp+24h]

  v3 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this) )
  {
    v8 = *(_QWORD *)(v5 + 16);
    v12[0] = *v7;
    v9 = *(_QWORD *)(v8 + 1128);
    v13 = *(_DWORD *)(v6 + 44);
    v10 = *(_QWORD *)(v9 + 56);
    v14 = *(_DWORD *)(v6 + 40);
    v3 = CoreUICallSend(v10, &v13, 3LL, 1LL, &unk_18016DC1C, v4, v12);
    if ( v3 == -2018375675 )
      v3 = 0;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xA4u);
  }
  return (unsigned int)v3;
}
