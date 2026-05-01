/*
 * XREFs of ?HandlePsmHostEmpty@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000A60C
 * Callers:
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x180009FE0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180013700 (_TlgCreateWsz.c)
 *     _TlgCreateSid @ 0x1800151E4 (_TlgCreateSid.c)
 *     ?RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z @ 0x180015680 (-RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z.c)
 *     ??$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_HOST_INFO@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180015CE0 (--$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HO.c)
 *     ?erase@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@utl@@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@utl@@@2@0@Z @ 0x180015FD4 (-erase@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationStat.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

void __fastcall ModernResourceEnforcer::HandlePsmHostEmpty(
        ModernResourceEnforcer *this,
        WCHAR *a2,
        SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  int v10; // r11d
  ULONGLONG v11; // r10
  int v12; // edx
  unsigned int v13; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  char v18[8]; // [rsp+58h] [rbp-A8h] BYREF
  char v19[16]; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t Destination[280]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+2A0h] [rbp+1A0h] BYREF
  void *v22; // [rsp+2B0h] [rbp+1B0h]
  int v23; // [rsp+2B8h] [rbp+1B8h]
  int v24; // [rsp+2BCh] [rbp+1BCh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2C0h] [rbp+1C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+2D0h] [rbp+1D0h] BYREF
  unsigned int *v27; // [rsp+2E0h] [rbp+1E0h]
  int v28; // [rsp+2E8h] [rbp+1E8h]
  int v29; // [rsp+2ECh] [rbp+1ECh]
  unsigned int *v30; // [rsp+2F0h] [rbp+1F0h]
  int v31; // [rsp+2F8h] [rbp+1F8h]
  int v32; // [rsp+2FCh] [rbp+1FCh]
  unsigned __int64 *v33; // [rsp+300h] [rbp+200h]
  int v34; // [rsp+308h] [rbp+208h]
  int v35; // [rsp+30Ch] [rbp+20Ch]

  if ( (unsigned int)dword_18004D030 > 4 && (qword_18004D040 & 1) != 0 && (qword_18004D048 & 1) == qword_18004D048 )
  {
    TlgCreateWsz(&pDesc, a2);
    TlgCreateSid(&v26, a3);
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v27 = &v13;
    v30 = &v14;
    v33 = &a6;
    v13 = a4;
    v28 = v10;
    v14 = a5;
    v31 = v10;
    v34 = 8;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_18004D038;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18003F5E6 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = v11;
    UserData.Size = *(unsigned __int16 *)off_18004D038;
    v22 = &unk_18003F5F1;
    UserData.Reserved = 2;
    v23 = 77;
    v24 = v11;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
  }
  if ( a5 != 6 )
  {
    RmpPsmAppInstanceIdInitialize(Destination, a2, a3, a4, a5, a6);
    v16 = 0LL;
    v15 = 0LL;
    utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>>,0>::_EqualRangeImpl<_RM_PSM_HOST_INFO>(
      (_DWORD)this + 240,
      v12,
      (unsigned int)Destination,
      (unsigned int)&v16,
      (__int64)&v15,
      (__int64)v18);
    utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>>,0>::erase(
      (char *)this + 240,
      v19,
      v16,
      v15);
  }
}
