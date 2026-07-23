/*
 * XREFs of _PnpSetGenericStoreProperty @ 0x140512430
 * Callers:
 *     _PnpSetObjectPropertyWorker @ 0x140511864 (_PnpSetObjectPropertyWorker.c)
 *     PiDqIrpPropertySet @ 0x140631994 (PiDqIrpPropertySet.c)
 * Callees:
 *     _PnpDeletePropertyWorker @ 0x1404D2D04 (_PnpDeletePropertyWorker.c)
 *     _PnpSetPropertyWorker @ 0x140512B14 (_PnpSetPropertyWorker.c)
 */

__int64 __fastcall PnpSetGenericStoreProperty(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  __int64 v8; // [rsp+28h] [rbp-20h]

  if ( a5 )
    return PnpSetPropertyWorker(a1, a2, a3);
  else
    return PnpDeletePropertyWorker(a1, a2, a3, a4, 0, v8, a7);
}
