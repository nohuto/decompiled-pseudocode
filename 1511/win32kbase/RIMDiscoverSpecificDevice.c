/*
 * XREFs of RIMDiscoverSpecificDevice @ 0x1C00CA27C
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C00065F0 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RIMFreeDev @ 0x1C000F020 (RIMFreeDev.c)
 *     RIMDoOnPnpNotification @ 0x1C00108E0 (RIMDoOnPnpNotification.c)
 *     RIMCreateDev @ 0x1C0011060 (RIMCreateDev.c)
 *     RimInputTypeToDeviceType @ 0x1C007D5E0 (RimInputTypeToDeviceType.c)
 */

__int64 __fastcall RIMDiscoverSpecificDevice(_DWORD *Object, const UNICODE_STRING *a2)
{
  int v4; // eax
  int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v4 = RimInputTypeToDeviceType(Object[19]);
  v5 = RIMCreateDev(Object, v4, a2, 1, 0, 0LL, &v9);
  if ( v5 >= 0 )
  {
    v6 = v9;
    v7 = v9;
    *(_DWORD *)(v9 + 176) |= 1u;
    v5 = RIMDoOnPnpNotification((__int64)Object, v7);
    if ( v5 < 0 )
      RIMFreeDev((__int64)Object, v6);
  }
  return (unsigned int)v5;
}
