/*
 * XREFs of ?Create@CDesktopThumbnail@@KAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180098510
 * Callers:
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x180098BFC (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??0CDesktopThumbnailBase@@IEAA@XZ @ 0x180098154 (--0CDesktopThumbnailBase@@IEAA@XZ.c)
 */

__int64 __fastcall CDesktopThumbnail::Create(struct MIL_CHANNEL__ *const a1, struct CDesktopThumbnail **a2)
{
  CDesktopThumbnailBase *v3; // rax
  struct CDesktopThumbnail *v4; // rdi
  unsigned int v5; // ebx
  int v6; // eax

  v3 = (CDesktopThumbnailBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 16LL))(
                                  WPF::g_pProcessHeap,
                                  344LL);
  v4 = v3;
  if ( v3 )
  {
    CDesktopThumbnailBase::CDesktopThumbnailBase(v3);
    *(_QWORD *)v4 = &CDesktopThumbnail::`vftable';
    *((_QWORD *)v4 + 38) = 0LL;
    *((_QWORD *)v4 + 39) = 0LL;
    *((_DWORD *)v4 + 80) = 0;
    *((_DWORD *)v4 + 81) = 0;
    *((_DWORD *)v4 + 82) = 0;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    v6 = (*(__int64 (__fastcall **)(struct CDesktopThumbnail *, struct MIL_CHANNEL__ *const))(*(_QWORD *)v4 + 8LL))(
           v4,
           a1);
    v5 = v6;
    if ( v6 >= 0 )
    {
      CDesktopThumbnail::s_pThumbnailNoRef = v4;
      v4 = 0LL;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x42u);
    }
    if ( v4 )
      CBaseObject::Release(v4);
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x42u);
  }
  return v5;
}
