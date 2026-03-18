/*
 * XREFs of UsbhBusIfLocationDereference @ 0x1C0027680
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 */

_DWORD *__fastcall UsbhBusIfLocationDereference(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *result; // rax

  result = FdoExt(*(_QWORD *)(a1 + 1176), a2, a3, a4);
  _InterlockedDecrement(result + 855);
  return result;
}
