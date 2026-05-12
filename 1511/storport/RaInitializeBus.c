/*
 * XREFs of RaInitializeBus @ 0x1C0050EC8
 * Callers:
 *     RaidAdapterConfigureResources @ 0x1C000A6D8 (RaidAdapterConfigureResources.c)
 *     RaidAdapterHack @ 0x1C000AAD8 (RaidAdapterHack.c)
 * Callees:
 *     RaQueryInterface @ 0x1C000AB88 (RaQueryInterface.c)
 */

__int64 __fastcall RaInitializeBus(bool *a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = RaQueryInterface(a2, (__int64)a2, a3, a4, (__int64)(a1 + 8));
  *a1 = (int)result >= 0;
  return result;
}
