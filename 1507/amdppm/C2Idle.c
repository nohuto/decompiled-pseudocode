/*
 * XREFs of C2Idle @ 0x1C0002630
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0004A60 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C0004AB4 (WriteGenAddr.c)
 */

__int64 __fastcall C2Idle(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  int GenAddr; // eax
  int v5; // eax
  __int64 result; // rax

  v2 = (unsigned int)a2;
  if ( _InterlockedExchange(&ProcBmRldSet, 0) == 1 )
  {
    GenAddr = ReadGenAddr(&dword_1C00098EC, a2);
    WriteGenAddr(&dword_1C00098EC, GenAddr & 0xFFFFFFFD);
    if ( qword_1C00098FC )
    {
      v5 = ReadGenAddr(&dword_1C00098F8, a2);
      WriteGenAddr(&dword_1C00098F8, v5 & 0xFFFFFFFD);
    }
  }
  if ( (_DWORD)v2 )
  {
    a2 = 0LL;
    __writemsr(0x48u, 0LL);
  }
  result = ReadGenAddr(a1, a2);
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
