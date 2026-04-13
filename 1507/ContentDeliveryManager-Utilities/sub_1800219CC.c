/*
 * XREFs of sub_1800219CC @ 0x1800219CC
 * Callers:
 *     sub_1800281D0 @ 0x1800281D0 (sub_1800281D0.c)
 *     sub_180028240 @ 0x180028240 (sub_180028240.c)
 * Callees:
 *     DeleteCriticalSection @ 0x180022B08 (DeleteCriticalSection.c)
 */

void sub_1800219CC()
{
  struct _RTL_CRITICAL_SECTION *v0; // rbx
  __int64 v1; // rdi

  if ( _InterlockedDecrement(&dword_18003A000) < 0 )
  {
    v0 = &CriticalSection;
    v1 = 4LL;
    do
    {
      DeleteCriticalSection(v0++);
      --v1;
    }
    while ( v1 );
  }
}
