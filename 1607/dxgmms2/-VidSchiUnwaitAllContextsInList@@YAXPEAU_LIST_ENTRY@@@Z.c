/*
 * XREFs of ?VidSchiUnwaitAllContextsInList@@YAXPEAU_LIST_ENTRY@@@Z @ 0x1C00224B8
 * Callers:
 *     VidSchiUnwaitAllContexts @ 0x1C00258D4 (VidSchiUnwaitAllContexts.c)
 * Callees:
 *     VidSchiUnwaitContext @ 0x1C000D158 (VidSchiUnwaitContext.c)
 */

void __fastcall VidSchiUnwaitAllContextsInList(struct _LIST_ENTRY *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _LIST_ENTRY **p_Blink; // rcx

  while ( a1->Flink != a1 )
  {
    p_Blink = &a1->Flink[-1].Blink;
    *((_DWORD *)p_Blink + 44) = 0;
    VidSchiUnwaitContext((__int64)p_Blink, 0x5CB7u, a3, a4);
  }
}
