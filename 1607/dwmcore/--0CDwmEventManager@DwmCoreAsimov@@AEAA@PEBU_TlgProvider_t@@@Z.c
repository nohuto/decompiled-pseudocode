/*
 * XREFs of ??0CDwmEventManager@DwmCoreAsimov@@AEAA@PEBU_TlgProvider_t@@@Z @ 0x1800B4B28
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18007A6E0 (-PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800B7F34 (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 * Callees:
 *     ??0CDwmEventManager_Private@DwmCoreAsimov@@QEAA@PEBU_TlgProvider_t@@@Z @ 0x1800B48E4 (--0CDwmEventManager_Private@DwmCoreAsimov@@QEAA@PEBU_TlgProvider_t@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

DwmCoreAsimov::CDwmEventManager_Private **__fastcall DwmCoreAsimov::CDwmEventManager::CDwmEventManager(
        DwmCoreAsimov::CDwmEventManager *this,
        const struct _TlgProvider_t *a2)
{
  DwmCoreAsimov::CDwmEventManager_Private *v2; // rbx
  DWORD CurrentThreadId; // eax
  DwmCoreAsimov::CDwmEventManager_Private *v4; // rax
  const struct _TlgProvider_t *v5; // rdx
  int v6; // r8d

  v2 = 0LL;
  dword_1801F02B0 = 8;
  qword_1801F02B8 = 0LL;
  qword_1801F02A8 = (__int64)&DwmCoreAsimov::HighErrorRateEventData::`vftable';
  qword_1801F02C0 = 0LL;
  qword_1801F02C8 = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  unk_1801F029C = 0LL;
  dword_1801F0298 = CurrentThreadId;
  qword_1801F02C0 = time(0LL);
  qword_1801F02C8 = 0LL;
  qword_1801F02B8 = 0LL;
  v4 = (DwmCoreAsimov::CDwmEventManager_Private *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                    WPF::g_pProcessHeap,
                                                    240LL);
  if ( v4 )
    v2 = (DwmCoreAsimov::CDwmEventManager_Private *)DwmCoreAsimov::CDwmEventManager_Private::CDwmEventManager_Private(
                                                      v4,
                                                      v5,
                                                      v6);
  qword_1801F0290 = v2;
  return &qword_1801F0290;
}
