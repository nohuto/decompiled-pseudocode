/*
 * XREFs of ?SetApplicationProperties@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAKPEA_K22PEAW4_PSM_APPLICATION_PRIORITY@@2@Z @ 0x180017AD0
 * Callers:
 *     ?SetProcessConfig@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x1800183F0 (-SetProcessConfig@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTIN.c)
 * Callees:
 *     ?LogSetApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x180016050 (-LogSetApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY.c)
 *     ??$?RU_RM_PSM_APP_INSTANCE_ID@@AEAU0@@?$construct@U_RM_PSM_APP_INSTANCE_ID@@@utl@@QEBA_NPEAU_RM_PSM_APP_INSTANCE_ID@@AEAU2@@Z @ 0x18001AC4C (--$-RU_RM_PSM_APP_INSTANCE_ID@@AEAU0@@-$construct@U_RM_PSM_APP_INSTANCE_ID@@@utl@@QEBA_NPEAU_RM_.c)
 *     ?_EmplaceImpl@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@2@@Z @ 0x18001B020 (-_EmplaceImpl@-$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U-$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnfo.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcmp_0 @ 0x18002BC66 (memcmp_0.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall ModernResourceEnforcer::SetApplicationProperties(
        ModernResourceEnforcer *this,
        struct _RM_ACTIVITY_HOST *a2,
        unsigned int *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        enum _PSM_APPLICATION_PRIORITY *a7,
        unsigned __int64 *a8)
{
  union _RM_SID *v8; // r14
  unsigned int v10; // ebx
  unsigned int *v11; // r13
  __int64 v12; // rcx
  unsigned __int16 *v13; // r15
  unsigned int v14; // r12d
  __int128 v15; // xmm0
  int v16; // eax
  __int128 v17; // xmm1
  char *v18; // r12
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  WCHAR *v21; // rbx
  __int64 v22; // r14
  unsigned __int8 *v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  char v28; // cl
  unsigned __int64 v29; // r15
  __int64 v30; // rax
  char *v31; // rbx
  char *v32; // r12
  unsigned __int64 v33; // rax
  __int64 v34; // rbx
  union _RM_SID *v35; // r14
  unsigned int v36; // r15d
  unsigned int v37; // ecx
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  WCHAR *v42; // rbx
  __int64 v43; // r14
  unsigned __int8 *v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  char v49; // cl
  unsigned __int64 v50; // r15
  __int64 v51; // rax
  char *v52; // rbx
  char *v53; // r12
  unsigned __int64 v54; // rax
  _BYTE *v55; // rbx
  unsigned __int64 *v56; // r14
  unsigned __int64 *v57; // r15
  unsigned __int64 v58; // rax
  unsigned __int64 *v59; // r12
  unsigned __int64 v60; // rax
  __int64 (__fastcall *v61)(ModernResourceEnforcer *, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *); // rbx
  enum _PSM_APPLICATION_PRIORITY *v62; // r8
  unsigned __int64 *v63; // r9
  int v64; // ecx
  unsigned int v65; // eax
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rax
  int v68; // eax
  int v69; // ebx
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  _DWORD *v75; // rax
  __int64 v76; // rcx
  int v77; // r8d
  _DWORD *v78; // r10
  char v79; // al
  void *Block; // rbx
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // rax
  int v83; // eax
  unsigned __int64 v84; // rax
  unsigned __int64 *v85; // [rsp+38h] [rbp-C8h]
  unsigned int v86; // [rsp+60h] [rbp-A0h]
  unsigned int v87; // [rsp+64h] [rbp-9Ch]
  WCHAR v88; // [rsp+84h] [rbp-7Ch]
  WCHAR v89; // [rsp+8Ch] [rbp-74h]
  unsigned __int16 *v90; // [rsp+90h] [rbp-70h]
  char v91[8]; // [rsp+A0h] [rbp-60h]
  union _RM_SID *v92; // [rsp+A8h] [rbp-58h]
  int v93; // [rsp+B0h] [rbp-50h]
  int v94; // [rsp+B4h] [rbp-4Ch]
  int v95; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 *v96; // [rsp+C8h] [rbp-38h]
  unsigned __int64 *v97; // [rsp+D0h] [rbp-30h]
  unsigned int *v98; // [rsp+D8h] [rbp-28h]
  unsigned __int64 *v99; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v100; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v101; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v102; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int64 v103; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v104; // [rsp+108h] [rbp+8h] BYREF
  __int64 v105; // [rsp+110h] [rbp+10h]
  char v106; // [rsp+118h] [rbp+18h]
  int v107[2]; // [rsp+120h] [rbp+20h] BYREF
  char v108; // [rsp+128h] [rbp+28h]
  __int64 v109; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int64 v110; // [rsp+138h] [rbp+38h]
  unsigned __int64 v111; // [rsp+140h] [rbp+40h]
  unsigned __int64 v112; // [rsp+148h] [rbp+48h]
  __int64 v113; // [rsp+150h] [rbp+50h]
  unsigned __int64 v114; // [rsp+158h] [rbp+58h]
  wchar_t Buffer[232]; // [rsp+160h] [rbp+60h] BYREF
  _OWORD Buf1[4]; // [rsp+330h] [rbp+230h] BYREF
  int v117; // [rsp+370h] [rbp+270h]
  unsigned int v118; // [rsp+374h] [rbp+274h]
  unsigned int v119; // [rsp+378h] [rbp+278h]
  __int64 v120; // [rsp+380h] [rbp+280h]
  wchar_t String1[232]; // [rsp+390h] [rbp+290h] BYREF
  _OWORD v122[4]; // [rsp+560h] [rbp+460h] BYREF
  int v123; // [rsp+5A0h] [rbp+4A0h]
  unsigned int v124; // [rsp+5A4h] [rbp+4A4h]
  int v125; // [rsp+5A8h] [rbp+4A8h]
  __int64 v126; // [rsp+5B0h] [rbp+4B0h]
  wchar_t v127[232]; // [rsp+5C0h] [rbp+4C0h] BYREF
  __int128 v128; // [rsp+790h] [rbp+690h]
  __int128 v129; // [rsp+7A0h] [rbp+6A0h]
  __int128 v130; // [rsp+7B0h] [rbp+6B0h]
  __int128 v131; // [rsp+7C0h] [rbp+6C0h]
  int v132; // [rsp+7D0h] [rbp+6D0h]
  unsigned int v133; // [rsp+7D4h] [rbp+6D4h]
  unsigned int v134; // [rsp+7D8h] [rbp+6D8h]
  __int64 v135; // [rsp+7E0h] [rbp+6E0h]

  v8 = (struct _RM_ACTIVITY_HOST *)((char *)a2 + 512);
  v10 = *((_DWORD *)a2 + 146);
  v11 = 0LL;
  v12 = *((_QWORD *)a2 + 3);
  v99 = a5;
  v13 = (unsigned __int16 *)((char *)a2 + 48);
  v97 = a6;
  v14 = *((_DWORD *)a2 + 145);
  *(_QWORD *)v91 = v12;
  v96 = a4;
  v98 = a3;
  v95 = -1;
  v90 = (unsigned __int16 *)((char *)a2 + 48);
  v92 = (struct _RM_ACTIVITY_HOST *)((char *)a2 + 512);
  v87 = v14;
  v86 = v10;
  v93 = 0;
  while ( 1 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
    memset_0(Buffer, 0, 0x228uLL);
    if ( swprintf_s(Buffer, 0xE8uLL, L"%s", v13) <= 0 )
      __fastfail(0x80070057);
    v15 = *(_OWORD *)v8;
    v16 = *((_DWORD *)v8 + 16);
    v17 = *((_OWORD *)v8 + 1);
    v118 = v14;
    v117 = v16;
    v18 = (char *)this + 208;
    Buf1[0] = v15;
    v19 = *((_OWORD *)v8 + 2);
    v120 = *(_QWORD *)v91;
    Buf1[1] = v17;
    v20 = *((_OWORD *)v8 + 3);
    v119 = v10;
    Buf1[2] = v19;
    Buf1[3] = v20;
    if ( !*((_QWORD *)this + 28) )
      goto LABEL_68;
    v21 = Buffer;
    v22 = 314159LL;
    do
    {
      v89 = RtlUpcaseUnicodeChar(*v21++);
      v22 = HIBYTE(v89) + 37 * ((unsigned __int8)v89 + 37 * v22);
    }
    while ( v21 < (WCHAR *)Buf1 );
    v23 = (unsigned __int8 *)Buf1;
    v24 = 11LL;
    do
    {
      v25 = *v23;
      v23 += 8;
      v26 = *(v23 - 2)
          + 37
          * (*(v23 - 3)
           + 37 * (*(v23 - 4) + 37 * (*(v23 - 5) + 37 * (*(v23 - 6) + 37 * (*(v23 - 7) + 37 * (v25 + 37 * v22))))));
      v27 = *(v23 - 1);
      v22 = v27 + 37 * v26;
      --v24;
    }
    while ( v24 );
    v101 = v27 + 37 * v26;
    v28 = *((_BYTE *)this + 240);
    LODWORD(v101) = 32769 * (((unsigned int)(9 * v22) >> 11) ^ (9 * v22));
    v29 = v101;
    v30 = *((_QWORD *)this + 28) + 16 * (v101 & ((8LL << v28) - 1));
    v31 = *(char **)v30;
    if ( !*(_QWORD *)v30 )
      goto LABEL_68;
    v32 = **(char ***)(v30 + 8);
    if ( v31 == v32 )
    {
LABEL_67:
      v18 = (char *)this + 208;
LABEL_68:
      v31 = v18;
      goto LABEL_15;
    }
    while ( 1 )
    {
      v33 = *((_QWORD *)v31 + 2);
      if ( v33 >= v29 )
      {
        if ( v33 > v29 )
          goto LABEL_67;
        if ( !_wcsicmp(Buffer, (const wchar_t *)v31 + 12) && !memcmp_0(Buf1, v31 + 488, 0x58uLL) )
          break;
      }
      v31 = *(char **)v31;
      if ( v31 == v32 )
        goto LABEL_67;
    }
    v18 = (char *)this + 208;
LABEL_15:
    if ( v31 == v18 )
      v34 = 0LL;
    else
      v34 = (__int64)(v31 + 576);
    if ( v34 )
    {
      v35 = v92;
      v36 = v86;
    }
    else
    {
      LOBYTE(v94) = 0;
      HIWORD(v94) = -1;
      v105 = 0LL;
      v106 = 0;
      memset_0(v127, 0, 0x228uLL);
      if ( swprintf_s(v127, 0xE8uLL, L"%s", v90) <= 0 )
        __fastfail(0x80070057);
      v35 = v92;
      v36 = v86;
      v134 = v86;
      v71 = *(_OWORD *)v92;
      v132 = *((_DWORD *)v92 + 16);
      v72 = *((_OWORD *)v92 + 1);
      v128 = v71;
      v73 = *((_OWORD *)v92 + 2);
      v133 = v87;
      v129 = v72;
      v74 = *((_OWORD *)v92 + 3);
      v135 = *(_QWORD *)v91;
      v130 = v73;
      v131 = v74;
      v75 = operator new(0x248uLL, (const struct std::nothrow_t *)&std::nothrow);
      v78 = v75;
      if ( v75
        && (v79 = utl::construct<_RM_PSM_APP_INSTANCE_ID>::operator()<_RM_PSM_APP_INSTANCE_ID,_RM_PSM_APP_INSTANCE_ID &>(
                    v76,
                    v75 + 6,
                    v127),
            v78[144] = v94,
            v79) )
      {
        Block = v78;
      }
      else
      {
        Block = v78;
        if ( v78 )
        {
          Block = 0LL;
          operator delete(v78);
        }
      }
      utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>>,0>::_EmplaceImpl(
        (int)v18,
        (int)v107,
        v77,
        0,
        Block);
      v105 = *(_QWORD *)v107;
      v106 = v108;
      v34 = *(_QWORD *)v107 + 576LL;
      if ( *(_QWORD *)v107 == -576LL )
        __fastfail(0x80004003);
    }
    *(_BYTE *)v34 |= 0x80u;
    if ( v98 )
    {
      v37 = *v98;
      if ( *(char *)v34 < 0 )
      {
        if ( v37 == -1 )
          *(_WORD *)(v34 + 2) = -1;
        else
          *(_WORD *)(v34 + 2) = v37;
      }
      if ( ((v36 - 2) & 0xFFFFFFFD) != 0 )
      {
        if ( (*(_BYTE *)v34 & 1) == 0 )
          goto LABEL_40;
LABEL_83:
        v11 = 0LL;
        goto LABEL_41;
      }
      memset_0(String1, 0, 0x228uLL);
      if ( swprintf_s(String1, 0xE8uLL, L"%s", v90) <= 0 )
        __fastfail(0x80070057);
      v38 = *(_OWORD *)v35;
      v123 = *((_DWORD *)v35 + 16);
      v39 = *((_OWORD *)v35 + 1);
      v122[0] = v38;
      v40 = *((_OWORD *)v35 + 2);
      v124 = v87;
      v122[1] = v39;
      v41 = *((_OWORD *)v35 + 3);
      v125 = 6;
      v122[2] = v40;
      v122[3] = v41;
      v126 = -1LL;
      if ( *((_QWORD *)v18 + 2) )
      {
        v42 = String1;
        v43 = 314159LL;
        do
        {
          v88 = RtlUpcaseUnicodeChar(*v42++);
          v43 = HIBYTE(v88) + 37 * ((unsigned __int8)v88 + 37 * v43);
        }
        while ( v42 < (WCHAR *)v122 );
        v44 = (unsigned __int8 *)v122;
        v45 = 11LL;
        do
        {
          v46 = *v44;
          v44 += 8;
          v47 = *(v44 - 2)
              + 37
              * (*(v44 - 3)
               + 37 * (*(v44 - 4) + 37 * (*(v44 - 5) + 37 * (*(v44 - 6) + 37 * (*(v44 - 7) + 37 * (v46 + 37 * v43))))));
          v48 = *(v44 - 1);
          v43 = v48 + 37 * v47;
          --v45;
        }
        while ( v45 );
        v100 = v48 + 37 * v47;
        v49 = v18[32];
        LODWORD(v100) = 32769 * (((unsigned int)(9 * v43) >> 11) ^ (9 * v43));
        v50 = v100;
        v51 = *((_QWORD *)v18 + 2) + 16 * (v100 & ((8LL << v49) - 1));
        v52 = *(char **)v51;
        if ( *(_QWORD *)v51 )
        {
          v53 = **(char ***)(v51 + 8);
          if ( v52 != v53 )
          {
            while ( 1 )
            {
              v54 = *((_QWORD *)v52 + 2);
              if ( v54 >= v50 )
              {
                if ( v54 > v50 )
                  goto LABEL_71;
                if ( !_wcsicmp(String1, (const wchar_t *)v52 + 12) && !memcmp_0(v122, v52 + 488, 0x58uLL) )
                  break;
              }
              v52 = *(char **)v52;
              if ( v52 == v53 )
                goto LABEL_71;
            }
            v18 = (char *)this + 208;
LABEL_37:
            if ( v52 == v18 || (v55 = v52 + 576) == 0LL || (*v55 & 1) == 0 )
            {
LABEL_40:
              v11 = (unsigned int *)&v95;
              v95 = *v98;
              goto LABEL_41;
            }
            goto LABEL_83;
          }
LABEL_71:
          v18 = (char *)this + 208;
        }
      }
      v52 = v18;
      goto LABEL_37;
    }
LABEL_41:
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
    v56 = v96;
    if ( v96 )
    {
      v81 = *v96;
      v56 = &v103;
      v96 = &v103;
      v103 = v81;
    }
    v57 = v99;
    if ( v99 )
    {
      v58 = *v99;
      v57 = &v104;
      v99 = &v104;
      v104 = v58;
    }
    v59 = v97;
    if ( v97 )
    {
      v60 = *v97;
      v59 = &v102;
      v97 = &v102;
      v102 = v60;
    }
    v61 = *(__int64 (__fastcall **)(ModernResourceEnforcer *, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *))(*(_QWORD *)this + 104LL);
    if ( v61 == ModernResourceEnforcer::PsmSetApplicationProperties )
    {
      v62 = a7;
      v63 = a8;
      if ( v11 || v56 || v57 || v59 || a7 || a8 )
      {
        v109 = 0LL;
        v64 = 0;
        v110 = 0LL;
        v111 = 0LL;
        v112 = 0LL;
        v113 = 0LL;
        v114 = 0LL;
        if ( v11 )
        {
          v65 = *v11;
          v64 = 1;
          LODWORD(v109) = 1;
          HIDWORD(v109) = v65;
        }
        if ( v56 )
        {
          v82 = *v56;
          v64 |= 2u;
          LODWORD(v109) = v64;
          v110 = v82;
        }
        if ( v57 )
        {
          v66 = *v57;
          v64 |= 4u;
          LODWORD(v109) = v64;
          v111 = v66;
        }
        if ( v59 )
        {
          v67 = *v59;
          v64 |= 8u;
          LODWORD(v109) = v64;
          v112 = v67;
        }
        if ( a7 )
        {
          v83 = *(_DWORD *)a7;
          v64 |= 0x10u;
          LODWORD(v109) = v64;
          LODWORD(v113) = v83;
        }
        if ( a8 )
        {
          v84 = *a8;
          LODWORD(v109) = v64 | 0x20;
          v114 = v84;
        }
        v8 = v92;
        v68 = (*((__int64 (__fastcall **)(union _RM_SID *, _QWORD, unsigned __int16 *, _QWORD, char *, __int64 *))this
               + 10))(
                v92,
                v87,
                v90,
                v86,
                *(char **)v91,
                &v109);
        v62 = a7;
        v63 = a8;
        v69 = v68;
        if ( v68 >= 0 )
          v69 = 0;
      }
      else
      {
        v8 = v92;
        v69 = 0;
      }
      LogSetApplicationProperties(v69, v90, v8, v87, v86, v91[0], v11, v96, v57, v59, v62, v63);
    }
    else
    {
      v85 = v56;
      v8 = v92;
      v69 = v61(this, v90, v92, v87, v86, *(_QWORD *)v91, v11, v85, v57, v59, a7, a8);
    }
    if ( v69 >= 0 )
      return (unsigned int)v69;
    if ( !v11 || v69 != -1073741776 )
      break;
    if ( (unsigned int)++v93 > 2 )
      return (unsigned int)(*(__int64 (__fastcall **)(ModernResourceEnforcer *, unsigned __int16 *, union _RM_SID *, _QWORD, unsigned int, char *, _QWORD, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *))(*(_QWORD *)this + 104LL))(
                             this,
                             v90,
                             v8,
                             v87,
                             v86,
                             *(char **)v91,
                             0LL,
                             v96,
                             v57,
                             v59,
                             a7,
                             a8);
    v10 = v86;
    v13 = v90;
    v14 = v87;
  }
  if ( v69 == -1073741637 || v69 == -1073741776 )
    return (unsigned int)(*(__int64 (__fastcall **)(ModernResourceEnforcer *, unsigned __int16 *, union _RM_SID *, _QWORD, unsigned int, char *, _QWORD, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *))(*(_QWORD *)this + 104LL))(
                           this,
                           v90,
                           v8,
                           v87,
                           v86,
                           *(char **)v91,
                           0LL,
                           v96,
                           v57,
                           v59,
                           a7,
                           a8);
  return (unsigned int)v69;
}
