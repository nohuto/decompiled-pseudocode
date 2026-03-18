/*
 * XREFs of CmpDelayedDerefKeys @ 0x1403F50DC
 * Callers:
 *     CmpReportNotifyHelper @ 0x1403F5130 (CmpReportNotifyHelper.c)
 *     CmpCloseKeyObject @ 0x14049A970 (CmpCloseKeyObject.c)
 *     CmpPostNotify @ 0x14049AAF4 (CmpPostNotify.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14001B460 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall CmpDelayedDerefKeys(void **a1)
{
  void *v2; // rbx
  void **v3; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == a1 )
      break;
    v3 = *(void ***)v2;
    if ( *((void ***)v2 + 1) != a1 || v3[1] != v2 )
      __fastfail(3u);
    *a1 = v3;
    v3[1] = a1;
    ObDereferenceObjectDeferDelete(*((PVOID *)v2 + 2));
    ExFreePoolWithTag(v2, 0);
  }
}
