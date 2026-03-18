/*
 * XREFs of ?HitTestContent@CVisual@@QEAAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18000C2B4
 * Callers:
 *     ?PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000AE20 (-PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::HitTestContent(CVisual *this, const struct D2D_POINT_2F *a2, bool *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rcx
  int v7; // eax

  v3 = 0;
  *a3 = 0;
  v6 = *((_QWORD *)this + 38);
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, char *, const struct D2D_POINT_2F *, bool *))(*(_QWORD *)v6 + 136LL))(
           v6,
           (char *)this + 192,
           a2,
           a3);
    v3 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x10B7u);
  }
  return v3;
}
