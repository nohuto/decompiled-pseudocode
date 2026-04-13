/*
 * XREFs of sub_180021934 @ 0x180021934
 * Callers:
 *     sub_1800013B0 @ 0x1800013B0 (sub_1800013B0.c)
 *     sub_1800013E0 @ 0x1800013E0 (sub_1800013E0.c)
 * Callees:
 *     _Mtxinit @ 0x180022B18 (_Mtxinit.c)
 */

__int64 __fastcall sub_180021934(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rdi

  if ( !_InterlockedIncrement(&dword_18003A000) )
  {
    v2 = &CriticalSection;
    v3 = 4LL;
    do
    {
      Mtxinit(v2++);
      --v3;
    }
    while ( v3 );
  }
  return a1;
}
