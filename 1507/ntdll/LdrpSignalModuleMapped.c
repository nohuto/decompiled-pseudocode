/*
 * XREFs of LdrpSignalModuleMapped @ 0x18004136C
 * Callers:
 *     LdrpProcessMappedModule @ 0x180040CD8 (LdrpProcessMappedModule.c)
 * Callees:
 *     LdrpQueueWork @ 0x1800390B0 (LdrpQueueWork.c)
 */

struct _PEB *__fastcall LdrpSignalModuleMapped(__int64 a1)
{
  struct _PEB *result; // rax
  _QWORD *ProcessHeap; // rdi
  _QWORD *v3; // rbx
  _DWORD *v4; // rdx
  __int64 v5; // rcx

  result = *(struct _PEB **)(a1 + 152);
  ProcessHeap = result->ProcessHeap;
  if ( ProcessHeap )
  {
    v3 = result->ProcessHeap;
    do
    {
      v3 = (_QWORD *)*v3;
      v4 = (_DWORD *)(v3[1] & 0xFFFFFFFFFFFFFFF8uLL);
      result = *(struct _PEB **)v4;
      v5 = *(_QWORD *)(*(_QWORD *)v4 + 16LL);
      if ( v5 )
      {
        if ( (*(_DWORD *)(v5 + 92))-- == 1 )
        {
          v4[14] = 4;
          result = LdrpQueueWork((_QWORD *)v5);
        }
      }
    }
    while ( v3 != ProcessHeap );
  }
  return result;
}
