/*
 * XREFs of ZwLoadKey2 @ 0x14015BC00
 * Callers:
 *     BiLoadHive @ 0x14053BB80 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwLoadKey2(
        POBJECT_ATTRIBUTES KeyObjectAttributes,
        POBJECT_ATTRIBUTES FileObjectAttributes,
        ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyObjectAttributes, FileObjectAttributes, *(_QWORD *)&Flags);
}
