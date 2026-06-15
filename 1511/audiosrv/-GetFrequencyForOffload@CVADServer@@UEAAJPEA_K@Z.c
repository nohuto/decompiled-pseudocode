/*
 * XREFs of ?GetFrequencyForOffload@CVADServer@@UEAAJPEA_K@Z @ 0x180087D50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     ?GetFrequencyForOffload@CAudioStream@@QEAAJPEA_K@Z @ 0x18007CF54 (-GetFrequencyForOffload@CAudioStream@@QEAAJPEA_K@Z.c)
 */

__int64 __fastcall CVADServer::GetFrequencyForOffload(CVADServer *this, unsigned __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  CAudioStream *v5; // rcx
  int FrequencyForOffload; // ebx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( *((_DWORD *)this + 50) && (v5 = (CAudioStream *)*((_QWORD *)this + 26)) != 0LL )
  {
    FrequencyForOffload = CAudioStream::GetFrequencyForOffload(v5, a2);
    if ( FrequencyForOffload >= 0 )
      goto LABEL_10;
  }
  else
  {
    FrequencyForOffload = -2004287487;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x3Du,
      (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      FrequencyForOffload);
  }
LABEL_10:
  LeaveCriticalSection(v2);
  if ( FrequencyForOffload >= 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Cu, (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, *a2);
  }
  return (unsigned int)FrequencyForOffload;
}
