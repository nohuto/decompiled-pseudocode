/*
 * XREFs of ?PrepareToWaitForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x18003340C
 * Callers:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180033280 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

__int64 __fastcall CAudioDGProcess::PrepareToWaitForADGStartup(CAudioDGProcess *this)
{
  HANDLE v2; // rax
  unsigned int v3; // ebx
  TraceLoggingHProvider v4; // rcx
  signed int LastError; // eax
  struct _SECURITY_ATTRIBUTES v7; // [rsp+20h] [rbp-28h] BYREF

  v7.lpSecurityDescriptor = 0LL;
  v7.nLength = 24;
  v7.bInheritHandle = 1;
  v2 = CreateEventW(&v7, 1, 0, 0LL);
  *((_QWORD *)this + 13) = v2;
  if ( v2 )
  {
    v3 = 0;
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    else
      v3 = LastError;
    v4 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_4;
    }
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      19LL,
      &WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids,
      (unsigned int)LastError);
  }
  v4 = WPP_GLOBAL_Control;
LABEL_4:
  if ( (v3 & 0x80000000) != 0
    && v4 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)v4 + 28) & 4) != 0
    && *((_BYTE *)v4 + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)v4 + 2), 20LL, &WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids, v3);
  }
  return v3;
}
