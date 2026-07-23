/*
 * XREFs of _PnpInterfaceClassRaisePropertyChangeEventWorker @ 0x1406DC24C
 * Callers:
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1404E9784 (_PnpObjectRaisePropertyChangeEvent.c)
 * Callees:
 *     _PnpNotifyDerivedKeys @ 0x1404E96B8 (_PnpNotifyDerivedKeys.c)
 */

_UNKNOWN **__fastcall PnpInterfaceClassRaisePropertyChangeEventWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void (__fastcall *a6)(__int64, __int64, __int64))
{
  _QWORD v9[4]; // [rsp+40h] [rbp-28h] BYREF

  v9[1] = a4;
  v9[0] = a3;
  v9[2] = a5;
  a6(a1, a2, 4LL);
  return PnpNotifyDerivedKeys(
           a1,
           a2,
           4u,
           a5,
           (__int64)&off_14025D730,
           1u,
           (__int64)v9,
           (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64))a6);
}
