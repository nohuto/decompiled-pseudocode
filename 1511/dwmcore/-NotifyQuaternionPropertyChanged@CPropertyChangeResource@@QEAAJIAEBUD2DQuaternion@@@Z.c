/*
 * XREFs of ?NotifyQuaternionPropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DQuaternion@@@Z @ 0x18012C6CC
 * Callers:
 *     ?SetOrientation@CComponentTransform3D@@AEAAJMMMM@Z @ 0x18012F594 (-SetOrientation@CComponentTransform3D@@AEAAJMMMM@Z.c)
 * Callees:
 *     ?ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z @ 0x180064DAC (-ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyQuaternionPropertyChanged(
        CPropertyChangeResource *this,
        __int64 a2,
        const struct D2DQuaternion *a3)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v9; // [rsp+78h] [rbp+20h] BYREF
  int v10; // [rsp+7Ch] [rbp+24h]

  v3 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 1128LL);
    v9 = *(_DWORD *)(v5 + 44);
    v7 = *(_QWORD *)(v6 + 56);
    v10 = *(_DWORD *)(v5 + 40);
    v3 = CoreUICallSend(v7, &v9, 3LL, 5LL, &unk_18016DC34, 20);
    if ( v3 == -2018375675 )
      v3 = 0;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x155u);
  }
  return (unsigned int)v3;
}
