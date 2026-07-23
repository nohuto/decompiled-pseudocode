/*
 * XREFs of ZwSetInformationKey @ 0x14015D290
 * Callers:
 *     CmpDoReDoSetKeyUserFlags @ 0x140611B54 (CmpDoReDoSetKeyUserFlags.c)
 *     CmpDoReDoSetLastWriteTime @ 0x140611BB4 (CmpDoReDoSetLastWriteTime.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationKey(
        HANDLE KeyHandle,
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
        PVOID KeySetInformation,
        ULONG KeySetInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
