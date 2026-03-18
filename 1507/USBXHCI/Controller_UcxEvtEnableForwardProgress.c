/*
 * XREFs of Controller_UcxEvtEnableForwardProgress @ 0x1C004F230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_UcxEvtEnableForwardProgress(__int64 a1)
{
  *(_BYTE *)((*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
               WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
               a1,
               off_1C00400B8)
           + 272) = 1;
  return 0LL;
}
