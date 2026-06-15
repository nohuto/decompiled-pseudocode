/*
 * XREFs of ?GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z @ 0x180003E94
 * Callers:
 *     s_afxOpenAudioEffectsWatcher @ 0x1800044C0 (s_afxOpenAudioEffectsWatcher.c)
 * Callees:
 *     ??_GAudioEffectsWatcher@@QEAAPEAXI@Z @ 0x180003188 (--_GAudioEffectsWatcher@@QEAAPEAXI@Z.c)
 *     ?ReleaseAppRef@AudioEffectsWatcher@@QEAAKXZ @ 0x1800034A4 (-ReleaseAppRef@AudioEffectsWatcher@@QEAAKXZ.c)
 *     ?Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z @ 0x180003518 (-Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z.c)
 *     ??0AudioEffectsWatcher@@QEAA@XZ @ 0x1800037B4 (--0AudioEffectsWatcher@@QEAA@XZ.c)
 *     ?NewNode@?$CAtlList@PEAVAudioEffectsWatcher@@V?$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVAudioEffectsWatcher@@PEAV312@1@Z @ 0x18000404C (-NewNode@-$CAtlList@PEAVAudioEffectsWatcher@@V-$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@A.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
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
  AudioEffectsWatcher *v12; // rax
  AudioEffectsWatcher *v13; // rbx
  __int64 v14; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-30h] BYREF
  char v17; // [rsp+40h] [rbp-28h]
  AudioEffectsWatcherFactory *v18; // [rsp+70h] [rbp+8h] BYREF

  v18 = this;
  v8 = a5;
  *a5 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)&TheAudioEffectsWatcherFactory;
  v17 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  for ( i = (_QWORD *)qword_1800CB4C8; i; i = (_QWORD *)*i )
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
      goto LABEL_22;
    }
  }
  v12 = (AudioEffectsWatcher *)operator new(0xD8uLL);
  v18 = v12;
  if ( v12 )
    v13 = AudioEffectsWatcher::AudioEffectsWatcher(v12);
  else
    v13 = 0LL;
  v18 = v13;
  if ( v13 )
  {
    v11 = AudioEffectsWatcher::Init(v13, a2, a3, a4);
    if ( v11 >= 0 )
    {
      v14 = ATL::CAtlList<AudioEffectsWatcher *,ATL::CElementTraits<AudioEffectsWatcher *>>::NewNode(
              &qword_1800CB4C8,
              &v18,
              qword_1800CB4D0);
      if ( qword_1800CB4D0 )
        *(_QWORD *)qword_1800CB4D0 = v14;
      else
        qword_1800CB4C8 = v14;
      qword_1800CB4D0 = v14;
      *((_QWORD *)v13 + 8) = v14;
      ++*((_DWORD *)v13 + 14);
      *v8 = v13;
      v13 = 0LL;
      v11 = 0;
    }
  }
  else
  {
    v11 = -2147024882;
  }
  if ( v13 )
    AudioEffectsWatcher::`scalar deleting destructor'(v13);
LABEL_22:
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v11;
}
