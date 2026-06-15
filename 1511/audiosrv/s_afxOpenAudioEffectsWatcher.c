/*
 * XREFs of s_afxOpenAudioEffectsWatcher @ 0x180030730
 * Callers:
 *     <none>
 * Callees:
 *     ?DeriveAudioServerStreamCategory@CWindowsPolicyManager@@UEAAJPEAXW4_AUDIO_STREAM_CATEGORY@@KPEAK@Z @ 0x18001B340 (-DeriveAudioServerStreamCategory@CWindowsPolicyManager@@UEAAJPEAXW4_AUDIO_STREAM_CATEGORY@@KPEAK.c)
 *     ?GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z @ 0x180030888 (-GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z @ 0x180066524 (-ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z.c)
 */

__int64 __fastcall s_afxOpenAudioEffectsWatcher(
        void *a1,
        unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        AudioEffectsWatcherFactory **a5,
        _QWORD *a6)
{
  _QWORD *v6; // rdi
  char v7; // bp
  HRESULT Watcher; // ebx
  HANDLE ProcessHeap; // rax
  __int64 (__fastcall *v14)(CWindowsPolicyManager *, void *, unsigned int, unsigned int, unsigned int *); // rsi
  int v15; // eax
  AudioEffectsWatcherFactory *v16; // rcx
  AudioEffectsWatcherFactory *v17; // rcx
  struct AudioEffectsWatcher *v18; // rax
  struct AudioEffectsWatcher *v19; // rdx
  HANDLE v20; // rax
  unsigned int v22; // [rsp+30h] [rbp-38h] BYREF
  struct AudioEffectsWatcher *v23; // [rsp+38h] [rbp-30h] BYREF

  v6 = 0LL;
  v7 = 0;
  v23 = 0LL;
  if ( g_PolicyManager )
  {
    Watcher = CoInitializeEx(0LL, 0);
    if ( Watcher >= 0 )
    {
      v7 = 1;
      ProcessHeap = GetProcessHeap();
      v6 = HeapAlloc(ProcessHeap, 0, 8uLL);
      if ( v6 )
      {
        v14 = *(__int64 (__fastcall **)(CWindowsPolicyManager *, void *, unsigned int, unsigned int, unsigned int *))(*(_QWORD *)g_PolicyManager + 104LL);
        if ( v14 == CWindowsPolicyManager::DeriveAudioServerStreamCategory )
          v15 = CWindowsPolicyManager::DeriveAudioServerStreamCategory(g_PolicyManager, a1, a3, 0, &v22);
        else
          v15 = v14(g_PolicyManager, a1, a3, 0, &v22);
        Watcher = v15;
        if ( v15 >= 0 )
        {
          Watcher = AudioEffectsWatcherFactory::GetWatcher(v16, a2, v22, a4, &v23);
          if ( Watcher < 0 )
          {
            v19 = v23;
          }
          else
          {
            v18 = v23;
            v19 = 0LL;
            *v6 = v23;
            v17 = *(AudioEffectsWatcherFactory **)((char *)v18 + 76);
            *a5 = v17;
            *a6 = v6;
            v6 = 0LL;
            Watcher = 0;
          }
          if ( v19 )
            AudioEffectsWatcherFactory::ReleaseWatcher(v17, v19);
        }
      }
      else
      {
        Watcher = -2147024882;
      }
    }
  }
  else
  {
    Watcher = -2147418113;
  }
  v20 = GetProcessHeap();
  HeapFree(v20, 0, v6);
  if ( v7 )
    CoUninitialize();
  return (unsigned int)Watcher;
}
