/*
 * XREFs of ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180029104
 * Callers:
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x18001CA90 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001DE10 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x18001ED40 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 *     ?RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@@Z @ 0x1800A0BA8 (-RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180025C90 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ?QueryInterface@CAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180028A20 (-QueryInterface@CAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetState@CAudioSession@@UEAA?AW4_AudioSessionState@@XZ @ 0x180028B60 (-GetState@CAudioSession@@UEAA-AW4_AudioSessionState@@XZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProcess::RecalculateVolume(__int64 a1, unsigned int a2)
{
  _QWORD *v4; // rsi
  CAudioSession *v6; // rbx
  __int64 (__fastcall *v7)(CAudioSession *); // rdi
  int State; // eax
  __int64 (__fastcall *v9)(CAudioSession *, const struct _GUID *, void **); // rdi
  int v10; // eax
  void (__fastcall *v11)(__int64, unsigned int, GUID *, unsigned int, char, __int64 *); // rdi
  int v12; // [rsp+20h] [rbp-40h]
  __int64 v13; // [rsp+30h] [rbp-30h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-28h] BYREF
  char v15; // [rsp+40h] [rbp-20h]
  LPCRITICAL_SECTION v16; // [rsp+48h] [rbp-18h] BYREF
  char v17; // [rsp+50h] [rbp-10h]
  void *v18; // [rsp+80h] [rbp+20h] BYREF

  v13 = -2LL;
  v16 = (LPCRITICAL_SECTION)(a1 + 32);
  v17 = 0;
  ATL::CCritSecLock::Lock(&v16);
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 120);
  v15 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = *(_QWORD **)(a1 + 72);
  while ( v4 )
  {
    v6 = (CAudioSession *)v4[2];
    v4 = (_QWORD *)*v4;
    v7 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)v6 + 32LL);
    if ( v7 == CAudioSession::GetState )
      State = CAudioSession::GetState(v6);
    else
      State = v7(v6);
    if ( State != 2 )
    {
      v18 = 0LL;
      v9 = **(__int64 (__fastcall ***)(CAudioSession *, const struct _GUID *, void **))v6;
      if ( v9 == CAudioSession::QueryInterface )
        v10 = CAudioSession::QueryInterface(v6, &GUID_ec081b02_27c6_4867_9203_959f1731a3e5, &v18);
      else
        v10 = v9(v6, &GUID_ec081b02_27c6_4867_9203_959f1731a3e5, &v18);
      if ( v10 >= 0 )
      {
        v11 = *(void (__fastcall **)(__int64, unsigned int, GUID *, unsigned int, char, __int64 *))(*(_QWORD *)v18 + 24LL);
        if ( v11 == CAudioSession::RecalculateSessionVolume )
        {
          CAudioSession::RecalculateSessionVolume((__int64)v18, a2, 0LL, 0xFFFFFFFF, 0, 0LL);
        }
        else
        {
          LOBYTE(v12) = 0;
          ((void (__fastcall *)(void *, _QWORD, _QWORD, __int64, int, _QWORD, __int64))v11)(
            v18,
            a2,
            0LL,
            0xFFFFFFFFLL,
            v12,
            0LL,
            v13);
        }
      }
      if ( v18 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v18 + 16LL))(v18);
    }
  }
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v17 )
    LeaveCriticalSection(v16);
  return 0LL;
}
