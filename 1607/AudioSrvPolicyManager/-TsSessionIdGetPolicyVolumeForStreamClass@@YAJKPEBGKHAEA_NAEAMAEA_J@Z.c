/*
 * XREFs of ?TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHAEA_NAEAMAEA_J@Z @ 0x18001D080
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAEA_J@Z @ 0x180019D00 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAE.c)
 * Callees:
 *     ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x18001AEC8 (-GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C370 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEA_NAEAMAEA_J@Z @ 0x1800236CC (-GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEA_NAEAMAEA_J@Z.c)
 */

__int64 __fastcall TsSessionIdGetPolicyVolumeForStreamClass(
        DWORD SessionId,
        char *a2,
        unsigned int a3,
        int a4,
        bool *a5,
        float *a6,
        __int64 *a7)
{
  int v11; // eax
  int StreamClassPolicyGainsForEndpoint; // ebx
  TSSession *v14; // [rsp+30h] [rbp-18h] BYREF
  CStreamClassPolicyGains *v15; // [rsp+38h] [rbp-10h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v11 = TsSessionFromSessionId(SessionId, 1, 0LL, &v14);
  if ( v11 )
  {
    StreamClassPolicyGainsForEndpoint = (unsigned __int16)v11 | 0x80070000;
    if ( v11 <= 0 )
      StreamClassPolicyGainsForEndpoint = v11;
  }
  else
  {
    StreamClassPolicyGainsForEndpoint = TSSession::GetStreamClassPolicyGainsForEndpoint(
                                          v14,
                                          a2,
                                          (struct _RTL_CRITICAL_SECTION **)&v15);
    if ( StreamClassPolicyGainsForEndpoint >= 0 )
      StreamClassPolicyGainsForEndpoint = CStreamClassPolicyGains::GetPolicyVolumeForStreamClass(
                                            v15,
                                            a3,
                                            a4,
                                            a5,
                                            a6,
                                            a7);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  return (unsigned int)StreamClassPolicyGainsForEndpoint;
}
