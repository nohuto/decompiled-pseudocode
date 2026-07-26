/*
 * XREFs of ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C0097994
 * Callers:
 *     ?ndisSetupDeviceInitialize@@YAXXZ @ 0x1C00FC000 (-ndisSetupDeviceInitialize@@YAXXZ.c)
 *     DriverEntry @ 0x1C00FC3C0 (DriverEntry.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x1C00FD818 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall KPushLockManualConstruct::Initialize(KPushLockManualConstruct *this)
{
  *(_QWORD *)this = 0LL;
}
