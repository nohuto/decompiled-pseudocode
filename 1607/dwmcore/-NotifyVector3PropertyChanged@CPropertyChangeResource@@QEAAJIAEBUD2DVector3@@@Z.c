/*
 * XREFs of ?NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z @ 0x180023EFC
 * Callers:
 *     ?SetScale@CComponentTransform3D@@AEAAJMMM@Z @ 0x18002392C (-SetScale@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?SetRotationAxis@CComponentTransform3D@@AEAAJMMM@Z @ 0x1800239E4 (-SetRotationAxis@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?SetCenter@CComponentTransform3D@@AEAAJMMM@Z @ 0x180023A58 (-SetCenter@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x180050434 (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 * Callees:
 *     ?ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z @ 0x180023E90 (-ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyVector3PropertyChanged(
        CPropertyChangeResource *this,
        __int64 a2,
        const struct D2DVector3 *a3)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 *v5; // r10
  int v6; // r11d
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned int v12; // edx
  __int64 v13; // [rsp+40h] [rbp-28h] BYREF
  int v14; // [rsp+48h] [rbp-20h]
  _QWORD v15[3]; // [rsp+50h] [rbp-18h] BYREF

  v3 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this) )
  {
    v8 = *(_QWORD *)(v4 + 16);
    v13 = *v5;
    v9 = *(_QWORD *)(v8 + 1232);
    v14 = *((_DWORD *)v5 + 2);
    v10 = *(_QWORD *)(v4 + 112);
    v11 = *(_QWORD *)(v9 + 56);
    if ( v10 )
      v12 = *(_DWORD *)(v10 + 52);
    else
      v12 = 0;
    v15[0] = v12;
    v15[1] = *(unsigned int *)(v4 + 120);
    v3 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int16, void *, int, __int64 *))CoreUICallSend)(
           v11,
           v15,
           2LL,
           5LL,
           2,
           &unk_1801AD3D4,
           v6,
           &v13);
    if ( v3 == -2018375675 )
      v3 = 0;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xD1u);
  }
  return (unsigned int)v3;
}
