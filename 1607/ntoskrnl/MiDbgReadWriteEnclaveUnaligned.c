/*
 * XREFs of MiDbgReadWriteEnclaveUnaligned @ 0x14065F344
 * Callers:
 *     MiDbgReadWriteEnclave @ 0x14065F25C (MiDbgReadWriteEnclave.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     KeDebugReadEnclaveMemory @ 0x1406E5F28 (KeDebugReadEnclaveMemory.c)
 *     KeDebugWriteEnclaveMemory @ 0x1406E5FB0 (KeDebugWriteEnclaveMemory.c)
 */

__int64 __fastcall MiDbgReadWriteEnclaveUnaligned(__int64 a1, void *a2, unsigned int a3, int a4)
{
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 result; // rax
  unsigned int v10; // ebx
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v12[8]; // [rsp+50h] [rbp+8h] BYREF

  v7 = a1 & 7;
  v8 = a1 - v7;
  result = KeDebugReadEnclaveMemory(a1 - v7, v12, 8LL, v11);
  v10 = result;
  if ( (int)result >= 0 )
  {
    if ( a4 )
    {
      memmove(a2, &v12[v7], a3);
    }
    else
    {
      memmove(&v12[v7], a2, a3);
      return (unsigned int)KeDebugWriteEnclaveMemory(v8, v12, 8LL, v11);
    }
    return v10;
  }
  return result;
}
