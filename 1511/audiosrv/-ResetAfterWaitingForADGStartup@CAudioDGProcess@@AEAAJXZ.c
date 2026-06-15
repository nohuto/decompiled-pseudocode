/*
 * XREFs of ?ResetAfterWaitingForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x18006A4D4
 * Callers:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180033280 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

__int64 __fastcall CAudioDGProcess::ResetAfterWaitingForADGStartup(CAudioDGProcess *this)
{
  signed int LastError; // eax
  signed int v3; // ebx
  TraceLoggingHProvider v4; // rcx
  void *v5; // rcx
  char *v6; // rcx

  if ( ResetEvent(*((HANDLE *)this + 13)) )
  {
    v5 = (void *)*((_QWORD *)this + 11);
    if ( v5 )
    {
      WaitForSingleObjectEx(v5, 0xFFFFFFFF, 0);
      v6 = (char *)*((_QWORD *)this + 11);
      if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        CloseHandle(v6);
        *((_QWORD *)this + 11) = 0LL;
      }
    }
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
      goto LABEL_14;
    }
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x18u,
      (__int64)&WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids,
      LastError);
  }
  v4 = WPP_GLOBAL_Control;
LABEL_14:
  if ( v3 < 0
    && v4 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)v4 + 28) & 4) != 0
    && *((_BYTE *)v4 + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)v4 + 2), 0x19u, (__int64)&WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids, v3);
  }
  return (unsigned int)v3;
}
