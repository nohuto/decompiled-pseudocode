/*
 * XREFs of ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C00387D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000C280 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIIsNamedChildPresent @ 0x1C000D680 (AMLIIsNamedChildPresent.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5WarmEjectSubPhase1(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rcx
  unsigned int v4; // eax
  int v5; // esi
  int v6; // eax
  _DWORD v8[3]; // [rsp+50h] [rbp-38h]
  _DWORD v9[5]; // [rsp+5Ch] [rbp-2Ch] BYREF

  v1 = *(_QWORD **)(a1 + 40);
  v3 = *(int *)(a1 + 104);
  v8[0] = 0;
  v8[1] = 0;
  v4 = *(unsigned __int8 *)(a1 + 56);
  v9[3] = 0;
  v8[2] = 826951007;
  *(_DWORD *)(a1 + 212) = (v4 >> 5) & 4;
  qmemcpy(v9, "_EJ2_EJ3_EJ4", 12);
  v5 = v8[v3];
  if ( !AMLIIsNamedChildPresent(v1[88], v5) )
    KeBugCheckEx(0xA3u, 1uLL, 0xC257BuLL, 0LL, 0LL);
  v6 = ACPIGet(v1, v5, 546308096, 1LL, 4, (__int64)ACPIDeviceCompleteGenericPhase, a1, 0LL, 0LL);
  if ( v6 == 259 )
    return 259LL;
  ACPIDeviceCompleteGenericPhase(0LL, v6, 0LL, a1);
  return 0LL;
}
