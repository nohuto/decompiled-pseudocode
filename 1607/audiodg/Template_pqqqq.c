/*
 * XREFs of Template_pqqqq @ 0x140014B50
 * Callers:
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140014330 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x14003A5B0 (-GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140018370 (__security_check_cookie.c)
 */

ULONG __fastcall Template_pqqqq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+20h] [rbp-68h] BYREF
  int *v9; // [rsp+30h] [rbp-58h]
  __int64 v10; // [rsp+38h] [rbp-50h]
  __int64 *v11; // [rsp+40h] [rbp-48h]
  __int64 v12; // [rsp+48h] [rbp-40h]
  __int64 *v13; // [rsp+50h] [rbp-38h]
  __int64 v14; // [rsp+58h] [rbp-30h]
  __int64 *v15; // [rsp+60h] [rbp-28h]
  __int64 v16; // [rsp+68h] [rbp-20h]
  __int64 v17; // [rsp+A0h] [rbp+18h] BYREF
  int v18; // [rsp+A8h] [rbp+20h] BYREF

  v18 = a4;
  v17 = a3;
  v8.Ptr = (ULONGLONG)&v17;
  *(_QWORD *)&v8.Size = 8LL;
  v9 = &v18;
  v10 = 4LL;
  v11 = &a5;
  v13 = &a6;
  v15 = &a7;
  v12 = 4LL;
  v14 = 4LL;
  v16 = 4LL;
  return EventWrite(Microsoft_Windows_AudioHandle, a2, 5u, &v8);
}
