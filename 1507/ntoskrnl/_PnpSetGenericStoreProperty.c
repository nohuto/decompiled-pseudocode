/*
 * XREFs of _PnpSetGenericStoreProperty @ 0x140557FEC
 * Callers:
 *     _PnpSetObjectPropertyWorker @ 0x1404D8C64 (_PnpSetObjectPropertyWorker.c)
 *     PiDqIrpPropertySet @ 0x1405B2FC8 (PiDqIrpPropertySet.c)
 * Callees:
 *     _PnpSetPropertyWorker @ 0x1404DAFEC (_PnpSetPropertyWorker.c)
 *     _PnpDeletePropertyWorker @ 0x140563ED4 (_PnpDeletePropertyWorker.c)
 */

__int64 __fastcall PnpSetGenericStoreProperty(
        __int64 *a1,
        char *a2,
        const wchar_t *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7)
{
  if ( a5 )
    return PnpSetPropertyWorker(a1, a2, a3, a4, a5, a6, a7);
  else
    return PnpDeletePropertyWorker(a1);
}
