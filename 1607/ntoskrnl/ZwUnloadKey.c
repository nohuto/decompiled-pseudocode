/*
 * XREFs of ZwUnloadKey @ 0x14015D2E0
 * Callers:
 *     BiUnloadHiveByName @ 0x140533CB4 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x14053BB80 (BiLoadHive.c)
 *     VrpUnloadDifferencingHive @ 0x140617878 (VrpUnloadDifferencingHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadKey(POBJECT_ATTRIBUTES KeyObjectAttributes)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(KeyObjectAttributes, v1, v2);
}
