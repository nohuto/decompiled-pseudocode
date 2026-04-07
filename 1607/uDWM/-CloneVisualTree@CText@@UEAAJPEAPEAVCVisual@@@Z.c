/*
 * XREFs of ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z @ 0x180017F70
 * Callers:
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z @ 0x18001FB60 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CText@@AEAA@XZ @ 0x180017EEC (--0CText@@AEAA@XZ.c)
 *     ?SetReverseAlignment@CText@@QEAAX_N@Z @ 0x1800187D8 (-SetReverseAlignment@CText@@QEAAX_N@Z.c)
 *     ?SetRTLReading@CText@@QEAAX_N@Z @ 0x1800187F8 (-SetRTLReading@CText@@QEAAX_N@Z.c)
 *     ?SetBackgroundColor@CText@@QEAAXK@Z @ 0x180018818 (-SetBackgroundColor@CText@@QEAAXK@Z.c)
 *     ?SetColor@CText@@QEAAXK@Z @ 0x180018858 (-SetColor@CText@@QEAAXK@Z.c)
 *     ?SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z @ 0x1800188A4 (-SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z.c)
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x180018984 (-SetText@CText@@QEAAJPEBG@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001F620 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z @ 0x18001FB60 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002ADF0 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::CloneVisualTree(CText *this, struct CVisual **a2)
{
  void *(*v4)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CText *v5; // rax
  CText *v6; // rbx
  struct IDwmChannel *v7; // rdx
  __int64 (__fastcall *v8)(CVisual *__hidden, struct IDwmChannel *); // rax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  char v12; // al
  unsigned int v14; // [rsp+20h] [rbp-18h]

  v4 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (CText *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x1A0uLL);
  else
    v5 = (CText *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v4)(WPF::g_pProcessHeap, 416LL);
  v6 = v5;
  if ( v5 )
  {
    memset_0(v5, 0, 0x1A0uLL);
    v6 = CText::CText(v6);
  }
  if ( !v6 )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x205u);
    return v10;
  }
  v7 = *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL);
  v8 = *(__int64 (__fastcall **)(CVisual *__hidden, struct IDwmChannel *))(*(_QWORD *)v6 + 8LL);
  if ( v8 == CVisual::Initialize )
    v9 = CVisual::Initialize(v6, v7);
  else
    v9 = v8(v6, v7);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x206u);
  }
  else
  {
    *a2 = v6;
    _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
    v11 = CVisual::CloneVisualTree(this, a2);
    v10 = v11;
    if ( v11 < 0 )
    {
      v14 = 522;
    }
    else
    {
      v11 = CText::SetText(v6, *((const unsigned __int16 **)this + 34));
      v10 = v11;
      if ( v11 >= 0 )
      {
        CText::SetFont(v6, (const struct tagLOGFONTW *)((char *)this + 280));
        CText::SetColor(v6, *((_DWORD *)this + 98));
        CText::SetBackgroundColor(v6, *((_DWORD *)this + 99));
        CText::SetRTLReading(v6, (*((_BYTE *)this + 264) & 2) != 0);
        CText::SetReverseAlignment(v6, (*((_BYTE *)this + 264) & 4) != 0);
        if ( (*((_DWORD *)this + 20) & 0x9000) == 0 )
        {
          v12 = *((_BYTE *)v6 + 264);
          *((_DWORD *)v6 + 20) &= 0xFFFF6FFF;
          *((_BYTE *)v6 + 264) ^= (*((_BYTE *)this + 264) ^ v12) & 1;
          *((_QWORD *)v6 + 48) = *((_QWORD *)this + 48);
        }
        goto LABEL_13;
      }
      v14 = 524;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v14);
  }
LABEL_13:
  CBaseObject::Release(v6);
  return v10;
}
