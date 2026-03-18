/*
 * XREFs of ZwSetInformationKey @ 0x14015CD20
 * Callers:
 *     CmpDoReDoSetKeyUserFlags @ 0x140611AA0 (CmpDoReDoSetKeyUserFlags.c)
 *     CmpDoReDoSetLastWriteTime @ 0x140611B00 (CmpDoReDoSetLastWriteTime.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetInformationKey(
        HANDLE KeyHandle,
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
        PVOID KeySetInformation,
        ULONG KeySetInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, *(_QWORD *)&KeySetInformationClass, KeySetInformation);
}
