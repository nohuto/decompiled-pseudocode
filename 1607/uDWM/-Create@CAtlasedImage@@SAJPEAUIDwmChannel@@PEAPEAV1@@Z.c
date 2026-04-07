/*
 * XREFs of ?Create@CAtlasedImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18007DA1C
 * Callers:
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x1800837E0 (-Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 * Callees:
 *     ??0CAtlasedImage@@IEAA@XZ @ 0x18002BC74 (--0CAtlasedImage@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedImage::Create(struct IDwmChannel *a1, struct CAtlasedImage **a2)
{
  unsigned int v2; // ebx
  CAtlasedImage *v5; // rax
  CAtlasedImage *v6; // rax

  v2 = 0;
  if ( a2 )
  {
    v5 = (CAtlasedImage *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 16LL))(
                            WPF::g_pProcessHeap,
                            136LL);
    if ( v5 )
      v6 = CAtlasedImage::CAtlasedImage(v5);
    else
      v6 = 0LL;
    if ( v6 )
    {
      *((_QWORD *)v6 + 13) = a1;
      *a2 = v6;
      return v2;
    }
    v2 = -2147024882;
  }
  else
  {
    v2 = -2147024809;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x95u);
  return v2;
}
