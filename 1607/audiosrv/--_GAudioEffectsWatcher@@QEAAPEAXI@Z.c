/*
 * XREFs of ??_GAudioEffectsWatcher@@QEAAPEAXI@Z @ 0x180003188
 * Callers:
 *     ?ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z @ 0x180003DE0 (-ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z.c)
 *     ?GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z @ 0x180003E94 (-GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z.c)
 * Callees:
 *     ??1AudioEffectsWatcher@@QEAA@XZ @ 0x1800030D4 (--1AudioEffectsWatcher@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

AudioEffectsWatcher *__fastcall AudioEffectsWatcher::`scalar deleting destructor'(AudioEffectsWatcher *this)
{
  AudioEffectsWatcher::~AudioEffectsWatcher(this);
  operator delete(this, (const struct std::nothrow_t *)0xD8);
  return this;
}
