/*
 * XREFs of ?SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z @ 0x180088B70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_qq @ 0x180077B24 (WPP_SF_qq.c)
 *     ?SetSampleRate@CAudioStream@@QEAAJM@Z @ 0x18007DC5C (-SetSampleRate@CAudioStream@@QEAAJM@Z.c)
 */

__int64 __fastcall CVADServer::SetStreamSampleRate(CVADServer *this, __int64 a2, float a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  CAudioStream *v6; // rcx
  int v7; // ebx
  __int64 v8; // rax

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( *((_DWORD *)this + 50) && (v6 = (CAudioStream *)*((_QWORD *)this + 26)) != 0LL )
  {
    v8 = *((_QWORD *)v6 + 6);
    if ( a2 == v8 )
    {
      v7 = CAudioStream::SetSampleRate(v6, a3);
      if ( v7 >= 0 )
        v7 = 0;
    }
    else
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x40u,
          (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
          a2,
          v8);
      }
      v7 = -2147024809;
    }
  }
  else
  {
    v7 = -2004287487;
  }
  LeaveCriticalSection(v3);
  if ( v7 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x41u, (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, v7);
  }
  return (unsigned int)v7;
}
