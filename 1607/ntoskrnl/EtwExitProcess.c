/*
 * XREFs of EtwExitProcess @ 0x14045FF54
 * Callers:
 *     PspProcessDelete @ 0x14045F6F8 (PspProcessDelete.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall EtwExitProcess(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx

  v1 = *(_QWORD *)(a1 + 1080);
  if ( v1 )
  {
    *(_QWORD *)(a1 + 1080) = 0LL;
    if ( *(_QWORD *)v1 )
      ObfDereferenceObject(*(PVOID *)v1);
    v2 = *(void **)(v1 + 8);
    if ( v2 )
      ObfDereferenceObject(v2);
    ExFreePoolWithTag((PVOID)v1, 0);
  }
}
