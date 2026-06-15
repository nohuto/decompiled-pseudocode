/*
 * XREFs of ?GetStreamLatency@CVADServer@@UEAAJ_KPEA_J@Z @ 0x180087F40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_qq @ 0x180077B24 (WPP_SF_qq.c)
 *     ?GetStreamLatency@CAudioStream@@QEAAJPEA_J@Z @ 0x18007D3DC (-GetStreamLatency@CAudioStream@@QEAAJPEA_J@Z.c)
 */

__int64 __fastcall CVADServer::GetStreamLatency(CVADServer *this, __int64 a2, __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  int StreamLatency; // ebx
  CAudioStream *v8; // rcx
  __int64 v9; // rax

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( a3 )
  {
    if ( *((_DWORD *)this + 50) && (v8 = (CAudioStream *)*((_QWORD *)this + 26)) != 0LL )
    {
      v9 = *((_QWORD *)v8 + 6);
      if ( a2 == v9 )
      {
        StreamLatency = CAudioStream::GetStreamLatency(v8, a3);
        if ( StreamLatency >= 0 )
          StreamLatency = 0;
      }
      else
      {
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x3Eu,
            (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
            a2,
            v9);
        }
        StreamLatency = -2147024809;
      }
    }
    else
    {
      StreamLatency = -2004287487;
    }
  }
  else
  {
    StreamLatency = -2147467261;
  }
  LeaveCriticalSection(v3);
  if ( StreamLatency < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x3Fu,
      (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      StreamLatency);
  }
  return (unsigned int)StreamLatency;
}
