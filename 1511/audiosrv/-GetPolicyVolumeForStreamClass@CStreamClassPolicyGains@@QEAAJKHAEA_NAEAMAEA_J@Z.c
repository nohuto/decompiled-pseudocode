/*
 * XREFs of ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEA_NAEAMAEA_J@Z @ 0x18003835C
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAEA_J@Z @ 0x18002A9E0 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAE.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000EDE8 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ConvertDbToEngineVolume @ 0x1800A8F6C (ConvertDbToEngineVolume.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamClassPolicyGains::GetPolicyVolumeForStreamClass(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned int a2,
        int a3,
        bool *a4,
        float *a5,
        __int64 *a6)
{
  __int64 v8; // rbp
  float *v10; // r14
  __int64 *v11; // rsi
  LONG *p_LockCount; // rdx
  __int64 v13; // rcx
  _QWORD *Next; // rax
  __int64 v16; // rdi
  __int64 v17; // rcx
  float v18; // xmm0_4
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v20; // [rsp+30h] [rbp-28h]

  v8 = a2;
  lpCriticalSection = this;
  v20 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *a4 = 0;
  v10 = a5;
  *a5 = 1.0;
  v11 = a6;
  *a6 = 0LL;
  p_LockCount = &this[26].LockCount;
  if ( !a3 )
    p_LockCount = (LONG *)&this[1];
  if ( (unsigned int)v8 < 0x15 )
  {
    v13 = 6 * v8;
    a5 = *(float **)&p_LockCount[12 * v8];
    if ( a5 )
    {
      while ( 1 )
      {
        Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v13, (_QWORD **)&a5);
        v16 = *(_QWORD *)(*(_QWORD *)(*Next + 48LL) + 8LL);
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*Next + 24LL))(*Next) )
          break;
        v18 = ConvertDbToEngineVolume(v17);
        if ( *v10 > v18 )
          *v10 = v18;
        if ( v16 > *v11 )
          *v11 = v16;
        if ( !a5 )
          goto LABEL_5;
      }
      *a4 = 1;
    }
  }
LABEL_5:
  if ( v20 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
