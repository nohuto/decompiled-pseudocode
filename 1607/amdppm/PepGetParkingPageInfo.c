/*
 * XREFs of PepGetParkingPageInfo @ 0x1C001CC40
 * Callers:
 *     PepDevicePowerControlCallback @ 0x1C0005450 (PepDevicePowerControlCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PepGetParkingPageInfo(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+38h] [rbp-20h]
  __int64 v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  LODWORD(v4) = *(_DWORD *)(a1 + 56);
  v7 = 24;
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, int *))HalDispatchTable->HalQuerySystemInformation)(
             29LL,
             24LL,
             &v4,
             &v7);
  if ( (int)result >= 0 )
  {
    *a2 = v5;
    a2[1] = v6;
  }
  return result;
}
