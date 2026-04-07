/*
 * XREFs of ?Create@CMagnifierControl@@SAJPEAUIDwmChannel@@PEAVCResource@@PEAVCVisual@@2PEAPEAV1@@Z @ 0x1800472E0
 * Callers:
 *     ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z @ 0x180047990 (-CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CMagnifierControl@@AEAA@PEAUIDwmChannel@@PEAVCResource@@PEAVCVisual@@2@Z @ 0x180047C38 (--0CMagnifierControl@@AEAA@PEAUIDwmChannel@@PEAVCResource@@PEAVCVisual@@2@Z.c)
 *     ?Initialize@CMagnifierControl@@AEAAJXZ @ 0x180047CD4 (-Initialize@CMagnifierControl@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMagnifierControl::Create(
        struct IDwmChannel *a1,
        struct CResource *a2,
        struct CVisual *a3,
        struct CVisual *a4,
        struct CMagnifierControl **a5)
{
  CMagnifierControl *v9; // rax
  volatile signed __int32 *v10; // rbx
  int v11; // eax
  unsigned int v12; // edi

  v9 = (CMagnifierControl *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 16LL))(
                              WPF::g_pProcessHeap,
                              136LL);
  if ( v9 )
    v10 = (volatile signed __int32 *)CMagnifierControl::CMagnifierControl(v9, a1, a2, a3, a4);
  else
    v10 = 0LL;
  if ( v10 )
  {
    v11 = CMagnifierControl::Initialize((CMagnifierControl *)v10);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x65u);
    }
    else
    {
      *a5 = (struct CMagnifierControl *)v10;
      _InterlockedIncrement(v10 + 2);
    }
    CBaseObject::Release((CBaseObject *)v10);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x63u);
  }
  return v12;
}
