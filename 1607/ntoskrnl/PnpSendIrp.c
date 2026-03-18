/*
 * XREFs of PnpSendIrp @ 0x1400082D8
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x1400081E4 (PnpGetRelatedTargetDevice.c)
 *     PnpStartDevice @ 0x1400AEC7C (PnpStartDevice.c)
 *     PnpQueryDeviceRelations @ 0x1403F1B44 (PnpQueryDeviceRelations.c)
 * Callees:
 *     PnpSetDeviceAffinityThread @ 0x14000836C (PnpSetDeviceAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400C9044 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     PnpAsynchronousCall @ 0x1403F1BB0 (PnpAsynchronousCall.c)
 *     IopSynchronousCall @ 0x140505B9C (IopSynchronousCall.c)
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
