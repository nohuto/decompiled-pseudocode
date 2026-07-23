/*
 * XREFs of PnpSendIrp @ 0x140007E4C
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x140007D58 (PnpGetRelatedTargetDevice.c)
 *     PnpStartDevice @ 0x1400AD1E4 (PnpStartDevice.c)
 *     PnpQueryDeviceRelations @ 0x1403F0A08 (PnpQueryDeviceRelations.c)
 * Callees:
 *     PnpSetDeviceAffinityThread @ 0x140007EE0 (PnpSetDeviceAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400C6EE4 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PnpAsynchronousCall @ 0x1403F0A74 (PnpAsynchronousCall.c)
 *     IopSynchronousCall @ 0x1404E8B2C (IopSynchronousCall.c)
 */

__int64 __fastcall PnpSendIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // ebp
  int v9; // r9d
  unsigned int v10; // eax
  unsigned int v11; // ebx
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  v8 = PnpSetDeviceAffinityThread(a1, &PreviousAffinity);
  if ( a4 )
    v10 = PnpAsynchronousCall(a1, a2, a4, a5);
  else
    v10 = IopSynchronousCall(a1, a2, -1073741637, v9, a5);
  v11 = v10;
  if ( v8 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v11;
}
