/*
 * XREFs of DestroyThreadsMessages @ 0x1C00DC900
 * Callers:
 *     <none>
 * Callees:
 *     DelQEntry @ 0x1C0064CC4 (DelQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00DC9C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 */

__int64 __fastcall DestroyThreadsMessages(struct tagQMSG **a1, __int64 a2)
{
  struct tagQMSG *v2; // rbx
  struct tagQMSG *v5; // rsi
  __int64 result; // rax

  v2 = *a1;
  if ( *a1 )
  {
    do
    {
      v5 = *(struct tagQMSG **)v2;
      if ( *((_QWORD *)v2 + 12) == a2 )
      {
        if ( a1[5] == v2 )
          a1[5] = 0LL;
        CleanEventMessage(v2);
        result = DelQEntry((__int64)a1, (__int64 *)v2, 1);
      }
      v2 = v5;
    }
    while ( v5 );
  }
  return result;
}
