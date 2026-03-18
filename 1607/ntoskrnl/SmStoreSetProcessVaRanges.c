/*
 * XREFs of SmStoreSetProcessVaRanges @ 0x1403E34A8
 * Callers:
 *     MmInSwapWorkingSet @ 0x1400B72AC (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1400B97A8 (MmOutSwapWorkingSet.c)
 * Callees:
 *     SmpKeyedStoreSetVaRanges @ 0x1400020B4 (SmpKeyedStoreSetVaRanges.c)
 *     SmAlloc @ 0x14000215C (SmAlloc.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmStoreSetProcessVaRanges(void *Src, __int64 a2)
{
  void *v2; // rbx
  size_t v4; // rdi
  PVOID v5; // rax
  int v6; // edi

  v2 = 0LL;
  if ( a2 )
  {
    v4 = 16 * a2;
    v5 = SmAlloc(16 * a2, 0x52566D73u);
    v2 = v5;
    if ( !v5 )
      return (unsigned int)-1073741670;
    memmove(v5, Src, v4);
  }
  v6 = SmpKeyedStoreSetVaRanges((volatile signed __int32 *)qword_1403BF150);
  if ( v6 >= 0 )
  {
    v2 = 0LL;
    v6 = 0;
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return (unsigned int)v6;
}
