/*
 * XREFs of ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001AD60
 * Callers:
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z @ 0x1800228F0 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetReverseAlignment@CText@@QEAAX_N@Z @ 0x18001B5C8 (-SetReverseAlignment@CText@@QEAAX_N@Z.c)
 *     ?SetRTLReading@CText@@QEAAX_N@Z @ 0x18001B5FC (-SetRTLReading@CText@@QEAAX_N@Z.c)
 *     ?SetBackgroundColor@CText@@QEAAXK@Z @ 0x18001B630 (-SetBackgroundColor@CText@@QEAAXK@Z.c)
 *     ?SetColor@CText@@QEAAXK@Z @ 0x18001B688 (-SetColor@CText@@QEAAXK@Z.c)
 *     ?SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z @ 0x18001B6DC (-SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z.c)
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x18001B7E0 (-SetText@CText@@QEAAJPEBG@Z.c)
 *     ??0CText@@AEAA@XZ @ 0x18001BA00 (--0CText@@AEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x1800222C0 (-Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z @ 0x1800228F0 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CText::CloneVisualTree(CText *this, struct CVisual **a2)
{
  void *(*v4)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdi
  CText *v5; // rax
  CText *v6; // rbx
  __int64 (__fastcall *v7)(CVisual *__hidden, struct MIL_CHANNEL__ *const); // rdi
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  char v11; // al
  unsigned int v13; // [rsp+20h] [rbp-18h]

  v4 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (CText *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x1A0uLL);
  else
    v5 = (CText *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v4)(WPF::g_pProcessHeap, 416LL);
  if ( v5 )
    v6 = CText::CText(v5);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x2A0u);
    return v9;
  }
  v7 = *(__int64 (__fastcall **)(CVisual *__hidden, struct MIL_CHANNEL__ *const))(*(_QWORD *)v6 + 8LL);
  if ( v7 == CVisual::Initialize )
    v8 = CVisual::Initialize(v6, *(struct MIL_CHANNEL__ *const *)(*((_QWORD *)this + 2) + 16LL));
  else
    v8 = v7(v6, *(struct MIL_CHANNEL__ *const *)(*((_QWORD *)this + 2) + 16LL));
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x2A1u);
  }
  else
  {
    *a2 = v6;
    _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
    v10 = CVisual::CloneVisualTree(this, a2);
    v9 = v10;
    if ( v10 < 0 )
    {
      v13 = 677;
    }
    else
    {
      v10 = CText::SetText(v6, *((const unsigned __int16 **)this + 34));
      v9 = v10;
      if ( v10 >= 0 )
      {
        CText::SetFont(v6, (const struct tagLOGFONTW *)((char *)this + 280));
        CText::SetColor(v6, *((_DWORD *)this + 98));
        CText::SetBackgroundColor(v6, *((_DWORD *)this + 99));
        CText::SetRTLReading(v6, (*((_BYTE *)this + 264) & 2) != 0);
        CText::SetReverseAlignment(v6, (*((_BYTE *)this + 264) & 4) != 0);
        if ( (*((_DWORD *)this + 20) & 0x9000) == 0 )
        {
          v11 = *((_BYTE *)v6 + 264);
          *((_DWORD *)v6 + 20) &= 0xFFFF6FFF;
          *((_BYTE *)v6 + 264) ^= (*((_BYTE *)this + 264) ^ v11) & 1;
          *((_QWORD *)v6 + 48) = *((_QWORD *)this + 48);
        }
        goto LABEL_13;
      }
      v13 = 679;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, v13);
  }
LABEL_13:
  CBaseObject::Release(v6);
  return v9;
}
