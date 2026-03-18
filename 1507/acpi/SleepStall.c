/*
 * XREFs of SleepStall @ 0x1C00476D0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C0013180 (ValidateArgTypes.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 *     SleepQueueRequest @ 0x1C00461B4 (SleepQueueRequest.c)
 */

__int64 __fastcall SleepStall(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rax

  v4 = ValidateArgTypes(*(_QWORD *)(a2 + 80), 0, (__int64)"I");
  if ( !v4 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 56) + 8LL) != 8795 )
    {
      v7 = *(_QWORD *)(a2 + 80);
      if ( *(_QWORD *)(v7 + 16) <= 0xFFuLL )
      {
        KeStallExecutionProcessor(*(_DWORD *)(v7 + 16));
        return v4;
      }
      v4 = -1072431089;
      LogError(-1072431089);
      v6 = 178;
      goto LABEL_10;
    }
    v5 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL);
    if ( v5 > 0xFFFF )
    {
      v4 = -1072431089;
      LogError(-1072431089);
      v6 = 177;
LABEL_10:
      PrintDebugMessage(v6, *(const void **)(*(_QWORD *)(a2 + 80) + 16LL), 0LL, 0LL, 0LL);
      return v4;
    }
    if ( v5 )
    {
      v4 = SleepQueueRequest(a1, v5);
      if ( !v4 )
        return 32772;
    }
  }
  return v4;
}
