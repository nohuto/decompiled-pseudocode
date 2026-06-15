/*
 * XREFs of ?SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@PEAPEAX@Z @ 0x18009D16C
 * Callers:
 *     ?CaptureMonitorThread@CMonitor@@AEAAKXZ @ 0x180098EC4 (-CaptureMonitorThread@CMonitor@@AEAAKXZ.c)
 * Callees:
 *     ?ResetEngineThreadPriority@@YAJPEAPEAX@Z @ 0x18009D11C (-ResetEngineThreadPriority@@YAJPEAPEAX@Z.c)
 */

__int64 __fastcall SetEngineThreadPriority(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // ebx
  HANDLE v4; // rax
  void *v5; // rdi
  HANDLE CurrentThread; // rax
  BOOL v7; // eax
  signed int LastError; // eax
  DWORD TaskIndex; // [rsp+40h] [rbp+8h] BYREF
  ULONG SystemResponsivenessValue; // [rsp+48h] [rbp+10h] BYREF
  void *v12; // [rsp+50h] [rbp+18h] BYREF

  TaskIndex = 0;
  v3 = 0;
  v4 = AvSetMmThreadCharacteristicsA("Audio", &TaskIndex);
  v12 = v4;
  v5 = v4;
  if ( !v4
    || !AvQuerySystemResponsiveness(v4, &SystemResponsivenessValue)
    || (SystemResponsivenessValue <= 0x32
      ? (void *)(v7 = AvSetMmThreadPriority(v5, AVRT_PRIORITY_HIGH), *a2 = v5)
      : (v3 = ResetEngineThreadPriority(&v12),
         CurrentThread = GetCurrentThread(),
         v7 = SetThreadPriority(CurrentThread, 15),
         v5 = v12),
        !v7) )
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
  }
  *a2 = v5;
  return v3;
}
