/*
 * XREFs of wWinMain @ 0x14000195C
 * Callers:
 *     __wmainCRTStartup @ 0x140018B90 (__wmainCRTStartup.c)
 * Callees:
 *     McGenEventRegister @ 0x1400018B4 (McGenEventRegister.c)
 *     ?AERTMemoryInitialize@@YAJ_K00@Z @ 0x1400018EC (-AERTMemoryInitialize@@YAJ_K00@Z.c)
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140008844 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?PreMessageLoop@CAudioDGModule@@QEAAJH@Z @ 0x1400088EC (-PreMessageLoop@CAudioDGModule@@QEAAJH@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140027604 (-PostMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     WPP_SF_S @ 0x140027DEC (WPP_SF_S.c)
 *     WPP_SF_qd @ 0x140027EA4 (WPP_SF_qd.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x14003C5EC (-AERTMemoryShutdown@@YAJXZ.c)
 */

int __stdcall wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nShowCmd)
{
  __int64 *v5; // rbx
  __int64 *v6; // rdi
  __int64 v7; // r8
  void *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *v11; // r8
  int v12; // edi
  int v13; // edx
  DWORD LastError; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // rbx
  DWORD dwFlags; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v20[3]; // [rsp+48h] [rbp-20h] BYREF

  byte_140055BB0 = 0;
  qword_140055B20 = 0LL;
  v5 = &WPP_MAIN_CB;
  WPP_REGISTRATION_GUIDS = (__int64)&WPP_ThisDir_CTLGUID_AudioTrace;
  WPP_GLOBAL_Control = &WPP_MAIN_CB;
  v6 = &WPP_REGISTRATION_GUIDS;
  WPP_MAIN_CB = 0LL;
  qword_140055B28 = 1LL;
  do
  {
    v7 = *v6;
    v20[0] = v7;
    ++v6;
    v20[1] = 0LL;
    v5[4] = v7;
    EtwRegisterTraceGuidsW(WppControlCallback, v5, v7, 1LL, v20, 0LL, 0LL, v5 + 1);
    v5 = (__int64 *)*v5;
  }
  while ( v5 );
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_bda7893d5b5a9c157c1c64dd23f2c3f0_Traceguids, lpCmdLine);
  }
  v8 = (void *)_wcstoui64(lpCmdLine, 0LL, 16);
  if ( GetHandleInformation(v8, &dwFlags) )
  {
    HeapSetInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
    McGenEventRegister();
    qword_140055BE0 = (__int64)v8;
    v12 = AERTMemoryInitialize(v10, v9, v11);
    if ( v12 >= 0 )
    {
      if ( ATL::CAtlBaseModule::m_bInitFailed )
      {
        v12 = -1;
      }
      else
      {
        GetCommandLineW();
        v12 = CAudioDGModule::PreMessageLoop((CAudioDGModule *)&_AtlModule, v13);
        if ( !v12 )
          CAudioDGModule::RunMessageLoop((CAudioDGModule *)&_AtlModule);
        if ( v12 >= 0 )
          v12 = CAudioDGModule::PostMessageLoop((CAudioDGModule *)&_AtlModule);
      }
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          39LL,
          &WPP_bda7893d5b5a9c157c1c64dd23f2c3f0_Traceguids,
          (unsigned int)v12);
      }
      AERTMemoryShutdown();
    }
    goto LABEL_24;
  }
  LastError = GetLastError();
  v12 = LastError;
  v17 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control )
    return v12;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), v15, v16, v8, LastError);
LABEL_24:
    v17 = WPP_GLOBAL_Control;
  }
  if ( v17 != &WPP_GLOBAL_Control )
  {
    while ( v17 )
    {
      if ( v17[1] )
      {
        EtwUnregisterTraceGuids();
        v17[1] = 0LL;
      }
      v17 = (_QWORD *)*v17;
    }
    WPP_GLOBAL_Control = &WPP_GLOBAL_Control;
  }
  return v12;
}
