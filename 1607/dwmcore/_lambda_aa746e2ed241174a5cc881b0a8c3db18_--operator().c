/*
 * XREFs of _lambda_aa746e2ed241174a5cc881b0a8c3db18_::operator() @ 0x1801687F0
 * Callers:
 *     ?StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z @ 0x180168ACC (-StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z.c)
 * Callees:
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x180149F3C (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18014A75C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x18014BECC (-ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x18014BF84 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXPEAVCInteraction@@W4ScrollAxis@@W4Boundary@@_N3@Z @ 0x180168A94 (-RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXPEAVCInteraction@@W4ScrollAxis.c)
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXPEAVCInteraction@@@Z @ 0x180168B54 (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXPEAVCInteraction@@@Z.c)
 */

void __fastcall lambda_aa746e2ed241174a5cc881b0a8c3db18_::operator()(__int64 a1, int a2)
{
  __int64 v3; // r14
  float CurrentValue; // xmm0_4
  __int64 v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // rdx
  int v8; // ebp
  unsigned int v9; // r15d
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rcx
  int v17; // [rsp+20h] [rbp-28h]
  int v18; // [rsp+28h] [rbp-20h]

  v3 = a2;
  CurrentValue = CInteractionTracker::GetCurrentValue(**(float ***)a1, a2);
  v6 = CInteractionTracker::BoundaryFromValue(v5, CurrentValue, v3);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = 0;
  v9 = v6;
  if ( *(int *)(v7 + 16) > 0 )
  {
    v10 = 0LL;
    do
    {
      v11 = *(_QWORD *)(v7 + 8);
      if ( *(_QWORD *)(v10 + v11) )
      {
        LOBYTE(v18) = CInteractionTracker::ShouldChainAllForAxis(v11, v3, *(_QWORD *)(v10 + *(_QWORD *)v7));
        LOBYTE(v17) = CInteractionTracker::ShouldChainForAxis(v12, v3, v13, 1u);
        CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
          *(_QWORD *)(a1 + 16),
          v14,
          (unsigned int)v3,
          v9,
          v17,
          v18);
        v15 = *(_QWORD *)(a1 + 16);
        v16 = 3 * v3;
        *(_BYTE *)(v15 + 4 * v16) &= ~4u;
        *(_DWORD *)(v15 + 4 * v16 + 8) = 0;
        *(_BYTE *)(v15 + 36) |= 2u;
        CChainingHelper::UpdateConfigurationIfDirty(
          *(CChainingHelper **)(a1 + 16),
          *(struct CInteraction **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + v10));
      }
      v7 = *(_QWORD *)(a1 + 8);
      ++v8;
      v10 += 8LL;
    }
    while ( v8 < *(_DWORD *)(v7 + 16) );
  }
}
