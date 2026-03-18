/*
 * XREFs of DxgkEtwShutdown @ 0x1C001DC4C
 * Callers:
 *     DxgkUnload @ 0x1C013C730 (DxgkUnload.c)
 * Callees:
 *     McGenEventUnregister @ 0x1C001DDFC (McGenEventUnregister.c)
 */

ULONG __fastcall DxgkEtwShutdown(ULONGLONG *a1)
{
  ULONG result; // eax

  result = McGenEventUnregister(a1);
  Microsoft_Windows_DxgKrnlHandle = 0LL;
  return result;
}
