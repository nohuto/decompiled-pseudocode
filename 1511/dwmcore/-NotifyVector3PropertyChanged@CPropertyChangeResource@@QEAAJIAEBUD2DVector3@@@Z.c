/*
 * XREFs of ?NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z @ 0x180064E8C
 * Callers:
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x18004D3CC (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetCenter@CComponentTransform3D@@AEAAJMMM@Z @ 0x18012F468 (-SetCenter@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?SetRotationAxis@CComponentTransform3D@@AEAAJMMM@Z @ 0x18012F948 (-SetRotationAxis@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?SetScale@CComponentTransform3D@@AEAAJMMM@Z @ 0x18012FA78 (-SetScale@CComponentTransform3D@@AEAAJMMM@Z.c)
 * Callees:
 *     ?ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z @ 0x180064DAC (-ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyVector3PropertyChanged(
        CPropertyChangeResource *this,
        __int64 a2,
        const struct D2DVector3 *a3)
{
  int v3; // ebx
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // r10
  __int64 *v7; // r11
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v12; // [rsp+40h] [rbp-18h] BYREF
  int v13; // [rsp+48h] [rbp-10h]
  int v14; // [rsp+78h] [rbp+20h] BYREF
  int v15; // [rsp+7Ch] [rbp+24h]

  v3 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this) )
  {
    v8 = *(_QWORD *)(v5 + 16);
    v12 = *v7;
    v9 = *(_QWORD *)(v8 + 1128);
    v13 = *((_DWORD *)v7 + 2);
    v10 = *(_QWORD *)(v9 + 56);
    v14 = *(_DWORD *)(v6 + 44);
    v15 = *(_DWORD *)(v6 + 40);
    v3 = CoreUICallSend(v10, &v14, 3LL, 2LL, &unk_18016DC22, v4, &v12);
    if ( v3 == -2018375675 )
      v3 = 0;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xD1u);
  }
  return (unsigned int)v3;
}
