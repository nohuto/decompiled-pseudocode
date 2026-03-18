/*
 * XREFs of ?Create@CWARPDrawListEntry@@SAJAEBUWARPAlphaBltParameters@@PEAPEAV1@@Z @ 0x180137314
 * Callers:
 *     ?UpdateWARPDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCDrawListCache@@@Z @ 0x180133F9C (-UpdateWARPDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??0CWARPDrawListEntry@@AEAA@AEBUWARPAlphaBltParameters@@@Z @ 0x180136F18 (--0CWARPDrawListEntry@@AEAA@AEBUWARPAlphaBltParameters@@@Z.c)
 */

__int64 __fastcall CWARPDrawListEntry::Create(const struct WARPAlphaBltParameters *a1, struct CWARPDrawListEntry **a2)
{
  unsigned int v4; // ebx
  CWARPDrawListEntry *v5; // rax
  volatile signed __int32 *v6; // rax

  v4 = 0;
  v5 = (CWARPDrawListEntry *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                               WPF::g_pProcessHeap,
                               360LL);
  if ( v5 )
    v6 = (volatile signed __int32 *)CWARPDrawListEntry::CWARPDrawListEntry(v5, a1);
  else
    v6 = 0LL;
  if ( v6 )
  {
    _InterlockedIncrement(v6 + 2);
    *a2 = (struct CWARPDrawListEntry *)v6;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x39u);
  }
  return v4;
}
