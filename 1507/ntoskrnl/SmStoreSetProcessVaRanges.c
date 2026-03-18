/*
 * XREFs of SmStoreSetProcessVaRanges @ 0x1404FAF38
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400DC414 (MmOutSwapWorkingSet.c)
 *     MmInSwapWorkingSet @ 0x1400DE740 (MmInSwapWorkingSet.c)
 * Callees:
 *     SmAlloc @ 0x1400D9FF4 (SmAlloc.c)
 *     SmpKeyedStoreSetVaRanges @ 0x1400DC330 (SmpKeyedStoreSetVaRanges.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmStoreSetProcessVaRanges(void *Src, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // rbx
  _KPROCESS *Process; // rbp
  size_t v7; // rdi
  PVOID v8; // rax
  int v9; // edi

  v4 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a2 )
  {
    v7 = 16 * a2;
    v8 = SmAlloc(16 * a2, 0x52566D73u);
    v4 = v8;
    if ( !v8 )
      return (unsigned int)-1073741670;
    memmove(v8, Src, v7);
  }
  v9 = SmpKeyedStoreSetVaRanges((volatile signed __int32 *)qword_140352D30, (__int64)Process, a3, a4);
  if ( v9 >= 0 )
  {
    v4 = 0LL;
    v9 = 0;
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v9;
}
