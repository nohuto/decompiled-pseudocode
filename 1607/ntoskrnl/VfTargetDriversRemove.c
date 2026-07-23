/*
 * XREFs of VfTargetDriversRemove @ 0x14012F358
 * Callers:
 *     VfDriverUnloadImage @ 0x1406FE170 (VfDriverUnloadImage.c)
 *     VfSuspectDriversLoadCallback @ 0x140716114 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x1400825CC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140082748 (VfAvlInitializeLockContext.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14012F474 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x14012F4C4 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14012F574 (VfAvlLookupTreeNode.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     VfThunkRemoveTargetNotify @ 0x1406FE1D8 (VfThunkRemoveTargetNotify.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x1407105F8 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140710660 (ViTargetRemovingCheckEtwWmi.c)
 *     VfPoolCheckForLeaks @ 0x140710A0C (VfPoolCheckForLeaks.c)
 */

void __fastcall VfTargetDriversRemove(__int64 a1)
{
  __int64 v1; // rbp
  void *v2; // rbx
  __int64 v3; // rax
  __m128i *v4; // rdi
  __int64 v5; // rbx
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  __m128i v8; // xmm0
  _BYTE v9[16]; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v10[3]; // [rsp+30h] [rbp-48h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-18h]

  if ( !VfSafeMode && ViTargetInitialized )
  {
    v1 = *(_QWORD *)(a1 + 48);
    v2 = 0LL;
    VfAvlInitializeLockContext((__int64)v9, 0);
    v3 = VfAvlLookupTreeNode(&ViTargetDriversAvl, v9, v1, 1LL);
    v4 = (__m128i *)v3;
    if ( v3 )
    {
      v5 = *(_QWORD *)(v3 + 56);
      if ( v5 )
      {
        ViTargetRemovingCheckEtwWmi(*(_QWORD *)(v3 + 56), v1);
        VfPoolCheckForLeaks(v5);
        ViTargetRemovingCheckContiguousMemory(v5);
      }
      v6 = *v4;
      v10[1] = v4[1];
      v7 = v4[3];
      v10[0] = v6;
      v8 = v4[2];
      *(__m128i *)P = v7;
      v10[2] = v8;
      if ( _mm_srli_si128(v7, 8).m128i_u64[0] )
        --dword_140300AA8;
      v2 = (void *)VfAvlDeleteTreeNode(&ViTargetDriversAvl, v9, v1, 1LL);
    }
    VfAvlCleanupLockContext((__int64)v9);
    if ( v2 )
    {
      VfThunkRemoveTargetNotify(v10);
      if ( P[1] )
        ExFreePoolWithTag(P[1], 0x44566656u);
      if ( dword_140300AA0 == 1 )
        ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v2);
      else
        VfUtilFreePoolCheckIRQL(v2);
    }
  }
}
