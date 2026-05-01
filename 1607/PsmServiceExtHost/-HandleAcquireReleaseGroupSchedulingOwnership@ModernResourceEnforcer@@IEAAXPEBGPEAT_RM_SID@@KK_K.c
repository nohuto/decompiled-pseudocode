/*
 * XREFs of ?HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x18000C140
 * Callers:
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000B990 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 * Callees:
 *     ??$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_HOST_INFO@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180006990 (--$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$_ea_180006990.c)
 *     ?CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x18000C69C (-CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SI.c)
 *     _TlgCreateWsz @ 0x180015F14 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     _TlgCreateSid @ 0x180017A10 (_TlgCreateSid.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180020A36 (memcpy_0.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ModernResourceEnforcer::HandleAcquireReleaseGroupSchedulingOwnership(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        void *a7,
        bool a8)
{
  ULONG v12; // eax
  struct EnforcerApplicationState *ApplicationState; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int16 v16; // ax
  void *v17; // r12
  __int64 (__fastcall *v18)(void *, _QWORD, unsigned __int64, int *); // rax
  int v19; // r14d
  TraceLoggingHProvider v20; // rcx
  LPCGUID v21; // r8
  LPCGUID v22; // r9
  int v23; // r14d
  __int64 (__fastcall *v24)(void *, _QWORD, unsigned __int64, int *); // rax
  TraceLoggingHProvider v25; // rcx
  LPCGUID v26; // r8
  LPCGUID v27; // r9
  unsigned int v28; // ebx
  TraceLoggingHProvider v29; // rcx
  LPCGUID v30; // r8
  LPCGUID v31; // r9
  unsigned int v32; // [rsp+30h] [rbp-D0h] BYREF
  int v33; // [rsp+34h] [rbp-CCh]
  unsigned int v34; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v35; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v36; // [rsp+48h] [rbp-B8h] BYREF
  int v37; // [rsp+4Ch] [rbp-B4h]
  unsigned int v38; // [rsp+50h] [rbp-B0h] BYREF
  int v39; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v40; // [rsp+58h] [rbp-A8h] BYREF
  int v41; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v42; // [rsp+60h] [rbp-A0h] BYREF
  ModernResourceEnforcer *v43; // [rsp+68h] [rbp-98h] BYREF
  void *v44; // [rsp+70h] [rbp-90h]
  __int64 v45; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+80h] [rbp-80h] BYREF
  __int64 v47; // [rsp+90h] [rbp-70h] BYREF
  int v48; // [rsp+98h] [rbp-68h] BYREF
  int v49; // [rsp+9Ch] [rbp-64h]
  wchar_t Destination[232]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v51[68]; // [rsp+2A0h] [rbp+1A0h] BYREF
  unsigned int v52; // [rsp+2E4h] [rbp+1E4h]
  unsigned int v53; // [rsp+2E8h] [rbp+1E8h]
  unsigned __int64 v54; // [rsp+2F0h] [rbp+1F0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+300h] [rbp+200h] BYREF
  void *v56; // [rsp+310h] [rbp+210h]
  int v57; // [rsp+318h] [rbp+218h]
  int v58; // [rsp+31Ch] [rbp+21Ch]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+320h] [rbp+220h] BYREF
  unsigned int *v60; // [rsp+330h] [rbp+230h]
  __int64 v61; // [rsp+338h] [rbp+238h]
  unsigned __int64 *v62; // [rsp+340h] [rbp+240h]
  __int64 v63; // [rsp+348h] [rbp+248h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+350h] [rbp+250h] BYREF
  unsigned int *v65; // [rsp+370h] [rbp+270h]
  __int64 v66; // [rsp+378h] [rbp+278h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+380h] [rbp+280h] BYREF
  unsigned int *v68; // [rsp+390h] [rbp+290h]
  __int64 v69; // [rsp+398h] [rbp+298h]
  unsigned __int64 *v70; // [rsp+3A0h] [rbp+2A0h]
  __int64 v71; // [rsp+3A8h] [rbp+2A8h]
  int *v72; // [rsp+3B0h] [rbp+2B0h]
  __int64 v73; // [rsp+3B8h] [rbp+2B8h]
  EVENT_DATA_DESCRIPTOR v74; // [rsp+3C0h] [rbp+2C0h] BYREF
  unsigned int *v75; // [rsp+3E0h] [rbp+2E0h]
  __int64 v76; // [rsp+3E8h] [rbp+2E8h]
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+3F0h] [rbp+2F0h] BYREF
  unsigned int *v78; // [rsp+400h] [rbp+300h]
  __int64 v79; // [rsp+408h] [rbp+308h]
  unsigned __int64 *v80; // [rsp+410h] [rbp+310h]
  __int64 v81; // [rsp+418h] [rbp+318h]
  int *v82; // [rsp+420h] [rbp+320h]
  __int64 v83; // [rsp+428h] [rbp+328h]
  EVENT_DATA_DESCRIPTOR v84; // [rsp+430h] [rbp+330h] BYREF
  unsigned int *v85; // [rsp+450h] [rbp+350h]
  __int64 v86; // [rsp+458h] [rbp+358h]
  struct _EVENT_DATA_DESCRIPTOR v87; // [rsp+460h] [rbp+360h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+470h] [rbp+370h] BYREF
  unsigned int *v89; // [rsp+480h] [rbp+380h]
  __int64 v90; // [rsp+488h] [rbp+388h]
  unsigned int *v91; // [rsp+490h] [rbp+390h]
  __int64 v92; // [rsp+498h] [rbp+398h]
  unsigned __int64 *v93; // [rsp+4A0h] [rbp+3A0h]
  __int64 v94; // [rsp+4A8h] [rbp+3A8h]

  v34 = a4;
  v35 = a6;
  v44 = a7;
  v33 = -1;
  memset_0(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, a2);
  memset_0(v51, 0, sizeof(v51));
  v12 = RtlLengthSid(a3);
  memcpy_0(v51, a3, v12);
  v52 = a4;
  v53 = a5;
  ApplicationState = 0LL;
  v54 = a6;
  v43 = 0LL;
  v45 = 0LL;
  utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>>,0>::_EqualRangeImpl<_RM_PSM_HOST_INFO>(
    (__int64)this + 248,
    v14,
    (unsigned __int64)Destination,
    &v43,
    &v45,
    &v47);
  if ( v43 != (ModernResourceEnforcer *)((char *)this + 248) )
    ApplicationState = (ModernResourceEnforcer *)((char *)v43 + 576);
  if ( ApplicationState
    || (v28 = v34,
        (ApplicationState = ModernResourceEnforcer::CreateApplicationState(this, a2, (union _RM_SID *)a3, v34, a5, a6)) != 0LL) )
  {
    if ( a8 )
    {
      memset_0(&v48, 0, 0x30uLL);
      v17 = v44;
      v18 = (__int64 (__fastcall *)(void *, _QWORD, unsigned __int64, int *))*((_QWORD *)this + 16);
      v48 |= 1u;
      v32 = v18(v44, a5, v35, &v48);
      v15 = v32;
      if ( (v32 & 0x80000000) != 0 )
      {
        v19 = v37;
      }
      else
      {
        v19 = v49;
        v37 = v49;
      }
      if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)v32, 1uLL) )
      {
        v66 = 4LL;
        v65 = &v32;
        TlgCreateWsz(&pDesc, a2);
        v38 = a5;
        v68 = &v38;
        v70 = &v35;
        v72 = &v39;
        v69 = 4LL;
        v71 = 8LL;
        v39 = v19;
        v73 = 4LL;
        TlgWrite(v20, &unk_18003EFFA, v21, v22, 7u, &pData);
        v15 = v32;
      }
      if ( (int)v15 < 0 )
        goto LABEL_20;
      if ( v19 == -1 )
        goto LABEL_19;
      v23 = -1;
      v33 = -1;
    }
    else
    {
      if ( *(char *)ApplicationState >= 0 )
      {
LABEL_19:
        *(_BYTE *)ApplicationState = a8 | *(_BYTE *)ApplicationState & 0xFE;
        goto LABEL_20;
      }
      v16 = *((_WORD *)ApplicationState + 1);
      v15 = 0xFFFFLL;
      if ( v16 == 0xFFFF )
      {
        v33 = -1;
        goto LABEL_19;
      }
      v23 = v16;
      v33 = v16;
      if ( v16 == -1 )
        goto LABEL_19;
      v17 = v44;
    }
    memset_0(&v48, 0, 0x30uLL);
    v24 = (__int64 (__fastcall *)(void *, _QWORD, unsigned __int64, int *))*((_QWORD *)this + 15);
    v48 |= 1u;
    v49 = v23;
    v32 = v24(v17, a5, v35, &v48);
    if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)v15, 1uLL) )
    {
      v76 = 4LL;
      v75 = &v32;
      TlgCreateWsz(&v77, a2);
      v40 = a5;
      v78 = &v40;
      v80 = &v35;
      v82 = &v41;
      v79 = 4LL;
      v81 = 8LL;
      v41 = v23;
      v83 = 4LL;
      TlgWrite(v25, &unk_18003EE3A, v26, v27, 7u, &v74);
    }
    goto LABEL_19;
  }
  if ( (unsigned int)dword_18004C030 <= 4 )
    return;
  if ( TlgKeywordOn((TraceLoggingHProvider)v15, 1uLL) )
  {
    v86 = 4LL;
    v85 = &v32;
    TlgCreateWsz(&v87, a2);
    TlgCreateSid(&v88, a3);
    v34 = v28;
    v89 = &v34;
    v91 = &v36;
    v93 = &v35;
    v90 = 4LL;
    v36 = a5;
    v92 = 4LL;
    v94 = 8LL;
    TlgWrite(v29, &unk_18003EE9E, v30, v31, 8u, &v84);
  }
LABEL_20:
  if ( (unsigned int)dword_18004C030 > 4 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)v15, 1uLL) )
    {
      TlgCreateWsz(&v59, a2);
      v42 = a5;
      v60 = &v42;
      v62 = &v35;
      v61 = 4LL;
      v63 = 8LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_18004C038;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18003F064 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_18004C038;
      v56 = &unk_18003F06F;
      UserData.Reserved = 2;
      v57 = 62;
      v58 = 1;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
  }
}
