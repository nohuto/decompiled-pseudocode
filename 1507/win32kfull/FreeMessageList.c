/*
 * XREFs of FreeMessageList @ 0x1C00D98A0
 * Callers:
 *     <none>
 * Callees:
 *     DelQEntry @ 0x1C008C604 (DelQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00D98E0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 */

void __fastcall FreeMessageList(struct tagQMSG **a1)
{
  struct tagQMSG *i; // rbx
  __int64 v3; // r9

  for ( i = *a1; i; i = *a1 )
  {
    CleanEventMessage(i);
    DelQEntry((__int64)a1, (__int64 *)i, 1LL, v3);
  }
}
