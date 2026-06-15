/*
 * XREFs of ?APOCatchCoCreateInstance@@YAJAEBU_GUID@@PEAUIUnknown@@K0PEAPEAXPEAJ@Z @ 0x18008BDB0
 * Callers:
 *     ?Init@CAPOExceptionWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x18008C508 (-Init@CAPOExceptionWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall APOCatchCoCreateInstance(
        const struct _GUID *a1,
        struct IUnknown *a2,
        __int64 a3,
        const struct _GUID *a4,
        LPVOID *ppv,
        int *a6)
{
  *a6 = CoCreateInstance(a1, a2, 1u, &GUID_00000000_0000_0000_c000_000000000046, ppv);
  return 0LL;
}
