/*
 * XREFs of VidSchFlushDevice @ 0x1C003C560
 * Callers:
 *     VidSchTerminateDevice @ 0x1C0038790 (VidSchTerminateDevice.c)
 *     ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00473AC (-WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C004CF30 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C004D668 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     VidSchSuspendAdapter @ 0x1C005FD40 (VidSchSuspendAdapter.c)
 *     ?WaitOnAllDMAReferencesExceptThis@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C007E354 (-WaitOnAllDMAReferencesExceptThis@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     VidSchiInterlockedReadUlong @ 0x1C00106DC (VidSchiInterlockedReadUlong.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AX0@Z@Z @ 0x1C0010708 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     VidSchiClearFlipDevice @ 0x1C0010990 (VidSchiClearFlipDevice.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0013E38 (VidSchiMarkDeviceAsError.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     VidSchiWaitFlushCompletion @ 0x1C003C6BC (VidSchiWaitFlushCompletion.c)
 */

__int64 __fastcall VidSchFlushDevice(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v7; // r14d
  __int64 v8; // r15
  int v9; // eax
  _DWORD *v10; // rsi
  __int64 result; // rax
  __int64 v12; // rax
  union _LARGE_INTEGER v13; // [rsp+28h] [rbp-79h]
  _QWORD v14[20]; // [rsp+38h] [rbp-69h] BYREF

  v4 = 0;
  if ( a1 && a2 )
  {
    v7 = *a2;
    if ( *a2 == 11 )
    {
      *(_DWORD *)(a1 + 1256) = 1;
      VidSchiMarkDeviceAsError(a1, 14);
    }
    v8 = *(_QWORD *)(a1 + 32);
    VidSchRundownUnorderedWaiter<_VIDSCH_DEVICE>(a1, v8, *a2, a4, v13);
    if ( (v7 & 1) != 0 )
    {
      if ( (unsigned int)VidSchiInterlockedReadUlong((KSPIN_LOCK *)(v8 + 1824), (_DWORD *)(a1 + 1144)) )
      {
        memset(v14, 0, sizeof(v14));
        LODWORD(v14[4]) |= 4u;
        LODWORD(v14[2]) = 1;
        v14[5] = a1 + 1144;
        VidSchiWaitFlushCompletion(v8, v14, 29LL);
      }
      v9 = *a2;
      v10 = (_DWORD *)(a1 + 1136);
      if ( ((v9 - 3) & 0xFFFFFFFD) == 0 )
        v10 = (_DWORD *)(a1 + 1140);
      if ( *v10 )
      {
        memset(v14, 0, sizeof(v14));
        LODWORD(v14[4]) |= 4u;
        LODWORD(v14[2]) = 1;
        v14[5] = v10;
        VidSchiWaitFlushCompletion(v8, v14, 24LL);
      }
      if ( *(_DWORD *)(a1 + 1128) )
      {
        memset(v14, 0, sizeof(v14));
        LODWORD(v14[4]) |= 4u;
        LODWORD(v14[2]) = 3;
        v14[5] = a1 + 1128;
        VidSchiWaitFlushCompletion(v8, v14, 23LL);
      }
      if ( v7 != 5 )
      {
        VidSchiClearFlipDevice((struct _VIDSCH_GLOBAL *)v8, a1, 9);
        VidSchiInterlockedReadUlong((KSPIN_LOCK *)(v8 + 1824), (_DWORD *)(a1 + 1128));
      }
    }
    LOBYTE(v4) = v7 >= 9;
    result = 0LL;
    *(_DWORD *)(a1 + 1252) = v4;
  }
  else
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v12);
    return 3221225485LL;
  }
  return result;
}
