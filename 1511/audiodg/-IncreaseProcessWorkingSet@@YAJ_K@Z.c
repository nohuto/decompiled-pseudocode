/*
 * XREFs of ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x14003C85C
 * Callers:
 *     ?AERTLockMemory@@YAJPEAX_K@Z @ 0x1400155EC (-AERTLockMemory@@YAJPEAX_K@Z.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x14003C35C (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     ?AERTLockZoneHeap@@YAJPEAX@Z @ 0x14003C52C (-AERTLockZoneHeap@@YAJPEAX@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x140018E40 (__security_check_cookie.c)
 *     WPP_SF_PP @ 0x14003C9F4 (WPP_SF_PP.c)
 *     ?AEWMILOG_MEMORY@@YAXKPEAXE0_K11111@Z @ 0x14003E008 (-AEWMILOG_MEMORY@@YAXKPEAXE0_K11111@Z.c)
 */

__int64 __fastcall IncreaseProcessWorkingSet(unsigned __int64 a1)
{
  HANDLE CurrentProcess; // rax
  int InformationProcess; // eax
  signed int LastError; // eax
  void *v5; // rdx
  unsigned int v6; // ecx
  HANDLE v7; // rax
  unsigned __int64 v8; // rdx
  HANDLE v9; // rax
  __int64 v10; // r8
  unsigned int v11; // ebx
  unsigned __int64 v13; // [rsp+40h] [rbp-51h]
  unsigned __int64 v14; // [rsp+48h] [rbp-49h]
  ULONG_PTR MaximumWorkingSetSize; // [rsp+58h] [rbp-39h] BYREF
  ULONG_PTR MinimumWorkingSetSize; // [rsp+60h] [rbp-31h] BYREF
  DWORD Flags[4]; // [rsp+68h] [rbp-29h] BYREF
  _BYTE ProcessInformation[32]; // [rsp+78h] [rbp-19h] BYREF
  __int64 v19; // [rsp+98h] [rbp+7h]

  CurrentProcess = GetCurrentProcess();
  InformationProcess = NtQueryInformationProcess(CurrentProcess, ProcessVmCounters, ProcessInformation, 0x60u, 0LL);
  if ( InformationProcess < 0 )
  {
    LastError = RtlNtStatusToDosError(InformationProcess);
    goto LABEL_6;
  }
  v7 = GetCurrentProcess();
  if ( !GetProcessWorkingSetSizeEx(v7, &MinimumWorkingSetSize, &MaximumWorkingSetSize, Flags)
    || (v8 = (a1 + 0x4000) & 0xFFFFFFFFFFFFE000uLL,
        MaximumWorkingSetSize += v8 + v19 - MinimumWorkingSetSize,
        MinimumWorkingSetSize = v19 + v8,
        v9 = GetCurrentProcess(),
        !SetProcessWorkingSetSizeEx(v9, MinimumWorkingSetSize, MaximumWorkingSetSize, 0)) )
  {
    LastError = GetLastError();
LABEL_6:
    v11 = LastError;
    if ( LastError > 0 )
      v11 = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_13;
  }
  v6 = (unsigned int)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_PP(*((_QWORD *)WPP_GLOBAL_Control + 2), v5, v10, MinimumWorkingSetSize, MaximumWorkingSetSize);
  }
  v11 = 0;
LABEL_13:
  AEWMILOG_MEMORY(v6, v5, 0xEu, 0LL, 0LL, 0LL, 0LL, v13, v14, a1);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, (__int64)&WPP_f57117be53b4cbf9f41dc81f4995e76c_Traceguids, v11);
  }
  return v11;
}
