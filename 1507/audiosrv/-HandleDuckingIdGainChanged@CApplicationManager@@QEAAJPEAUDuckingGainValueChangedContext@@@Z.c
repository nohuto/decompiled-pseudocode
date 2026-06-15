/*
 * XREFs of ?HandleDuckingIdGainChanged@CApplicationManager@@QEAAJPEAUDuckingGainValueChangedContext@@@Z @ 0x18001BAA0
 * Callers:
 *     ?Invoke@?$CGenericApplicationManagerWorkItem@UDuckingGainValueChangedContext@@@@UEAAXXZ @ 0x18002C780 (-Invoke@-$CGenericApplicationManagerWorkItem@UDuckingGainValueChangedContext@@@@UEAAXXZ.c)
 * Callees:
 *     ?UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z @ 0x18000D9B0 (-UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001C754 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CApplicationManager::HandleDuckingIdGainChanged(
        CApplicationManager *this,
        struct DuckingGainValueChangedContext *a2)
{
  const unsigned __int16 *v3; // rbp
  DWORD v5; // r14d
  float v6; // xmm6_4
  __int64 (__fastcall *v7)(CStreamClassPolicyManager *, DWORD, const unsigned __int16 *, float, bool *); // rsi
  __int64 result; // rax
  bool v9; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(const unsigned __int16 **)a2;
  v5 = *((_DWORD *)a2 + 2);
  v6 = *((float *)a2 + 3);
  v9 = 0;
  v7 = *(__int64 (__fastcall **)(CStreamClassPolicyManager *, DWORD, const unsigned __int16 *, float, bool *))(*((_QWORD *)g_StreamClassPolicyManager + 2) + 32LL);
  if ( v7 == CStreamClassPolicyManager::UpdateDuckingGainForId )
    result = CStreamClassPolicyManager::UpdateDuckingGainForId(
               (struct CStreamClassPolicyManager *)((char *)g_StreamClassPolicyManager + 16),
               v5,
               v3,
               v6,
               &v9);
  else
    result = ((__int64 (__fastcall *)(char *, _QWORD, const unsigned __int16 *))v7)(
               (char *)g_StreamClassPolicyManager + 16,
               v5,
               v3);
  if ( (int)result >= 0 && v9 )
    return CApplicationManager::UpdateVolumeForAllAppsInSession(this, *((unsigned int *)a2 + 2), 3LL);
  return result;
}
