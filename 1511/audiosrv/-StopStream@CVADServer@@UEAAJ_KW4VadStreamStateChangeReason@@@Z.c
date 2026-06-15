/*
 * XREFs of ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x1800221B0
 * Callers:
 *     AudioServerStopStream @ 0x1800392F0 (AudioServerStopStream.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qq @ 0x180077B24 (WPP_SF_qq.c)
 */

__int64 __fastcall CVADServer::StopStream(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  int v6; // ebx
  __int64 v7; // r15
  __int64 v8; // r13
  _WORD v10[2]; // [rsp+38h] [rbp-49h] BYREF
  char v11; // [rsp+3Ch] [rbp-45h]
  __int128 v12; // [rsp+50h] [rbp-31h]
  int v13; // [rsp+64h] [rbp-1Dh]
  __int64 v14; // [rsp+68h] [rbp-19h]
  int v15; // [rsp+70h] [rbp-11h]
  __int64 v16; // [rsp+78h] [rbp-9h]
  __int64 v17; // [rsp+80h] [rbp-1h]
  __int64 v18; // [rsp+88h] [rbp+7h]
  __int64 v19; // [rsp+90h] [rbp+Fh]
  __int64 v20; // [rsp+98h] [rbp+17h]
  __int64 v21; // [rsp+A0h] [rbp+1Fh]
  __int64 v22; // [rsp+A8h] [rbp+27h]

  v3 = a3;
  v6 = 0;
  if ( g_u32AEWMILogLevel >= 3 )
  {
    memset_0(v10, 0, 0x40uLL);
    v10[0] = 120;
    v17 = *(unsigned int *)(a1 + 64);
    v19 = *(unsigned __int8 *)(a1 + 204);
    v13 = 0x20000;
    v12 = AEWMIGUID_AUDIOSRV;
    v11 = 2;
    v14 = 0LL;
    v15 = 0;
    v16 = a1;
    v18 = a2;
    v20 = 0LL;
    v21 = v3;
    v22 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v10);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 232));
  if ( *(_DWORD *)(a1 + 200) && (v7 = *(_QWORD *)(a1 + 168)) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 208);
    if ( a2 == *(_QWORD *)(v8 + 48) )
    {
      if ( (_DWORD)v3 == 2 )
        *(_DWORD *)(a1 + 320) = 0;
      if ( *(_BYTE *)(a1 + 204) )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 256LL))(v7, v8);
        if ( v6 >= 0 )
          *(_BYTE *)(a1 + 204) = 0;
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          48LL,
          &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
          a2,
          *(_QWORD *)(v8 + 48));
      }
      v6 = -2147024809;
    }
  }
  else
  {
    v6 = -2004287487;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 232));
  if ( v6 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      49LL,
      &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      (unsigned int)v6);
  }
  return (unsigned int)v6;
}
