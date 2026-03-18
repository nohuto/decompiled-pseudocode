/*
 * XREFs of ?NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z @ 0x18005D4DC
 * Callers:
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x180034B64 (-SetSize@CVisual@@QEAAXMM@Z.c)
 * Callees:
 *     ?ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z @ 0x18005D488 (-ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyVector2PropertyChanged(
        CPropertyChangeResource *this,
        __int64 a2,
        const struct D2DVector2 *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // r9
  int v6; // r11d
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+78h] [rbp+20h] BYREF
  int v13; // [rsp+7Ch] [rbp+24h]

  v3 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this) )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 1160LL);
    v12 = *(_DWORD *)(v5 + 44);
    v9 = *(_QWORD *)(v8 + 56);
    v13 = *(_DWORD *)(v5 + 40);
    v11 = v6;
    v10 = CoreUICallSend(v9, &v12, 3LL, 1LL, &unk_180162B50, v11);
    v3 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x96u);
  }
  return v3;
}
