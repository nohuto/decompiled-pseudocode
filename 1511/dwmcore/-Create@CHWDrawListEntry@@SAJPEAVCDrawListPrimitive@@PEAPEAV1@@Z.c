/*
 * XREFs of ?Create@CHWDrawListEntry@@SAJPEAVCDrawListPrimitive@@PEAPEAV1@@Z @ 0x18002CDB0
 * Callers:
 *     ?ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@QEAAJMMPEA_NPEAPEAVCHWDrawListEntry@@@Z @ 0x180034204 (-ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@QEAAJMMPEA_NPEAPEAVCHWDrawListEntry@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

__int64 __fastcall CHWDrawListEntry::Create(struct CDrawListPrimitive *a1, struct CHWDrawListEntry **a2)
{
  unsigned int v4; // ebp
  void *(__fastcall *v5)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdi
  volatile signed __int32 *v6; // rax
  volatile signed __int32 *v7; // rsi

  v4 = 0;
  v5 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v5 == WPF::ProcessHeapImpl::Alloc )
    v6 = (volatile signed __int32 *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x98uLL);
  else
    v6 = (volatile signed __int32 *)v5(WPF::g_pProcessHeap, 152uLL);
  v7 = v6;
  if ( v6 )
  {
    *((_QWORD *)v6 + 2) = a1;
    *((_DWORD *)v6 + 36) = 0;
    *(_QWORD *)v6 = &CMILRefCountBase::`vftable';
    *((_DWORD *)v6 + 2) = 0;
    *(_QWORD *)v6 = &CHWDrawListEntry::`vftable';
    memset_0((void *)(v6 + 6), 0, 0x34uLL);
    (***((void (__fastcall ****)(_QWORD))v7 + 2))(*((_QWORD *)v7 + 2));
    ++CHWDrawListEngineMetrics::s_cDrawListEntries;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    *a2 = (struct CHWDrawListEntry *)v7;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Au);
  }
  return v4;
}
