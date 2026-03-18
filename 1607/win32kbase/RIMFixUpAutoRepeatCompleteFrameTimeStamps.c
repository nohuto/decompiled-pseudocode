/*
 * XREFs of RIMFixUpAutoRepeatCompleteFrameTimeStamps @ 0x1C00D9998
 * Callers:
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C00D81F4 (rimDispatchAutoRepeatCompleteFrame.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __fastcall RIMFixUpAutoRepeatCompleteFrameTimeStamps(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER result; // rax
  unsigned int v5; // r8d
  unsigned __int64 i; // r9
  __int64 v7; // rcx
  __int64 v8; // rdx

  result = KeQueryPerformanceCounter(0LL);
  v5 = 0;
  for ( i = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v5 < *(_DWORD *)(a3 + 24);
        *(LARGE_INTEGER *)(*(_QWORD *)(a3 + 88) + v8 + 96) = result )
  {
    v7 = v5++;
    v8 = 168 * v7;
    *(_DWORD *)(*(_QWORD *)(a3 + 88) + v8 + 80) = i;
  }
  return result;
}
