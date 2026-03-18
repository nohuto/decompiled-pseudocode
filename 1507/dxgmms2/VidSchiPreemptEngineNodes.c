/*
 * XREFs of VidSchiPreemptEngineNodes @ 0x1C0076A74
 * Callers:
 *     VidSchiEmptyAllHwQueues @ 0x1C0076880 (VidSchiEmptyAllHwQueues.c)
 *     VidSchiPrepareToResetEngine @ 0x1C0076B80 (VidSchiPrepareToResetEngine.c)
 * Callees:
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x1C0005B54 (VidSchiDriverNodeEngineToSchedulerNode.c)
 *     VidSchiCompletePreemption @ 0x1C0015EC4 (VidSchiCompletePreemption.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C0077200 (VidSchiSubmitPreemptionCommand.c)
 */

__int64 __fastcall VidSchiPreemptEngineNodes(__int64 a1, unsigned int a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // r11
  unsigned int v5; // ebx
  unsigned int v10; // esi
  __int64 result; // rax
  unsigned int v12; // ebp
  char v13; // r14
  __int64 v14; // rcx
  unsigned int v15; // eax

  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0;
  *a4 = 0LL;
  v10 = 0;
  result = *(_QWORD *)(v4 + 1896);
  v12 = *(unsigned __int16 *)(result + 48LL * a2);
  if ( *(_WORD *)(result + 48LL * a2) )
  {
    v13 = 0;
    do
    {
      result = v10;
      if ( _bittest64(&a3, v10) )
      {
        result = VidSchiDriverNodeEngineToSchedulerNode(a1, v10, a2);
        v14 = *(_QWORD *)(a1 + 8LL * (unsigned int)result + 368);
        if ( *(_DWORD *)(v14 + 2852) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 904));
          result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v14 + 2856));
          if ( (_DWORD)result == 1 )
          {
            VidSchiSubmitPreemptionCommand(v14);
            result = *a4 | (1LL << v13);
            *a4 = result;
          }
          else
          {
            _InterlockedDecrement((volatile signed __int32 *)(v14 + 2856));
            _InterlockedDecrement((volatile signed __int32 *)(a1 + 904));
          }
        }
      }
      ++v10;
      ++v13;
    }
    while ( v10 < v12 );
    if ( v12 )
    {
      do
      {
        result = *a4;
        if ( _bittest64(&result, v5) )
        {
          v15 = VidSchiDriverNodeEngineToSchedulerNode(a1, v5, a2);
          result = VidSchiCompletePreemption(*(_QWORD *)(a1 + 8LL * v15 + 368));
        }
        ++v5;
      }
      while ( v5 < v12 );
    }
  }
  return result;
}
