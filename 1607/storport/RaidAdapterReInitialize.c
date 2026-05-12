/*
 * XREFs of RaidAdapterReInitialize @ 0x1C002783C
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000A01C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C0002CE0 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0002EC4 (RaidAdapterAcquireInterruptLock.c)
 *     RaCallMiniportFindAdapter @ 0x1C000D800 (RaCallMiniportFindAdapter.c)
 *     RaCallMiniportHwInitialize @ 0x1C000E45C (RaCallMiniportHwInitialize.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterReInitialize(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 result; // rax
  KIRQL v7; // bl
  int v8; // esi
  char v9; // cl
  GUID v10; // [rsp+20h] [rbp-28h] BYREF

  v4 = a1 + 296;
  strcpy((char *)&v10, "wakeup=1");
  result = RaCallMiniportFindAdapter((PVOID *)(a1 + 296), &v10, a3, a4);
  if ( (int)result >= 0 )
  {
    *(_BYTE *)(a1 + 104) |= 0x10u;
    v7 = RaidAdapterAcquireInterruptLock(a1);
    v8 = RaCallMiniportHwInitialize(v4);
    RaidAdapterReleaseInterruptLock(a1, v7);
    v9 = *(_BYTE *)(a1 + 104) & 0xEF;
    *(_BYTE *)(a1 + 104) = v9;
    if ( v8 >= 0 )
      *(_BYTE *)(a1 + 104) = v9 | 1;
    return (unsigned int)v8;
  }
  return result;
}
