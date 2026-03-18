/*
 * XREFs of ?NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z @ 0x18005D4AC
 * Callers:
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x180034A84 (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 * Callees:
 *     ?ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z @ 0x18005D488 (-ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyVector3PropertyChanged(
        CPropertyChangeResource *this,
        __int64 a2,
        const struct D2DVector3 *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // r9
  int v6; // r11d
  __int64 v8; // rcx
  int v9; // eax
  int v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+78h] [rbp+20h] BYREF
  int v12; // [rsp+7Ch] [rbp+24h]

  v3 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this) )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 1160LL) + 56LL);
    v11 = *(_DWORD *)(v5 + 44);
    v12 = *(_DWORD *)(v5 + 40);
    v10 = v6;
    v9 = CoreUICallSend(v8, &v11, 3LL, 2LL, &unk_180162B56, v10);
    v3 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xBCu);
  }
  return v3;
}
