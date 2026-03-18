/*
 * XREFs of EtwpEnumerateWorkingSet @ 0x140665400
 * Callers:
 *     EtwpProcessEnumCallback @ 0x1405008B4 (EtwpProcessEnumCallback.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     MiGetWorkingSetInfoEx @ 0x1401DF5F4 (MiGetWorkingSetInfoEx.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     EtwLogPfnInfoRundown @ 0x1406650E8 (EtwLogPfnInfoRundown.c)
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
    result = MiGetWorkingSetInfoEx((PEX_SPIN_LOCK)(a1 + 1280), *(_QWORD **)(a2 + 40), *(_QWORD *)(a2 + 48), 0);
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
