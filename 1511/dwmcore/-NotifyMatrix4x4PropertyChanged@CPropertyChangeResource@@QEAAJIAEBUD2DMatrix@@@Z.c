/*
 * XREFs of ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DMatrix@@@Z @ 0x18012C5E0
 * Callers:
 *     ?SetTransformMatrix@CComponentTransform3D@@AEAAJAEBUD2DMatrix@@@Z @ 0x18012FBA8 (-SetTransformMatrix@CComponentTransform3D@@AEAAJAEBUD2DMatrix@@@Z.c)
 * Callees:
 *     ?ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z @ 0x180064DAC (-ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyMatrix4x4PropertyChanged(
        CPropertyChangeResource *this,
        __int64 a2,
        const struct D2DMatrix *a3)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // r9
  int v6; // r11d
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v10; // [rsp+A8h] [rbp+20h] BYREF
  int v11; // [rsp+ACh] [rbp+24h]

  v3 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 1128LL);
    v10 = *(_DWORD *)(v5 + 44);
    v8 = *(_QWORD *)(v7 + 56);
    v11 = *(_DWORD *)(v5 + 40);
    v3 = CoreUICallSend(v8, &v10, 3LL, 7LL, &unk_18016DC40, v6);
    if ( v3 == -2018375675 )
      v3 = 0;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x1AFu);
  }
  return (unsigned int)v3;
}
