/*
 * XREFs of ?SetText@CText@@QEAAJPEBG@Z @ 0x1800168F4
 * Callers:
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z @ 0x180015EA0 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001FD20 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z @ 0x180076458 (-UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180006808 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180028450 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800284D0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     StringCchLengthW @ 0x18003B5CC (StringCchLengthW.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CText::SetText(void **this, wchar_t *a2)
{
  unsigned int v2; // ebx
  void (__fastcall *v5)(CVisual *__hidden, unsigned int); // rsi
  size_t v6; // rdx
  int v7; // eax
  size_t v8; // rsi
  void *(__fastcall *v9)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // r14
  char *v10; // rax
  void (__fastcall *v12)(WPF::ProcessHeapImpl *__hidden, void *); // r15
  unsigned int v13; // [rsp+20h] [rbp-28h]
  size_t pcchLength; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v5 = (void (__fastcall *)(CVisual *__hidden, unsigned int))*((_QWORD *)*this + 3);
  if ( v5 == CVisual::SetDirtyFlags )
    CVisual::SetDirtyFlags((CVisual *)this, 0x1000u);
  else
    v5((CVisual *)this, 4096u);
  *((_BYTE *)this + 264) &= ~1u;
  if ( this[34] )
  {
    v12 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v12 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this[34]);
    else
      v12(WPF::g_pProcessHeap, this[34]);
    this[34] = 0LL;
  }
  if ( !a2 )
    return v2;
  pcchLength = 0LL;
  v7 = StringCchLengthW(a2, v6, &pcchLength);
  v2 = v7;
  if ( v7 < 0 )
  {
    v13 = 170;
LABEL_21:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, v13);
    return v2;
  }
  v8 = pcchLength;
  if ( pcchLength )
  {
    v9 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v9 == WPF::ProcessHeapImpl::Alloc )
      v10 = (char *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 2 * pcchLength + 2);
    else
      v10 = (char *)v9(WPF::g_pProcessHeap, 2 * pcchLength + 2);
    this[34] = v10;
    if ( !v10 )
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0xB2u);
      return v2;
    }
    v7 = StringCchCopyW(v10, v8 + 1, (char *)a2);
    v2 = v7;
    if ( v7 < 0 )
    {
      v13 = 180;
      goto LABEL_21;
    }
  }
  return v2;
}
