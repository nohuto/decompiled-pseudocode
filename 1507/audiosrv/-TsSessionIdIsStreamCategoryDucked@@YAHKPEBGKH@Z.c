/*
 * XREFs of ?TsSessionIdIsStreamCategoryDucked@@YAHKPEBGKH@Z @ 0x1800A0080
 * Callers:
 *     ?IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@H@Z @ 0x1800A3F00 (-IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_00.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18000A0E0 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x18002FAC0 (-GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@.c)
 *     ?IsStreamCategoryDucked@CStreamClassPolicyGains@@QEAAHKH@Z @ 0x1800AB43C (-IsStreamCategoryDucked@CStreamClassPolicyGains@@QEAAHKH@Z.c)
 */

__int64 __fastcall TsSessionIdIsStreamCategoryDucked(DWORD a1, const unsigned __int16 *a2, unsigned int a3, int a4)
{
  unsigned int IsStreamCategoryDucked; // edi
  TSSession *v10; // [rsp+20h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+28h] [rbp-10h] BYREF

  IsStreamCategoryDucked = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( !(unsigned int)TsSessionFromSessionId(a1, 1, 0LL, &v10)
    && (int)TSSession::GetStreamClassPolicyGainsForEndpoint(
              v10,
              (__int64)a2,
              (struct CStreamClassPolicyGainsWrapper **)&v11) >= 0 )
  {
    IsStreamCategoryDucked = CStreamClassPolicyGains::IsStreamCategoryDucked(v11, a3, a4);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  return IsStreamCategoryDucked;
}
