/*
 * XREFs of ?Initialize@CManipulationManager@@AEAAJXZ @ 0x1800A6CA4
 * Callers:
 *     ?Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800A8CC8 (-Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800A4A14 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800A89A8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ?ClearWaitHandles@CManipulationManager@@CAXXZ @ 0x18013F764 (-ClearWaitHandles@CManipulationManager@@CAXXZ.c)
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
  DWORD ThreadId[4]; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int16 v12; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v13[126]; // [rsp+42h] [rbp-B6h] BYREF
  __int64 v14; // [rsp+C0h] [rbp-38h]
  __int64 v15; // [rsp+C8h] [rbp-30h]

  v2 = 0;
  if ( !_InterlockedCompareExchange(&CManipulationManager::s_bManipThreadInitialized, 1, 0) )
  {
    v12 = 0;
    memset_0(v13, 0, sizeof(v13));
    v14 = 0LL;
    v15 = 0LL;
    StringCchCopyW(&v12, 0x40uLL, L"Capture");
    HIDWORD(v14) = 1;
    v3 = CMmcssTask::Set((CMmcssTask *)(this + 5), (const struct DWM_MMTASK *)&v12, 0);
    v2 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x6Eu);
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
          if ( v2 >= 0 )
            v2 = -2003304445;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x79u);
          goto LABEL_19;
        }
        ++v4;
        ++v5;
      }
      while ( v4 < 4 );
      if ( *((_BYTE *)this + 32) )
      {
        v9 = -2147467260;
        MilInstrumentationCheckHR(0x14u, &dword_180179C08, 2u, -2147467260, 0x9Bu);
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
        MilInstrumentationCheckHR(0x14u, &dword_180179C08, 2u, -2147024882, 0xAAu);
      }
      v2 = v9;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x7Fu);
    }
LABEL_19:
    if ( v2 < 0 )
    {
      CManipulationManager::ClearWaitHandles();
      _InterlockedCompareExchange(&CManipulationManager::s_bManipThreadInitialized, 0, 1);
    }
  }
  return (unsigned int)v2;
}
