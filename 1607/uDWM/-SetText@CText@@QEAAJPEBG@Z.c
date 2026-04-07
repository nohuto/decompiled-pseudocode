/*
 * XREFs of ?SetText@CText@@QEAAJPEBG@Z @ 0x180018984
 * Callers:
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z @ 0x180017F70 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?UpdateTitle@CTopLevelWindow@@AEAAJXZ @ 0x180021888 (-UpdateTitle@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z @ 0x18007EF48 (-UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800155D0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     StringCchLengthW @ 0x180015664 (StringCchLengthW.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002ADD0 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002AE50 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::SetText(CText *this, wchar_t *a2)
{
  unsigned int v3; // ebx
  void (__fastcall *v5)(CVisual *__hidden, unsigned int); // rax
  void *v6; // rdx
  int v7; // eax
  size_t v8; // rsi
  unsigned __int64 v9; // rdx
  void *(__fastcall *v10)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  unsigned __int16 *v11; // rax
  void (*v13)(void); // rax
  unsigned int v14; // [rsp+20h] [rbp-18h]
  size_t pcchLength; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v5 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
  if ( v5 == CVisual::SetDirtyFlags )
    CVisual::SetDirtyFlags(this, 0x1000u);
  else
    v5(this, 4096u);
  *((_BYTE *)this + 264) &= ~1u;
  v6 = (void *)*((_QWORD *)this + 34);
  if ( v6 )
  {
    v13 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v13 == (char *)WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v6);
    else
      v13();
    *((_QWORD *)this + 34) = 0LL;
  }
  if ( !a2 )
    return v3;
  pcchLength = 0LL;
  v7 = StringCchLengthW(a2, (size_t)v6, &pcchLength);
  v3 = v7;
  if ( v7 < 0 )
  {
    v14 = 112;
LABEL_21:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v14);
    return v3;
  }
  v8 = pcchLength;
  if ( pcchLength )
  {
    v9 = 2 * pcchLength + 2;
    v10 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v10 == WPF::ProcessHeapImpl::Alloc )
      v11 = (unsigned __int16 *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v9);
    else
      v11 = (unsigned __int16 *)v10(WPF::g_pProcessHeap, v9);
    *((_QWORD *)this + 34) = v11;
    if ( !v11 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x78u);
      return v3;
    }
    v7 = StringCchCopyW(v11, v8 + 1, (size_t *)a2);
    v3 = v7;
    if ( v7 < 0 )
    {
      v14 = 122;
      goto LABEL_21;
    }
  }
  return v3;
}
