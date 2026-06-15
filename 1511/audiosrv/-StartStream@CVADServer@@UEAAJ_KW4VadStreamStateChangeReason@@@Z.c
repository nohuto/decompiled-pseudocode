/*
 * XREFs of ?StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180022390
 * Callers:
 *     AudioServerStartStream @ 0x180039380 (AudioServerStartStream.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?AEWMILOG_AUDIOSRV_STREAM_START_STOP@@YAXKPEAXE_K111111@Z @ 0x1800396A8 (-AEWMILOG_AUDIOSRV_STREAM_START_STOP@@YAXKPEAXE_K111111@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qq @ 0x180077B24 (WPP_SF_qq.c)
 */

__int64 __fastcall CVADServer::StartStream(unsigned __int64 a1, void *a2, int a3)
{
  int v3; // ebp
  unsigned __int64 v6; // rdi
  struct _RTL_CRITICAL_SECTION *v7; // r15
  TraceLoggingHProvider *v8; // r8
  __int64 v9; // rcx
  void *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdi
  unsigned int v14; // ecx

  v3 = 0;
  v6 = a3;
  AEWMILOG_AUDIOSRV_STREAM_START_STOP(
    a1,
    a2,
    a3,
    a1,
    *(unsigned int *)(a1 + 64),
    (unsigned __int64)a2,
    *(unsigned __int8 *)(a1 + 204),
    1uLL,
    a3,
    0LL);
  v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 232);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 232));
  v8 = &WPP_GLOBAL_Control;
  if ( *(_DWORD *)(a1 + 200) && *(_QWORD *)(a1 + 168) )
  {
    v9 = *(_QWORD *)(a1 + 208);
    v10 = *(void **)(v9 + 48);
    if ( a2 == v10 )
    {
      if ( (_DWORD)v6 == 2 )
        *(_DWORD *)(a1 + 320) = 1;
      if ( *(_BYTE *)(v9 + 104) && (_DWORD)v6 == 2 )
      {
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Du, (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids);
        }
      }
      else if ( *(_BYTE *)(a1 + 204) )
      {
        v14 = (unsigned int)WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Eu, (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids);
        }
        AEWMILOG_AUDIOSRV_STREAM_START_STOP(
          v14,
          (void *)*(unsigned int *)(a1 + 64),
          (unsigned __int8)v8,
          a1,
          *(unsigned int *)(a1 + 64),
          (unsigned __int64)a2,
          *(unsigned __int8 *)(a1 + 204),
          1uLL,
          v6,
          3uLL);
      }
      else
      {
        AEWMILOG_AUDIOSRV_STREAM_START_STOP(
          v9,
          (void *)0x100,
          (unsigned __int8)&WPP_GLOBAL_Control,
          a1,
          *(unsigned int *)(a1 + 64),
          (unsigned __int64)a2,
          0LL,
          1uLL,
          v6,
          1uLL);
        v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 168) + 248LL))(
               *(_QWORD *)(a1 + 168),
               *(_QWORD *)(a1 + 208));
        if ( v3 >= 0 )
        {
          *(_BYTE *)(a1 + 204) = 1;
          v11 = *(_QWORD *)(a1 + 168);
          v12 = *(_QWORD *)(v11 + 864);
          if ( v12 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 8LL))(*(_QWORD *)(v11 + 864));
          v13 = *(_QWORD *)(v11 + 864);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 48LL))(v13);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 44LL, &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, a2, v10);
      }
      v3 = -2147024809;
    }
  }
  else
  {
    v3 = -2004287487;
  }
  LeaveCriticalSection(v7);
  if ( v3 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      47LL,
      &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      (unsigned int)v3);
  }
  return (unsigned int)v3;
}
