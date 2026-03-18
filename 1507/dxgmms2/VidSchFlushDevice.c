/*
 * XREFs of VidSchFlushDevice @ 0x1C002F300
 * Callers:
 *     VidSchTerminateDevice @ 0x1C002E0F0 (VidSchTerminateDevice.c)
 *     ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C002F4B0 (-WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00307E0 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C00509D0 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 *     ?WaitOnAllDMAReferencesExceptThis@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0056C5C (-WaitOnAllDMAReferencesExceptThis@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchSuspendAdapter @ 0x1C00795E0 (VidSchSuspendAdapter.c)
 * Callees:
 *     VidSchiInterlockedReadUlong @ 0x1C00035EC (VidSchiInterlockedReadUlong.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AX0@Z@Z @ 0x1C0003618 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     VidSchiClearFlipDevice @ 0x1C0003658 (VidSchiClearFlipDevice.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0003ED4 (VidSchiMarkDeviceAsError.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     VidSchiWaitFlushCompletion @ 0x1C0077804 (VidSchiWaitFlushCompletion.c)
 */

__int64 __fastcall VidSchFlushDevice(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v7; // r14d
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // rax
  union _LARGE_INTEGER v11; // [rsp+28h] [rbp-69h]
  _QWORD v12[20]; // [rsp+38h] [rbp-59h] BYREF

  v4 = 0;
  if ( a1 && a2 )
  {
    v7 = *a2;
    if ( *a2 == 9 )
    {
      *(_DWORD *)(a1 + 1128) = 1;
      VidSchiMarkDeviceAsError(a1, 14);
    }
    v8 = *(_QWORD *)(a1 + 32);
    VidSchRundownUnorderedWaiter<_VIDSCH_DEVICE>(a1, v8, *a2, a4, v11);
    if ( (v7 & 1) != 0 )
    {
      if ( (unsigned int)VidSchiInterlockedReadUlong((KSPIN_LOCK *)(v8 + 1872), (_DWORD *)(a1 + 1012)) )
      {
        memset(v12, 0, sizeof(v12));
        LODWORD(v12[4]) |= 8u;
        LODWORD(v12[2]) = 1;
        v12[5] = a1 + 1012;
        VidSchiWaitFlushCompletion((struct _VIDSCH_GLOBAL *)v8);
      }
      if ( *(_DWORD *)(a1 + 1008) )
      {
        memset(v12, 0, sizeof(v12));
        LODWORD(v12[4]) |= 8u;
        LODWORD(v12[2]) = 1;
        v12[5] = a1 + 1008;
        VidSchiWaitFlushCompletion((struct _VIDSCH_GLOBAL *)v8);
      }
      if ( *(_DWORD *)(a1 + 1000) )
      {
        memset(v12, 0, sizeof(v12));
        LODWORD(v12[4]) |= 8u;
        LODWORD(v12[2]) = 3;
        v12[5] = a1 + 1000;
        VidSchiWaitFlushCompletion((struct _VIDSCH_GLOBAL *)v8);
      }
      if ( v7 != 3 )
      {
        VidSchiClearFlipDevice((struct _VIDSCH_GLOBAL *)v8, a1, 9);
        VidSchiInterlockedReadUlong((KSPIN_LOCK *)(v8 + 1872), (_DWORD *)(a1 + 1000));
      }
    }
    LOBYTE(v4) = v7 >= 7;
    result = 0LL;
    *(_DWORD *)(a1 + 1124) = v4;
  }
  else
  {
    v10 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v10);
    return 3221225485LL;
  }
  return result;
}
