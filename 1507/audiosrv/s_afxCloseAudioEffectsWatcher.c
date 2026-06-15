/*
 * XREFs of s_afxCloseAudioEffectsWatcher @ 0x180076AB0
 * Callers:
 *     HAUDIOEFFECTSWATCHER_rundown @ 0x180076A90 (HAUDIOEFFECTSWATCHER_rundown.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z @ 0x1800768A4 (-ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z.c)
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
  operator delete(v1);
  *a1 = 0LL;
}
