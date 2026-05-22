/*
 * XREFs of __tailMerge_ext_ms_win_ntuser_rim_l1_1_1_dll @ 0x18009E692
 * Callers:
 *     __imp_load_RIMSetTestModeStatus @ 0x18009E686 (__imp_load_RIMSetTestModeStatus.c)
 *     __imp_load_RIMDeviceIoControl @ 0x18009E70B (__imp_load_RIMDeviceIoControl.c)
 *     __imp_load_RIMFreeInputBuffer @ 0x18009E717 (__imp_load_RIMFreeInputBuffer.c)
 *     __imp_load_RIMRegisterForInput @ 0x18009E723 (__imp_load_RIMRegisterForInput.c)
 *     __imp_load_RIMReadInput @ 0x18009E72F (__imp_load_RIMReadInput.c)
 *     __imp_load_RIMOnPnpNotification @ 0x18009E73B (__imp_load_RIMOnPnpNotification.c)
 *     __imp_load_RIMOnTimerNotification @ 0x18009E747 (__imp_load_RIMOnTimerNotification.c)
 *     __imp_load_RIMGetSourceProcessId @ 0x18009E753 (__imp_load_RIMGetSourceProcessId.c)
 *     __imp_load_RIMGetPhysicalDeviceRect @ 0x18009E75F (__imp_load_RIMGetPhysicalDeviceRect.c)
 *     __imp_load_RIMGetDeviceProperties @ 0x18009E76B (__imp_load_RIMGetDeviceProperties.c)
 *     __imp_load_RIMGetDevicePreparsedData @ 0x18009E777 (__imp_load_RIMGetDevicePreparsedData.c)
 *     __imp_load_InitializeInputDeviceInjection @ 0x18009E91E (__imp_load_InitializeInputDeviceInjection.c)
 *     __imp_load_InjectPointerInput @ 0x18009E92A (__imp_load_InjectPointerInput.c)
 *     __imp_load_RemoveInjectionDevice @ 0x18009E936 (__imp_load_RemoveInjectionDevice.c)
 *     __imp_load_InitializePointerDeviceInjectionEx @ 0x18009E942 (__imp_load_InitializePointerDeviceInjectionEx.c)
 *     __imp_load_InjectDeviceInput @ 0x18009E94E (__imp_load_InjectDeviceInput.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18002FD40 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_ntuser_rim_l1_1_1_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_rim_l1_1_1_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
