/*
 * XREFs of EtwpEnumerateWorkingSet @ 0x1406E84F4
 * Callers:
 *     EtwpProcessEnumCallback @ 0x14041C13C (EtwpProcessEnumCallback.c)
 * Callees:
 *     MiGetWorkingSetInfoEx @ 0x14014EE78 (MiGetWorkingSetInfoEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     EtwLogPfnInfoRundown @ 0x1406E81E4 (EtwLogPfnInfoRundown.c)
 */

__int64 __fastcall EtwpEnumerateWorkingSet(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  SIZE_T v5; // rdx
  __int64 result; // rax
  __int64 *v7; // r8

  v4 = 4096LL;
  while ( 1 )
  {
    if ( !*(_QWORD *)(a2 + 40) )
    {
      v5 = 32 * v4 + 16;
      *(_QWORD *)(a2 + 48) = v5;
      result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x74777445u);
      *(_QWORD *)(a2 + 40) = result;
      if ( !result )
        break;
    }
    memset(*(void **)(a2 + 40), 0, *(_QWORD *)(a2 + 48));
    result = MiGetWorkingSetInfoEx(a1 + 1272, *(_QWORD **)(a2 + 40), *(_QWORD *)(a2 + 48), 0);
    v7 = *(__int64 **)(a2 + 40);
    if ( (_DWORD)result != -1073741820 )
    {
      if ( (int)result >= 0 )
      {
        if ( v7[1] )
          return EtwLogPfnInfoRundown(a1, *(_DWORD *)(a2 + 28), v7);
      }
      return result;
    }
    v4 = v7[1] + 64;
    ExFreePoolWithTag(*(PVOID *)(a2 + 40), 0);
    *(_QWORD *)(a2 + 40) = 0LL;
  }
  return result;
}
