/*
 * XREFs of ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x18001AD74
 * Callers:
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x180020970 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??9@YA_NAEBU_MARGINS@@0@Z @ 0x18003545C (--9@YA_NAEBU_MARGINS@@0@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAtlasedRectsVisual::SetClipMargins(CAtlasedRectsVisual *this, const struct _MARGINS *a2)
{
  unsigned int v2; // esi
  __int64 v5; // rdx
  __int64 v7; // rax
  __int64 v8; // rax

  v2 = 0;
  if ( a2 )
  {
    if ( !*((_QWORD *)this + 37) )
      goto LABEL_5;
    if ( !(unsigned __int8)operator!=(a2) )
      return v2;
    if ( !v5 )
    {
LABEL_5:
      v7 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
             WPF::g_pProcessHeap,
             16LL);
      *((_QWORD *)this + 37) = v7;
      if ( !v7 )
      {
        v2 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x16Bu);
        return v2;
      }
    }
    *(struct _MARGINS *)*((_QWORD *)this + 37) = *a2;
    (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 0x2000LL);
    return v2;
  }
  if ( *((_QWORD *)this + 37) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 37));
    v8 = *(_QWORD *)this;
    *((_QWORD *)this + 37) = 0LL;
    (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(v8 + 24))(this, 0x2000LL);
  }
  return v2;
}
