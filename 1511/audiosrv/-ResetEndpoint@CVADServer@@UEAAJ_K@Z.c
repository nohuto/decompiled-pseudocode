/*
 * XREFs of ?ResetEndpoint@CVADServer@@UEAAJ_K@Z @ 0x1800888C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qq @ 0x180077B24 (WPP_SF_qq.c)
 */

__int64 __fastcall CVADServer::ResetEndpoint(CVADServer *this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  _QWORD *v5; // rdi
  int v6; // ebx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( *((_DWORD *)this + 50) && *((_QWORD *)this + 21) )
  {
    v5 = (_QWORD *)*((_QWORD *)this + 26);
    if ( a2 == v5[6] )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 96LL))(v5);
    }
    else
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x32u,
          (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
          a2,
          v5[6]);
      }
      v6 = -2147024809;
    }
  }
  else
  {
    v6 = -2004287487;
  }
  LeaveCriticalSection(v2);
  if ( v6 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x33u, (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, v6);
  }
  return (unsigned int)v6;
}
