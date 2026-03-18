/*
 * XREFs of ?Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x180096168
 * Callers:
 *     ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x1800962A4 (-InitDXGI@CDXGIEnumeration@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CDXGIAdapterLimited@@AEAA@IPEAUIDXGIAdapter@@@Z @ 0x180095BB8 (--0CDXGIAdapterLimited@@AEAA@IPEAUIDXGIAdapter@@@Z.c)
 *     ?Initialize@CDXGIAdapterLimited@@AEAAJXZ @ 0x1800960A8 (-Initialize@CDXGIAdapterLimited@@AEAAJXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDXGIAdapterLimited::Create(struct IDXGIAdapter *a1, int a2, struct CDXGIAdapterLimited **a3)
{
  CDXGIAdapterLimited *v6; // rax
  CDXGIAdapterLimited *v7; // rdi
  int v8; // eax
  unsigned int v9; // esi

  v6 = (CDXGIAdapterLimited *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                WPF::g_pProcessHeap,
                                384LL);
  if ( v6 )
    v7 = CDXGIAdapterLimited::CDXGIAdapterLimited(v6, a2, a1);
  else
    v7 = 0LL;
  if ( v7 )
  {
    (**(void (__fastcall ***)(CDXGIAdapterLimited *))v7)(v7);
    v8 = CDXGIAdapterLimited::Initialize(v7);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x5Au);
    }
    else
    {
      *a3 = v7;
      (**(void (__fastcall ***)(CDXGIAdapterLimited *))v7)(v7);
    }
    (*(void (__fastcall **)(CDXGIAdapterLimited *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x56u);
  }
  return v9;
}
