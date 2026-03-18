/*
 * XREFs of ?ProcessUnclaimedVistBltTokensForNode@CLegacySurfaceManager@@IEAAJPEAVCWindowNode@@K@Z @ 0x18012037C
 * Callers:
 *     ?RegisterForDxUpdates@CLegacySurfaceManager@@QEAAJPEAVCWindowNode@@K@Z @ 0x180120470 (-RegisterForDxUpdates@CLegacySurfaceManager@@QEAAJPEAVCWindowNode@@K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z @ 0x1800BA674 (-ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$DynArray@VUnclaimedToken@CLegacySurfaceManager@@$0A@@@QEAAJI@Z @ 0x180120528 (-RemoveAt@-$DynArray@VUnclaimedToken@CLegacySurfaceManager@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CLegacySurfaceManager::ProcessUnclaimedVistBltTokensForNode(
        CLegacySurfaceManager *this,
        CDxAccumulationContext **a2,
        int a3)
{
  unsigned int v3; // edi
  unsigned int i; // ebx
  unsigned __int64 v8; // xmm0_8
  union _ULARGE_INTEGER v9; // rdx
  int v10; // eax
  bool v12; // [rsp+60h] [rbp+8h] BYREF
  bool v13; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  for ( i = 0; i < *((_DWORD *)this + 32); ++i )
  {
    v8 = _mm_srli_si128(*(__m128i *)(*((_QWORD *)this + 13) + 16LL * i), 8).m128i_u64[0];
    if ( *(_DWORD *)v8 == 4 )
    {
      v9 = *(union _ULARGE_INTEGER *)(v8 + 16);
      if ( v9.HighPart == a3 )
      {
        v12 = 0;
        v13 = 0;
        CWindowNode::ProcessVistaBltToken(a2, v9, &v13, &v12);
        if ( v12 )
        {
          v10 = DynArray<CLegacySurfaceManager::UnclaimedToken,0>::RemoveAt((char *)this + 104, i);
          v3 = v10;
          if ( v10 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1F1u);
            return v3;
          }
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            v8);
          --i;
        }
      }
    }
  }
  return v3;
}
