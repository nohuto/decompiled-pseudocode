/*
 * XREFs of ?FindApplication@CApplicationManager@@AEAAJKPEAPEAVCApplication@@@Z @ 0x180014D98
 * Callers:
 *     ?RegisterAppVolumePolicyChange@CWindowsPolicyManager@@UEAAJKPEAUIAudioAppVolumePolicyChange@@@Z @ 0x1800055C0 (-RegisterAppVolumePolicyChange@CWindowsPolicyManager@@UEAAJKPEAUIAudioAppVolumePolicyChange@@@Z.c)
 *     ?UnregisterAppVolumePolicyChange@CWindowsPolicyManager@@UEAAJKPEAUIAudioAppVolumePolicyChange@@@Z @ 0x180005670 (-UnregisterAppVolumePolicyChange@CWindowsPolicyManager@@UEAAJKPEAUIAudioAppVolumePolicyChange@@@.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A3D0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CApplicationManager::FindApplication(CApplicationManager *this, int a2, struct CApplication **a3)
{
  unsigned int v3; // ebx
  _QWORD *v7; // rcx
  struct CApplication *v8; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  v3 = -2147024809;
  if ( a3 )
  {
    v3 = 0;
    v11 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    *a3 = 0LL;
    v7 = (_QWORD *)*((_QWORD *)this + 8);
    while ( v7 && !*a3 )
    {
      v8 = (struct CApplication *)v7[2];
      v7 = (_QWORD *)*v7;
      if ( *((_DWORD *)v8 + 4) == a2 )
        *a3 = v8;
    }
    if ( !*a3 )
      v3 = -2147023728;
    if ( v11 )
      LeaveCriticalSection(lpCriticalSection);
  }
  return v3;
}
