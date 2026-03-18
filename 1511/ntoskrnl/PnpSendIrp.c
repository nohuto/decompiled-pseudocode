/*
 * XREFs of PnpSendIrp @ 0x14001ACF4
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x14001AC00 (PnpGetRelatedTargetDevice.c)
 *     PnpStartDevice @ 0x1401077C4 (PnpStartDevice.c)
 *     PnpQueryDeviceRelations @ 0x1403D18C4 (PnpQueryDeviceRelations.c)
 * Callees:
 *     PnpSetDeviceAffinityThread @ 0x14001AD94 (PnpSetDeviceAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400FF1C8 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PnpAsynchronousCall @ 0x1403D2000 (PnpAsynchronousCall.c)
 *     IopSynchronousCall @ 0x1403D2C78 (IopSynchronousCall.c)
 */

__int64 __fastcall PnpSendIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // ebp
  unsigned int v9; // eax
  unsigned int v10; // ebx
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  v8 = PnpSetDeviceAffinityThread(a1, &PreviousAffinity);
  if ( a4 )
    v9 = PnpAsynchronousCall(a1, a2, a4, a5);
  else
    v9 = IopSynchronousCall(a1, a2, -1073741637, 0, a5);
  v10 = v9;
  if ( v8 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v10;
}
