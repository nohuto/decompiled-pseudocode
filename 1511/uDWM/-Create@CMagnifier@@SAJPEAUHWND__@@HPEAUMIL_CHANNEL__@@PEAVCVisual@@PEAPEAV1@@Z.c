/*
 * XREFs of ?Create@CMagnifier@@SAJPEAUHWND__@@HPEAUMIL_CHANNEL__@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18007A038
 * Callers:
 *     ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x18007B384 (-OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??0CMagnifier@@AEAA@PEAUHWND__@@HPEAUMIL_CHANNEL__@@PEAVCVisual@@@Z @ 0x180079EA8 (--0CMagnifier@@AEAA@PEAUHWND__@@HPEAUMIL_CHANNEL__@@PEAVCVisual@@@Z.c)
 *     ?Initialize@CMagnifier@@AEAAJXZ @ 0x18007A120 (-Initialize@CMagnifier@@AEAAJXZ.c)
 */

__int64 __fastcall CMagnifier::Create(
        HWND a1,
        int a2,
        struct MIL_CHANNEL__ *a3,
        struct CVisual *a4,
        struct CMagnifier **a5)
{
  CMagnifier *v9; // rax
  volatile signed __int32 *v10; // rbx
  unsigned int v11; // edi
  int v12; // eax

  v9 = (CMagnifier *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                       WPF::g_pProcessHeap,
                       384LL);
  if ( v9 )
    v10 = (volatile signed __int32 *)CMagnifier::CMagnifier(v9, a1, a2, a3, a4);
  else
    v10 = 0LL;
  if ( v10 )
  {
    v12 = CMagnifier::Initialize((CMagnifier *)v10);
    v11 = v12;
    if ( v12 >= 0 )
    {
      *a5 = (struct CMagnifier *)v10;
      _InterlockedIncrement(v10 + 2);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x66u);
    }
    CBaseObject::Release((CBaseObject *)v10);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x64u);
  }
  return v11;
}
