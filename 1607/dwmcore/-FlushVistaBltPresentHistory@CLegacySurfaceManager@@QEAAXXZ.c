/*
 * XREFs of ?FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ @ 0x180037AC0
 * Callers:
 *     ?ProcessLegacyTokens@CSurfaceManager@@QEAAJ_K@Z @ 0x1800374D0 (-ProcessLegacyTokens@CSurfaceManager@@QEAAJ_K@Z.c)
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x180073ED4 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x180108D64 (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
 *     ?RemoveAt@?$DynArray@VUnclaimedToken@CLegacySurfaceManager@@$0A@@@QEAAJI@Z @ 0x180120528 (-RemoveAt@-$DynArray@VUnclaimedToken@CLegacySurfaceManager@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CLegacySurfaceManager::FlushVistaBltPresentHistory(CLegacySurfaceManager *this)
{
  int v2; // edi
  CWindowNode **v3; // rax
  _DWORD *v4; // rbp
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  ++*((_DWORD *)this + 53);
  v2 = *((_DWORD *)this + 32);
  while ( v2 > 0 )
  {
    v4 = (_DWORD *)_mm_srli_si128(*(__m128i *)(*((_QWORD *)this + 13) + 16LL * (unsigned int)--v2), 8).m128i_u64[0];
    if ( *v4 == 4
      && (int)DynArray<CLegacySurfaceManager::UnclaimedToken,0>::RemoveAt((char *)this + 104, (unsigned int)v2) >= 0 )
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _DWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v4);
    }
  }
  while ( 1 )
  {
    RestartKey = 0LL;
    v3 = (CWindowNode **)RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 136), &RestartKey);
    if ( !v3 )
      break;
    CWindowNode::FlushVistaBltTokens(v3[1]);
  }
}
