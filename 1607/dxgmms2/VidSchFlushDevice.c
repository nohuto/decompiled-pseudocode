/*
 * XREFs of VidSchFlushDevice @ 0x1C0041290
 * Callers:
 *     VidSchSuspendAdapter @ 0x1C00403B0 (VidSchSuspendAdapter.c)
 *     VidSchTerminateDevice @ 0x1C0040DE0 (VidSchTerminateDevice.c)
 *     ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004FD20 (-WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C0054F00 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0055A2C (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     ?FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z @ 0x1C00890E4 (-FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C0001200 (VidSchiMarkDeviceAsError.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AX0@Z@Z @ 0x1C0001D68 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     VidSchiInterlockedReadUlong @ 0x1C00020BC (VidSchiInterlockedReadUlong.c)
 *     VidSchiClearFlipDevice @ 0x1C0002C18 (VidSchiClearFlipDevice.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     VidSchiWaitFlushCompletion @ 0x1C00413E0 (VidSchiWaitFlushCompletion.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C005BB70 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 */

__int64 __fastcall VidSchFlushDevice(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v7; // r14d
  __int64 v8; // r15
  __int64 v9; // rax
  VIDMM_DEVICE *v10; // rcx
  int v11; // eax
  _DWORD *v12; // rsi
  __int64 result; // rax
  __int64 v14; // rax
  union _LARGE_INTEGER v15; // [rsp+28h] [rbp-69h]
  _QWORD v16[20]; // [rsp+38h] [rbp-59h] BYREF

  v4 = 0;
  if ( a1 && a2 )
  {
    v7 = *a2;
    if ( *a2 == 11 )
    {
      *(_DWORD *)(a1 + 1248) = 1;
      VidSchiMarkDeviceAsError(a1, 14);
    }
    v8 = *(_QWORD *)(a1 + 32);
    VidSchRundownUnorderedWaiter<_VIDSCH_DEVICE>(a1, v8, *a2, a4, v15);
    if ( (v7 & 1) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 8);
      if ( v9 )
      {
        v10 = *(VIDMM_DEVICE **)(v9 + 560);
        if ( v10 )
          VIDMM_DEVICE::EnsureSchedulable(v10, 0);
      }
      v11 = *a2;
      v12 = (_DWORD *)(a1 + 1132);
      if ( ((v11 - 3) & 0xFFFFFFFD) == 0 )
        v12 = (_DWORD *)(a1 + 1136);
      if ( *v12 )
      {
        memset(v16, 0, sizeof(v16));
        LODWORD(v16[4]) |= 4u;
        LODWORD(v16[2]) = 1;
        v16[5] = v12;
        VidSchiWaitFlushCompletion(v8, v16, 24LL);
      }
      if ( *(_DWORD *)(a1 + 1124) )
      {
        memset(v16, 0, sizeof(v16));
        LODWORD(v16[4]) |= 4u;
        LODWORD(v16[2]) = 3;
        v16[5] = a1 + 1124;
        VidSchiWaitFlushCompletion(v8, v16, 23LL);
      }
      if ( v7 != 5 )
      {
        VidSchiClearFlipDevice((struct _VIDSCH_GLOBAL *)v8, a1, 9);
        VidSchiInterlockedReadUlong((KSPIN_LOCK *)(v8 + 1856), (_DWORD *)(a1 + 1124));
      }
    }
    LOBYTE(v4) = v7 >= 9;
    result = 0LL;
    *(_DWORD *)(a1 + 1244) = v4;
  }
  else
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v14);
    return 3221225485LL;
  }
  return result;
}
