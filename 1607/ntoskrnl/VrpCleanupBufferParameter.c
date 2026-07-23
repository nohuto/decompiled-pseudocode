/*
 * XREFs of VrpCleanupBufferParameter @ 0x140612F4C
 * Callers:
 *     VrpPostEnumerateKey @ 0x140614E44 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x1406158DC (VrpPostQueryKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpCleanupBufferParameter(char a1, PVOID *a2)
{
  if ( a1 == 1 && *a2 )
  {
    ExFreePoolWithTag(*a2, 0x67655256u);
    *a2 = 0LL;
  }
  return 0LL;
}
