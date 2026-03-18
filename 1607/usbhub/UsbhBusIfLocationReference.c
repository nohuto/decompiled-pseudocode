/*
 * XREFs of UsbhBusIfLocationReference @ 0x1C001A2B0
 * Callers:
 *     UsbhPdoPnp_QueryInterface @ 0x1C0016910 (UsbhPdoPnp_QueryInterface.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

_DWORD *__fastcall UsbhBusIfLocationReference(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *result; // rax

  result = FdoExt(*(_QWORD *)(a1 + 1176), a2, a3, a4);
  _InterlockedIncrement(result + 855);
  return result;
}
