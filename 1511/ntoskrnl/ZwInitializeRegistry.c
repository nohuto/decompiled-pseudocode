/*
 * XREFs of ZwInitializeRegistry @ 0x140152460
 * Callers:
 *     NtInitializeRegistry @ 0x14050C454 (NtInitializeRegistry.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwInitializeRegistry(USHORT Flag)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(Flag, v1, v2);
}
