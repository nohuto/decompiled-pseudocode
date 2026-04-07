/*
 * XREFs of ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x1800080F8
 * Callers:
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x180023210 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 * Callees:
 *     ??9@YA_NAEBU_MARGINS@@0@Z @ 0x180037B24 (--9@YA_NAEBU_MARGINS@@0@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::SetClipMargins(CAtlasedRectsVisual *this, const struct _MARGINS *a2)
{
  unsigned int v2; // ebx
  bool v4; // zf
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v9; // rax
  __int64 v10; // rax

  v2 = 0;
  v4 = a2 == 0LL;
  v6 = *((_QWORD *)this + 37);
  if ( !v4 )
  {
    if ( !v6 )
      goto LABEL_5;
    if ( !(unsigned __int8)operator!=(a2) )
      return v2;
    if ( !v7 )
    {
LABEL_5:
      v9 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
             WPF::g_pProcessHeap,
             16LL);
      *((_QWORD *)this + 37) = v9;
      if ( !v9 )
      {
        v2 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x15Du);
        return v2;
      }
    }
    *(struct _MARGINS *)*((_QWORD *)this + 37) = *a2;
    (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 0x2000LL);
    return v2;
  }
  if ( v6 )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    v10 = *(_QWORD *)this;
    *((_QWORD *)this + 37) = 0LL;
    (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(v10 + 24))(this, 0x2000LL);
  }
  return v2;
}
