/*
 * XREFs of ?Create@CGaussianBlurEffect@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180010E20
 * Callers:
 *     ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x18000F124 (-EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CResource@@IEAAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@@Z @ 0x18001D264 (-Initialize@CResource@@IEAAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CGaussianBlurEffect::Create(struct MIL_CHANNEL__ *const a1, struct CGaussianBlurEffect **a2)
{
  __int64 v4; // rax
  struct CGaussianBlurEffect *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi

  if ( a2 )
  {
    v4 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           32LL);
    v5 = (struct CGaussianBlurEffect *)v4;
    if ( v4 )
    {
      *(_QWORD *)(v4 + 16) = 0LL;
      *(_DWORD *)(v4 + 8) = 1;
      *(_QWORD *)v4 = &CGaussianBlurEffect::`vftable';
    }
    else
    {
      v5 = 0LL;
    }
    if ( v5 )
    {
      v6 = CResource::Initialize(v5, 10LL, a1);
      v7 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x23u);
      }
      else
      {
        *a2 = v5;
        v5 = 0LL;
      }
      if ( v5 )
        CBaseObject::Release(v5);
    }
    else
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x21u);
    }
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1Eu);
  }
  return v7;
}
