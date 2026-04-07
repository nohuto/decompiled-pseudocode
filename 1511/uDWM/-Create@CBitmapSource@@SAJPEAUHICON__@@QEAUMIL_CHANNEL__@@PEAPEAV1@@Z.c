/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAUHICON__@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003C9AC
 * Callers:
 *     ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x180024A4C (-UpdateIcon@CTopLevelWindow@@AEAAJXZ.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x18003B660 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z @ 0x18001CBEC (-Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z.c)
 *     ?Initialize@CBitmapSource@@AEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18001CDA8 (-Initialize@CBitmapSource@@AEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CBitmapSource::Create(HICON a1, struct MIL_CHANNEL__ *const a2, struct CBitmapSource **a3)
{
  void *(__fastcall *v6)(WPF::ProcessHeapImpl *, size_t); // rdi
  CBitmapSource *v7; // rax
  CBitmapSource *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax

  v6 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v6 == WPF::ProcessHeapImpl::AllocClear )
    v7 = (CBitmapSource *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x68uLL);
  else
    v7 = (CBitmapSource *)v6(WPF::g_pProcessHeap, 104LL);
  v8 = v7;
  if ( v7 )
  {
    *((_QWORD *)v7 + 2) = 0LL;
    *((_QWORD *)v7 + 12) = 0LL;
    *((_DWORD *)v7 + 2) = 1;
    *(_QWORD *)v7 = &CBitmapSource::`vftable';
    *((_DWORD *)v7 + 20) = 0x80000000;
    *((_DWORD *)v7 + 22) = 0x80000000;
    *((_DWORD *)v7 + 21) = 0x80000000;
    *((_DWORD *)v7 + 23) = 0x80000000;
    v9 = CBitmapSource::Initialize(v7, a2);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0xB2u);
    }
    else
    {
      v11 = CBitmapSource::Update(v8, a1);
      v10 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0xB4u);
      }
      else
      {
        *a3 = v8;
        v8 = 0LL;
      }
    }
    if ( v8 )
      CBaseObject::Release(v8);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0xB0u);
  }
  return v10;
}
