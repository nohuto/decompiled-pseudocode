/*
 * XREFs of s_afxOpenAudioEffectsWatcher @ 0x180076B10
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z @ 0x180075F98 (-GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z.c)
 *     ?ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z @ 0x1800768A4 (-ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z.c)
 */

__int64 __fastcall s_afxOpenAudioEffectsWatcher(
        __int64 a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        AudioEffectsWatcherFactory **a5,
        _QWORD *a6)
{
  _QWORD *v6; // rsi
  char v7; // bp
  int Watcher; // ebx
  AudioEffectsWatcherFactory *v13; // rcx
  AudioEffectsWatcherFactory *v14; // rcx
  struct AudioEffectsWatcher *v15; // rax
  struct AudioEffectsWatcher *v16; // rdx
  unsigned int v18; // [rsp+30h] [rbp-38h] BYREF
  struct AudioEffectsWatcher *v19; // [rsp+38h] [rbp-30h] BYREF

  v6 = 0LL;
  v7 = 0;
  v19 = 0LL;
  if ( g_PolicyManager )
  {
    Watcher = CoInitializeEx(0LL, 0);
    if ( Watcher >= 0 )
    {
      v7 = 1;
      v6 = operator new(8uLL);
      if ( v6 )
      {
        Watcher = (*(__int64 (__fastcall **)(CWindowsPolicyManager *, __int64, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)g_PolicyManager + 104LL))(
                    g_PolicyManager,
                    a1,
                    a3,
                    0LL,
                    &v18);
        if ( Watcher >= 0 )
        {
          Watcher = AudioEffectsWatcherFactory::GetWatcher(v13, a2, v18, a4, &v19);
          if ( Watcher < 0 )
          {
            v16 = v19;
          }
          else
          {
            v15 = v19;
            v16 = 0LL;
            *v6 = v19;
            v14 = *(AudioEffectsWatcherFactory **)((char *)v15 + 76);
            *a5 = v14;
            *a6 = v6;
            v6 = 0LL;
            Watcher = 0;
          }
          if ( v16 )
            AudioEffectsWatcherFactory::ReleaseWatcher(v14, v16);
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
  operator delete(v6);
  if ( v7 )
    CoUninitialize();
  return (unsigned int)Watcher;
}
