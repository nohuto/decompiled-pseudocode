/*
 * XREFs of wWinMain @ 0x1400177C0
 * Callers:
 *     __wmainCRTStartup @ 0x140018C50 (__wmainCRTStartup.c)
 * Callees:
 *     ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140014944 (-PostMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140014B24 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?PreMessageLoop@CAudioDGModule@@QEAAJH@Z @ 0x140014C0C (-PreMessageLoop@CAudioDGModule@@QEAAJH@Z.c)
 *     ?AERTMemoryInitialize@@YAJ_K00@Z @ 0x140017998 (-AERTMemoryInitialize@@YAJ_K00@Z.c)
 *     McGenEventRegister @ 0x140017A08 (McGenEventRegister.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x140017CC4 (-AERTMemoryShutdown@@YAJXZ.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     WPP_SF_S @ 0x14002749C (WPP_SF_S.c)
 *     WPP_SF_qd @ 0x140027554 (WPP_SF_qd.c)
 */

int __stdcall wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nShowCmd)
{
  __int64 *v5; // rbx
  __int64 *v6; // rdi
  __int64 v7; // r8
  void *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r8
  int v16; // edi
  unsigned int *v17; // rbx
  __int64 v18; // rcx
  DWORD LastError; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  _QWORD *v23; // [rsp+20h] [rbp-48h]
  __int64 *v24; // [rsp+38h] [rbp-30h]
  DWORD dwFlags; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v26[3]; // [rsp+48h] [rbp-20h] BYREF

  byte_140055BB0 = 0;
  qword_140055B20 = 0LL;
  v5 = &WPP_MAIN_CB;
  WPP_REGISTRATION_GUIDS = (__int64)&WPP_ThisDir_CTLGUID_AudioTrace;
  *(_QWORD *)&WPP_GLOBAL_Control = &WPP_MAIN_CB;
  v6 = &WPP_REGISTRATION_GUIDS;
  WPP_MAIN_CB = 0LL;
  qword_140055B28 = 1LL;
  do
  {
    v7 = *v6;
    v24 = v5 + 1;
    v26[0] = v7;
    ++v6;
    v26[1] = 0LL;
    v23 = v26;
    v5[4] = v7;
    EtwRegisterTraceGuidsW(WppControlCallback, v5, v7);
    v5 = (__int64 *)*v5;
  }
  while ( v5 );
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x10) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      37LL,
      &WPP_8e827d74b75d909828aa6999fde946fd_Traceguids,
      lpCmdLine);
  }
  v8 = (void *)_wcstoui64(lpCmdLine, 0LL, 16);
  if ( GetHandleInformation(v8, &dwFlags) )
  {
    HeapSetInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
    McGenEventRegister(v10, v9, v11, v12);
    qword_140055BE0 = (__int64)v8;
    v16 = AERTMemoryInitialize(v14, v13, v15);
    if ( v16 >= 0 )
    {
      if ( ATL::CAtlBaseModule::m_bInitFailed )
      {
        v16 = -1;
      }
      else
      {
        GetCommandLineW();
        v16 = CAudioDGModule::PreMessageLoop((CAudioDGModule *)&_AtlModule);
        if ( !v16 )
          CAudioDGModule::RunMessageLoop((HANDLE *)&_AtlModule);
        if ( v16 >= 0 )
          v16 = CAudioDGModule::PostMessageLoop((CAudioDGModule *)&_AtlModule);
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x10) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          39LL,
          &WPP_8e827d74b75d909828aa6999fde946fd_Traceguids,
          (unsigned int)v16);
      }
      AERTMemoryShutdown();
    }
    goto LABEL_19;
  }
  LastError = GetLastError();
  v16 = LastError;
  v17 = *(unsigned int **)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control )
    return v16;
  if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x10) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    LODWORD(v23) = LastError;
    WPP_SF_qd(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), v21, v22, v8, v23, 0LL, 0LL, v24);
LABEL_19:
    v17 = *(unsigned int **)&WPP_GLOBAL_Control;
  }
  if ( v17 != &WPP_GLOBAL_Control )
  {
    while ( v17 )
    {
      v18 = *((_QWORD *)v17 + 1);
      if ( v18 )
      {
        EtwUnregisterTraceGuids(v18);
        *((_QWORD *)v17 + 1) = 0LL;
      }
      v17 = *(unsigned int **)v17;
    }
    *(_QWORD *)&WPP_GLOBAL_Control = &WPP_GLOBAL_Control;
  }
  return v16;
}
