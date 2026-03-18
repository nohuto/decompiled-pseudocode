/*
 * XREFs of ?Create@CHwSolidColorTextureSource@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x18017C4E4
 * Callers:
 *     ?GetStockBlackSolidColorTextureSourceNoRef@CD3DDeviceLevel1@@QEAAJ_NPEAPEAVCHwSolidColorTextureSource@@@Z @ 0x1801741CC (-GetStockBlackSolidColorTextureSourceNoRef@CD3DDeviceLevel1@@QEAAJ_NPEAPEAVCHwSolidColorTextureS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??0CHwSolidColorTextureSource@@AEAA@PEAVCD3DDeviceLevel1@@@Z @ 0x18017C3D8 (--0CHwSolidColorTextureSource@@AEAA@PEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CHwSolidColorTextureSource::Create(
        struct CD3DDeviceLevel1 *a1,
        struct CHwSolidColorTextureSource **a2)
{
  unsigned int v2; // ebx
  CHwSolidColorTextureSource *v5; // rax
  volatile signed __int32 *v6; // rax

  v2 = 0;
  *a2 = 0LL;
  v5 = (CHwSolidColorTextureSource *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 8LL))(
                                       WPF::g_pProcessHeap,
                                       136LL);
  if ( v5 )
    v6 = (volatile signed __int32 *)CHwSolidColorTextureSource::CHwSolidColorTextureSource(v5, a1);
  else
    v6 = 0LL;
  if ( v6 )
  {
    _InterlockedIncrement(v6 + 2);
    *a2 = (struct CHwSolidColorTextureSource *)v6;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x67u);
  }
  return v2;
}
