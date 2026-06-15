/*
 * XREFs of ?MeasureClockDrift@CMonitor@@AEAAXNN@Z @ 0x18009A164
 * Callers:
 *     ?ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x18009B688 (-ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 * Callees:
 *     WPP_SF_g @ 0x1800711D8 (WPP_SF_g.c)
 *     WPP_SF_gg @ 0x18009CEBC (WPP_SF_gg.c)
 *     WPP_SF_gggg @ 0x18009CF14 (WPP_SF_gggg.c)
 */

void __fastcall CMonitor::MeasureClockDrift(CMonitor *this, double a2, double a3)
{
  __int64 v4; // rax
  double v5; // xmm6_8
  double v6; // xmm6_8
  bool v7; // sf
  __int64 v8; // rax
  double v9; // xmm0_8
  double v10; // xmm6_8
  double v11; // xmm6_8
  __int64 v12; // r9

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_gggg(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL));
  }
  v4 = *((_QWORD *)this + 60);
  v5 = (double)(int)v4;
  if ( v4 < 0 )
    v5 = v5 + 1.844674407370955e19;
  v6 = v5 * *((double *)this + 59);
  v7 = v4 + 1 < 0;
  v8 = v4 + 1;
  *((_QWORD *)this + 60) = v8;
  v9 = (double)(int)v8;
  v10 = v6 + a3 / a2;
  if ( v7 )
    v9 = v9 + 1.844674407370955e19;
  v11 = v10 / v9;
  v12 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_g(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x33u,
      (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids,
      v11);
    v12 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v11 - *((double *)this + 59)) & _xmm) > 0.00001 )
  {
    if ( (struct _GUID *)v12 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(v12 + 28) & 0x800000) != 0
      && *(_BYTE *)(v12 + 25) >= 4u )
    {
      WPP_SF_gg(*(_QWORD *)(v12 + 16));
    }
    *((double *)this + 59) = v11;
  }
}
