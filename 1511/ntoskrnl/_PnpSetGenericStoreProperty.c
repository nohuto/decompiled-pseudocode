/*
 * XREFs of _PnpSetGenericStoreProperty @ 0x14045CC44
 * Callers:
 *     _PnpSetObjectPropertyWorker @ 0x14045C6A0 (_PnpSetObjectPropertyWorker.c)
 *     PiDqIrpPropertySet @ 0x14050DD30 (PiDqIrpPropertySet.c)
 * Callees:
 *     _PnpSetPropertyWorker @ 0x14045CE24 (_PnpSetPropertyWorker.c)
 *     _PnpDeletePropertyWorker @ 0x1404EBCF8 (_PnpDeletePropertyWorker.c)
 */

__int64 __fastcall PnpSetGenericStoreProperty(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  if ( a5 )
    return PnpSetPropertyWorker(a1, a2, a3);
  else
    return PnpDeletePropertyWorker(a1);
}
