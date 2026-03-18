/*
 * XREFs of ?Create@CD2DResourceManager@@SAJPEAVCD2DContext@@PEAPEAV1@@Z @ 0x180091618
 * Callers:
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x18008F470 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD2DResourceManager::Create(struct CD2DContext *a1, struct CD2DResourceManager **a2)
{
  unsigned int v4; // esi
  struct CD2DResourceManager *v5; // rax

  v4 = 0;
  v5 = (struct CD2DResourceManager *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 8LL))(
                                       WPF::g_pProcessHeap,
                                       24LL);
  if ( v5 )
  {
    *((_QWORD *)v5 + 2) = a1;
    *((_QWORD *)v5 + 1) = v5;
    *(_QWORD *)v5 = v5;
  }
  else
  {
    v5 = 0LL;
  }
  *a2 = v5;
  if ( !v5 )
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xFu);
  }
  return v4;
}
