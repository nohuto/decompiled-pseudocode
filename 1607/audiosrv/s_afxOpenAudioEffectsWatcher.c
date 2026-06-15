/*
 * XREFs of s_afxOpenAudioEffectsWatcher @ 0x1800044C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z @ 0x180003DE0 (-ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z.c)
 *     ?GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z @ 0x180003E94 (-GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_afxOpenAudioEffectsWatcher(
        __int64 a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        AudioEffectsWatcherFactory **a5,
        struct AudioEffectsWatcher ***a6)
{
  struct AudioEffectsWatcher **v6; // rdi
  char v7; // si
  int Watcher; // ebx
  AudioEffectsWatcherFactory *v13; // rcx
  AudioEffectsWatcherFactory *v14; // rcx
  struct AudioEffectsWatcher *v15; // rax
  struct AudioEffectsWatcher *v16; // rdx
  unsigned int v18; // [rsp+30h] [rbp-28h] BYREF
  struct AudioEffectsWatcher *v19; // [rsp+38h] [rbp-20h] BYREF

  v6 = 0LL;
  v7 = 0;
  v19 = 0LL;
  if ( g_PolicyManager )
  {
    Watcher = CoInitializeEx(0LL, 0);
    if ( Watcher >= 0 )
    {
      v7 = 1;
      v6 = (struct AudioEffectsWatcher **)operator new(8uLL);
      if ( v6 )
      {
        Watcher = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)g_PolicyManager + 96LL))(
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
  operator delete(v6, (const struct std::nothrow_t *)8);
  if ( v7 )
    CoUninitialize();
  return (unsigned int)Watcher;
}
