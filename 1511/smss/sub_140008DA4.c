/*
 * XREFs of sub_140008DA4 @ 0x140008DA4
 * Callers:
 *     sub_140008270 @ 0x140008270 (sub_140008270.c)
 *     sub_140008D78 @ 0x140008D78 (sub_140008D78.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall sub_140008DA4(struct _UNICODE_STRING *BaseAddress)
{
  void *v2; // r8
  BOOLEAN result; // al

  if ( BaseAddress )
  {
    RtlFreeUnicodeString(BaseAddress + 2);
    v2 = *(void **)&BaseAddress[3].Length;
    if ( v2 )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v2);
    return RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
  }
  return result;
}
