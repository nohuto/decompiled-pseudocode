/*
 * XREFs of ?Create@CMILFactory@@SAJPEAPEAV1@@Z @ 0x1800B2224
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x18009DBC4 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Init@CCriticalSection@@QEAAJXZ @ 0x1800A2538 (-Init@CCriticalSection@@QEAAJXZ.c)
 */

__int64 __fastcall CMILFactory::Create(struct CMILFactory **a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  int v4; // eax
  int v5; // edi
  int v6; // eax
  unsigned int v7; // esi

  v2 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         72LL);
  v3 = v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 0;
    *(_QWORD *)v2 = &CMILFactory::`vftable';
    *(_BYTE *)(v2 + 56) = 0;
    *(_QWORD *)(v2 + 64) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
  {
    CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)v3);
    v4 = CCriticalSection::Init((LPCRITICAL_SECTION)(v3 + 16));
    v5 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x62u);
    }
    else
    {
      v6 = WICCreateImagingFactory_Proxy(567LL, v3 + 64);
      v5 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x64u);
    }
    if ( v5 == -2147467259 )
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x6Au);
    }
    v7 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x2Au);
    }
    else
    {
      *a1 = (struct CMILFactory *)v3;
      v3 = 0LL;
    }
    if ( v3 )
      CMILCOMBase::InternalRelease((CMILCOMBase *)v3);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x27u);
  }
  return v7;
}
