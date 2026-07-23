/*
 * XREFs of KiWriteCpuSetMasks @ 0x1401D79E0
 * Callers:
 *     KeSetCpuSetsProcess @ 0x1401D754C (KeSetCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1401D7670 (KeSetSelectedCpuSetsThread.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 */

unsigned __int64 __fastcall KiWriteCpuSetMasks(unsigned __int64 *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 result; // rax
  __int64 v6; // r10
  unsigned __int64 *v7; // r9
  __int64 v8; // r8
  __int64 v9; // rcx

  result = a4;
  if ( a4 >= a2 )
    result = a2;
  v6 = 0LL;
  if ( (_DWORD)result )
  {
    v7 = a1;
    v6 = (unsigned int)result;
    v8 = a3 - (_QWORD)a1;
    v9 = (unsigned int)result;
    do
    {
      result = *(unsigned __int64 *)((char *)v7 + v8);
      *v7++ = result;
      --v9;
    }
    while ( v9 );
  }
  if ( (unsigned int)v6 < a2 )
    return (unsigned __int64)memset(&a1[v6], 0, 8LL * (a2 - (unsigned int)v6));
  return result;
}
