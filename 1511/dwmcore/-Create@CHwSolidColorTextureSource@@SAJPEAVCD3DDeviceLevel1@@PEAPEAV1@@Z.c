/*
 * XREFs of ?Create@CHwSolidColorTextureSource@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180151094
 * Callers:
 *     ?AddTexture@CHwSolidColorTextureSourcePool@@AEAAJXZ @ 0x180150010 (-AddTexture@CHwSolidColorTextureSourcePool@@AEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CHwSolidColorTextureSource@@AEAA@PEAVCD3DDeviceLevel1@@@Z @ 0x180150F74 (--0CHwSolidColorTextureSource@@AEAA@PEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CHwSolidColorTextureSource::Create(
        struct CD3DDeviceLevel1 *a1,
        struct CHwSolidColorTextureSource **a2)
{
  unsigned int v2; // esi
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
