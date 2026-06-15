/*
 * XREFs of s_afxCloseAudioEffectsWatcher @ 0x180004140
 * Callers:
 *     HAUDIOEFFECTSWATCHER_rundown @ 0x18005A230 (HAUDIOEFFECTSWATCHER_rundown.c)
 * Callees:
 *     ?ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z @ 0x180003DE0 (-ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall s_afxCloseAudioEffectsWatcher(struct AudioEffectsWatcher ***a1)
{
  struct AudioEffectsWatcher **v1; // rdi
  struct AudioEffectsWatcher *v3; // rsi
  AudioEffectsWatcherFactory *v4; // rcx

  v1 = *a1;
  v3 = **a1;
  if ( CoInitializeEx(0LL, 0) >= 0 )
  {
    AudioEffectsWatcherFactory::ReleaseWatcher(v4, v3);
    CoUninitialize();
  }
  operator delete(v1, (const struct std::nothrow_t *)8);
  *a1 = 0LL;
}
