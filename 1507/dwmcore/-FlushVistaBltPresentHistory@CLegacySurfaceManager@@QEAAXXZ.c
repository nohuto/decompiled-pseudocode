/*
 * XREFs of ?FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ @ 0x18006278C
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180045D40 (-PreRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x18004A980 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?RemoveAt@?$DynArray@VUnclaimedToken@CLegacySurfaceManager@@$0A@@@QEAAJI@Z @ 0x1800F00E0 (-RemoveAt@-$DynArray@VUnclaimedToken@CLegacySurfaceManager@@$0A@@@QEAAJI@Z.c)
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x180104E84 (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
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
