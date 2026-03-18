/*
 * XREFs of ??0VIDMM_RECYCLE_HEAP_MGR@@QEAA@XZ @ 0x1C005ABE0
 * Callers:
 *     ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C005416C (-Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z @ 0x1C0011DE8 (--0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z.c)
 */

VIDMM_RECYCLE_HEAP_MGR *__fastcall VIDMM_RECYCLE_HEAP_MGR::VIDMM_RECYCLE_HEAP_MGR(char *DeferredContext)
{
  VIDMM_RECYCLE_HEAP_MGR *result; // rax

  *(_QWORD *)DeferredContext = &VIDMM_RECYCLE_HEAP_MGR::`vftable';
  *((_QWORD *)DeferredContext + 1) = 0LL;
  *((_DWORD *)DeferredContext + 4) = 1;
  *((_QWORD *)DeferredContext + 3) = DeferredContext;
  *((_QWORD *)DeferredContext + 4) = 0LL;
  *((_QWORD *)DeferredContext + 6) = DeferredContext + 40;
  *((_QWORD *)DeferredContext + 5) = DeferredContext + 40;
  *((_QWORD *)DeferredContext + 7) = 0LL;
  *((_QWORD *)DeferredContext + 8) = 0LL;
  *((_QWORD *)DeferredContext + 9) = 0LL;
  *((_DWORD *)DeferredContext + 20) = 2;
  *((_QWORD *)DeferredContext + 11) = DeferredContext;
  *((_QWORD *)DeferredContext + 12) = 0LL;
  *((_QWORD *)DeferredContext + 14) = DeferredContext + 104;
  *((_QWORD *)DeferredContext + 13) = DeferredContext + 104;
  *((_QWORD *)DeferredContext + 15) = 0LL;
  *((_QWORD *)DeferredContext + 16) = 0LL;
  *((_QWORD *)DeferredContext + 17) = 0LL;
  *((_DWORD *)DeferredContext + 36) = 3;
  *((_QWORD *)DeferredContext + 19) = DeferredContext;
  *((_QWORD *)DeferredContext + 20) = 0LL;
  *((_QWORD *)DeferredContext + 22) = DeferredContext + 168;
  *((_QWORD *)DeferredContext + 21) = DeferredContext + 168;
  *((_QWORD *)DeferredContext + 23) = 0LL;
  *((_QWORD *)DeferredContext + 24) = 0LL;
  *((_QWORD *)DeferredContext + 25) = 0LL;
  *((_DWORD *)DeferredContext + 52) = 4;
  *((_QWORD *)DeferredContext + 27) = DeferredContext;
  *((_QWORD *)DeferredContext + 28) = 0LL;
  *((_QWORD *)DeferredContext + 30) = DeferredContext + 232;
  *((_QWORD *)DeferredContext + 29) = DeferredContext + 232;
  *((_QWORD *)DeferredContext + 31) = 0LL;
  *((_QWORD *)DeferredContext + 32) = 0LL;
  *((_QWORD *)DeferredContext + 33) = 0LL;
  *((_DWORD *)DeferredContext + 68) = 5;
  *((_QWORD *)DeferredContext + 35) = DeferredContext;
  *((_QWORD *)DeferredContext + 36) = 0LL;
  *((_QWORD *)DeferredContext + 38) = DeferredContext + 296;
  *((_QWORD *)DeferredContext + 37) = DeferredContext + 296;
  *((_QWORD *)DeferredContext + 39) = 0LL;
  *((_QWORD *)DeferredContext + 40) = 0LL;
  *((_QWORD *)DeferredContext + 41) = 0LL;
  *((_DWORD *)DeferredContext + 84) = 6;
  *((_QWORD *)DeferredContext + 43) = DeferredContext;
  *((_QWORD *)DeferredContext + 44) = 0LL;
  *((_QWORD *)DeferredContext + 46) = DeferredContext + 360;
  *((_QWORD *)DeferredContext + 45) = DeferredContext + 360;
  *((_QWORD *)DeferredContext + 47) = 0LL;
  *((_QWORD *)DeferredContext + 48) = 0LL;
  *((_QWORD *)DeferredContext + 49) = 0LL;
  *((_QWORD *)DeferredContext + 50) = 0LL;
  *((_QWORD *)DeferredContext + 51) = 0LL;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)(DeferredContext + 416), -1);
  *((_DWORD *)DeferredContext + 160) = 0;
  *((_DWORD *)DeferredContext + 161) = 0;
  *((_QWORD *)DeferredContext + 85) = 1LL;
  *((_DWORD *)DeferredContext + 172) = 0;
  KeInitializeTimer((PKTIMER)(DeferredContext + 480));
  KeInitializeDpc((PRKDPC)(DeferredContext + 544), (PKDEFERRED_ROUTINE)VidMmRangeCurationDpc, DeferredContext);
  *((_QWORD *)DeferredContext + 79) = DeferredContext;
  *((_QWORD *)DeferredContext + 78) = VidMmRangeCurationThread;
  *((_QWORD *)DeferredContext + 76) = 0LL;
  *((_QWORD *)DeferredContext + 82) = DeferredContext + 648;
  *((_QWORD *)DeferredContext + 81) = DeferredContext + 648;
  *((_QWORD *)DeferredContext + 84) = DeferredContext + 664;
  *((_QWORD *)DeferredContext + 83) = DeferredContext + 664;
  result = (VIDMM_RECYCLE_HEAP_MGR *)DeferredContext;
  *((_QWORD *)DeferredContext + 88) = 0LL;
  *((_QWORD *)DeferredContext + 89) = 0LL;
  return result;
}
