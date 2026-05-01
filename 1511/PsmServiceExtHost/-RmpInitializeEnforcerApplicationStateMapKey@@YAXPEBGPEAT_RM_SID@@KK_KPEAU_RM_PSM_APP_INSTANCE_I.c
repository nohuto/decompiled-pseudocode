/*
 * XREFs of ?RmpInitializeEnforcerApplicationStateMapKey@@YAXPEBGPEAT_RM_SID@@KK_KPEAU_RM_PSM_APP_INSTANCE_ID@@@Z @ 0x18001B284
 * Callers:
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x1800165C0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     ?CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x1800172F8 (-CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SI.c)
 *     ?FindApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x1800360C0 (-FindApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@.c)
 * Callees:
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

void __fastcall RmpInitializeEnforcerApplicationStateMapKey(
        const unsigned __int16 *a1,
        union _RM_SID *a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        wchar_t *Buffer)
{
  memset_0(Buffer, 0, 0x228uLL);
  if ( swprintf_s(Buffer, 0xE8uLL, L"%s", a1) <= 0 )
    __fastfail(0x80070057);
  *((_OWORD *)Buffer + 29) = *(_OWORD *)a2;
  *((_OWORD *)Buffer + 30) = *((_OWORD *)a2 + 1);
  *((_OWORD *)Buffer + 31) = *((_OWORD *)a2 + 2);
  *((_OWORD *)Buffer + 32) = *((_OWORD *)a2 + 3);
  *((_DWORD *)Buffer + 132) = *((_DWORD *)a2 + 16);
  *((_DWORD *)Buffer + 134) = a4;
  *((_QWORD *)Buffer + 68) = a5;
  *((_DWORD *)Buffer + 133) = a3;
}
