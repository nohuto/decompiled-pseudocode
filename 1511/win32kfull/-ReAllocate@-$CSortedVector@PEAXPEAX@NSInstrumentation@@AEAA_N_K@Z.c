/*
 * XREFs of ?ReAllocate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@AEAA_N_K@Z @ 0x1C02D4E70
 * Callers:
 *     ?Insert@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z @ 0x1C02D4C30 (-Insert@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z.c)
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 */

char __fastcall NSInstrumentation::CSortedVector<void *,void *>::ReAllocate(__int64 a1, unsigned __int64 a2)
{
  char result; // al
  PVOID PoolWithTag; // rax
  PVOID v6; // rdi

  if ( !is_mul_ok(0x10uLL, a2) )
    return 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 16 * a2, 0x63497355u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memmove(PoolWithTag, *(const void **)(a1 + 48), 16LL * *(_QWORD *)(a1 + 32));
  ExFreePoolWithTag(*(PVOID *)(a1 + 48), 0);
  result = 1;
  *(_QWORD *)(a1 + 48) = v6;
  *(_QWORD *)(a1 + 32) = a2;
  return result;
}
