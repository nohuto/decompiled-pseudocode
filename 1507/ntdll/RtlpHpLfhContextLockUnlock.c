/*
 * XREFs of RtlpHpLfhContextLockUnlock @ 0x1800F3094
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x1800D8158 (RtlLockHeapManagerForCloning.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x1800DA9EC (RtlpUnlockHeapManagerForCloning.c)
 * Callees:
 *     RtlpHpLfhOwnerLockUnlock @ 0x1800F3158 (RtlpHpLfhOwnerLockUnlock.c)
 */

__int64 __fastcall RtlpHpLfhContextLockUnlock(__int64 a1, unsigned int a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rdi
  __int64 result; // rax

  v3 = (__int64 *)(a1 + 192);
  v4 = 129LL;
  do
  {
    result = *v3;
    if ( (*v3 & 1) == 0 )
      result = RtlpHpLfhOwnerLockUnlock(*v3, a2);
    ++v3;
    --v4;
  }
  while ( v4 );
  return result;
}
