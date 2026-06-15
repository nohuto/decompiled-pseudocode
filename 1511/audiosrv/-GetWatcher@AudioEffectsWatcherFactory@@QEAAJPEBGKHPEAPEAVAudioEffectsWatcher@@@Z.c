/*
 * XREFs of ?GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z @ 0x180030888
 * Callers:
 *     s_afxOpenAudioEffectsWatcher @ 0x180030730 (s_afxOpenAudioEffectsWatcher.c)
 * Callees:
 *     ?Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z @ 0x1800310D8 (-Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z.c)
 *     ??0AudioEffectsWatcher@@QEAA@XZ @ 0x180031370 (--0AudioEffectsWatcher@@QEAA@XZ.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x180031518 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ??_GAudioEffectsWatcher@@QEAAPEAXI@Z @ 0x1800646DC (--_GAudioEffectsWatcher@@QEAAPEAXI@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioEffectsWatcherFactory::GetWatcher(
        AudioEffectsWatcherFactory *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        struct AudioEffectsWatcher **a5)
{
  _QWORD *i; // rdi
  HANDLE ProcessHeap; // rax
  AudioEffectsWatcher *v10; // rax
  AudioEffectsWatcher *v11; // rbx
  int v12; // edi
  __int64 v13; // rdi
  __int64 *v14; // rax
  struct ATL::CAtlPlex *v15; // r8
  int v16; // edx
  __int64 *v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // edx

  *a5 = 0LL;
  EnterCriticalSection(&TheAudioEffectsWatcherFactory);
  for ( i = (_QWORD *)qword_1800E6808; i; i = (_QWORD *)*i )
  {
    v11 = (AudioEffectsWatcher *)i[2];
    if ( CompareStringOrdinal(a2, -1, *((LPCWCH *)v11 + 1), -1, 1) == 2
      && a3 == *((_DWORD *)v11 + 4)
      && a4 == *((_DWORD *)v11 + 5) )
    {
      goto LABEL_17;
    }
  }
  ProcessHeap = GetProcessHeap();
  v10 = (AudioEffectsWatcher *)HeapAlloc(ProcessHeap, 0, 0xD8uLL);
  if ( v10 )
    v11 = AudioEffectsWatcher::AudioEffectsWatcher(v10);
  else
    v11 = 0LL;
  if ( v11 )
  {
    v12 = AudioEffectsWatcher::Init(v11, a2, a3, a4);
    if ( v12 < 0 )
      goto LABEL_18;
    v13 = qword_1800E6810;
    v14 = (__int64 *)qword_1800E6828;
    if ( !qword_1800E6828 )
    {
      v15 = ATL::CAtlPlex::Create(&qword_1800E6820, (unsigned int)dword_1800E6830, 0x18uLL);
      if ( !v15 )
        ATL::AtlThrowImpl(-2147024882);
      v16 = dword_1800E6830;
      v17 = (__int64 *)((char *)v15
                      + 16 * (unsigned int)(dword_1800E6830 - 1)
                      + 8 * (unsigned int)(dword_1800E6830 - 1)
                      + 8);
      v14 = (__int64 *)qword_1800E6828;
      while ( --v16 >= 0 )
      {
        *v17 = (__int64)v14;
        v14 = v17;
        qword_1800E6828 = (__int64)v17;
        v17 -= 3;
      }
    }
    v18 = *v14;
    if ( v14 )
      v14[2] = (__int64)v11;
    qword_1800E6828 = v18;
    v14[1] = v13;
    *v14 = 0LL;
    ++qword_1800E6818;
    if ( qword_1800E6810 )
      *(_QWORD *)qword_1800E6810 = v14;
    else
      qword_1800E6808 = (__int64)v14;
    qword_1800E6810 = (__int64)v14;
    *((_QWORD *)v11 + 8) = v14;
LABEL_17:
    ++*((_DWORD *)v11 + 14);
    *a5 = v11;
    v11 = 0LL;
    v12 = 0;
    goto LABEL_18;
  }
  v12 = -2147024882;
LABEL_18:
  LeaveCriticalSection(&TheAudioEffectsWatcherFactory);
  if ( v11 )
    AudioEffectsWatcher::`scalar deleting destructor'(v11, v19);
  return (unsigned int)v12;
}
