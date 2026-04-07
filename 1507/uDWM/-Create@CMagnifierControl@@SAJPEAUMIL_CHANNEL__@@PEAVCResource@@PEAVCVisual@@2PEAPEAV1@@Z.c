/*
 * XREFs of ?Create@CMagnifierControl@@SAJPEAUMIL_CHANNEL__@@PEAVCResource@@PEAVCVisual@@2PEAPEAV1@@Z @ 0x180045F68
 * Callers:
 *     ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z @ 0x1800466E4 (-CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CMagnifierControl@@AEAA@PEAUMIL_CHANNEL__@@PEAVCResource@@PEAVCVisual@@2@Z @ 0x18004698C (--0CMagnifierControl@@AEAA@PEAUMIL_CHANNEL__@@PEAVCResource@@PEAVCVisual@@2@Z.c)
 *     ?Initialize@CMagnifierControl@@AEAAJXZ @ 0x180046A28 (-Initialize@CMagnifierControl@@AEAAJXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CMagnifierControl::Create(
        struct MIL_CHANNEL__ *a1,
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x65u);
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x63u);
  }
  return v12;
}
