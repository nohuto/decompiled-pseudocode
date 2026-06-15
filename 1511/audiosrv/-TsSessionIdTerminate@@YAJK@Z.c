/*
 * XREFs of ?TsSessionIdTerminate@@YAJK@Z @ 0x18009D690
 * Callers:
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x180030040 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002C5A0 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x18003AE84 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXXZ @ 0x180065AC4 (-RemoveAll@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCa.c)
 */

__int64 __fastcall TsSessionIdTerminate(DWORD a1)
{
  unsigned int v2; // eax
  unsigned int v3; // edi
  struct TSSession *v4; // rbx
  char *v5; // rcx
  void *v6; // rdx
  struct TSSession *v8; // [rsp+38h] [rbp+10h] BYREF
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v2 = TsSessionFromSessionId(a1, 0, &v9, &v8);
  v3 = v2;
  if ( v2 == 1168 )
  {
    v3 = 0;
  }
  else if ( !v2 )
  {
    v4 = v8;
    v5 = (char *)v8 + 176;
    *((_DWORD *)v8 + 12) = 1;
    ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAll((__int64)v5);
    v6 = v9;
    *((_DWORD *)v4 + 56) = 1065353216;
    TsSessionUpdateAudioProtocol(v4, v6, 0xFFFF);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  return v3;
}
