/*
 * XREFs of ?SetUserDuckingPreference@CDuckingManager@@UEAAXKK@Z @ 0x18002AEA0
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x180024BE0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 * Callees:
 *     ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x18001B6E0 (-SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CDuckingManager::SetUserDuckingPreference(CDuckingManager *this, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebx
  float v7; // xmm6_4
  __int64 (__fastcall *v8)(CWindowsPolicyManager *, int, const unsigned __int16 *, float); // rdi

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_7126b4a398f34fc137826d3414d4a173_Traceguids, a2);
  }
  *((_DWORD *)this + 71) = a2;
  if ( a2 )
  {
    v6 = a2 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
        v7 = FLOAT_N6_0;
      else
        v7 = 0.0;
    }
    else
    {
      v7 = FLOAT_N18_0;
    }
  }
  else
  {
    v7 = FLOAT_N96_0;
  }
  v8 = *(__int64 (__fastcall **)(CWindowsPolicyManager *, int, const unsigned __int16 *, float))(*(_QWORD *)g_PolicyManager
                                                                                               + 224LL);
  if ( v8 == CWindowsPolicyManager::SetDuckingGainForId )
    CWindowsPolicyManager::SetDuckingGainForId(g_PolicyManager, a3, L"Comm", v7);
  else
    ((void (__fastcall *)(CWindowsPolicyManager *, _QWORD, const unsigned __int16 *))v8)(g_PolicyManager, a3, L"Comm");
}
