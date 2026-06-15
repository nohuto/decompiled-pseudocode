/*
 * XREFs of ?RegisterAppVolumePolicyChange@CWindowsPolicyManager@@UEAAJKPEAUIAudioAppVolumePolicyChange@@@Z @ 0x1800055C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RegisterAppVolumePolicyChange@CApplication@@QEAAJPEAUIAudioAppVolumePolicyChange@@@Z @ 0x18000D144 (-RegisterAppVolumePolicyChange@CApplication@@QEAAJPEAUIAudioAppVolumePolicyChange@@@Z.c)
 *     ?FindApplication@CApplicationManager@@AEAAJKPEAPEAVCApplication@@@Z @ 0x180014D98 (-FindApplication@CApplicationManager@@AEAAJKPEAPEAVCApplication@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::RegisterAppVolumePolicyChange(
        CWindowsPolicyManager *this,
        unsigned int a2,
        struct IAudioAppVolumePolicyChange *a3)
{
  CApplicationManager *v6; // rbx
  int Application; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]
  CApplication *v11; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(CWindowsPolicyManager *))(*(_QWORD *)this + 256LL))(this);
  v6 = g_ApplicationManager;
  v10 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  Application = CApplicationManager::FindApplication(v6, a2, &v11);
  if ( Application >= 0 )
    Application = CApplication::RegisterAppVolumePolicyChange(v11, a3);
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  (*(void (__fastcall **)(CWindowsPolicyManager *))(*(_QWORD *)this + 264LL))(this);
  return (unsigned int)Application;
}
