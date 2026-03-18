/*
 * XREFs of ?NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z @ 0x180023F30
 * Callers:
 *     ?SetScale@CComponentTransform2D@@AEAAJMM@Z @ 0x1800205F0 (-SetScale@CComponentTransform2D@@AEAAJMM@Z.c)
 *     ?SetOffset@CComponentTransform2D@@AEAAJMM@Z @ 0x18002065C (-SetOffset@CComponentTransform2D@@AEAAJMM@Z.c)
 *     ?SetCenter@CComponentTransform2D@@AEAAJMM@Z @ 0x1800206C8 (-SetCenter@CComponentTransform2D@@AEAAJMM@Z.c)
 *     ?SetAnchor@CComponentTransform2D@@AEAAJMM@Z @ 0x180020734 (-SetAnchor@CComponentTransform2D@@AEAAJMM@Z.c)
 *     ?SetAnchor@CComponentTransform3D@@AEAAJMM@Z @ 0x180023B10 (-SetAnchor@CComponentTransform3D@@AEAAJMM@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x180109E2C (-SetSize@CVisual@@QEAAXMM@Z.c)
 * Callees:
 *     ?ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z @ 0x180023E90 (-ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyVector2PropertyChanged(
        CPropertyChangeResource *this,
        __int64 a2,
        const struct D2DVector2 *a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // r10d
  __int64 v8; // rax
  __int64 v9; // r11
  unsigned int v10; // edx
  __int64 v11; // xmm0_8
  _QWORD v12[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this) )
  {
    v8 = *(_QWORD *)(v5 + 112);
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 1232LL) + 56LL);
    if ( v8 )
      v10 = *(_DWORD *)(v8 + 52);
    else
      v10 = 0;
    v11 = *(_QWORD *)a3;
    v12[0] = v10;
    v12[1] = *(unsigned int *)(v5 + 120);
    v13 = v11;
    v4 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int16, void *, int, __int64 *))CoreUICallSend)(
           v9,
           v12,
           2LL,
           5LL,
           1,
           &unk_1801AD3CE,
           v6,
           &v13);
    if ( v4 == -2018375675 )
      v4 = 0;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xA4u);
  }
  return (unsigned int)v4;
}
