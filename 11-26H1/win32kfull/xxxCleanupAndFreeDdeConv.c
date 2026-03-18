/*
 * XREFs of xxxCleanupAndFreeDdeConv @ 0x1402CDDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x14004BA00 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxFreeDdeConv @ 0x1402CE020 (xxxFreeDdeConv.c)
 */

__int64 __fastcall xxxCleanupAndFreeDdeConv(struct tagDDECONV *a1)
{
  struct tagFREELIST *v2; // rcx

  v2 = (struct tagFREELIST *)*((_QWORD *)a1 + 9);
  if ( v2 )
  {
    FreeListFree(v2);
    *((_QWORD *)a1 + 9) = 0LL;
  }
  return xxxFreeDdeConv(a1);
}
