/*
 * XREFs of ??0CDwmEventManager@DwmCoreAsimov@@AEAA@PEBU_TlgProvider_t@@@Z @ 0x180069910
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x180073480 (-PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800B0FEC (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??0CDwmEventManager_Private@DwmCoreAsimov@@QEAA@PEBU_TlgProvider_t@@@Z @ 0x180069744 (--0CDwmEventManager_Private@DwmCoreAsimov@@QEAA@PEBU_TlgProvider_t@@@Z.c)
 */

DwmCoreAsimov::CDwmEventManager_Private **__fastcall DwmCoreAsimov::CDwmEventManager::CDwmEventManager(
        DwmCoreAsimov::CDwmEventManager *this,
        const struct _TlgProvider_t *a2)
{
  DwmCoreAsimov::CDwmEventManager_Private *v2; // rsi
  DWORD CurrentThreadId; // eax
  DwmCoreAsimov::CDwmEventManager_Private *v4; // rax
  const struct _TlgProvider_t *v5; // rdx
  int v6; // r8d
  DwmCoreAsimov::CDwmEventManager_Private **result; // rax

  v2 = 0LL;
  dword_1801A3F30 = 8;
  qword_1801A3F38 = 0LL;
  qword_1801A3F28 = (__int64)&DwmCoreAsimov::HighErrorRateEventData::`vftable';
  qword_1801A3F40 = 0LL;
  qword_1801A3F48 = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  qword_1801A3F1C = 0LL;
  dword_1801A3F18 = CurrentThreadId;
  qword_1801A3F40 = time(0LL);
  qword_1801A3F48 = 0LL;
  qword_1801A3F38 = 0LL;
  v4 = (DwmCoreAsimov::CDwmEventManager_Private *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                    WPF::g_pProcessHeap,
                                                    240LL);
  if ( v4 )
    v2 = (DwmCoreAsimov::CDwmEventManager_Private *)DwmCoreAsimov::CDwmEventManager_Private::CDwmEventManager_Private(
                                                      v4,
                                                      v5,
                                                      v6);
  result = &qword_1801A3F10;
  qword_1801A3F10 = v2;
  return result;
}
