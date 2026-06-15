/*
 * XREFs of ??0AudioEffectsWatcher@@QEAA@XZ @ 0x180075C90
 * Callers:
 *     ?GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z @ 0x180075F98 (-GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z.c)
 * Callees:
 *     ??_L@YAXPEAX_KHP6AX0@Z2@Z @ 0x180043758 (--_L@YAXPEAX_KHP6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=1
AudioEffectsWatcher *__fastcall AudioEffectsWatcher::AudioEffectsWatcher(AudioEffectsWatcher *this)
{
  *(_QWORD *)this = &AudioEffectsWatcher::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *(GUID *)((char *)this + 24) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 5) = 0LL;
  *((_BYTE *)this + 48) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_BYTE *)this + 72) = 0;
  `eh vector constructor iterator'((char *)this + 88, 32LL, 3, (void (__fastcall *)(char *))ApoData::ApoData);
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *(_OWORD *)((char *)this + 88) = xmmword_1800E7460;
  *(_OWORD *)((char *)this + 104) = xmmword_1800E7470;
  *(_OWORD *)((char *)this + 120) = xmmword_1800E7480;
  *(_OWORD *)((char *)this + 136) = xmmword_1800E7490;
  *(_OWORD *)((char *)this + 152) = xmmword_1800E74A0;
  *(_OWORD *)((char *)this + 168) = xmmword_1800E74B0;
  return this;
}
