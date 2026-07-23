/*
 * XREFs of VrpDestroyNamespaceNodeList @ 0x140614CB4
 * Callers:
 *     VrpCleanupNamespace @ 0x140612ED4 (VrpCleanupNamespace.c)
 * Callees:
 *     ULongLongMult @ 0x1401B7468 (ULongLongMult.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     VrpDestroyNamespaceNode @ 0x140614A2C (VrpDestroyNamespaceNode.c)
 */

void *__fastcall VrpDestroyNamespaceNodeList(ULONGLONG *a1)
{
  ULONGLONG i; // rax
  __int64 *v3; // rdx
  void *v4; // rcx
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  for ( i = a1[6]; i; i = a1[6] )
  {
    if ( ULongLongMult(a1[5], 0LL, &pullResult) < 0
      || (v3 = (__int64 *)(a1[9] + pullResult), (unsigned __int64)v3 < a1[9]) )
    {
      v3 = 0LL;
    }
    VrpDestroyNamespaceNode(a1, *v3);
  }
  v4 = (void *)a1[9];
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72615452u);
  return memset(a1 + 4, 0, 0x30uLL);
}
