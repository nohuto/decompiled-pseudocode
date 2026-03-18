/*
 * XREFs of FreeMessageList @ 0x1C00DC980
 * Callers:
 *     <none>
 * Callees:
 *     DelQEntry @ 0x1C0064CC4 (DelQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00DC9C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 */

__int64 __fastcall FreeMessageList(struct tagQMSG **a1)
{
  struct tagQMSG *i; // rbx
  __int64 result; // rax

  for ( i = *a1; i; i = *a1 )
  {
    CleanEventMessage(i);
    result = DelQEntry((__int64)a1, (__int64 *)i, 1);
  }
  return result;
}
