/*
 * XREFs of ZwCreateDirectoryObjectEx @ 0x14015B020
 * Callers:
 *     ObpInitializeRootNamespace @ 0x140579974 (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x140579BE8 (ObpCreateDosDevicesDirectory.c)
 *     ObCreateSiloRootDirectory @ 0x1406E6004 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateDirectoryObjectEx(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
