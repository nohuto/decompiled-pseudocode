/*
 * XREFs of ?UpdatePolicyForOutgoingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAH@Z @ 0x18000DB50
 * Callers:
 *     ?SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z @ 0x180012330 (-SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18002C130 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAH@Z @ 0x180017020 (-UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAH@Z.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x18002FAC0 (-GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@.c)
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18004070C (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

__int64 __fastcall CStreamClassPolicyManager::UpdatePolicyForOutgoingStream(
        CStreamClassPolicyManager *this,
        DWORD a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a5,
        int *a6)
{
  _QWORD *v9; // rax
  TSSession *v10; // rcx
  signed int StreamClassPolicyGainsForEndpoint; // ebx
  int v13; // eax
  struct _RTL_CRITICAL_SECTION *v14[3]; // [rsp+20h] [rbp-18h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v14[0] = 0LL;
  v9 = qword_1800E88D0;
  while ( v9 )
  {
    v10 = (TSSession *)v9[2];
    v9 = (_QWORD *)*v9;
    if ( a2 == *(_DWORD *)v10 )
      goto LABEL_4;
  }
  v13 = TsSessionCreate(a2, 0LL, (struct TSSession **)v14);
  StreamClassPolicyGainsForEndpoint = v13;
  if ( !v13 )
  {
    v10 = (TSSession *)v14[0];
LABEL_4:
    StreamClassPolicyGainsForEndpoint = TSSession::GetStreamClassPolicyGainsForEndpoint(
                                          v10,
                                          a3,
                                          (struct CStreamClassPolicyGainsWrapper **)v14);
    if ( StreamClassPolicyGainsForEndpoint >= 0 )
      StreamClassPolicyGainsForEndpoint = CStreamClassPolicyGainsWrapper::UpdateStreamClassPolicyGains(
                                            v14[0],
                                            a4,
                                            1,
                                            a6);
    goto LABEL_6;
  }
  if ( v13 > 0 )
    StreamClassPolicyGainsForEndpoint = (unsigned __int16)v13 | 0x80070000;
LABEL_6:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  return (unsigned int)StreamClassPolicyGainsForEndpoint;
}
