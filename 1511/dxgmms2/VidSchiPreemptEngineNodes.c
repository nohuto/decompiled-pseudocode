/*
 * XREFs of VidSchiPreemptEngineNodes @ 0x1C0061B00
 * Callers:
 *     VidSchiEmptyAllHwQueues @ 0x1C00619FC (VidSchiEmptyAllHwQueues.c)
 *     VidSchiPrepareToResetEngine @ 0x1C008A8AC (VidSchiPrepareToResetEngine.c)
 * Callees:
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x1C0013D98 (VidSchiDriverNodeEngineToSchedulerNode.c)
 *     VidSchiCompletePreemption @ 0x1C0020D48 (VidSchiCompletePreemption.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C005F394 (VidSchiSubmitPreemptionCommand.c)
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
  result = *(_QWORD *)(v4 + 1904);
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
        v14 = *(_QWORD *)(a1 + 8LL * (unsigned int)result + 376);
        if ( *(_DWORD *)(v14 + 2724) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 912));
          result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v14 + 2728));
          if ( (_DWORD)result == 1 )
          {
            *(_QWORD *)(v14 + 192) = 0LL;
            VidSchiSubmitPreemptionCommand(v14);
            result = *a4 | (1LL << v13);
            *a4 = result;
          }
          else
          {
            _InterlockedDecrement((volatile signed __int32 *)(v14 + 2728));
            _InterlockedDecrement((volatile signed __int32 *)(a1 + 912));
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
          result = VidSchiCompletePreemption(*(_QWORD *)(a1 + 8LL * v15 + 376));
        }
        ++v5;
      }
      while ( v5 < v12 );
    }
  }
  return result;
}
