/*
 * XREFs of DxgkEtwShutdown @ 0x1C0022E1C
 * Callers:
 *     DxgkUnload @ 0x1C0165770 (DxgkUnload.c)
 * Callees:
 *     McGenEventUnregister @ 0x1C0022FCC (McGenEventUnregister.c)
 */

ULONG __fastcall DxgkEtwShutdown(ULONGLONG *a1)
{
  ULONG result; // eax

  result = McGenEventUnregister(a1);
  Microsoft_Windows_DxgKrnlHandle = 0LL;
  return result;
}
