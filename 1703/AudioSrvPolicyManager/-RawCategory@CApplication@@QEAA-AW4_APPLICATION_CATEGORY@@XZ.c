/*
 * XREFs of ?RawCategory@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18000B088
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180013C80 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CApplication::RawCategory(__int64 a1)
{
  _QWORD *v2; // rdx
  int v3; // edi
  _DWORD *v4; // rcx
  int v5; // eax
  int v6; // r8d
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  v9 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = *(_QWORD **)(a1 + 72);
  v3 = 4;
  while ( v2 )
  {
    v4 = (_DWORD *)v2[2];
    v2 = (_QWORD *)*v2;
    if ( !v4[104] )
    {
      v5 = v4[114];
      if ( v5 && v4[113] == 4 )
        v6 = v4[115];
      else
        v6 = v4[78];
      if ( v6 < v3 )
      {
        if ( v5 && v4[113] == 4 )
          v3 = v4[115];
        else
          v3 = v4[78];
      }
    }
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v3;
}
