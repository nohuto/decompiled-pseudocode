/*
 * XREFs of ?GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z @ 0x180075F98
 * Callers:
 *     s_afxOpenAudioEffectsWatcher @ 0x180076B10 (s_afxOpenAudioEffectsWatcher.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??0AudioEffectsWatcher@@QEAA@XZ @ 0x180075C90 (--0AudioEffectsWatcher@@QEAA@XZ.c)
 *     ??_GAudioEffectsWatcher@@QEAAPEAXI@Z @ 0x180075F24 (--_GAudioEffectsWatcher@@QEAAPEAXI@Z.c)
 *     ?Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z @ 0x180076120 (-Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCDuckWorkItem@@V?$CElementTraits@PEAVCDuckWorkItem@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCDuckWorkItem@@PEAV312@1@Z @ 0x1800763CC (-NewNode@-$CAtlList@PEAVCDuckWorkItem@@V-$CElementTraits@PEAVCDuckWorkItem@@@ATL@@@ATL@@AEAAPEAV.c)
 *     ?ReleaseAppRef@AudioEffectsWatcher@@QEAAKXZ @ 0x180076814 (-ReleaseAppRef@AudioEffectsWatcher@@QEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioEffectsWatcherFactory::GetWatcher(
        AudioEffectsWatcherFactory *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        struct AudioEffectsWatcher **a5)
{
  struct AudioEffectsWatcher **v8; // rsi
  _QWORD *i; // rdi
  __int64 v10; // rbx
  int v11; // edi
  AudioEffectsWatcher *v12; // rbx
  AudioEffectsWatcher *v13; // rax
  __int64 v14; // rax
  AudioEffectsWatcherFactory *v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = this;
  v8 = a5;
  *a5 = 0LL;
  EnterCriticalSection(&TheAudioEffectsWatcherFactory);
  for ( i = (_QWORD *)qword_1800E8838; i; i = (_QWORD *)*i )
  {
    v10 = i[2];
    if ( CompareStringOrdinal(a2, -1, *(LPCWCH *)(v10 + 8), -1, 1) == 2
      && a3 == *(_DWORD *)(v10 + 16)
      && a4 == *(_DWORD *)(v10 + 20) )
    {
      if ( ++*(_DWORD *)(v10 + 56) < 0x3FFFFFFFu )
      {
        v11 = 0;
        *v8 = (struct AudioEffectsWatcher *)v10;
      }
      else
      {
        AudioEffectsWatcher::ReleaseAppRef((AudioEffectsWatcher *)v10);
        v11 = -2147024882;
      }
      v12 = 0LL;
      goto LABEL_21;
    }
  }
  v13 = (AudioEffectsWatcher *)operator new(0xD8uLL);
  v16 = v13;
  if ( v13 )
    v12 = AudioEffectsWatcher::AudioEffectsWatcher(v13);
  else
    v12 = 0LL;
  v16 = v12;
  if ( v12 )
  {
    v11 = AudioEffectsWatcher::Init(v12, a2, a3, a4);
    if ( v11 >= 0 )
    {
      v14 = ATL::CAtlList<CDuckWorkItem *,ATL::CElementTraits<CDuckWorkItem *>>::NewNode(
              &qword_1800E8838,
              &v16,
              qword_1800E8840);
      if ( qword_1800E8840 )
        *(_QWORD *)qword_1800E8840 = v14;
      else
        qword_1800E8838 = v14;
      qword_1800E8840 = v14;
      *((_QWORD *)v12 + 8) = v14;
      ++*((_DWORD *)v12 + 14);
      *v8 = v12;
      v12 = 0LL;
      v11 = 0;
    }
  }
  else
  {
    v11 = -2147024882;
  }
LABEL_21:
  LeaveCriticalSection(&TheAudioEffectsWatcherFactory);
  if ( v12 )
    AudioEffectsWatcher::`scalar deleting destructor'(v12);
  return (unsigned int)v11;
}
