/*
 * XREFs of ??0CDwmEventManager@DwmCoreAsimov@@AEAA@PEBU_TlgProvider_t@@@Z @ 0x180096B84
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x180042840 (-PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x180060F50 (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 * Callees:
 *     ??0CDwmEventManager_Private@DwmCoreAsimov@@QEAA@PEBU_TlgProvider_t@@@Z @ 0x180096C98 (--0CDwmEventManager_Private@DwmCoreAsimov@@QEAA@PEBU_TlgProvider_t@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

DwmCoreAsimov::CDwmEventManager_Private **__fastcall DwmCoreAsimov::CDwmEventManager::CDwmEventManager(
        DwmCoreAsimov::CDwmEventManager *this,
        const struct _TlgProvider_t *a2)
{
  DwmCoreAsimov::CDwmEventManager_Private *v2; // rsi
  DWORD CurrentThreadId; // eax
  DwmCoreAsimov::CDwmEventManager_Private *v4; // rax
  const struct _TlgProvider_t *v5; // rdx
  DwmCoreAsimov::CDwmEventManager_Private **result; // rax

  v2 = 0LL;
  dword_180195F10 = 8;
  qword_180195F18 = 0LL;
  qword_180195F08 = (__int64)&DwmCoreAsimov::HighErrorRateEventData::`vftable';
  qword_180195F20 = 0LL;
  qword_180195F28 = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  unk_180195EFC = 0LL;
  dword_180195EF8 = CurrentThreadId;
  qword_180195F20 = time(0LL);
  qword_180195F28 = 0LL;
  qword_180195F18 = 0LL;
  v4 = (DwmCoreAsimov::CDwmEventManager_Private *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                    WPF::g_pProcessHeap,
                                                    240LL);
  if ( v4 )
    v2 = (DwmCoreAsimov::CDwmEventManager_Private *)DwmCoreAsimov::CDwmEventManager_Private::CDwmEventManager_Private(
                                                      v4,
                                                      v5);
  result = &qword_180195EF0;
  qword_180195EF0 = v2;
  return result;
}
