/*
 * XREFs of ?Create@CAccentBlurBehind@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180008EDC
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180036C2C (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CVisual@@IEAA@XZ @ 0x18001CC18 (--0CVisual@@IEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAccentBlurBehind::Create(struct MIL_CHANNEL__ *const a1, struct CAccentBlurBehind **a2)
{
  CVisual *v4; // rax
  struct CAccentBlurBehind *v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx

  if ( !a2 )
  {
    v7 = -2147024809;
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x4Du);
    return v7;
  }
  v4 = (CVisual *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    368LL);
  v5 = v4;
  if ( v4 )
  {
    CVisual::CVisual(v4);
    *(_QWORD *)v5 = &CAccentBlurBehind::`vftable';
    *((_QWORD *)v5 + 34) = 0LL;
    *((_QWORD *)v5 + 35) = 0LL;
    *((_DWORD *)v5 + 72) = 0;
    *((_DWORD *)v5 + 73) = 0;
    *((_DWORD *)v5 + 74) = 0;
    *((_DWORD *)v5 + 76) = 1056964608;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
  {
    v7 = -2147024882;
    goto LABEL_13;
  }
  v6 = (*(__int64 (__fastcall **)(struct CAccentBlurBehind *, struct MIL_CHANNEL__ *const))(*(_QWORD *)v5 + 8LL))(
         v5,
         a1);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x4Du);
  }
  else
  {
    *a2 = v5;
    v5 = 0LL;
  }
  if ( v5 )
    CBaseObject::Release(v5);
  return v7;
}
