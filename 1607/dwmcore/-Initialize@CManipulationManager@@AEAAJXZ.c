/*
 * XREFs of ?Initialize@CManipulationManager@@AEAAJXZ @ 0x1800A7968
 * Callers:
 *     ?Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800AA198 (-Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetupMessageCallThreadInfo@CManipulationManager@@AEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUMessageCallThreadInfo@1@@Z @ 0x1800A7014 (-SetupMessageCallThreadInfo@CManipulationManager@@AEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUM.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800A804C (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800A9608 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     ?ClearWaitHandles@CManipulationManager@@CAXXZ @ 0x18016AA28 (-ClearWaitHandles@CManipulationManager@@CAXXZ.c)
 */

__int64 __fastcall CManipulationManager::Initialize(HANDLE *this)
{
  signed int v2; // ebx
  int v3; // eax
  unsigned int v4; // ebx
  HANDLE *v5; // rsi
  HANDLE EventW; // rax
  HANDLE Thread; // rax
  int v9; // edi
  signed int LastError; // eax
  int v11; // r9d
  DWORD dwCreationFlags; // [rsp+20h] [rbp-D8h]
  DWORD ThreadId[4]; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int16 v14[66]; // [rsp+40h] [rbp-B8h] BYREF
  int v15; // [rsp+C4h] [rbp-34h]

  v2 = 0;
  if ( !_InterlockedCompareExchange(&CManipulationManager::s_bManipThreadInitialized, 1, 0) )
  {
    memset_0(v14, 0, 0x90uLL);
    StringCchCopyW(v14, 0x40uLL, L"Capture");
    v15 = 1;
    v3 = CMmcssTask::Set((CMmcssTask *)(this + 5), (const struct DWM_MMTASK *)v14, 0);
    v2 = v3;
    if ( v3 < 0 )
    {
      dwCreationFlags = 110;
LABEL_21:
      v11 = v3;
LABEL_22:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, dwCreationFlags);
    }
    else
    {
      v4 = 0;
      v5 = &CManipulationManager::s_rghWaitEvents;
      do
      {
        SetLastError(0);
        EventW = CreateEventW(0LL, 0, 0, 0LL);
        *v5 = EventW;
        if ( !EventW )
        {
          LastError = GetLastError();
          v2 = LastError;
          if ( LastError > 0 )
            v2 = (unsigned __int16)LastError | 0x80070000;
          dwCreationFlags = 121;
          if ( v2 >= 0 )
            v2 = -2003304445;
          v11 = v2;
          goto LABEL_22;
        }
        ++v4;
        ++v5;
      }
      while ( v4 < 4 );
      v3 = CManipulationManager::SetupMessageCallThreadInfo(
             (CManipulationManager *)this,
             *(struct IMessageSession **)(*((_QWORD *)this[2] + 64) + 264LL),
             (int (*)(void *, const void *, int))CManipulationManager::s_RenderThreadEndpointProc,
             (struct CManipulationManager::MessageCallThreadInfo *)(this + 44));
      v2 = v3;
      if ( v3 < 0 )
      {
        dwCreationFlags = 130;
        goto LABEL_21;
      }
      if ( *((_BYTE *)this + 32) )
      {
        v9 = -2147467260;
        MilInstrumentationCheckHR(0x14u, &dword_1801B9C18, 2u, -2147467260, 0xA3u);
      }
      else
      {
        Thread = CreateThread(0LL, 0LL, CManipulationManager::s_ThreadMain, this, 4u, ThreadId);
        this[3] = Thread;
        if ( Thread )
        {
          SetThreadPriority(Thread, 16);
          ResumeThread(this[3]);
          return 0;
        }
        v9 = -2147024882;
        MilInstrumentationCheckHR(0x14u, &dword_1801B9C18, 2u, -2147024882, 0xB2u);
      }
      v2 = v9;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x87u);
    }
    if ( v2 < 0 )
    {
      CManipulationManager::ClearWaitHandles();
      _InterlockedCompareExchange(&CManipulationManager::s_bManipThreadInitialized, 0, 1);
    }
  }
  return (unsigned int)v2;
}
