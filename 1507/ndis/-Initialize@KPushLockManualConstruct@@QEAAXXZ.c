/*
 * XREFs of ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C009A81C
 * Callers:
 *     DriverEntry @ 0x1C01023B0 (DriverEntry.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x1C01039B4 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall KPushLockManualConstruct::Initialize(KPushLockManualConstruct *this)
{
  *(_QWORD *)this = 0LL;
}
