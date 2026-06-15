/*
 * XREFs of ?IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@H@Z @ 0x18001A120
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x18001AEC8 (-GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C370 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

__int64 __fastcall CStreamClassPolicyManager::IsStreamCategoryDucked(
        CStreamClassPolicyManager *this,
        DWORD a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a5,
        int a6)
{
  __int64 v7; // rsi
  unsigned int v9; // edi
  int v10; // ebx
  char *v11; // rdx
  _QWORD *v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  struct CStreamClassPolicyGainsWrapper *v16; // [rsp+20h] [rbp-28h] BYREF
  TSSession *v17; // [rsp+28h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v19; // [rsp+38h] [rbp-10h]

  v7 = a4;
  v9 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( !(unsigned int)TsSessionFromSessionId(a2, 1, 0LL, &v17)
    && (int)TSSession::GetStreamClassPolicyGainsForEndpoint(v17, a3, &v16) >= 0 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)v16;
    v19 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v10 = 0;
    if ( (unsigned int)v7 < 0x15 )
    {
      _mm_lfence();
      v11 = (char *)v16 + 40;
      if ( a6 )
        v11 = (char *)v16 + 1048;
      v12 = *(_QWORD **)&v11[48 * v7];
      while ( v12 )
      {
        v13 = v12[2];
        v12 = (_QWORD *)*v12;
        v14 = *(_QWORD *)(v13 + 48);
        if ( *(float *)v14 != 0.0 && *(_BYTE *)(v14 + 4) )
        {
          v10 = 1;
          break;
        }
      }
    }
    if ( v19 )
      LeaveCriticalSection(lpCriticalSection);
    v9 = v10;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  return v9;
}
