/*
 * XREFs of ?FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ @ 0x1800A5F98
 * Callers:
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x18007BED8 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180082770 (-PreRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x1800F716C (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
 *     ?RemoveAt@?$DynArray@VUnclaimedToken@CLegacySurfaceManager@@$0A@@@QEAAJI@Z @ 0x180109E28 (-RemoveAt@-$DynArray@VUnclaimedToken@CLegacySurfaceManager@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CLegacySurfaceManager::FlushVistaBltPresentHistory(CLegacySurfaceManager *this)
{
  int v2; // ebp
  CWindowNode **v3; // rax
  unsigned int v4; // r14d
  _DWORD *v5; // r12
  PVOID RestartKey; // [rsp+50h] [rbp+8h] BYREF

  ++*((_DWORD *)this + 53);
  v2 = *((_DWORD *)this + 32);
  if ( v2 > 0 )
  {
    v4 = v2 - 1;
    do
    {
      v5 = (_DWORD *)_mm_srli_si128(*(__m128i *)(*((_QWORD *)this + 13) + 16LL * v4), 8).m128i_u64[0];
      if ( *v5 == 4 && (int)DynArray<CLegacySurfaceManager::UnclaimedToken,0>::RemoveAt((char *)this + 104, v4) >= 0 )
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _DWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          v5);
      --v2;
      --v4;
    }
    while ( v2 > 0 );
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
