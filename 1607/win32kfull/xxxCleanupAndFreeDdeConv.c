/*
 * XREFs of xxxCleanupAndFreeDdeConv @ 0x1C01E2C20
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01E1850 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 */

__int64 __fastcall xxxCleanupAndFreeDdeConv(struct tagDDECONV *a1, __int64 a2, __int64 a3)
{
  struct tagFREELIST *v4; // rcx

  v4 = (struct tagFREELIST *)*((_QWORD *)a1 + 9);
  if ( v4 )
  {
    FreeListFree(v4, a2, a3);
    *((_QWORD *)a1 + 9) = 0LL;
  }
  return xxxFreeDdeConv(a1);
}
