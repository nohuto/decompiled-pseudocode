/*
 * XREFs of C3Idle @ 0x1C0002760
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0004A60 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C0004AB4 (WriteGenAddr.c)
 */

__int64 __fastcall C3Idle(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned int GenAddr; // eax
  __int64 v5; // rdx
  unsigned int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 result; // rax

  v2 = (unsigned int)a2;
  _InterlockedExchange(&ProcBmRldSet, 1);
  GenAddr = ReadGenAddr(&dword_1C00098EC, a2);
  WriteGenAddr(&dword_1C00098EC, GenAddr | 2LL);
  if ( qword_1C00098FC )
  {
    v6 = ReadGenAddr(&dword_1C00098F8, v5);
    WriteGenAddr(&dword_1C00098F8, v6 | 2LL);
  }
  v7 = (unsigned int)ReadGenAddr(&dword_1C0009904, v5);
  WriteGenAddr(&dword_1C0009904, v7 | 1);
  if ( (_DWORD)v2 )
  {
    v8 = 0LL;
    __writemsr(0x48u, 0LL);
  }
  ReadGenAddr(a1, v8);
  result = WriteGenAddr(&dword_1C0009904, v7);
  if ( (_DWORD)v2 )
  {
    result = v2;
    __writemsr(0x48u, v2);
  }
  else
  {
    _mm_lfence();
  }
  return result;
}
