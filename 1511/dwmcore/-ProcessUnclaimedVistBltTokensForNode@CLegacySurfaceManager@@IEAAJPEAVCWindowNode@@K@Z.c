/*
 * XREFs of ?ProcessUnclaimedVistBltTokensForNode@CLegacySurfaceManager@@IEAAJPEAVCWindowNode@@K@Z @ 0x180109C64
 * Callers:
 *     ?RegisterForDxUpdates@CLegacySurfaceManager@@QEAAJPEAVCWindowNode@@K@Z @ 0x180109D70 (-RegisterForDxUpdates@CLegacySurfaceManager@@QEAAJPEAVCWindowNode@@K@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z @ 0x1800B6648 (-ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z.c)
 *     ?RemoveAt@?$DynArray@VUnclaimedToken@CLegacySurfaceManager@@$0A@@@QEAAJI@Z @ 0x180109E28 (-RemoveAt@-$DynArray@VUnclaimedToken@CLegacySurfaceManager@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CLegacySurfaceManager::ProcessUnclaimedVistBltTokensForNode(
        CLegacySurfaceManager *this,
        struct CWindowNode *a2,
        int a3)
{
  unsigned int v3; // ebp
  unsigned int v4; // esi
  CDxAccumulationContext **i; // r10
  unsigned __int64 v8; // xmm0_8
  union _ULARGE_INTEGER v9; // rdx
  int v10; // eax
  bool v12; // [rsp+70h] [rbp+8h] BYREF
  struct CWindowNode *v13; // [rsp+78h] [rbp+10h]
  bool v14; // [rsp+88h] [rbp+20h] BYREF

  v13 = a2;
  v3 = 0;
  v4 = 0;
  for ( i = (CDxAccumulationContext **)a2; v4 < *((_DWORD *)this + 32); ++v4 )
  {
    v8 = _mm_srli_si128(*(__m128i *)(*((_QWORD *)this + 13) + 16LL * v4), 8).m128i_u64[0];
    if ( *(_DWORD *)v8 == 4 )
    {
      v9 = *(union _ULARGE_INTEGER *)(v8 + 16);
      if ( v9.HighPart == a3 )
      {
        v12 = 0;
        v14 = 0;
        CWindowNode::ProcessVistaBltToken(i, v9, &v14, &v12);
        if ( v12 )
        {
          v10 = DynArray<CLegacySurfaceManager::UnclaimedToken,0>::RemoveAt((char *)this + 104, v4);
          v3 = v10;
          if ( v10 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1F1u);
            return v3;
          }
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            v8);
          --v4;
        }
        i = (CDxAccumulationContext **)v13;
      }
    }
  }
  return v3;
}
