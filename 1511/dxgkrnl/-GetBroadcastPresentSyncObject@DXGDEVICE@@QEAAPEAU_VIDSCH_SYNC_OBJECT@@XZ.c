/*
 * XREFs of ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C013A754
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C007E190 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0085F40 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 */

struct _VIDSCH_SYNC_OBJECT *__fastcall DXGDEVICE::GetBroadcastPresentSyncObject(DXGDEVICE *this)
{
  char *v1; // rbx
  __int64 v3; // rax
  _DWORD v5[20]; // [rsp+40h] [rbp-58h] BYREF

  v1 = (char *)this + 136;
  DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 136));
  if ( !*((_QWORD *)this + 358) )
  {
    memset(v5, 0, sizeof(v5));
    v3 = *((_QWORD *)this + 2);
    v5[0] = 3;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, _DWORD *, _QWORD, _QWORD, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v3 + 400) + 8LL)
                                                                                         + 520LL))(
           *(_QWORD *)(v3 + 408),
           0LL,
           v5,
           0LL,
           0LL,
           (char *)this + 2864,
           0LL) < 0 )
      return 0LL;
  }
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)this + 358);
}
