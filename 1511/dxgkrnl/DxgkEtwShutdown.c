/*
 * XREFs of DxgkEtwShutdown @ 0x1C001DD0C
 * Callers:
 *     DxgkUnload @ 0x1C0142B60 (DxgkUnload.c)
 * Callees:
 *     McGenEventUnregister @ 0x1C001DEBC (McGenEventUnregister.c)
 */

ULONG __fastcall DxgkEtwShutdown(ULONGLONG *a1)
{
  ULONG result; // eax

  result = McGenEventUnregister(a1);
  Microsoft_Windows_DxgKrnlHandle = 0LL;
  return result;
}
