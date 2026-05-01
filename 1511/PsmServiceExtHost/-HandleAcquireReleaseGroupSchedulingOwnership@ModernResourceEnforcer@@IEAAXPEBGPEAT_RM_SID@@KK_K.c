/*
 * XREFs of ?HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x180016B70
 * Callers:
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x1800165C0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 * Callees:
 *     ?LogSetApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x180016050 (-LogSetApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY.c)
 *     ?CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x1800172F8 (-CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SI.c)
 *     ?LogQueryApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x180019D70 (-LogQueryApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORI.c)
 *     ??$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_APP_INSTANCE_ID@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18001ACD0 (--$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@-$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U-$pair@$$C.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     memcmp_0 @ 0x18002BC66 (memcmp_0.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 *     ?HandleGroupSchedulingOwnershipChangeForSingleHost@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x180035EFC (-HandleGroupSchedulingOwnershipChangeForSingleHost@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@.c)
 */

void __fastcall ModernResourceEnforcer::HandleAcquireReleaseGroupSchedulingOwnership(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        void *a7,
        bool a8)
{
  union _RM_SID *v8; // rsi
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  char *v17; // r15
  struct EnforcerApplicationState *v18; // r14
  char *i; // rdi
  unsigned int v20; // r14d
  unsigned int v21; // esi
  int v22; // eax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  WCHAR *v26; // rbx
  __int64 v27; // rsi
  unsigned __int8 *v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  char v33; // cl
  unsigned __int64 v34; // r14
  __int64 v35; // rax
  char *v36; // rbx
  char *v37; // r15
  unsigned __int64 v38; // rax
  char *v39; // rbx
  unsigned __int16 v40; // ax
  int v41; // ebx
  union _RM_SID *v42; // r14
  unsigned int v43; // esi
  int v44; // eax
  unsigned int v45; // r14d
  int v46; // eax
  unsigned int v47; // esi
  int v48; // ebx
  bool v49; // bl
  const unsigned __int16 *v50; // rcx
  __int64 v51; // rax
  unsigned int UserDataCount; // [rsp+20h] [rbp-E0h]
  WCHAR v53; // [rsp+64h] [rbp-9Ch]
  unsigned int v54; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v55; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v56; // [rsp+74h] [rbp-8Ch]
  unsigned int v57; // [rsp+78h] [rbp-88h]
  unsigned int v58; // [rsp+7Ch] [rbp-84h]
  char v59[8]; // [rsp+80h] [rbp-80h]
  char *v60; // [rsp+88h] [rbp-78h]
  ModernResourceEnforcer *v61; // [rsp+90h] [rbp-70h]
  int v62; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned int v63; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v64; // [rsp+A4h] [rbp-5Ch] BYREF
  void *v65; // [rsp+A8h] [rbp-58h]
  int v66; // [rsp+B0h] [rbp-50h] BYREF
  struct EnforcerApplicationState *ApplicationState; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v68; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v69; // [rsp+C8h] [rbp-38h] BYREF
  ModernResourceEnforcer *v70; // [rsp+D0h] [rbp-30h] BYREF
  union _RM_SID *v71; // [rsp+D8h] [rbp-28h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v73; // [rsp+F0h] [rbp-10h] BYREF
  char v74[8]; // [rsp+F8h] [rbp-8h] BYREF
  int v75; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v76; // [rsp+104h] [rbp+4h]
  wchar_t String1[232]; // [rsp+130h] [rbp+30h] BYREF
  _OWORD Buf1[4]; // [rsp+300h] [rbp+200h] BYREF
  int v79; // [rsp+340h] [rbp+240h]
  unsigned int v80; // [rsp+344h] [rbp+244h]
  unsigned int v81; // [rsp+348h] [rbp+248h]
  __int64 v82; // [rsp+350h] [rbp+250h]
  wchar_t Buffer[232]; // [rsp+360h] [rbp+260h] BYREF
  __int128 v84; // [rsp+530h] [rbp+430h]
  __int128 v85; // [rsp+540h] [rbp+440h]
  __int128 v86; // [rsp+550h] [rbp+450h]
  __int128 v87; // [rsp+560h] [rbp+460h]
  int v88; // [rsp+570h] [rbp+470h]
  unsigned int v89; // [rsp+574h] [rbp+474h]
  unsigned int v90; // [rsp+578h] [rbp+478h]
  unsigned __int64 v91; // [rsp+580h] [rbp+480h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+590h] [rbp+490h] BYREF
  void *v93; // [rsp+5A0h] [rbp+4A0h]
  int v94; // [rsp+5A8h] [rbp+4A8h]
  int v95; // [rsp+5ACh] [rbp+4ACh]
  int *v96; // [rsp+5B0h] [rbp+4B0h]
  __int64 v97; // [rsp+5B8h] [rbp+4B8h]
  const unsigned __int16 *v98; // [rsp+5C0h] [rbp+4C0h]
  int v99; // [rsp+5C8h] [rbp+4C8h]
  int v100; // [rsp+5CCh] [rbp+4CCh]
  union _RM_SID *v101; // [rsp+5D0h] [rbp+4D0h]
  int v102; // [rsp+5D8h] [rbp+4D8h]
  int v103; // [rsp+5DCh] [rbp+4DCh]
  unsigned int *v104; // [rsp+5E0h] [rbp+4E0h]
  __int64 v105; // [rsp+5E8h] [rbp+4E8h]
  unsigned int *v106; // [rsp+5F0h] [rbp+4F0h]
  __int64 v107; // [rsp+5F8h] [rbp+4F8h]
  unsigned __int64 *v108; // [rsp+600h] [rbp+500h]
  __int64 v109; // [rsp+608h] [rbp+508h]
  int *v110; // [rsp+610h] [rbp+510h]
  __int64 v111; // [rsp+618h] [rbp+518h]

  v8 = a3;
  v71 = a3;
  v61 = this;
  v69 = a6;
  v65 = a7;
  v62 = 0;
  v11 = a4;
  v57 = a4;
  memset_0(Buffer, 0, 0x228uLL);
  if ( swprintf_s(Buffer, 0xE8uLL, L"%s", a2) <= 0 )
    __fastfail(0x80070057);
  v13 = *(_OWORD *)v8;
  v88 = *((_DWORD *)v8 + 16);
  v14 = *((_OWORD *)v8 + 1);
  v84 = v13;
  v15 = *((_OWORD *)v8 + 2);
  v85 = v14;
  v16 = *((_OWORD *)v8 + 3);
  v70 = 0LL;
  v73 = 0LL;
  v17 = (char *)this + 208;
  v86 = v15;
  v87 = v16;
  v89 = v11;
  v90 = a5;
  v91 = a6;
  v60 = (char *)this + 208;
  utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>>,0>::_EqualRangeImpl<_RM_PSM_APP_INSTANCE_ID>(
    (char *)this + 208,
    v12,
    Buffer,
    &v70,
    &v73,
    v74);
  if ( v70 == (ModernResourceEnforcer *)((char *)this + 208) )
    v18 = 0LL;
  else
    v18 = (ModernResourceEnforcer *)((char *)v70 + 576);
  ApplicationState = v18;
  if ( !v18 )
  {
    ApplicationState = ModernResourceEnforcer::CreateApplicationState(v61, a2, v8, v11, a5, a6);
    v18 = ApplicationState;
    if ( !ApplicationState )
      return;
  }
  if ( a5 != 8 )
  {
    for ( i = *(char **)v17; ; i = *(char **)i )
    {
      if ( i == v17 )
      {
        v49 = a8;
        v18 = ApplicationState;
        v11 = v57;
        goto LABEL_42;
      }
      if ( wcsncmp((const wchar_t *)i + 12, a2, 0xE8uLL) )
        continue;
      if ( !RtlEqualSid(i + 488, v8) )
        continue;
      v20 = *((_DWORD *)i + 139);
      v56 = v20;
      if ( v20 != v57 )
        continue;
      v21 = *((_DWORD *)i + 140);
      v58 = v21;
      if ( ((v21 - 2) & 0xFFFFFFFD) != 0 )
        goto LABEL_35;
      *(_QWORD *)v59 = *((_QWORD *)i + 71);
      memset_0(String1, 0, 0x228uLL);
      if ( swprintf_s(String1, 0xE8uLL, L"%s", i + 24) <= 0 )
        __fastfail(0x80070057);
      v22 = *((_DWORD *)i + 138);
      v23 = *(_OWORD *)(i + 504);
      Buf1[0] = *(_OWORD *)(i + 488);
      v24 = *(_OWORD *)(i + 520);
      v79 = v22;
      Buf1[1] = v23;
      v25 = *(_OWORD *)(i + 536);
      v80 = v20;
      Buf1[2] = v24;
      Buf1[3] = v25;
      v81 = v21;
      v82 = *(_QWORD *)v59;
      if ( *((_QWORD *)v17 + 2) )
      {
        v26 = String1;
        v27 = 314159LL;
        do
        {
          v53 = RtlUpcaseUnicodeChar(*v26++);
          v27 = HIBYTE(v53) + 37 * ((unsigned __int8)v53 + 37 * v27);
        }
        while ( v26 < (WCHAR *)Buf1 );
        v28 = (unsigned __int8 *)Buf1;
        v29 = 11LL;
        do
        {
          v30 = *v28;
          v28 += 8;
          v31 = *(v28 - 2)
              + 37
              * (*(v28 - 3)
               + 37 * (*(v28 - 4) + 37 * (*(v28 - 5) + 37 * (*(v28 - 6) + 37 * (*(v28 - 7) + 37 * (v30 + 37 * v27))))));
          v32 = *(v28 - 1);
          v27 = v32 + 37 * v31;
          --v29;
        }
        while ( v29 );
        v68 = v32 + 37 * v31;
        v33 = v17[32];
        LODWORD(v68) = 32769 * (((unsigned int)(9 * v27) >> 11) ^ (9 * v27));
        v34 = v68;
        v35 = *((_QWORD *)v17 + 2) + 16 * (v68 & ((8LL << v33) - 1));
        v36 = *(char **)v35;
        if ( *(_QWORD *)v35 )
        {
          v37 = **(char ***)(v35 + 8);
          if ( v36 != v37 )
          {
            while ( 1 )
            {
              v38 = *((_QWORD *)v36 + 2);
              if ( v38 >= v34 )
              {
                if ( v38 > v34 )
                  goto LABEL_60;
                if ( !_wcsicmp(String1, (const wchar_t *)v36 + 12) && !memcmp_0(Buf1, v36 + 488, 0x58uLL) )
                  break;
              }
              v36 = *(char **)v36;
              if ( v36 == v37 )
                goto LABEL_60;
            }
            v17 = v60;
            goto LABEL_26;
          }
LABEL_60:
          v17 = v60;
        }
      }
      v36 = v17;
LABEL_26:
      if ( v36 == v17 )
        v39 = 0LL;
      else
        v39 = v36 + 576;
      if ( a8 )
      {
        memset_0(&v75, 0, 0x30uLL);
        v75 |= 1u;
        v45 = v58;
        v46 = (*((__int64 (__fastcall **)(void *, _QWORD, _QWORD, int *))v61 + 14))(v65, v58, *(_QWORD *)v59, &v75);
        v47 = v55;
        v48 = v46;
        if ( v46 >= 0 )
          v47 = v76;
        v55 = v47;
        UserDataCount = v45;
        v42 = (union _RM_SID *)(i + 488);
        LogQueryApplicationProperties(
          v46,
          (const unsigned __int16 *)i + 12,
          (union _RM_SID *)(i + 488),
          v56,
          UserDataCount,
          v59[0],
          &v55,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( v48 >= 0 && v47 != -1 )
        {
          v41 = -1;
          v54 = -1;
          goto LABEL_33;
        }
LABEL_35:
        v8 = v71;
        continue;
      }
      if ( *v39 >= 0 )
        goto LABEL_35;
      v40 = *((_WORD *)v39 + 1);
      if ( v40 != 0xFFFF )
      {
        v41 = v40;
        v54 = v40;
        if ( v40 != -1 )
        {
          v42 = (union _RM_SID *)(i + 488);
LABEL_33:
          memset_0(&v75, 0, 0x30uLL);
          v75 |= 1u;
          v76 = v41;
          v43 = v58;
          v44 = (*((__int64 (__fastcall **)(void *, _QWORD, _QWORD, int *))v61 + 13))(v65, v58, *(_QWORD *)v59, &v75);
          if ( v44 < 0 )
            LogSetApplicationProperties(
              v44,
              (const unsigned __int16 *)i + 12,
              v42,
              v56,
              v43,
              v59[0],
              &v54,
              0LL,
              0LL,
              0LL,
              0LL,
              0LL);
        }
        goto LABEL_35;
      }
      v54 = -1;
      v8 = v71;
    }
  }
  v49 = a8;
  ModernResourceEnforcer::HandleGroupSchedulingOwnershipChangeForSingleHost(v61, a2, v8, v11, 8u, v69, v65, a8);
LABEL_42:
  *(_BYTE *)v18 = v49 | *(_BYTE *)v18 & 0xFE;
  if ( (unsigned int)dword_180071060 > 4 && (qword_180071070 & 1) != 0 && (qword_180071078 & 1) == qword_180071078 )
  {
    v97 = 4LL;
    v96 = &v62;
    v50 = (const unsigned __int16 *)&unk_1800574EC;
    LODWORD(v51) = 0;
    if ( a2 )
    {
      v50 = a2;
      v51 = -1LL;
      do
        ++v51;
      while ( a2[v51] );
    }
    v98 = v50;
    v99 = 2 * v51 + 2;
    LOBYTE(v51) = *((_BYTE *)v8 + 1);
    v100 = 0;
    if ( (unsigned __int8)v51 > 0xFu )
      LODWORD(v51) = 15;
    else
      LODWORD(v51) = (unsigned __int8)v51;
    v101 = v8;
    v102 = 4 * v51 + 8;
    v104 = &v64;
    v106 = &v63;
    v108 = &v69;
    v110 = &v66;
    v103 = 0;
    v64 = v11;
    v105 = 4LL;
    v63 = a5;
    v107 = 4LL;
    v109 = 8LL;
    v66 = 0;
    v111 = 4LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_180071068;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180061774 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_180071068;
    v93 = &unk_18006177F;
    UserData.Reserved = 2;
    v94 = 104;
    v95 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
  }
}
