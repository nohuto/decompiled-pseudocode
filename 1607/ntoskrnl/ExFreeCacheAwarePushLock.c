/*
 * XREFs of ExFreeCacheAwarePushLock @ 0x14010F520
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall ExFreeCacheAwarePushLock(PVOID *a1)
{
  PVOID *v2; // rbx
  __int64 v3; // rsi

  v2 = a1;
  v3 = *((_BYTE *)*a1 + 8) != 0 ? 1 : 32;
  do
  {
    ExFreePoolWithTag(*v2++, 0);
    --v3;
  }
  while ( v3 );
  ExFreePoolWithTag(a1, 0);
}
