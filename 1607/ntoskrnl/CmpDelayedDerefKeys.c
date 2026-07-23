/*
 * XREFs of CmpDelayedDerefKeys @ 0x1404F7F1C
 * Callers:
 *     CmpCloseKeyObject @ 0x1403E3690 (CmpCloseKeyObject.c)
 *     CmpPostNotify @ 0x1403E38F4 (CmpPostNotify.c)
 *     CmpReportNotifyHelper @ 0x1404F7D50 (CmpReportNotifyHelper.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14005D6F0 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
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
